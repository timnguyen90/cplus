// Example program
#include <iostream>
#include <string>

using namespace std;

template <typename Gen_Type>
Gen_Type getMax(Gen_Type a, Gen_Type b){
    return(a>b ? a : b);
}
int main()
{
 int m, n;
 double x, y;
 char c, d;
 cout << "Enter intergers m, n: "; cin >> m >>n;
 cout << "Enter double x, y: "; cin >> x >> y;
 cout << "Enter characters c, d: "; cin >> c >> d;
 cout << "Maximum of two intergers " << m << " and " << n << " is: " << getMax(m, n) << endl;
 cout << "Maximum of two doubles " << x << " and " << y << " is: " << getMax(x, y) << endl;
 cout << "Maximum of two characters " << c << " and " << d << " is: " << getMax(c, d) << endl;
 
 system("PAUSE");
 
}