#include <iostream>

using namespace std;

int main()
{
    // create 5 digit password list in 00000 into 55555
    int p=0;
    while (p<=5)
    {
        int a=0;
        while (a<=5)
        {
            int s=0;
            while (s<=5)
            {
                int S=0;
                while (S<=5)
                {
                    int w=0;
                    while (w<=5)
                    {
                        cout << p << a << s << S << w << endl;
                        ++w;
                    }
                    ++S;
                }
                ++s;
            }
            ++a;
        }
        ++p;
    }
    return 0;
}
