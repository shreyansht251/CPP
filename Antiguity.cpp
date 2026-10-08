#include <iostream>
using namespace std;

class B1
{
private:
    int x;

public:
    void getdata()
    {
        cout << "Enter x: ";
        cin >> x;
    }
};

class B2
{
private:
    int y;

public:
    void getdata()
    {
        cout << "Enter y: ";
        cin >> y;
    }
};

class D : public B1, public B2
{
private:
    int n;
};

int main()
{
    D d;

    d.B1::getdata();
    d.B2::getdata();

    return 0;
}