#include <iostream>
using namespace std;

int main(){
    int year;
    for(;;){
        cout<< "Enter a year(Enter 0 to stop): ";
        cin>>year;
    if(year ==0){
        break;
    }

    if((year% 400 ==0)||(year%4==0 && year% 100!=0)){
        cout<<year<<" is a leap year."<<endl;
    }
    else{
        cout<<year<<" isn't a leap year."<<endl;
        }
    }
    cout<< ""<<endl;
    cout<< "Thanks for using This Programme.";
      cout<< ""<<endl;
}
