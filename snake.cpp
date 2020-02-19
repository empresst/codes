#include <iostream>
#include <vector>

using namespace std;

int main() {
  int H, W;
  cin >> W >> H;
  std::vector< std::vector<int> > map;
  map.resize(H); // H rows
  for(int i = 0; i < H; ++i)
    map[i].resize(W); // in every row, create W columns
  // thus this is equivalent to a HxD array

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> map[i][j];
    }

  }
cout << endl;
  //Print
  for (int i = 0; i < H; i++) {
        if(i%2==0){
    for (int j = W; j > 0; j--) {
      cout << map[i][j] << " ";
    }}
   // else for (int j = 0; j <W; j++) {
    //  cout << map[i][j] << " ";
    //}

  }
  cout << endl;
  return 0;
}
