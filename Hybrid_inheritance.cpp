#include <iostream>
using namespace std;

class B1
{
protected:
    int x;

public:
    void getb1()
    {
        cout << "Enter x: ";
        cin >> x;
    }

    void showb1()
    {
        cout << "x = " << x << endl;
    }
};

class D1 : public B1
{
protected:
    int y;

public:
    void getd1()
    {
        cout << "Enter y: ";
        cin >> y;
    }

    void showd1()
    {
        cout << "y = " << y << endl;
    }
};

class B2
{
protected:
    int k;

public:
    void getb2()
    {
        cout << "Enter k: ";
        cin >> k;
    }

    void showb2()
    {
        cout << "k = " << k << endl;
    }
};

class D2 : public D1, public B2
{
protected:
    int z;

public:
    void getd2()
    {
        z = x + y + k;
        cout << "z = " << z << endl;
    }
};

int main()
{
    D2 d;

    d.getb1();
    d.showb1();

    d.getd1();
    d.showd1();

    d.getb2();
    d.showb2();

    d.getd2();

    return 0;
}