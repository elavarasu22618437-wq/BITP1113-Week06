/*
Name : K R ELAVARASU A/L KUMARAN
Matric Number : B032610230
Class : S2G1
*/

#include <iostream>
#include <iomanip>
using namespace std;

// 
void displayTitle();
double getScore();
double calculateAverage(double s1, double s2, double s3, double s4, double s5);
char determineGrade(double average);
void displayResult(double average, char grade);

int main()
{
    double score1, score2, score3, score4, score5;
    double average;
    char grade;

    // 
    displayTitle();

    score1 = getScore();
    score2 = getScore();
    score3 = getScore();
    score4 = getScore();
    score5 = getScore();

    // 
    average = calculateAverage(score1, score2, score3, score4, score5);

    // 
    grade = determineGrade(average);

    // 
    displayResult(average, grade);

    return 0;
}

// 
void displayTitle()
{
    cout << "AVERAGE GRADE CALCULATOR" << endl;
    cout << "------------------------" << endl;
}

// 
double getScore()
{
    double score;

    cout << "Enter score: ";
    cin >> score;

    while (score < 0 || score > 100)
    {
        cout << "Invalid score! Enter again (0-100): ";
        cin >> score;
    }

    return score;
}

// 
double calculateAverage(double s1, double s2, double s3,
                        double s4, double s5)
{
    double average;

    average = (s1 + s2 + s3 + s4 + s5) / 5;

    return average;
}

// 
char determineGrade(double average)
{
    if (average >= 80)
        return 'A';
    else if (average >= 65)
        return 'B';
    else if (average >= 50)
        return 'C';
    else if (average >= 40)
        return 'D';
    else
        return 'F';
}

// 
void displayResult(double average, char grade)
{
    cout << "\n------------------------" << endl;
    cout << fixed << setprecision(2);

    cout << "Average Score: " << average << endl;
    cout << "Grade: " << grade << endl;

    cout << "------------------------" << endl;
}
