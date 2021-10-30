#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<int> v1 = {6, 7, 8, 9};

    for (int i:v1){
        cout << i << " ";
    }

    cout << "Everything worked!" << "\n";
}