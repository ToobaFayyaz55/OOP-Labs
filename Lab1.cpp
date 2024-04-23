#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int Student(){
    cout<<"Name : Tooba Fayyaz"<<endl;
    cout<<"Roll No. : SE-23071"<<endl;
    return 0;
}

// int Lab1_Q1()
// {
//     int length, width, area;
//     cout<<"Enter length : ";
//     cin>>length;
//     cout<<"Enter Width : ";
//     cin>>width;
//     area = length * width;
//     cout<<"Area of rectangle is :"<<area<<endl;
//     return 0;
// }

// int Lab1_Q2()
// {
//     int a;
//     cout<<"Enter a no. : ";
//     cin>>a;
//     if (a % 2 == 0){
//         cout<<a<<" is an even no."<<endl;
//     }
//     else{
//         cout<<a<<" is an odd no."<<endl;
//     }
//     return 0;
// }

// int Lab1_Q3()
// {
//      int n, first = 0, second = 1, next;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     cout << "Fibonacci Series up to " << n << " terms:" << endl;
//     for (int i = 0; i < n; ++i) {
//         if (i <= 1) {
//             next = i;
//         } else {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         cout << next << " ";
//     }
//     return 0;
// }

// int Lab1_Q4()
// {
//     int a, b, c;
//     cout<<"Enter 1st no. : ";
//     cin>>a;
//     cout<<"Enter 2nd no. : ";
//     cin>>b;
//     cout<<"Enter 3rd no. : ";
//     cin>>c;
//     if (a>b && a>c) {
//         cout<<"Maximum number : "<<a<<endl;
//     }
//     else if (b>a && b>c) {
//         cout<<"Maximum number : "<<b<<endl;
//     }
//     else {
//         cout<<"Maximum number : "<<c<<endl;
//     }
//     return 0;
// }

// int Lab1_Q5() 
// {
//     string str, reversedStr = "";
//     cout << "Enter a string: ";
//     getline(cin, str);
//     for (int i = str.length() - 1; i >= 0; --i) {
//         reversedStr += str[i];
//     }
//     cout << "Reversed string: " << reversedStr << endl;
//     return 0;
// }

// int Lab1_Q6() 
// {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     if (n < 2) {
//         cout<<n<<" is not prime."<<endl;
//     }
//     for (int i = 2; i * i <= n; ++i) {
//         if (n % i == 0) {
//             cout<<n<<" is not prime."<<endl;
//         }
//         else {
//             cout<<n<<" is prime."<<endl;
//         }
//     }
// }

// int Lab1_Q7()
// {
//     int n, i, fact = 1;
//     cout<<"Enter no. for Factorial : ";
//     cin>>n;
//     if (n == 0 || n == 1) {
//         cout<<"Factorial of "<<n<<" : 1"<<endl;
//     }
//     else {
//         for (i = 1; i <= n; i++){
//             fact = fact*i;
//         }
//     }
//     cout<<"Factorial of "<<n<<" : "<<fact;
// }

// int Lab1_Q8() 
// {
//     int p, r, t, i;
//     cout<<"Enter the principal amount : ";
//     cin>>p;
//     cout<<"Enter the rate of interest : ";
//     cin>>r;
//     cout<<"Enter the time period : ";
//     cin>>t;
//     i = (p * t * r) / 100;
//     cout<<"Simple interest :"<<i;
//     return 0;
// }

// int Lab1_Q9()
// {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;
//     if (year % 4 == 0) {
//         cout << year << " is a leap year" << endl;
//     } 
//     else {
//         cout << year << " is not a leap year" << endl;
//     }
//     return 0;
// }

// int Lab1_Q10()
// {
//     int originalNumber, temp, remainder, result = 0, n = 0;
//     cout << "Enter a number: ";
//     cin >> originalNumber;
//     temp = originalNumber;
//     while (temp != 0) {
//         temp /= 10;
//         ++n;
//     }
//     cout << "Number of digits: " << n << endl;
//     temp = originalNumber; 
//     while (temp != 0) {
//         remainder = temp % 10;
//         result += pow(remainder, n);
//         temp /= 10;
//     }
//     cout << "Result: " << result << endl;
//     if (result == originalNumber) {
//         cout << originalNumber << " is an Armstrong number" << endl;
//     }
//     else {
//         cout << originalNumber << " is not an Armstrong number" << endl;
//     }
//     return 0;
// }

// int Lab1_Q11()
// {
//     int a, b, sum, avg;
//     cout<<"Enter !st no. : ";
//     cin>>a;
//     cout<<"Enter 2nd no. : ";
//     cin>>b;
//     sum = a + b;
//     cout<<"Sum : "<< sum << endl;
//     avg = sum / 2;
//     cout<<"Average : "<< avg << endl;
//     return 0;
// }

// int Lab1_Q12()
// {
//     int sec, min, hour, rem_sec;
//     cout<<"Enter the time in seconds : ";
//     cin>>sec;
//     hour = sec / 3600;
//     min = (sec % 3600) / 60;
//     rem_sec = (sec % 3600) % 60;
//      cout << "Hours in time is: " << hour << endl;
//     cout << "Minutes in time: " << min << endl;
//     cout << "Seconds in time is: " << rem_sec << endl;
//     return 0;
// }

// int Lab1_Q13()
// {
//     int amount, thousands, fivehundreds, hundreds, fifties, tens, fives, twos, ones;
//     cout << "Enter amount in rupees: ";
//     cin >> amount;
//     thousands = amount / 1000;
//     amount %= 1000;
//     fivehundreds = amount / 500;
//     amount %= 500;
//     hundreds = amount / 100;
//     amount %= 100;
//     fifties = amount / 50;
//     amount %= 50;
//     tens = amount / 10;
//     amount %= 10;
//     fives = amount / 5;
//     amount %= 5;
//     twos = amount / 2;
//     amount %= 2;
//     ones = amount;
//     cout << "1000s in the given amount is: " << thousands << endl;
//     cout << "500s in the given amount is: " << fivehundreds << endl;
//     cout << "100s in the given amount is: " << hundreds << endl;
//     cout << "50s in the given amount is: " << fifties << endl;
//     cout << "10s in the given amount is: " << tens << endl;
//     cout << "5s in the given amount is: " << fives << endl;
//     cout << "2s in the given amount is: " << twos << endl;
//     cout << "1s in the given amount is: " << ones << endl;
//     return 0;
// }

// int Lab1_Q14()
// {
//     float fahrenheit , celsius;
//     cout << "Enter the Fahrenheit temperature: ";
//     cin >> fahrenheit;
//     celsius = (fahrenheit - 32) * 5 / 9;
//     cout << "Celsius Temperature: " << celsius << endl;
//     return 0;
// }

int Lab1_Q15()
{
    int number, reverse;
    cout << "Enter a 2 digit integer value: ";
    cin >> number;
    reverse = (number % 10) * 10 + (number / 10);
    cout << "Reverse of this value is: " << reverse << endl;
    return 0;
}

int main()
{
    Student();
    // Lab1_Q1();
    // Lab1_Q2();
    // Lab1_Q3();
    // Lab1_Q4();
    // Lab1_Q5();
    // Lab1_Q6();
    // Lab1_Q7();
    // Lab1_Q8();
    // Lab1_Q9();
    // Lab1_Q10();
    // Lab1_Q11();
    // Lab1_Q12();
    // Lab1_Q13();
    // Lab1_Q14();
    Lab1_Q15();
    return 0;
}