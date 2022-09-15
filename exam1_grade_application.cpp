/*
     COOP 3330 - Object Oriented Programming
                Exam#1 
             Total poinst 91           
        Instructor:Carlos Theran        
*/

#include <iostream>
#include <stdio.h>
#include <fstream> // this Library opens files .txt
#include <cstdlib>
#include <string>


using namespace std;

/*Problem 1 (10 points). Prototy the desinged functions*/

                        // code here problem1


int main()
{
//Prolem 2 (5 points). Create an ifstream object called inputFile 

                        // code here problem2


    // string arrays and int arrays to load student's name, id, and exams grade.
    string student_name[9]={};
    string student_id[9]={};
    float exam1[9]={};
    float exam2[9]={};
    float exam3[9]={}; 
  

    int expression = 0;
    int num_students = 0;
    int position = 0;
    bool find = false;

//Problem 3 (5 points). Open the output file using the open function 
                            // code here problem3



     
/*Problem 4 (20 points).  
    Read your students_info file until get the information of your last student (10 points):
    a. Save the students names on your student_name array (2 points)
    b. Save the students ids on your student_id array (2 points)
    c. Save the exam1 grades on your exam1 array (2 points)
    d. Save the exam2 grades on your exam2 array (2 points) 
    e. Save the exam3 grades on your exam3 array (2 points)
    f. close the students_info file*/

                                // code here problem4




    
    //Problem 5 (3 points). Print the number of student loaded . 
                        // code here problem5




    /*Problem 6 (8 points). Create a menue that with the following options;
     a. Find the a student by the name (2 points).
     b. Find the a student by id (2 points).
     c. Edit student's name (2 points)
     f. Print all student information (2 points).
    */ 
                                // code here problem6





   /*Problem 7 (10 points. Read the selected option using a switch staments)*/
                                // code here problem7



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

                                // code here problem8




/*Problem 9 (10 points): Write a function that edit the name of a student with the following specifications:
  1. The function must recieves the following arguments: position, and name[]
  2. The function will ask to the user for the new studen name.
  3. Replace the old name by the given in step 2.*/

                                // code here problem9


                                

/*
Problem 10 (10 points): Create a function that print the all the stundets and their information.
You need to specify what is needed as a arguements and output.
*/
                                // code here problem10