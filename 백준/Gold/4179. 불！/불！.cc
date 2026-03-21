#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[1002];
int distF[1002][1002];
int distJ[1002][1002];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int R, C;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> R >> C;
    for(int i = 0; i < R; i++){
        fill(distF[i], distF[i] + C, -1);
        fill(distJ[i], distJ[i] + C, -1);
    }
    for(int i = 0; i < R; i++){
        cin >> board[i];
    }
    queue<pair<int, int>> Qf;
    queue<pair<int, int>> Qj;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(board[i][j] == 'F'){
                Qf.push({i, j});
                distF[i][j] = 0;
            }
            if(board[i][j] == 'J'){
                Qj.push({i, j});
                distJ[i][j] = 0;
            }
        }
    }
    
    while(!Qf.empty()){
        auto cur = Qf.front();
        Qf.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if(board[nx][ny] == '#' || distF[nx][ny] >= 0) continue;
            distF[nx][ny] = distF[cur.X][cur.Y] + 1;
            Qf.push({nx, ny});
        }
    }
    
    while(!Qj.empty()){
        auto cur = Qj.front();
        Qj.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= R || ny < 0 || ny >= C){
                cout << distJ[cur.X][cur.Y] + 1;
                return 0;
            }
            if(distJ[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            if(distF[nx][ny] != -1 && distF[nx][ny] <= distJ[cur.X][cur.Y] + 1) continue;
            distJ[nx][ny] = distJ[cur.X][cur.Y] + 1;
            Qj.push({nx, ny});
        }
    }
    
    cout << "IMPOSSIBLE";
    
    return 0;
}