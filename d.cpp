#include <iostream>
using namespace std;
class Base{
    public :
        int x;
         void print()
        {
            cout << x <<" hello 1\n";
        }
};
class Drived : public Base{
    public :
        Drived()
        {
            cout << "const\n";
            x = 999;
        }
        void print()
        {
            cout << x <<" hello 2\n";
        }
        ~Drived()
        {
            cout << "dest\n";
        }
        
};

int main()
{
    Drived *p = new Drived;
    delete p;
}