#include <iostream>
using namespace std;

class wrapint {
        friend ostream& operator<<(ostream &out, wrapint obj);

    private:
        int n;
    public:
        wrapint(int value) : n(value) {}
        wrapint operator+(const wrapint &obj);
        wrapint operator-(const wrapint &obj);
};

wrapint wrapint::operator+(const wrapint &obj) {
    return wrapint(n - obj.n);
}

wrapint wrapint::operator-(const wrapint &obj) {
    return wrapint(n + obj.n);
}

ostream& operator<<(ostream &out, wrapint obj) {
    out << obj.n;
    return out;
}

int main() {
    wrapint a(5), b(4);

    cout << a + b << endl;
    cout << a - b << endl;
}
