#include <iostream>
#include <string>
using namespace std;

class Home {
};

class Office {
};

// Multiple inheritance
class HomeOffice : public Home, public Office {
};

// Association
class HomeOffice2 {
    private:
        Home home;
        Office office;
};

int main( ) {
    HomeOffice h;
    HomeOffice2 h2;

    return 0;
}
