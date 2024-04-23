#include<iostream>
#include<conio.h>
#include<cmath>
#include <ctime>
using namespace std;

int Student(){
    cout<<"Name : Tooba Fayyaz"<<endl;
    cout<<"Roll No. : SE-23071"<<endl;
    return 0;
}

// int Lab2_Q1(){
//     char a;
//     cout << "Enter any character: ";
//     cin >> a;
//     if (int(a) >= 65 && int(a) <= 90) {
//         cout << "Capital Letter" << endl;
//     } else if (int(a) >= 97 && int(a) <= 122) {
//         cout << "Small Letter" << endl;
//     } else if (int(a) >= 48 && int(a) <= 57) {
//         cout << "Number" << endl;
//     } else{
//         cout << "Special Character";
//     }
//     return 0;
// }

// int Lab2_Q2(){
//     int calls;
//     cout<<"Enter number of calls: ";
//     cin>>calls;
//     double bill = 0.0;
//     if (calls <= 100) {
//         bill = 200.0;
//     } else if (calls <= 150) {
//         bill = 200.0 + (calls - 100) * 0.60;
//     } else if (calls <= 200) {
//         bill = 200.0 + 50 * 0.60 + (calls - 150) * 0.50;
//     } else {
//         bill = 200.0 + 50 * 0.60 + 50 * 0.50 + (calls - 200) * 0.40;
//     }
//     cout << "Monthly Telephone Bill: Rs. " << bill << endl;
//     return 0;
// }

int Lab2_Q3(){
    string input;
    cout << "Enter String: ";
    cin >> input;
    bool isUpper = false;
    bool isLower = false;
    bool isNum = false;
    bool isSpe = false;
    for (int i=0; i< input.length(); i++){
        if (int(input[i]) >= 65 && int(input[i]) <= 90){
            isUpper = true;} 
        else if (int(input[i])>=97 && int(input[i])<=122){
            isLower = true;}
        else if (int(input[i])>=48 && int(input[i])<=57){ 
            isNum = true;}
        else if ((int(input[i])>=0 && int(input[i])<=47) ||
        (int(input[i])>=58 && int(input[i])<=64) || 
        (int(input[i])>=91 && int(input[i])<=96) || 
        (int(input[i])>=123 && int(input[i])<=127)){ 
            isSpe = true;}
    }
    if(isUpper && isLower && isNum && isSpe && input.length()> 8){
        cout<<"strong";}
    else{
        if (isLower && isUpper && isNum){ 
            cout << "weak not contains special";}
        else if (isLower && isUpper && isSpe){ 
            cout << "weak not contains nums";}
        else if (isLower && isNum && isSpe){ 
            cout << "weak not contains upper";}
        else if (isSpe && isUpper && isNum){
            cout << "weak not contains lower";}
        else{
            cout <<"weak";}
    }
    return 0;
}

int Lab2_Q4(){
    string text;
    cout << "Enter message to encrypt: ";
    cin >> text;
    int shift = 3;
    string encrypted_text = "";
    for (char c : text) {
        if (!isalpha(c)) {
            encrypted_text += c;
            continue;
        }
        char base = isupper(c) ? 'A' : 'a';
        char shifted = (c - base + shift) % 26 + base;
        encrypted_text += shifted;
    }
    cout << "Encrypted text: " << encrypted_text << endl;
    string decrypted_text = "";
    for (char c : encrypted_text) {
        if (!isalpha(c)) {
            decrypted_text += c;
            continue;
        }
        char base = isupper(c) ? 'A' : 'a';
        char shifted = (c - base - shift + 26) % 26 + base;
        decrypted_text += shifted;
    }
    cout << "Decrypted text: " << decrypted_text << endl;
    return 0;
}

int Lab2_Q5(){
    int number;
    cout << "Enter a number to generate its multiplication table: ";
    cin >> number;
    cout << "Multiplication table of " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }
    return 0;
}

int Lab2_Q6(){
    char operation;
    float num1, num2;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Choose an operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "Enter your choice: ";
    cin >> operation;
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Invalid operation! Please choose from the provided options." << endl;
    }
    return 0;
}

int Lab2_Q7(){
    int num;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> num;
    int first = 0, second = 1;
    cout << "Fibonacci series up to " << num << endl;
    for (int i = 0; i < num; ++i) {
        if (i <= 1) {
            cout << i << " ";
        } else {
            int next = first + second;
            first = second;
            second = next;
            cout << next << " ";
        }
    }
    cout << endl;
    return 0;
}

int Lab2_Q8(){
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    const int maxAttempts = 3;
    cout << "Welcome to the Number Guessing Game (1-100)!\n";
    while (attempts < maxAttempts) {
        cout << "Attempt " << attempts + 1 << " of " << maxAttempts << ". Enter your guess: ";
        cin >> guess;
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts + 1 << " attempts." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try a higher number." << endl;
        } else {
            cout << "Too high! Try a lower number." << endl;
        }   
        attempts++;
    }
    if (attempts == maxAttempts) {
        cout << "Sorry, you've run out of attempts. The correct number was " << secretNumber << "." << endl;
    }
    return 0;
}

int Lab2_Q9(){
    int sequence[] = {2, 3, 1};
    int sequenceIndex = 0; 
    int computerChoice = sequence[sequenceIndex++]; 
    if (sequenceIndex == sizeof(sequence) / sizeof(sequence[0])) {
        sequenceIndex = 0; 
    }
    int userChoice;
    cout << "Welcome to the Rock, Paper, Scissors game!\n";
    cout << "Enter your choice:\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Your choice: ";
    cin >> userChoice;
    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice! Please enter a number between 1 and 3.\n";
        return 1;
    }
    cout << "Computer's choice: ";
    switch (computerChoice) {
        case 1:
            cout << "Rock\n";
            break;
        case 2:
            cout << "Paper\n";
            break;
        case 3:
            cout << "Scissors\n";
            break;
    }
    cout << "Your choice: ";
    switch (userChoice) {
        case 1:
            cout << "Rock\n";
            break;
        case 2:
            cout << "Paper\n";
            break;
        case 3:
            cout << "Scissors\n";
            break;
    }
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }
    return 0;
}

int Lab2_Q10(){
    int dayNumber;
    cout << "Enter the day number (like 1 for Monday): ";
    cin >> dayNumber;
    switch (dayNumber) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number! Please enter a number between 1 and 7." << endl;
    }
    return 0;
}

int Lab2_Q11a(){
    int n, i, j;
    cout << "Enter the number of rows (odd number): ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "Please enter an odd number." << endl;
        return 1;
    }
    for (i = 0; i < (n / 2) + 1; i++) {
        for (j = 0; j < n / 2 - i; j++)
            cout << " ";

        for (j = 0; j < 2 * i + 1; j++)
            cout << "*";

        cout << endl;
    }
    for (i = n / 2 - 1; i >= 0; i--) {
        for (j = 0; j < n / 2 - i; j++)
            cout << " ";

        for (j = 0; j < 2 * i + 1; j++)
            cout << "*";

        cout << endl;
    }
    return 0;
}

int Lab2_Q11b(){
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    for (int i = 0; i < cols; i++) {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i < rows - 1; i++) {
        if (i % 2 == 1) {
            cout << "*";
            for (int j = 1; j < cols - 1; j++) {
                cout << " ";  
            }
            cout << "*" << endl; 
        } else {
            for (int j = 0; j < cols; j++) {
                cout << " ";
            }
            cout << endl;
        }
    }
    if (rows > 1) {
        for (int i = 0; i < cols; i++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int Lab2_Q11c(){
    int n = 5; 
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int j = i; j >= 1; --j) {
            cout << j;
        }
        for (int j = 2; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

int Lab2_Q11d() {
    int n = 5;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int Lab2_Q11e(){
    int n = 5; 

    // Upper half of the pattern
    for (int i = 1; i <= n; ++i) {
        // Left side of the pattern
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        // Space in the middle
        for (int j = 1; j <= 2 * (n - i); ++j) {
            std::cout << " ";
        }
        // Right side of the pattern
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Lower half of the pattern
    for (int i = n - 1; i >= 1; --i) {
        // Left side of the pattern
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        // Space in the middle
        for (int j = 1; j <= 2 * (n - i); ++j) {
            std::cout << " ";
        }
        // Right side of the pattern
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

int main()
{
    Student();
    // Lab2_Q1();
    // Lab2_Q2();
    // Lab2_Q3();
    // Lab2_Q4();
    // Lab2_Q5();
    // Lab2_Q6();
    // Lab2_Q7();
    // Lab2_Q8();
    // Lab2_Q9();
    // Lab2_Q10();
    // Lab2_Q11a();
    // Lab2_Q11b();
    // Lab2_Q11c();
    // Lab2_Q11d();
        Lab2_Q11e();
    return 0;
}