#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define Q_SIZE 20
typedef struct {
        int queue[Q_SIZE];
        int front, rear;
} QueueType;

typedef struct {
        int vertexNum; // 정점의 개수
        int **adjMatrix; // 인접행렬
} Graph;
QueueType* createQueue() {
        QueueType *Q;
        Q = (QueueType *)malloc(sizeof(QueueType));
        Q->front = 0;
        Q->rear = 0;
        return Q;
}
int isEmpty(QueueType*Q) {
        if(Q->front ==Q->rear) return 1;
        else return 0;
}

int isFull(QueueType *Q) {
        if ((Q->rear + 1) % Q_SIZE == Q->front % Q_SIZE) {
                return 1;
        }
        else return 0;
}

void enQueue(QueueType *Q, int item) {
        if (isFull(Q)) return;
        else {
                Q->rear = (Q->rear + 1) % Q_SIZE;
                Q->queue[Q->rear] = item;
        }
}

int deQueue(QueueType *Q) {
        if (isEmpty(Q)) return -1;
        else {
                Q->front = (Q->front + 1) % Q_SIZE;
                return Q->queue[Q->front];
        }
}

Graph *NewGraph(int vNum) {
        Graph *graph = (Graph *)malloc(sizeof(Graph));
        graph->vertexNum = vNum;
        graph->adjMatrix = (int **)malloc(sizeof(int *)*(vNum+1));
        for (int i = 0; i <= vNum; i++) {
                graph->adjMatrix[i] = (int *)malloc(sizeof(int)*(vNum+1));
                memset(graph->adjMatrix[i], 0, sizeof(int)*(vNum+1));
        }
        return graph;
}
int visited[8];

void BFS_Mat(Graph *g, int s){
        QueueType *BFS_Q = createQueue();
        for(int v =0; v <= g->vertexNum; v++) {
                visited[v] = 0;
        }
        visited[s] = 1;
        while(!isEmpty(BFS_Q)) {
                int u = deQueue(BFS_Q);
                printf("%d, ",u);
                for(int v = 0; v <= g->vertexNum; v++ ) {
                        if(g->adjMatrix[u][v] == 1) {
                                if(visited[v] == 0) {
                                        visited[v] = 1;
                                        enQueue(BFS_Q,v);
                                }
                        }
                }
        }
        free(BFS_Q);
}

void AddEdge(Graph *graph, int start, int end) {
        graph->adjMatrix[start][end] = 1;
        graph->adjMatrix[end][start] = 1;
}
void printGraph(Graph *graph) {
        for (int i = 1; i <= graph->vertexNum; i++) {
                for (int j = 1; j <= graph->vertexNum; j++)
                        printf("%d ", graph->adjMatrix[i][j]);
                printf("\n");
        }
}

int main() {
        Graph *g = NewGraph(8);
        AddEdge(g, 1, 2);
        AddEdge(g, 1, 3);
        AddEdge(g, 2, 4);
        AddEdge(g, 2, 5);
        AddEdge(g, 3, 5);
        AddEdge(g, 3, 7);
        AddEdge(g, 3, 8);
        AddEdge(g, 4, 5);
        AddEdge(g, 5, 6);
        AddEdge(g, 7, 8);
        printGraph(g);
        printf("\nBFS: ");
        BFS_Mat(g, 1);
}
