// lab_04.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double a; // вхідний параметр
    double b; // вхідний параметр
    double c; // вхідний параметр
    double xp; // вхідний параметр
    double xk; // вхідний параметр
    double dx; // вхідний параметр
    double F; // результат обчислення виразу
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >>xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "xp" << " |"
        << setw(7) << "xk" << " |" << endl;
    cout << "---------------------------" << endl;

    if (a < 0 && c != 0)
        F = a * x * x + b * x + c;
    else if
        (a > 0 && c == 0)
        F = -a / (x - c);
    else
    F = a * (x + c);
    cout << "|" << setw(7) << setprecision(2) << xp
        << " |" << setw(7) << setprecision(2) << xk
        << " |" << endl;
    x += dx;
    cout << " F = " << F << endl;
    cin.get();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
