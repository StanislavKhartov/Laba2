#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Input data
    cout << "Please, enter e < 1/10\n";
    long double e;
    cin >> e;
    cout << "Please, enter the argument of function sin(x)/x, x from (-1;1)\n";
    long double argument;
    cin >> argument;
    // Check 
    if ((fabsl(argument) >= 1))
    {
        cout << "Incorrect data\n";
        return 0;
    }
    // Сalculation
    long double term = 1;
    double devisor = 1;
    long double sum = 0;
    long double square = argument * argument;
    while (fabsl(term) > e)
    {
        sum = sum + term;
        devisor = devisor + 2;
        term = -term * square / devisor / (devisor - 1);
    }
    cout << sum << " " << sin(argument)/argument;
    return 0;
}
