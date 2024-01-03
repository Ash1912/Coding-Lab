#include <iostream>
using namespace std;

class Feet {
   public:
    float feets;
    Feet(float f) { feets = f; }
    float get_feet() { return (feets); }

    void display() { cout << feets << " ft" << endl; }
};

class Inches {
   public:
    float inches;
    Inches() {}
    Inches(Feet f) { inches = f.get_feet() * 12; }
    
    void operator=(Feet f) { inches = f.get_feet() * 12; }

    void display() { cout << inches << " inches" << endl; }
};

int main() {
    // Creating object of class Feet
    Feet f(7);

    // Constructor
    Inches a(f);

    // Conversion
    Inches b;
    b = f;

    f.display();
    a.display(); // constructor
    b.display(); // conversion

    return 0;
}
