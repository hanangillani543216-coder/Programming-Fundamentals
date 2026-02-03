#include <iostream>
using namespace std;

/*
----------------------------------
STUDENT UTILITY MANAGEMENT SYSTEM
Programming Fundamentals Project
----------------------------------
This program demonstrates:
Arrays, Functions, Loops, If-Else,
Pointers (Call by Reference),
Input / Output and Operators
-----------------------------------
*/


// GLOBAL CONSTANTS

const int MAX_STUDENTS = 40;
const int SUBJECTS = 5;


// FUNCTION DECLARATIONS

void showHeader();
void showMenu();

void addStudent(int[], int[], int[][SUBJECTS], float[], int&);
void displayStudents(int[], int[], int[][SUBJECTS], float[], int);
void searchStudent(int[], int[], float[], int);
void updateStudent(int[], int[], int[][SUBJECTS], float[], int);
void deleteStudent(int[], int[], int[][SUBJECTS], float[], int&);

void showGrades(int[], float[], int);
void showPassFailList(int[], float[], int);
void showStudentCount(int);

char calculateGrade(float);


// MAIN FUNCTION

int main()
{
    // Data storage arrays
    int studentID[MAX_STUDENTS];
    int studentAge[MAX_STUDENTS];
    int studentMarks[MAX_STUDENTS][SUBJECTS];
    float studentPercentage[MAX_STUDENTS];

    // Control variables
    int totalStudents = 0;
    int choice;
    bool programRunning = true;

    showHeader();

    // Menu loop
    while (programRunning)
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent(studentID, studentAge, studentMarks,
                       studentPercentage, totalStudents);
            break;

        case 2:
            displayStudents(studentID, studentAge, studentMarks,
                            studentPercentage, totalStudents);
            break;

        case 3:
            searchStudent(studentID, studentAge,
                          studentPercentage, totalStudents);
            break;

        case 4:
            updateStudent(studentID, studentAge, studentMarks,
                          studentPercentage, totalStudents);
            break;

        case 5:
            deleteStudent(studentID, studentAge, studentMarks,
                          studentPercentage, totalStudents);
            break;

        case 6:
            showGrades(studentID, studentPercentage, totalStudents);
            break;

        case 7:
            showPassFailList(studentID, studentPercentage, totalStudents);
            break;

        case 8:
            showStudentCount(totalStudents);
            break;

        case 0:
            programRunning = false;
            cout << "\nProgram terminated successfully.\n";
            break;

        default:
            cout << "\nInvalid choice! Try again.\n";
        }
    }

    return 0;
}


//  HEADER

void showHeader()
{
	cout << "\t----Welcome----\n\t";
    cout << "\n----------------------------------\n";
    cout << " STUDENT UTILITY MANAGEMENT SYSTEM\n";
    cout << " Programming Fundamentals Project\n";
    cout << "----------------------------------\n";
}


//  MENU 

void showMenu()
{
    cout << "\n\t MAIN MENU \t\n";
    cout << "1. Add Student\n";
    cout << "2. Display Students\n";
    cout << "3. Search Student\n";
    cout << "4. Update Student\n";
    cout << "5. Delete Student\n";
    cout << "6. Show Grades\n";
    cout << "7. Pass / Fail List\n";
    cout << "8. Total Students\n";
    cout << "0. Exit\n";
    cout << "-----------------------------\n";
    cout << "Enter your choice: ";
}


// ADD STUDENT FUNCTION

void addStudent(int id[], int age[], int marks[][SUBJECTS],
                float percentage[], int &total)
{
    if (total >= MAX_STUDENTS)
    {
        cout << "Student limit reached.\n";
        return;
    }

    cout << "Enter Student ID: ";
    cin >> id[total];

    cout << "Enter Student Age: ";
    cin >> age[total];

    int sum = 0;

    for (int i = 0; i < SUBJECTS; i++)
    {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[total][i];
        sum += marks[total][i];
    }

    percentage[total] = sum / 5.0;
    total++;

    cout << "Student added successfully.\n";
}


// DISPLAY STUDENTS

void displayStudents(int id[], int age[], int marks[][SUBJECTS],
                     float percentage[], int total)
{
    if (total == 0)
    {
        cout << "No records found.\n";
        return;
    }

    for (int i = 0; i < total; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << id[i] << endl;
        cout << "Age: " << age[i] << endl;

        cout << "Marks: ";
        for (int j = 0; j < SUBJECTS; j++)
            cout << marks[i][j] << " ";

        cout << "\nPercentage: " << percentage[i] << "%";
        cout << "\nGrade: " << calculateGrade(percentage[i]) << endl;
        cout << "--------------------------\n";
    }
}


// SEARCH STUDENT

void searchStudent(int id[], int age[], float percentage[], int total)
{
    int searchID;
    cout << "Enter Student ID: ";
    cin >> searchID;

    for (int i = 0; i < total; i++)
    {
        if (id[i] == searchID)
        {
            cout << "Student Found!\n";
            cout << "Age: " << age[i] << endl;
            cout << "Percentage: " << percentage[i] << "%\n";
            cout << "Grade: " << calculateGrade(percentage[i]) << endl;
            return;
        }
    }

    cout << "Student not found.\n";
}


// UPDATE STUDENT

void updateStudent(int id[], int age[], int marks[][SUBJECTS],
                   float percentage[], int total)
{
    int updateID;
    cout << "Enter Student ID to update: ";
    cin >> updateID;

    for (int i = 0; i < total; i++)
    {
        if (id[i] == updateID)
        {
            cout << "Enter new age: ";
            cin >> age[i];

            int sum = 0;
            for (int j = 0; j < SUBJECTS; j++)
            {
                cout << "Enter new marks for subject " << j + 1 << ": ";
                cin >> marks[i][j];
                sum += marks[i][j];
            }

            percentage[i] = sum / 5.0;
            cout << "Record updated successfully.\n";
            return;
        }
    }

    cout << "Student ID not found.\n";
}


// DELETE STUDENT

void deleteStudent(int id[], int age[], int marks[][SUBJECTS],
                   float percentage[], int &total)
{
    int deleteID;
    cout << "Enter Student ID to delete: ";
    cin >> deleteID;

    for (int i = 0; i < total; i++)
    {
        if (id[i] == deleteID)
        {
            for (int j = i; j < total - 1; j++)
            {
                id[j] = id[j + 1];
                age[j] = age[j + 1];
                percentage[j] = percentage[j + 1];

                for (int k = 0; k < SUBJECTS; k++)
                    marks[j][k] = marks[j + 1][k];
            }

            total--;
            cout << "Record deleted successfully.\n";
            return;
        }
    }

    cout << "Student ID not found.\n";
}


// SHOW GRADES

void showGrades(int id[], float percentage[], int total)
{
    for (int i = 0; i < total; i++)
        cout << "ID: " << id[i]
             << " | Grade:"
             << calculateGrade(percentage[i]) << endl;
}


// PASS / FAIL LIST

void showPassFailList(int id[], float percentage[], int total)
{
    for (int i = 0; i < total; i++)
    {
        if (percentage[i] >= 40)
            cout << "ID: " << id[i] << " -> PASS\n";
        else
            cout << "ID: " << id[i] << " -> FAIL\n";
    }
}


// STUDENT COUNT

void showStudentCount(int total)
{
    cout << "Total Students: " << total << endl;
}


// GRADE CALCULATION

char calculateGrade(float percentage)
{
    if (percentage >= 80)
        return 'A';
    else if (percentage >= 60)
        return 'B';
    else if (percentage >= 40)
        return 'C';
    else
        return 'F';
}

