#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> foo = {7, 1, 4, 0, -1};

    // Auto: The compiler figures out the type automatically.
    // The range for loop allows you to step through the elements in a sequence.
    for (auto &elem : foo) {
        cout << elem << endl;
    }
}
