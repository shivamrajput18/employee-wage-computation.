#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void employeeAttendance(){
   srand(time(0));
      int randomNum = rand() % 2;

    if(randomNum==1){
         cout << "Employee is Present" << endl;
    }
    else{
          cout << "Employee is Absent" << endl;
    }
}

int main(){
     cout << "Welcome to employee-wage-computation" << endl;

     employeeAttendance();

     return 0;
}