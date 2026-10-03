// Online C++ compiler (editor)
// Write and run C++ online using this editor.
/*
    Author: David Toluwanimi
    Task: Build a student Record Program
*/
#include <iostream>
#include <string>
using namespace std;
//Declaration of the user details printing function
void printingUserDetails(string fullName, string department, int age, float GPA, int level );

int main() {
    // Defining Variables
    string fullName, department;
    int age, level;
    float  GPA;
    //Collecting User Details.
    cout<<"Hi, we would be having a little questionaire"<<endl;
    cout<<"___________________________________________________"<<endl;
    cout<<"Enter your name: "<<endl;
    getline(cin, fullName);
    cout<<"Enter your department: "<<endl;
    getline(cin, department);
    cout<<"Enter your age: "<<endl;
    cin>>age;
    cout<<"Enter your GPA: "<<endl;
    cin>>GPA;
    cout<<"Enter your Level: "<<endl;
    cin>>level;
    printingUserDetails(fullName, department,age,GPA,level);
    //Signal that no errors were exprienced
    return 0;
}


//Building of the user detialls printing function.
void printingUserDetails(string fullName, string department, int age, float GPA, int level ){
    int Percentage;
    cout<<"================================="<<endl;
    cout<<"       STUDENT PROFILE"<<endl;
    cout<<"================================="<<endl;
    cout<<"Name:       "<<fullName<<endl;
    cout<<"Age:        "<<age<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Level:      "<<level<<"L"<<endl;
    cout<<"GPA:        "<<GPA<<endl;
    Percentage= (GPA / 5) *100;
    cout<<"Percentage: "<<Percentage<<"%"<<endl;
    cout<<"================================="<<endl;   
}
