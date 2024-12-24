#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int calculateDailyWage(int wagePerHour, int dayHours)
{
    return wagePerHour * dayHours;
}

void employeeAttendance()
{
    srand(time(0));
    int wagePerHour = 20;
    int totalWage = 0;

    for (int i = 1; i <= 20; i++)
    {
        int randomNum = rand() % 2;

        switch (randomNum)
        {
          case 1:
          {
            int dayHours = (rand() % 2 == 0) ? 4 : 8;
            int dailyWage = calculateDailyWage(wagePerHour, dayHours);
            totalWage += dailyWage;
            cout << "Day " << i << ": Employee is Present, Worked Hours: " << dayHours
                 << ", Daily Wage: " << dailyWage << endl;
            break;
          }

          case 0:
          {
            cout << "Day " << i << ": Employee is Absent" << endl;
            break;
          }
        }
    }

    cout << "\nTotal Wage for 20 Days: " << totalWage << endl;
}

int main()
{
    cout << "Welcome to Employee Wage Computation" << endl;

    employeeAttendance();

    return 0;
}
