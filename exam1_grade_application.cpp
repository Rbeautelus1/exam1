#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <fstream> // this Library opens files .txt
#include <cstdlib>
#include <string>


using namespace std;

/*Problem 1 (10 points). Prototy the desinged functions*/


void print_student_name(string student_name[], string student_id[], float exam1[], float exam2[],float exam3[], int num_students);
int print_student_id(string student_name[],string student_id[],float exam1[],float exam2[],float exam3[], int num_students);
void edit_student_name(string student_name[], int position);
void print_list(string student_name[],string student_id[], float exam1[],float exam2[],float exam3[],int num_students);

                   // code here problem1


int main()
{
//Prolem 2 (5 points). Create an ifstream object called inputFile

       ifstream inputFile;// code here problem2


    // string arrays and int arrays to load student's name, id, and exams grade.
    string student_name[9]={};
    string student_id[9]={};
    float exam1[9]={};
    float exam2[9]={};
    float exam3[9]={};
 
   int count = 0;
    int expression = 0;
    int num_students = 0;
    int position = 0;
    bool find = false;

//Problem 3 (5 points). Open the output file using the open function
  inputFile.open("students_info.txt");                         // code here problem3




     
/*Problem 4 (20 points).  
    Read your students_info file until get the information of your last student (10 points):
    a. Save the students names on your student_name array (2 points)
    b. Save the students ids on your student_id array (2 points)
    c. Save the exam1 grades on your exam1 array (2 points)
    d. Save the exam2 grades on your exam2 array (2 points)
    e. Save the exam3 grades on your exam3 array (2 points)
    f. close the students_info file*/


     while(!inputFile.eof())
    {
        //inputFile is like cin
        inputFile >> student_name[count];
        inputFile >> student_id[count];
        inputFile >> exam1[count];  
        inputFile >> exam2[count];
        inputFile >> exam3[count];
       
        cout << "Student : " << student_name[count] << " " << student_id[count] << " " << exam1[count] << " " << exam2[count] << " " << exam3[count] << endl;
        }    
         inputFile.close();       // code here problem4




   
    //Problem 5 (3 points). Print the number of student loaded .
    cout << num_students << " students were loaded" << endl;                    
  // code here problem 5




    /*Problem 6 (8 points). Create a menu that with the following options;
     a. Find the a student by the name (2 points).
     b. Find the a student by id (2 points).
     c. Edit student's name (2 points)
     f. Print all student information (2 points).
    */
   cout<<"\n\n*******************************************"<<endl;
  cout<<"*****"<<setw(19)<<" MENU "<<setw(19)<<"*****"<<endl;
  cout<<left<<"1."<<setw(5)<<" Find student by name. "<<endl;
  cout<<left<<"2."<<setw(5)<<" Find student by id. "<<endl;
  cout<<left<<"3."<<setw(5)<<" Edit a student's name. "<<endl;
  cout<<left<<"4."<<setw(5)<<" Print all student information. "<<endl;
  cout<<"*******************************************\n"<<endl;  
 
  cin >> expression;                    // code here problem6





   /*Problem 7 (10 points. Read the selected option using a switch staments)*/
      switch (expression)
      {
        case 1:
          print_student_name(student_name,student_id,exam1,exam2,exam3, num_students);
          break;
        case 2:
         print_student_id(student_name,student_id,exam1,exam2,exam3, num_students);
          break;
        case 3:
          position = print_student_id(student_name,student_id,exam1,exam2,exam3,num_students);
          edit_student_name(student_name,position);
          print_list(student_name,student_id,exam1,exam2,exam3,num_students);
        default:
         break;
      }                          // code here problem7



}

/*Define the requiered functions below */

/*Problem 8 (10 points). Write a function that find a student by name with the follwing speficication:
  1. The function must recieves the following arguments: name[],  id[],  exam1[],
     exam2[],  exam3[],  nums_students,  &position.
  2. The function will ask to the user type the student name. ex. Carlos-Theran  
  3. Print the information of the given student if it is find otherwise print student was not found.
  4. The function must stop searching the given student if this is found.
  5. The function must save the position of the student in the array into the variable position.
  5. The function must return true if the student is found or false otherwise.  
*/

    void print_student_name(string student_name[], string student_id[], float exam1, float exam2, float exam3, int num_students){
       string sname;
       cout << "Type students name: ";
       cin >> sname;

       bool found = false;
       for(int i=0; i<num_students;i++)
  {
    if (!student_name[i].compare(sname))
    {
      found = true;
      printf("\nThe information of the student is: %s %s \n",student_name[i].c_str(),student_id[i].c_str());
      printf("% f %f %f ", exam1[i], exam2[i],exam3[i]);
    }
  }

    }                           // code here problem8




/*Problem 9 (10 points): Write a function that edit the name of a student with the following specifications:
  1. The function must recieves the following arguments: position, and name[]
  2. The function will ask to the user for the new studen name.
  3. Replace the old name by the given in step 2.*/

   void edit_student_name(string student_name[], int position){
     
      string new_name;
      int len = student_name[position].length();

      cout << "Enter new student name: ";
      cin >> new_name;

      cout << "Change name " << student_name[position] << " by " << new_name << endl;
      student_name[position].replace(0,len,new_name);

   }                             // code here problem9


                               

/*
Problem 10 (10 points): Create a function that print the all the stundets and their information.
You need to specify what is needed as a arguements and output. 
*/
 void print_list(string student_name[],string student_id[], float exam1[],float exam2[],float exam3[],int num_students)
 {
  cout<<" Student information: "<<endl;
  for(int i=0;i<num_students;i++)
  {
    printf("Studnet info: %s %s \n ",student_name[i].c_str(),student_id[i].c_str());
    printf(" %f %f %f", exam1[i],exam2[i],exam3[i]);
  }
} 
// code here problem10