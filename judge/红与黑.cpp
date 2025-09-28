#include <bits/stdc++.h>
using namespace std;  

char mp[25][25];  
bool visited[25][25];  
int w, h;  
int start_x, start_y;  
int answer;  

int dx[4] = {0, 0, 1, -1};  
int dy[4] = {1, -1, 0, 0};  

void bfs(int x, int y) {  
    queue<pair<int, int>> q;  
    q.push({x, y});  
    visited[x][y] = true;  
    answer++;  

    while (!q.empty()) {  
        auto current = q.front();  
        q.pop();  
        int curr_x = current.first;  
        int curr_y = current.second;  

        for (int i = 0; i < 4; ++i) {  
            int new_x = curr_x + dx[i];  
            int new_y = curr_y + dy[i];  

            if (new_x >= 0 && new_x < h && new_y >= 0 && new_y < w) {  
                if (!visited[new_x][new_y] && mp[new_x][new_y] == '.') {  
                    visited[new_x][new_y] = true;  
                    answer++;  
                    q.push({new_x, new_y});  
                }  
            }  
        }  
    }  
}  

int main() {  
    while (true) {  
        cin >> w >> h;  
        if (w == 0 && h == 0) break;
        for (int i = 0; i < h; ++i) {  
            string row;  
            cin >> row;  
            for (int j = 0; j < w; ++j) {  
                mp[i][j] = row[j];  
                if (mp[i][j] == '@') {  
                    start_x = i;  
                    start_y = j;  
                }  
                visited[i][j] = false;  
            }  
        }
        answer = 0;
        bfs(start_x, start_y);  

        cout << answer << endl;  
    }  

    return 0;  
}
