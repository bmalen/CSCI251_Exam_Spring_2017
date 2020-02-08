#include <iostream>
using namespace std;

void spaceToStar(istream& in, ostream& out) {
    char c;
    while (in.get(c)) {
        if (isspace(c)) {
            c = '*';
        }
        out.put(c);
    }
}

int main() {
    spaceToStar(cin, cout);
    return 0;
}
