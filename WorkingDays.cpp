#include <iostream>
using namespace std;

int getYear();
bool isLeap(int year);
void computeWorkDays(int year, bool status);

int main()
{
    int year;
    bool status;

    year = getYear();
    status = isLeap(year);

    computeWorkDays(year, status);

    return 0;
}

int getYear()
{
    int year;

    cout << "Enter year: ";
    cin >> year;

    return year;
}

bool isLeap(int year)
{
    bool status;

    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
        status = true;
    else
        status = false;

    return status;
}

void computeWorkDays(int year, bool status)
{
    int workingDays;

    if (status == true)
        workingDays = 366 - 52 * 2;
    else
        workingDays = 365 - 52 * 2;

    cout << "Year: " << year << endl;
    cout << "Working days: " << workingDays << endl;
}