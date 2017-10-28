// Example program
#include <iostream>
#include <string>
using namespace std;

void getArray(int yourArray[], int length){
    for(int i=0; i<length; i++){
        cout << "yourArray[" << i <<"]: ";
        cin >> yourArray[i];
    }
}
void showArray(int yourArray[], int length){
     for (int i=0; i<length; i++){
        cout << "yourArray[" << i <<"]" << yourArray[i]<<endl; 
    }
}
void insertionSort(int yourArray[], int length){
    for(int j = 1; j<length; j++){
        int key = yourArray[j];
        int i = j-1;
        while(i>=0&&yourArray[i]>key){
            yourArray[i+1] = yourArray[i];
            i = i-1;
        }
        yourArray[i+1] = key;
    }
}
const int length = 5;
int myArray[length];
int main(){
    getArray(myArray, length);
    cout << "Before sorting ! \n";
    showArray(myArray, length);
    cout << "After sorting !\n";
    insertionSort(myArray, length);
    showArray(myArray, length);
}