#include <iostream>

using namespace std;

struct CoordPair
{
    float x, y;

    void GetUserInput()
    {
        cout << "Enter x and y values: ";
        cin >> x >> y;
    }

    void Display()
    {
        cout << x << " " << y << endl;
    }
};

void DisplaySlope(CoordPair one, CoordPair two);

int main()
{
    CoordPair one;
    CoordPair two;

    one.GetUserInput();
    two.GetUserInput();

    one.Display();
    two.Display();

    DisplaySlope(one, two);

    return 0;
}

void DisplaySlope(CoordPair one, CoordPair two)
{
    float slope = (two.y - one.y)/(two.x - one.x);

    cout << slope << endl;
}
