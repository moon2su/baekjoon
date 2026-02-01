#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N, M; cin >> N >> M;
    int board[502][502];
    bool vis[502][502];
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> board[i][j];
        }
    }
    
    int num = 0;
    int mx = 0;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(board[i][j] == 0 || vis[i][j]) continue;
            num++;
            queue<pair<int, int>> Q;
            vis[i][j] = 1;
            Q.push({i, j});
            int area = 0;
            while(!Q.empty()){
                area++;
                pair<int, int> cur = Q.front(); Q.pop();
                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                    if(vis[nx][ny] || board[nx][ny] != 1) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            
            mx = max(mx, area);
        }
    }
    
    cout << num << '\n' << mx;
    
    return 0;
}