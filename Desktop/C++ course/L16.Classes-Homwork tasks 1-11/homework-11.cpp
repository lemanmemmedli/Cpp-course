#include <iostream>
#include <vector>

using namespace std;

/*
    Exercise:
    Implement a program to store and manage the information of students in a class. 
    Each student should have the following attributes: name, roll number, 
    and marks in three subjects (Maths, Physics, and Chemistry).

    1. Define a struct called Student that holds the attributes mentioned above.

    2. Implement a class called Classroom that represents a class of students. 
    The class should have the following functionalities:
        Add a new student to the class.
        Display the details of all students in the class.
        Calculate and display the average marks of each student.
        
    3. In the main() function, create an instance of the Classroom class. 
    Prompt the user to enter the details of multiple students and add them to the class. 
    After adding the students, display the details of all students and their average marks.
*/


/* Solution */
struct Student {
    string name;
    string roll;
    int number;
    double Maths;
    double Physics;
    double Chemistr;


    
};

class Classroom {
    private:
        vector<Student> students;

    public:

    void Add(Student student){
        students.push_back(student);
    }

    void  Display(){
        for(const Student &s : students){
            cout<<s.name<<endl;
            cout<<s.roll<<endl;
            cout<<s.number<<endl;
            cout<<s.Maths<<endl;
            cout<<s.Physics<<endl;
            cout<<s.Chemistr<<endl;
            
        }

    }

    void displayave(){
        for(const Student &s : students){
            double ave=(s.Maths+s.Chemistr+s.Physics)/3;
            cout<<s.name<<ave<<endl;
        }

    }
        
};



int main() {

    /*      Example usage:     */
    Classroom classroom;

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << endl;

        Student student;
        cout << "Name: ";
        cin >> student.name;
        cout << "Roll Number: ";
        cin >> student.roll;
        cout << "Maths Marks: ";
        cin >> student.Maths;
        cout << "Physics Marks: ";
        cin >> student.Physics;
        cout << "Chemistry Marks: ";
        cin >> student.Chemistr;

        classroom.Add(student);
        cout << endl;
    }

    cout << "Details of all students:" << endl;
    classroom.Display();

    cout << "Average marks of each student:" << endl;
    classroom.displayave();
    
    return 0;
}