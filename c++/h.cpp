#include <iostream>
using namespace std;
class jabra
{
    int x;

public:
    void camera()
    {
        cout << "enter number ";
        cin >> x;
    }
    void answer()
    {
        cout << "your number is " << x;
    }
};

int main()
{
    jabra obj;
    obj.camera();
    obj.answer();
    return 0;
}