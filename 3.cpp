#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int RollNo;
    string Name;
    int Class;
    int Year;
    int TotalMarks;
};

int main()
{
    ofstream f2;
    f2.open("q_13output.txt");

    cout << "Start entering values ............." << endl;
    for (int i = 0; i < 2; i++)
    {
        Student obj;
         
        cin >> obj.RollNo;
        f2 << obj.RollNo << "  ";

        cin.ignore();
        getline(cin, obj.Name);
        f2 << obj.Name << "    ";

        cin >> obj.Class >> obj.Year >> obj.TotalMarks;
        f2 << obj.Class << "  " << obj.Year << "  " << obj.TotalMarks << endl;
    }

    return 0;
}