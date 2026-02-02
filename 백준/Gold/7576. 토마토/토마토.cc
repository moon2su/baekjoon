#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N, M; cin >> M >> N;
    int board[1002][1002];
    int dist[1002][1002];
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    queue<pair<int, int>> Q;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> board[i][j];
            if(board[i][j] == 1){
                dist[i][j] = 0;
                Q.push({i, j});
            }
            else if(board[i][j] == 0){
                dist[i][j] = -1;
            }
            else{
                dist[i][j] = 0;
            }
        }
    }
    
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(board[nx][ny] == -1) continue;
            if(dist[nx][ny] >= 0) continue;
            
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }
    
    int ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(board[i][j] == 0 && dist[i][j] == -1){
                cout << -1;
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans;
    
    return 0;
}