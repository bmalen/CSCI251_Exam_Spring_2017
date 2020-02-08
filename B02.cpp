#include <iostream>
#include <string>
using namespace std;

class Animal {
    protected:
        string m_Name;
        int m_Age;

    public:
        Animal(string, int);
};

Animal::Animal(string name, int age) : m_Name(name), m_Age(age) {
}

class Mouse : public Animal {
        friend ostream& operator<<(ostream &, const Mouse &);

    private:
        int m_TailLength;
        int m_WhiskerLength;

    public:
        Mouse(string, int, int, int);
};

Mouse::Mouse(string name, int age, int tailLength, int whiskerLength) : Animal(name, age), m_TailLength(tailLength), m_WhiskerLength(whiskerLength) {
}

ostream& operator<<(ostream &out, const Mouse &mouse) {
    out << mouse.m_Name << " " << mouse.m_Age << " " << mouse.m_TailLength << " " << mouse.m_WhiskerLength;
    return out;
}

int main( ) {
    Mouse mouse("Squeak", 5, 10, 7);
    cout << mouse << endl;
    return 0;
}
