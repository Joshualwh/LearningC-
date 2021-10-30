#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void ReadBoardFile () {
  ifstream board;
  board.open("1.board");
  if (board){
    cout << "Managed to open!" << "\n";
    string line;
    while(getline(board, line)) {
      cout << line << "\n";
    }
  }
}

int main () {
  ReadBoardFile ();
}