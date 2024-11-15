#include <iostream>
#include <string>
using namespace std;

//Question 1: Temperature Conversion 
double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}
double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
double celsiusToKelvin(double celsius)
{
    return celsius + 273.15;
}

//Question 2: Max and Min Finder
int findMax(int a, int b, int c)
{
    return max(a, max(b, c));
}
int findMin(int a, int b, int c)
{
    return min(a, min(b, c));
}

//Question 3: Prime Number Checker 
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;
    return true;
}

//Question 4: Payroll Calculator
double calculateGrossPay(int hours, double rate)
{
    return hours * rate;
}
double calculateTax(double grossPay)
{
    if (grossPay < 2000)
        return grossPay * 0.10;
    else if
        (grossPay <= 5000)
        return grossPay * 0.15;
    else
        return grossPay * 0.20;
}

//Question 5: Student Grade Calculator
double calculateAverage(int score1, int score2, int score3)
{
    return (score1 + score2 + score3) / 3.0;
}
char calculateGrade(double average)
{
    if (average >= 90)
        return 'A';
    else if
        (average >= 80)
        return 'B';
    else if
        (average >= 70)
        return 'C';
    else if
        (average >= 60)
        return 'D';
    else
        return 'F';
}

//Main Menu
void displayMenu()
{
    cout << "\n**** Program Menu ****" << endl;
    cout << "1. Temperature Conversion" << endl;
    cout << "2. Max and Min Finder" << endl;
    cout << "3. Prime Number Checker" << endl;
    cout << "4. Payroll Calculator" << endl;
    cout << "5. Student Grade Calculator" << endl;
    cout << "0. Exit" << endl;
    cout << "Choose an option: ";
}

int main()
{
    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double temp;
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            cout << "Fahrenheit: " << celsiusToFahrenheit(temp) << endl;
            cout << "Kelvin: " << celsiusToKelvin(temp) << endl;
            break;
        }
        case 2:
        {
            int a, b, c;
            cout << "Enter three numbers: ";
            cin >> a >> b >> c;
            cout << "Maximum: " << findMax(a, b, c) << endl;
            cout << "Minimum: " << findMin(a, b, c) << endl;
            break;
        }
        case 3:
        {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            cout << (isPrime(num) ? "Prime" : "Not Prime") << endl;
            break;
        }
        case 4:
        {
            string name;
            int hours;
            double rate;
            cout << "Enter employee name: ";
            cin >> ws;
            getline(cin, name);
            cout << "Enter hours worked: ";
            cin >> hours;
            cout << "Enter hourly rate: ";
            cin >> rate;
            double grossPay = calculateGrossPay(hours, rate);
            double tax = calculateTax(grossPay);
            double netPay = grossPay - tax;
            cout << "Employee: " << name << endl;
            cout << "Gross Pay: $" << grossPay << ", Tax: $" << tax << ", Net Pay: $" << netPay << endl;
            break;
        }
        case 5:
        {
            string name;
            int score1, score2, score3;
            cout << "Enter student name: ";
            cin >> ws;
            getline(cin, name);
            cout << "Enter three test scores: ";
            cin >> score1 >> score2 >> score3;
            double average = calculateAverage(score1, score2, score3);
            char grade = calculateGrade(average);
            cout << "Student: " << name << ", Average: " << average << ", Grade: " << grade << endl;
            break;
        }
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}