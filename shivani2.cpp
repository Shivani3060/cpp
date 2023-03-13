#include <iostream>
#include<conio.h>
using namespace std;
class A
{

public:
    void show()
    {
        cout << "shivani";
    }
    
};
class B : public A
{
public:
    void put()
    {
        cout << "yadav";
    }
};
 int main()
{
    B obj;
    obj.show();
    obj.put();
    getch();
}