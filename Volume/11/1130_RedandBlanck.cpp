#include <iostream>
#define MAX_W 20
#define MAX_H 20
using namespace std;

int w, h, ax, ay, cnt;
char t[MAX_H][MAX_W + 1];

void PRINT() {
  for(int i = 0; i < h; ++i) {
    for(int j = 0; j < w; ++j) {
      cout << t[i][j];
    }
    cout << endl;
  }
  cout << endl;
}

// 深さ優先探索
// 現在位置(x, y)
void dfs(int x, int y) {
  t[y][x] = 'o';

  for(int dx = -1; dx <= 1; dx++) {
    for(int dy = -1; dy <= 1; dy++) {
      // 4方向に限定
      if(dx * dy == -1 || dx * dy == 1) continue;

      // 現在位置を(nx, ny)に更新
      int nx = x + dx;
      int ny = y + dy;

      // (nx, ny)は部屋の中か？ & t[nx][ny]は黒タイルか？判定
      if(0 <= nx && nx < w && 0 <= ny && ny < h && t[ny][nx] == '.') {
        dfs(nx, ny);
        //PRINT();
        cnt++;
      }
    }
  }
  return;
}

void solve() {
  cnt = 1;
  dfs(ax, ay);
  cout << cnt << endl;
}

int main() {
  while(cin >> w >> h) {
    if(w * h == 0) break;

    for(int i = 0; i < h; ++i) {
      for(int j = 0; j < w; ++j) {
        cin >> t[i][j];
        if(t[i][j] == '@') {
          ax = j;
          ay = i;
        }
      }
    }
    
    solve();
  }
  return 0;
}
