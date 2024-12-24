#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int calculateDailyWage(int wagePerHour, int dayHours) {
    return wagePerHour * dayHours;
}

void employeeAttendance() {
    srand(time(0));  
    int randomNum = rand() % 2;  

    int wagePerHour = 20;  

    switch (randomNum) {
        case 1: { 
            cout << "Employee is Present" << endl;
            int dayHours;
            cout << "Enter Time Hours (4 or 8) : ";
            cin >> dayHours;

            switch (dayHours) {
                case 8: { 
                    int dailyWage = calculateDailyWage(wagePerHour, dayHours);
                    cout << "Employee Daily Wage: " << dailyWage << endl;
                    break;
                }
                case 4: { 
                    int partTimeWage = calculateDailyWage(wagePerHour, dayHours);
                    cout << "Employee Part-Time Wage: " << partTimeWage << endl;
                    break;
                }
                default: 
                    cout << "Invalid input. Please enter 4 or 8 hours." << endl;
            }
            break; 
        }

        case 0: { 
            cout << "Employee is Absent" << endl;
            break;
        }
        default:
            cout << "Unexpected error in attendance computation." << endl;
    }
}

int main() {
    cout << "Welcome to Employee Wage Computation" << endl;

    employeeAttendance();

    return 0;
}
