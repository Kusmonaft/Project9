#include"cheld2.h"

int main() 
{
    setlocale(LC_ALL, "Rus");
    child2 <int, float, std::string, bool, double, char> obj(31, 1.23, "Hello world!!!", true, 4.234, 'Z');
    obj.print();
    obj.preeeeent();
    obj.display();
    return 0;
}
