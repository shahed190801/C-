#include <iostream>
using namespace std;

int main(){
    int year;
    cout<< "Enter a year(Enter 0 to stop): ";
        cin>>year;

    while(year >0){

    if((year% 400 ==0)||(year%4==0 && year% 100!=0)){
        cout<<year<<" is a leap year."<<endl;
    }
    else{
        cout<<year<<" isn't a leap year."<<endl;
        }
        cout<< "Enter another year(Enter 0 to stop): ";
        cin>>year;
    }
    cout<< ""<<endl;
    cout<< "Thanks for using This Programme.";
      cout<< ""<<endl;
}
