#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal;
class Troll;
class Mouse;

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
        friend ostream& operator<<(ostream &, Mouse &);
        friend bool compare(const Mouse &, const Troll &);

    private:
        int m_TailLength;
        int m_WhiskerLength;

    public:
        Mouse(string, int, int, int);
};

Mouse::Mouse(string name, int age, int tailLength, int whiskerLength) : Animal(name, age), m_TailLength(tailLength), m_WhiskerLength(whiskerLength) {
}

ostream& operator<<(ostream &out, Mouse &mouse) {
    out << mouse.m_Name << " " << mouse.m_Age << " " << mouse.m_TailLength << " " << mouse.m_WhiskerLength;
    return out;
}

class Troll {
        friend bool compare(const Mouse &, const Troll &);

    protected:
        string m_FirstName;
        string m_LastName;
        int m_Age;
        double m_Size;
        string m_Bridge;
        vector<string> m_Victims;

    public:
        Troll(string, string, int, double, string);
        void display();
        void victimHistory();
};

Troll::Troll(string firstName, string lastName, int age, double size, string bridge) :
    m_FirstName(firstName),
    m_LastName(lastName),
    m_Age(age),
    m_Size(size),
    m_Bridge(bridge) {
}

void Troll::display() {
    cout << m_FirstName << " " << m_LastName << " is " << m_Age << " years old, " << m_Size << " metres tall, and occupies " << m_Bridge << "." << endl;
}

// compare needs to be a friend function because it needs access to the private data members of Mouse and Troll.
bool compare(const Mouse &mouse, const Troll &troll) {
    return (mouse.m_TailLength * mouse.m_WhiskerLength) > troll.m_Age;
}

int main( ) {
    Troll troll("Hrungnir", "The Strong", 60, 25, "The River Pass");
    troll.display();

    Mouse mouse("Squeak", 5, 10, 7);
    cout << mouse << endl;

    if (compare(mouse, troll)) {
        cout << "Mouse is greater than troll!" << endl;
    } else {
        cout << "Mouse is lesser than troll :(" << endl;
    }

    return 0;
}
