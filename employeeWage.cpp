#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int employeeDailyWage(int wagePerHour, int fullDayHour);

void employeeAttendance() {
    srand(time(0));
    int randomNum = rand() % 2;

    if (randomNum == 1) {
        cout << "Employee is Present" << endl;

        int wagePerHour = 20;
        int fullDayHour = 8;

        if (fullDayHour == 8) {
            int res = employeeDailyWage(wagePerHour, fullDayHour);
            cout << "Employee Daily Wage: " << res << endl;
        }

    } else {
        cout << "Employee is Absent" << endl;
    }
}

int employeeDailyWage(int wagePerHour, int fullDayHour) {
    return wagePerHour * fullDayHour;
}

int main() {
    cout << "Welcome to employee-wage-computation" << endl;

    employeeAttendance();

    return 0;
}
