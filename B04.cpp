#include <iostream>
#include <string>
using namespace std;

template<typename T>
void StarThem(T obj, int n) {
    for (int i = 0; i < n; i++) { cout << '*'; }
    cout << obj;
    for (int i = 0; i < n; i++) { cout << '*'; }
    cout << endl;
}

/*

To use this with the Mouse and Troll classes, they need overload the insertion operator:

friend ostream& operator<<(ostream &, const Mouse &);
friend ostream& operator<<(ostream &, const Troll &);

Then, they could be used like this:

Mouse mouse("Squeak", 5, 10, 7);
StarThem(mouse, 10);

Troll troll("Hrungnir", "The Strong", 297, 25, "The River Pass");
StarThem(troll, 10);

*/

int main( ) {
    StarThem("foo", 10);

    return 0;
}
