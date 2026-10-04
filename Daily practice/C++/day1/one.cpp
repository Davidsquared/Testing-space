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
    float course1Score, course2Score, course3Score;
    
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

    //Bonus challenge: Add a average calculator.
    cout<<"Enter first course's score: "<<endl;
    cin>>course1Score;
    cout<<"Enter second course's score: "<<endl;
    cin>>course2Score;
    cout<<"Enter Third course's score: "<<endl;
    cin>>course3Score;
    float averageScore;
    string comments;
    averageScore = (course1Score + course2Score, course3Score)/3;
    if (averageScore<=100 || averageScore >= 70) {
        comments = "Excellent";
    }
    else if (averageScore<=69 || averageScore >= 60) {
        comments = "Very Good";
    }
    else if (averageScore<=59 || averageScore >= 50) {
        comments = "Good";
    }
    else if (averageScore<=49 || averageScore >= 40) {
        comments = "Pass";
    }
    else if (averageScore<=39 || averageScore >= 0) {
        comments = "Fail";
    }
    else {
        comments = "Matrix calculations include errors";
    }

    //Printing out outputs
    printingUserDetails(fullName, department,age,GPA,level);
    cout<<"Comments: "<<comments<<endl;
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
