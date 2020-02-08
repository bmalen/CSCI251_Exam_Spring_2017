#include <iostream>
#include <exception>
using namespace std;

class tornadoException : public exception {
    private:
        string e;
    public:
        tornadoException() {
            e = "Tornado: Take cover NOW!";
        }

        tornadoException(int m) {
            e = "Tornado: " + to_string(m) + " kilometres away!";
        }

        virtual const char* what() const noexcept override {
            return e.c_str();
        }
};

int main() {
    try {
        throw tornadoException();
    }
    catch(tornadoException& e) {
        cout << e.what() << endl;
    }
    try {
        throw tornadoException(10);
    }
    catch(tornadoException& e) {
        cout << e.what() << endl;
    }
}
