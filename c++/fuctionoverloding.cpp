#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b, answer;
    int r;
    float area_;
    void area()
    {
        cout << "Enter Radius :";
        cin >> r;
        area_ = 3.14 * r * r;
        cout << "Area of circal" << area_;
    }
    void area(int size)
    {
        area_ = size * size;
        cout << "Area of Square =" << area_;
    }
    void area(int l, int b)
    {
        area_ = l * b;
        cout << "Area of rectangle=" << area_;
    }
};

int main()
{
    calculation c;
    c.area(25, 30);
    c.area();
    c.area(10);

    return 0;
}