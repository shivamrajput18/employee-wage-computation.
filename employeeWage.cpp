#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int calculateDailyWage(int wagePerHour, int fullDayHours) {
    return wagePerHour * fullDayHours;
}

int calculatePartTimeWage(int wagePerHour, int partTimeHours) {
    return wagePerHour * partTimeHours;
}

void employeeAttendance() {
    srand(time(0));  
    int randomNum = rand() % 2;  

    int wagePerHour = 20;  

    switch (randomNum) {
        case 1:  
            cout << "Employee is Present" << endl;
            int fullDayHours;
            cout << "Enter Full-Time Hours : ";
            cin >> fullDayHours;

            switch (fullDayHours) {
                case 8:  
                    {
                        int dailyWage = calculateDailyWage(wagePerHour, fullDayHours);
                        cout << "Employee Daily Wage: " << dailyWage << endl;
                        break;
                    }
                default: 
                    cout << "Invalid input for full-time hours. Please enter exactly 8 hours." << endl;
            }

            int partTimeHours;
            cout << "Enter Part-Time Hours : ";
            cin >> partTimeHours;

            switch (partTimeHours) {
                case 4:  
                    {
                        int partTimeWage = calculatePartTimeWage(wagePerHour, partTimeHours);
                        cout << "Employee Part-Time Wage: " << partTimeWage << endl;
                        break;
                    }
                default:  
                    cout << "Invalid input for part-time hours. Please enter exactly 4 hours." << endl;
            }
            break;

        case 0:  
            cout << "Employee is Absent" << endl;
            break;

    }
}

int main() {
    cout << "Welcome to Employee Wage Computation" << endl;

    employeeAttendance();

    return 0;
}
