#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Troll {
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

int main( ) {
    Troll troll("Hrungnir", "The Strong", 297, 25, "The River Pass");
    troll.display();
    return 0;
}
