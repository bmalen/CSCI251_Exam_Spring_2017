#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> foo;
    foo.push_back(50);
    foo.push_back(40);
    foo.push_back(100);

    // Iterators allow you to access the contents of containers.
    for (auto it = foo.begin(); it != foo.end(); ++it) {
        cout << *it << endl;
    }
}
