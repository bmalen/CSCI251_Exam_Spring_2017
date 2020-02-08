#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Algorithms are applied to containers through the iterators that are available to traverse containers.
    vector<int> foo = {7, 1, 4, 0, -1};
    sort(foo.begin(), foo.end());

    // Adapters are data types from STL that adapt a container to provide specific interface.
    foo.pop_back();

    for (auto &elem : foo) { cout << elem << endl; }
}
