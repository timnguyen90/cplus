// Example program
#include <iostream>
#include <string>
using namespace std;

int GCD(int m, int n){
    while(m!=n){
        if(m>n)
            m = m-n;
        else
            n = n-m;
    }
    return m;
}
int main()
{
   cout << "Enter the first number: ";
   int n;
   cin >> n;
   cout << "Enter the second number: ";
   int m;
   cin >> m;
   int result = GCD(m,n);
   cout << "The GCD of two numbers is: " << result << endl;  
}
//hjhjhjhj
