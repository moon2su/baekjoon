#include <stdio.h>
#define MAX 1001
int DFS_G[MAX] = {0};
int BFS_G[MAX] = {0};
int graph[MAX][MAX] = {0};
int queue[MAX];
void DFS(int N, int V);
void BFS(int N, int V);

int main(){
    int N, M, V, arr[100], x, y, i;
    scanf("%d %d %d", &N, &M, &V);
    for(i = 0; i < M; i++){
        scanf("%d %d", &x, &y);
        graph[x][y] = 1;
        graph[y][x] = 1;
    }
    
    DFS(V, N);
    printf("\n");
    BFS(V, N);
    
    return 0;
    
}

void DFS(int V, int N){
    DFS_G[V] = 1;
    printf("%d ", V);
    for(int i = 1; i <= N; i++){
        if(graph[V][i] == 1 && DFS_G[i] == 0){
            DFS(i, N);
        }
    }
    
    return;
}

void BFS(int V, int N){
    int front = -1, rear = 0, pop, i;
    
    printf("%d ", V);
    queue[0] = V;
    BFS_G[V] = 1;
    
    while(front < rear){
        pop = queue[++front];
        
        for(int i = 0; i < N; i++){
            if(BFS_G[i+1] == 0 && graph[pop][i+1] == 1){
                printf("%d ", i+1);
                
                BFS_G[i+1] = 1;
                queue[++rear] = i+1;
            }
        }
    }
    return;
}