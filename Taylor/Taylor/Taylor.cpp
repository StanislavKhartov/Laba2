#include <iostream>

using namespace std;

int main()
{
    // Input data
    cout << "Please, enter e\n";
    long double e;
    cin >> e;
    cout << "Please, enter the argument of function sin(x)/x, x∈(-1;1)\n";
    long double argument;
    cin >> argument;
    // Check 
    if (abs(argument) >= 1)
    {
        cout << "Incorrect data\n";
        return 0;
    }

}
