#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int Student(){
    cout<<"Name : Tooba Fayyaz"<<endl;
    cout<<"Roll No. : SE-23071"<<endl;
    return 0;
}

void swap(int *ptra, int *ptrb){
    cout << "Before Swaping:" << endl;
    cout << "a = " << *ptra << endl;
    cout << "b = " << *ptrb << endl;
    int temp;
    temp = *ptrb;
    *ptrb = *ptra;
    *ptra = temp;
    cout << "After Swaping:" << endl;
    cout << "a = " << *ptra << endl;
    cout << "b = " << *ptrb << endl;
}

int Lab4_Q1(){
    int a = 2;
    int b = 5;
    int *ptr1 = &a;
    int *ptr2 = &b;
    swap(ptr1, ptr2);
    return 0; 
}

void rev_arr(int *arr, int size){
    int *start = arr;
    int *end = arr + (size - 1);
    while (start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int Lab4_Q2(){
    int array[] = {1,2,3,4,5};
    cout << "Original array: ";
    int size = sizeof(array) / sizeof(int);
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";}
    cout << endl;
    int *arr = array;
    rev_arr(arr, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    return 0;
}

int* findMax(int arr[], int size) {
    if (size <= 0) return nullptr;
    int* maxPtr = &arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }
    return maxPtr;
}

int Lab4_Q3() {
    int arr[] = {1, 4, 9, 2, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* maxElementPtr = findMax(arr, size);
    if (maxElementPtr != nullptr) {
        cout << "Maximum element = " << *maxElementPtr << endl;
    } else {
        cout << "The array is empty." << endl;
    }
    return 0;
}

void removeDuplicates(int *arr, int& size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size;) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; ++k) {
                    arr[k] = arr[k + 1];}
                size--;} 
            else {
                j++;}
        }
    }
}

int Lab4_Q4() {
    int array[] = {1, 2, 5, 1, 4, 2, 5, 6};
    int size = sizeof(array) / sizeof(int);
    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";}
    cout << endl;
    removeDuplicates(array, size);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";}
    cout << endl;
    return 0;
}

bool isPalindrome(const char *str) {
    if (str == nullptr) 
        return false;
    int len = strlen(str);
    const char *start = str;
    const char *end = str + len - 1;

    while (start < end) {
        if (*start != *end) {
            return false; }
        start++;
        end--; }
    return true; 
}

int Lab4_Q5() {
    const char *str1 = "radar";
    const char *str2 = "hello";
    cout << str1 << " is a palindrome: " << boolalpha << isPalindrome(str1) << endl;
    cout << str2 << " is a palindrome: " << boolalpha << isPalindrome(str2) << endl;
    return 0;
}

int main()
{
    Student();
    Lab4_Q1();
    Lab4_Q2();
    Lab4_Q3();
    Lab4_Q4();
    Lab4_Q5();
    return 0;
}