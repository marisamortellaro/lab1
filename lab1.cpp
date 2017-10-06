#include <iostream>
#include <cmath>

using namespace std;
main()
{
    int a = 2;
    int b = 3;
    int c= power(2,3);
    if(c==8)
    {
        cout << "power() works!"
    } else
    {
        cout<< "Power() does not work"
    }
}
void power(int base, int exp)
{
    int result;
    int result = Math.pow(base,exp);
    cout << result << endl;
}