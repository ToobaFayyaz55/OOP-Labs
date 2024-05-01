#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int Student(){
    cout<<"Name : Tooba Fayyaz"<<endl;
    cout<<"Roll No. : SE-23071"<<endl;
    return 0;
}

struct Person {
    char name[50];
    int age;
};

int Lab3_Q1(){
    struct Person person1 = {"Tooba", 18};
    printf("Person's name: %s\n", person1.name);
    printf("Person's age: %d\n", person1.age);
    return 0;
}

struct Rectangle {
    float length;
    float width;
};

int Lab3_Q2(){
    struct Rectangle rect;
    printf("Enter length: ");
    scanf("%f", &rect.length);
    printf("Enter width: ");
    scanf("%f", &rect.width);
    float area = rect.length * rect.width;
    printf("Area of rectangle: %.2f\n", area);
    return 0;
}

struct Number {
    int num;
};

void swap(struct Number *n1, struct Number *n2) {
    int temp = n1->num;
    n1->num = n2->num;
    n2->num = temp;
}

int Lab3_Q3(){
    struct Number num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1.num);
    printf("Enter num2: ");
    scanf("%d", &num2.num);
    swap(&num1, &num2);
    printf("After swapping:\n");
    printf("Num1: %d\n", num1.num);
    printf("Num2: %d\n", num2.num);
    return 0;
}

struct Product {
    char productName[100];
    float price;
    int quantity;
};

int Lab3_Q4(){
    struct Product product;
    printf("Enter product name: ");
    scanf("%s", product.productName);
    printf("Enter price: ");
    scanf("%f", &product.price);
    printf("Enter quantity: ");
    scanf("%d", &product.quantity);
    float totalCost = product.price * product.quantity;
    printf("Total cost: %.2f\n", totalCost);
    return 0;
}

struct Student {
    int rollNumber;
    char name[50];
    int age, marks;
};

int Lab3_Q5(){
    struct Student students[3];
    float maxMarks = 0;
    int maxIndex = 0;
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%d", &students[i].marks);

        if (students[i].marks > maxMarks) {
            maxMarks = students[i].marks;
            maxIndex = i;
        }
    }
    printf("\nStudent with the highest marks:\n");
    printf("Roll Number: %d\n", students[maxIndex].rollNumber);
    printf("Name: %s\n", students[maxIndex].name);
    printf("Marks: %d\n", students[maxIndex].marks);
    return 0;
}

struct Employee {
    int employeeID;
    char name[50];
    char department[50];
    float salary;
};

int Lab3_Q6(){
    struct Employee employees[5];
    float totalSalary = 0;
    for (int i = 0; i < 5; ++i) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Department: ");
        scanf("%s", employees[i].department);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        totalSalary += employees[i].salary;
    }
    printf("\nDetails of all employees:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].employeeID);
        printf("Name: %s\n", employees[i].name);
        printf("Department: %s\n", employees[i].department);
        printf("Salary: %.2f\n", employees[i].salary);
    }
    printf("\nAverage salary of all employees: %.2f\n", totalSalary / 5);
    return 0;
}

struct Book {
    char title[100];
    char author[100];
    char genre[50];
    int yearOfPublication;
};

int Lab3_Q7(){
     struct Book books[3];
    int minYearIndex = 0;
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Genre: ");
        scanf("%s", books[i].genre);
        printf("Year of Publication: ");
        scanf("%d", &books[i].yearOfPublication);
        if (books[i].yearOfPublication < books[minYearIndex].yearOfPublication) {
            minYearIndex = i;
        }
    }
    printf("\nDetails of the book with the earliest publication year:\n");
    printf("Title: %s\n", books[minYearIndex].title);
    printf("Author: %s\n", books[minYearIndex].author);
    printf("Genre: %s\n", books[minYearIndex].genre);
    printf("Year of Publication: %d\n", books[minYearIndex].yearOfPublication);
    return 0;
}

int main()
{
    Student();
    // Lab3_Q1();
    // Lab3_Q2();
    // Lab3_Q3();
    // Lab3_Q4();
    // Lab3_Q5();
    // Lab3_Q6();
    Lab3_Q7();
    return 0;
}