#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class EmployeeWage {
private:
    int wagePerHour;        
    int totalWage;            
    int totalHoursWorked;     
    int totalDaysWorked;    
    const int maxHours = 100; 
    const int maxDays = 20;   

public:
    EmployeeWage(int wagePerHour) {
        this->wagePerHour = wagePerHour;
        totalWage = 0;
        totalHoursWorked = 0;
        totalDaysWorked = 0;
    }

    int calculateDailyWage(int dayHours) {
        return wagePerHour * dayHours;
    }

    void calculateWageForMonth() {
        srand(time(0)); 

        while (totalHoursWorked < maxHours && totalDaysWorked < maxDays) {
            int randomNum = rand() % 2; 
            int dayHours = (rand() % 2 == 0) ? 4 : 8; 

            switch (randomNum) {
                case 1: {  
                    int dailyWage = calculateDailyWage(dayHours);
                    totalWage += dailyWage;
                    totalHoursWorked += dayHours;
                    totalDaysWorked++;
                    cout << "Day " << totalDaysWorked << ": Employee is Present, Worked Hours: "
                         << dayHours << ", Daily Wage: " << dailyWage 
                         << ", Total Hours Worked: " << totalHoursWorked << endl;
                    break;
                }

                case 0: { 
                    totalDaysWorked++;
                    cout << "Day " << totalDaysWorked << ": Employee is Absent" << endl;
                    break;
                }

            }
        }

        cout << "\nTotal Wage after reaching condition (100 hours or 20 days): " << totalWage << endl << endl;
    }
};

int main() {
    cout << "Welcome to Employee Wage Computation Program" << endl;
    EmployeeWage employee(20);
    employee.calculateWageForMonth();

    return 0;
}
