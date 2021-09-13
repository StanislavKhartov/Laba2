#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // Input data
    cout << "Please, enter k\n";
    int k;
    cin >> k;
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
    long double bound = pow(10, -k) / 2;
    while (fabsl(term) > bound)
    {
        sum = sum + term;
        devisor = devisor + 2;
        term = -term * square / devisor / (devisor - 1);
    }
    cout << setprecision(50) << sum << "\n" << sin(argument)/argument;
    return 0;
}
