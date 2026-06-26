#include <iostream>
using namespace std;

    struct Student
{
    string name;
    int rollNo;
    float cgpa;
};

Student students[100];
int count = 0;

void menu();
void addStudent();
void displayStudents();
void searchStudent();

    int main()
     {
    int choice;

        do
        {
            menu();
    
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}


    void menu()
    {

        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
    }

    void addStudent()
{
    cout << "\nEnter Student Name: ";
    cin >> students[count].name;

    cout << "Enter Roll Number: ";
    cin >> students[count].rollNo;

    cout << "Enter CGPA: ";
    cin >> students[count].cgpa;

    count++;

    cout << "\nStudent Added Successfully!\n";
}

void displayStudents()
{
    if(count == 0)
    {
        cout << "\nNo student records found!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";

    for(int i = 0; i < count; i++)
    {
        cout << "Name: " << students[i].name << endl;
        cout << "Roll No: " << students[i].rollNo << endl;
        cout << "CGPA: " << students[i].cgpa << endl;
        cout << "--------------------------\n";
    }
}

void searchStudent()
{
    int roll;

    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for(int i = 0; i < count; i++)
    {
        if(students[i].rollNo == roll)
        {
            cout << "\nStudent Found!\n";
            cout << "Name: " << students[i].name << endl;
            cout << "Roll No: " << students[i].rollNo << endl;
            cout << "CGPA: " << students[i].cgpa << endl;
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

