#include <iostream>

using namespace std;

int main()
{
   string name;
   cout << "Input Your Name: ";
   getline(cin, name);

   int age;
   cout << "Input Your Age: ";
   cin >> age;


   int mobileNum;
   cout << "Input Your Mobile Number: ";
   cin >> mobileNum;


   cout << "Name         :"<< name << endl;
   cout << "Age          :"<< age<< endl;
   cout << "Mobile Number:"<< mobileNum<< endl;

    return 0;
}
