#include <iostream>
#include <vector>
using std::vector;
using std::cout;

void PrintBoard (vector<vector<int>> v){
  for (auto j:v){
    for (int i:j){
      cout << i << ", ";
    }
    cout << "\n";
  }
}

int main() {
  vector<vector<int>> board = {{0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 0, 0, 0, 1, 0}};
  
  PrintBoard(board);


}