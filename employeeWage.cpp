#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int calculateDailyWage(int wagePerHour, int dayHours) {
    return wagePerHour * dayHours;
}

void employeeAttendance() {
    srand(time(0));  
    int wagePerHour = 20;  
    int totalWage = 0;     
    int totalHoursWorked = 0;  
    int totalDaysWorked = 0;   
    int maxHours = 100;        
    int maxDays = 20;         

    while (totalHoursWorked < maxHours && totalDaysWorked < maxDays) {
        int randomNum = rand() % 2; 
        int dayHours = (rand() % 2 == 0) ? 4 : 8; 

        switch (randomNum) {
            case 1: {  
                switch (dayHours) {
                    case 8: {  
                        int dailyWage = calculateDailyWage(wagePerHour, dayHours);
                        totalWage += dailyWage;
                        totalHoursWorked += dayHours;
                        totalDaysWorked++;
                        cout << "Day " << totalDaysWorked << ": Employee is Present, Worked Hours: " 
                             << dayHours << ", Daily Wage: " << dailyWage 
                             << ", Total Hours Worked: " << totalHoursWorked << endl;
                        break;
                    }

                    case 4: {  
                        int dailyWage = calculateDailyWage(wagePerHour, dayHours);
                        totalWage += dailyWage;
                        totalHoursWorked += dayHours;
                        totalDaysWorked++;
                        cout << "Day " << totalDaysWorked << ": Employee is Present, Worked Hours: " 
                             << dayHours << ", Daily Wage: " << dailyWage 
                             << ", Total Hours Worked: " << totalHoursWorked << endl;
                        break;
                    }

                    default:
                        cout << "Invalid input for working hours!" << endl;
                        break;
                }
                break;
            }

            case 0: {  
                cout << "Day " << totalDaysWorked + 1 << ": Employee is Absent" << endl;
                totalDaysWorked++;
                break;
            }

            default:
                cout << "Unexpected error!" << endl;
                break;
        }
    }


    cout << "\nTotal Wage after reaching condition (100 hours or 20 days): " << totalWage << endl;
}

int main() {
    cout << "Welcome to Employee Wage Computation" << endl;

    employeeAttendance();

    return 0;
}
