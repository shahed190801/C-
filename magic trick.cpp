#include <iostream>

using namespace std;

int main()
{
    int numOne,a,numTwo,b,numThree,c,t;
  cout<<"Input the random 5 digit Number(the first digit should not be 9 or 0 ): ";
  cin>> numOne;
  a=(200000+numOne)-2;

  cout<<"Here is my predicted Number: "<< a <<endl;

  cout<<"Input the another 5 digit Number: ";
  cin>> numTwo;

  b=99999-numTwo;

  cout<<"Here is my one: "<< b << endl;

  cout<<"Input the another 5 digit Number: ";
  cin>> numThree;

  c=99999-numThree;

  cout<<"Here is my one                  : "<< c << endl;

  t=numOne+numTwo+b+numThree+c;
 cout<< ""<< endl;
  cout<< ""<< endl;
    cout<< "Here is the Total:"<<endl;
        cout<< ""<< endl;
    cout<<"    "<<numOne<< endl;
    cout<<"    "<< numTwo<< endl;
    cout<<"    "<< b<< endl;
    cout<<"    "<< numThree<< endl;
    cout<<"    "<< c<< endl;
    cout<<"  "<<"________"<< endl;
    cout<<"   "<<t<<endl;

    cout<< "See my predicted one! That was the same here: "<< a << endl;
    return 0;
}
