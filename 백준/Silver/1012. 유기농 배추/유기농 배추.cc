#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int T; cin >> T;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    while(T--){
        int M, N, K; cin >> M >> N >> K;
        
        int board[52][52];
        bool vis[52][52];
        
        fill(&board[0][0], &board[0][0] + 52*52, 0);
        fill(&vis[0][0], &vis[0][0] + 52*52, false);
        
        for(int i = 0; i < K; i++){
            int x, y; cin >> x >> y;
            board[x][y] = 1;
        }
        
        int num = 0; // 벌레 개수
        
        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
                if(board[i][j] == 0 || vis[i][j]) continue;
                
                num++;
                vis[i][j] = 1;
                queue<pair<int, int>> Q;
                Q.push({i, j});
                
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    for(int dir = 0; dir < 4; dir++){
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
                        if(vis[nx][ny] || board[nx][ny] == 0) continue;
                        
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
            }
        }
        cout << num << '\n';
    }
    return 0;
    
}