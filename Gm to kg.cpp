#include <iostream>
using namespace std;

int main()
{
double a, kg;
char x,z;


    cout<< "Input the value in 'Gram': "<< endl;
    cin>> a;
    kg= a/1000;
    cout << "The value in Kilogram is: " << kg << endl;

 while (1)
 {
  cout <<"Do you use this converter again? (y/n):";
  cin>> x;
  if(x=='y')
  {

    cout<< "Input the value in 'Gram': "<< endl;
    cin>> a;
    kg= a/1000;
    cout << "The value in Kilogram is: " << kg << endl;

}
    else
    break;
    }

return 0;
}

