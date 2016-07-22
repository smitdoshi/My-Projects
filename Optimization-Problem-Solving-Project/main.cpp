//
//  main.cpp
//  Optimization_Problem
//
//  Created by SMIT N.DOSHI on 04/05/15.
//  Copyright (c) 2015 SMIT N.DOSHI. All rights reserved.
//

#include <iostream>
#include <vector>

#include "Opt_logic.h"


void fillVector(vector<Task>&);
// fill Vector  - fill in the Task Information
// @param Vector <Task>&

void printVector(vector<Task>&);
//PrintVector - prints the Vector information of all Task
// @parma vector <Task>& - task in class;

// Another variables to access the inputs from the user.
// Declaration and Intialization of variables

static int numb_Task;
char newName;
int  newStart;
int  newEnd ;
int  newProfit;


int main(int argc, const char * argv[]) {
    using namespace std;
   
    
    vector<Task> myTask;
    
    fillVector(myTask);
    printVector(myTask);
    
    return 0;
}


// Function definition

void fillVector(vector<Task>& newMyTask){
    
    ofstream fileWritter("User_Input.txt"); // Storing the Values in the File
    
    cout << "How many Task are there: ";
    
    cin  >> numb_Task;
    
    cout << "Storing Values in Vector \n";
    
    int loop1 = 0;
    do {
        cout << "Task[enter the character]: ";   ;
        cin  >> newName;
        fileWritter << newName;
        
        cout << "\tStart Time:";
        cin  >> newStart;
        fileWritter << newStart;
        
        cout <<"\tEnd Time: ";
        cin  >> newEnd;
        fileWritter << newEnd;
        
        cout <<"\tProfit: ";
        cin  >> newProfit;
        fileWritter << newProfit;
        
        // Storing the values in Vector Logic
        
        Task newTask(newName,newStart,newEnd,newProfit);
        
        // Store the info in the Vector this way.
        
        newMyTask.push_back(newTask);                       // This will Store the values in the Vector
        cout << endl;
        
        //**** Storing the values in the File Logic ****
        
        cout << "Values are also stored in File";
        cout << endl;
//        // Storing the value in the file
//        if (fileWritter) {
//            fileWritter << "Task: " << newName <<  "  Start:" << newStart << "  End:" << newEnd << "  Profit:" << newProfit;
//            fileWritter << "\n";
//        }
        loop1++;
    } while ((loop1 <numb_Task)&& fileWritter);
    fileWritter.close();
    cout << "File Closed.\n\n";
}

//Print Vector

void printVector(vector<Task>& newMyTask){
    
    // Reading the File
    
    ifstream fileReader;
    fileReader.open("UserIp.txt");
    
    cout << "Printing values from the Vector \n";
    
    unsigned int size = newMyTask.size();
    for(unsigned int loop2 = 0;loop2 < size;loop2++)
    {
        cout << "Task: " << newMyTask[loop2].getTaskName() << endl;
        cout << "\tStart Time:" << newMyTask[loop2].getStartTime() << endl;
        cout <<"\tEnd Time: " << newMyTask[loop2].getEndTime() << endl;
        cout <<"\tProfit: " << newMyTask[loop2].getProfit() << endl;
        cout << endl;
    }

}