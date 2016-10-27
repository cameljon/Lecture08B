#include <iostream>

using namespace std;

class Student
{
    public:
        void SetName( const string& value)
        {
            this->name = value;
        }
        void SetClassName(int index, const string& value)
        {
            this->classNames[index] = value;
        }
        void DisplayInfo()
        {
            cout << "Student: " << this->name << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << "\t" << this->classNames[i] << endl;
            }
        }
    private:
        string name;
        string classNames[3];
};

int main()
{
    Student one;
    Student two;
    Student three;

    one.SetName("Jon");
    one.SetClassName(0, "CS200");
    one.SetClassName(1, "CS201");
    one.SetClassName(2, "CS202");
    one.DisplayInfo();
    two.SetName("Jill");
    two.SetClassName(0, "CS200");
    two.SetClassName(1, "CS201");
    two.SetClassName(2, "CS202");
    two.DisplayInfo();
    three.SetName("Jack");
    three.SetClassName(0, "CS200");
    three.SetClassName(1, "CS201");
    three.SetClassName(2, "CS202");
    three.DisplayInfo();

    return 0;
}
