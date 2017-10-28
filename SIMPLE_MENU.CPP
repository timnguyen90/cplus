// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int choose;
    do{
        cout << "Menu\n";
        cout << "1. Getting an array\n";
        cout << "2. Showing an array\n";
        cout << "3. Sorting an array\n";
        cout << "0. Exit\n";
        cin >> choose;
        switch(choose)
        {
            case 1:
                cout << "Your choice is: Getting an array\n";
            break;
            case 2: 
                  cout << "Your choice is: Showing an array\n";
            break;
            case 3:
                  cout << "Your choice is: Sorting an array\n";
            break;
            case 0:
                  cout << "Your choice is: Exit application, Bye bye!!!\n";
            break;
            default:
                  cout << "Please choose the correct number !\n";
            break;
            
        }
    }while(choose !=0);
 
}