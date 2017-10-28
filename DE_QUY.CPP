// Example program
#include <iostream>
#include <string>
using namespace std;
//tinh gia thua khong co de quy
template <typename Gen_Type>
Gen_Type factorial(Gen_Type n){
    Gen_Type res = 1;
    for(int count = 1; count <=n; count++){
        res *= count;
    }
    return res;
}
//tinh giai thua co de quy
template <typename Gen_Type>
Gen_Type factorial2(Gen_Type n){
    if(n==0) return 1;
    else return factorial2(n-1) * n;
}
//tinh tong de quy
template <typename Gen_Type>
Gen_Type sum(Gen_Type n){
    if(n==1) return 1;
    else return sum(n-1)+n;
}
int main()
{
    int n;
    cout << "n = "; cin >>n;
    cout << n <<"! = " << factorial2(n) << endl;
    cout << "S(n) = " <<sum(n);
    system("PAUSE");
}