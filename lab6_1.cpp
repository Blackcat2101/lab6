#include<iostream>
using namespace std;

int main(){
    int number=1 ;
    int Even=0;
    int Odd=0;
    cout << "Enter an integer: ";
    cin >> number ;
    while (number != 0)
        {
            if (number%2 ==1){
                Odd++;
            }else{
                Even++;
            }
            cout << "Enter an integer: ";
            cin >> number ;
        }
    cout << "#Even numbers = " << Even << endl;
    cout << "#Odd numbers = " << Odd ;
    return 0;   
    }
    
