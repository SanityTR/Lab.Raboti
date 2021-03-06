#include <iostream>

using namespace std;

double invert(double x, double y)
{
    double s;
    s = 2 / (1 / x + 1 / y);
    return s;
}

//----------------------------

void c_place(double* p1, double* p2)
{
    double t = *p1;
    *p1 = *p2;
    *p2 = t;
}

//----------------------------

void sort(double* p1, double* p2, double* p3)
{
    if (*p3 < *p1)
        c_place(p3, p1);
    if (*p2 < *p1)
        c_place(p2, p1);
    if (*p3 < *p2)
        c_place(p3, p2);
}

//----------------------------

int main()
{
    double a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << endl;
    cout << "Enter B: ";
    cin >> b;
    cout << endl;
    cout << "S = " << invert(a, b);
    cout << endl;

    double x, y, z;
    cout << "Enter X: ";
    cin >> x;
    cout << endl;
    cout << "Enter Y: ";
    cin >> y;
    cout << endl;
    cout << "Enter Z: ";
    cin >> z;
    cout << endl;
    sort(&x, &y, &z);
    cout << x << " " << y << " " << z;
    return 0;
}
