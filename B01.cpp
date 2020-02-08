#include <iostream>
#include <string>
using namespace std;

class Animal {
    protected:
        string m_Name;
        int m_Age;
        int m_Teeth;

    public:
        Animal(string, int, int);
        void print() { cout << "Animal: " << m_Name << endl; }
};

Animal::Animal(string name, int age, int teeth) : m_Name(name), m_Age(age), m_Teeth(teeth) {
}

class Cat : public Animal {
    public:
        Cat(string, int, int);
        void print() { cout << "Cat: " << m_Name << endl; }
};

Cat::Cat(string name, int age, int teeth) : Animal(name, age, teeth) {
}

// If Animal::print() was virtual, Cat::Print() would be called for all.
// Since it is not, the print function selected will be that of the type the object is set to.
int main( ) {
    Cat cat("Bob", 10, 16);

    Cat &p1 = cat;
    p1.print();     // A = Cat

    Animal &p2 = cat;
    p2.print();     // B = Animal

    Cat *p3 = &cat;
    p3->print();    // C = Cat

    Animal *p4 = &cat;
    p4->print();    // D = Animal

    p3 = static_cast<Cat*>(p4);
    p3->print();    // E = Cat

    return 0;
}
