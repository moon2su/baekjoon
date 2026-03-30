#include <bits/stdc++.h>
using namespace std;

int N, M, R;
int board[301][301];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void rotate(int start, int size){
    int repeat = R % size;
    
    while(repeat--){
        int val = board[start][start];
        int x = start;
        int y = start;
        int k = 0;
        
        while(k < 4){
            int nx = x + dx[k];
            int ny = y + dy[k];
            
            if(nx == start && ny == start) break;
            if((start <= nx && nx < N - start) && (start <= ny && ny < M - start)){
                board[x][y] = board[nx][ny];
                x = nx;
                y = ny;
            }
            else k++;
        }
        board[start+1][start] = val;
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> N >> M >> R;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> board[i][j];
        }
    }
    
    int cnt = min(N, M) / 2;
    int sizeN = N;
    int sizeM = M;
    
    for(int i = 0; i < cnt; i++){
        rotate(i, 2*sizeN + 2*sizeM - 4);
        sizeN -= 2;
        sizeM -= 2;
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}