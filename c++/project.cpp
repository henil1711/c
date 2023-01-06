#include <iostream>
using namespace std;
class show
{
public:
    int a;
    show(int x)
    {
        a = x;
    }
    void showdata()
    {
        cout << "a =" << a;
    }
};
class seen
{
public:
    int b;
    seen(int y)
    {
        b = y;
    }
    void showdata()
    {
        cout << "b =" << b;
    }
};
class see
{
public:
    int c;
    see(int z)
    {
        c = z;
    }
    void showdata()
    {
        cout << "c =" << c;
    }
};
void addition(show A, seen B, see C)
{
    int answer = A.a + B.b + C.c;
    cout << "addition=" << answer;
}
int main()
{
    show obj1(10);
    obj1.showdata();
    seen obj2(23);
    obj2.showdata();
    see obj3(35);
    obj3.showdata();
    addition(obj1, obj2, obj3);
    return 0;
}