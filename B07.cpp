/*
There can only be one instance or object of a singleton class at a time.
This is achieved by making the constructor private or protected.
The instance assigned to a static data member and is set by a static member function.
*/
#include <iostream>
#include <string>
using namespace std;

class Singleton {
    private:
        static Singleton* instance;
    public:
        static Singleton* setInstance();
        static void cleanUp();
    protected:
        Singleton();
};

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::setInstance() {
    if (instance == nullptr) {
        instance = new Singleton;
    }

    return instance;
}

void Singleton::cleanUp() {
    delete instance;
    instance = nullptr;
}

int main( ) {
    Singleton *obj = Singleton::setInstance();
    obj->cleanUp();
    obj = nullptr;

    return 0;
}
