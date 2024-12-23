#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int employeeDailyWage(int wagePerHour, int fullDayHour);
int partTimeWage(int wagePerHour, int partTimeHour);

void employeeAttendance() {
    srand(time(0));
    int randomNum = rand() % 2;

    if (randomNum == 1) {
        cout << "Employee is Present" << endl;

         int wagePerHour = 20;
         int fullDayHour;
         cout << "Enter Part full Hours: ";
         cin >> fullDayHour;

        if (fullDayHour == 8) {
            int res = employeeDailyWage(wagePerHour, fullDayHour);
            cout << "Employee Daily Wage: " << res << endl;
        }

        int partTimeHour;
        cout << "Enter Part Time Hours: ";
        cin >> partTimeHour;
        
        if (partTimeHour == 4) {
            int res = partTimeWage(wagePerHour, partTimeHour);
            cout << "Employee PartTime Wage: " << res << endl;
        } else {
            cout << "Invalid part-time hours. No wage calculated." << endl;
        }

    } else {
        cout << "Employee is Absent" << endl;
    }
}

int employeeDailyWage(int wagePerHour, int fullDayHour) {
    return wagePerHour * fullDayHour;
}

int partTimeWage(int wagePerHour, int partTimeHour) {
    return wagePerHour * partTimeHour;
}

int main() {
    cout << "Welcome to employee-wage-computation" << endl;

    employeeAttendance();

    return 0;
}
