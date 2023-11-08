#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("color 1");
    cout << "                                                Learn programming!" << endl;
    string j="java", p="python", c="C++", ph="php";
    string in;

    cout << "Enter your learn programming language: ";
    cin >> in;
    if (in == j)
    {
     cout << endl;
     cout << "best java learn youtube chanal is DG Tube" << endl;
    }
    else if (in == p)
    {
     cout << endl;
     cout << "best python learn youtube chanal is DG Tube" << endl;
    }
    else if (in == c)
    {
     cout << endl;
     cout << "best c++ learn youtube chanal is DG Tube" << endl;
    }
    else if (in == ph)
    {
     cout << endl;
     cout << "best php learn youtube chanal is DG Tube" << endl;
    }

    return 0;
}
