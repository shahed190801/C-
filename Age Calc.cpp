#include <iostream>

using namespace std;

int main()
{
   string name;
   cout << "Input Your Name: ";
   getline(cin, name);

   int year,age;
   cout << "Input Your birth-year: ";
   cin >> year;
   age=2025-year;

   int mobileNum;
   cout << "Input Your Mobile Number: ";
   cin >> mobileNum;


   cout << "Name         :"<< name << endl;
   cout << "Age          :"<< age<< endl;
   cout << "Mobile Number:"<< mobileNum<< endl;

    return 0;
}
