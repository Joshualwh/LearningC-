#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    auto v = {7,8,9,10};

    for (auto i:v) {
        cout << i << "\n";
    }
}