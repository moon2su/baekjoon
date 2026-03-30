#include <bits/stdc++.h>
using namespace std;

int N, M;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int board[500][500];
bool vis[500][500];
int ans;

void dfs(int y, int x, int d, int sum){
    
    sum += board[y][x];
    vis[y][x] = 1;

    if(d == 4){
        if(sum > ans){
            ans = sum;
        }
        vis[y][x] = 0;
        return;
    }
    for(int dir = 0; dir < 4; dir++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
        if(!vis[ny][nx]){
            dfs(ny, nx, d+1, sum);
        }
    }
    vis[y][x] = 0;
    
}

void T(int y, int x){
    int sum, dir, ny, nx;
    for(int i = 0; i < 4; i++){
        sum = board[y][x];
        int cnt = 1;
        
        for(dir = 0; dir < 4; dir++){
            if(dir == i) continue;
            
            ny = y + dy[dir];
            nx = x + dx[dir];
            if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
            
            sum += board[ny][nx];
            cnt++;
        }
        if(cnt == 4)
            ans = max(ans, sum);
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
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            dfs(i, j, 1, 0);
            T(i, j);
        }
    }
    
    cout << ans;
    
    return 0;
}