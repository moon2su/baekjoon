#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int N, M;
int board[8][8];
int board2[8][8];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int ans;

void bfs(){
    queue<pair<int, int>> Q;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            board2[i][j] = board[i][j];
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(board2[i][j] == 2){
                Q.push({i, j});
            }
        }
    }
    
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(board2[nx][ny] == 0){
                board2[nx][ny] = 2;
                Q.push({nx, ny});
            }
        }
    }
    
    int safe = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(board2[i][j] == 0)
                safe++;
        }
    }
    ans = max(ans, safe);
}

void wall(int cnt){
    
    if(cnt == 3){
        bfs();
        return;
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(board[i][j] == 0){
                board[i][j] = 1;
                wall(cnt + 1);
                board[i][j] = 0;
            }
        }
    }
    
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> board[i][j];
        }
    }
    
    wall(0);
    
    cout << ans;
    
    return 0;
}