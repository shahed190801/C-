#include <iostream>
using namespace std;
int main()
{
 string name;
 cout <<"Input Your name:";
 getline(cin, name);
 
 	 cout<< "Hi, "<< name <<",How are you? "<< endl;
 
 	 cout<< "Here we go..."<< endl;
 	 
 float a,b,sum,sub,mul,div,rem;
 char x;
 
 while (1)
 {
  cout <<"Do you use this Allcalc? (y/n):";
  cin>> x;
  if(x=='y')
  {
	cout<< "a=";
  	 cin>> a;
 	cout<< "b=";
   	 cin>> b;
   	 
 	sum= a+b;
 	sub= a-b;
 	div= a/b;
 	mul= a*b;
 	
 	
 cout<< "sum:"<< sum << endl;
  cout<< "sub:"<< sub << endl;
   cout<< "div:"<< div << endl;
    cout<< "mul:"<< mul << endl;
    
    cout<<"Size of a= " << sizeof(a)*8<<" bit" <<endl;
    cout<<"Size of b= " << sizeof(a)*8<<" bit" <<endl;
   } 
    else 
    break;
    }
    
    
return 0;
}