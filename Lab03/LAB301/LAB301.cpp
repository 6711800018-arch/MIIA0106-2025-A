// LAB301.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    printf("A + B = %d\n", a + b);
    printf("A - B = %d\n", a - b);
    printf("A * B = %d\n", a * b);
    printf("A / B = %d\n", a / b);
    printf("A %% B = %d\n", a % b);

    return 0;
}*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentID;
    string studentName;
    int score;
    string grade;

    cout << "Enter student ID : ";
    cin >> studentID;
    cin.ignore();
    cout << "Enter your name : ";
    getline(cin, studentName);
    cout << "Enter your score : ";
    cin >> score;
    if (score >= 90) {
        grade = "A";
    }
    else if (score >= 80) {
        grade = "B";
    }
    else if (score >= 70) {
        grade = "C";
    }
    else {
        grade = "F";
    }
    cout << "====== Student Report ======" << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Name: " << studentName << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
