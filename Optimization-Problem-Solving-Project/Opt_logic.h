//
//  Opt_logic.h
//  Optimization_Problem
//
//  Created by SMIT N.DOSHI on 04/05/15.
//  Copyright (c) 2015 SMIT N.DOSHI. All rights reserved.
//

#ifndef __Optimization_Problem__Opt_logic__
#define __Optimization_Problem__Opt_logic__

#include <stdio.h>
#include <iostream>
#include <istream>
#include <fstream>



using namespace std;

class Task{
public:
    
    // Default Constructor
    Task();
    
    // Overload Constructor
    Task(char,int,int,int);
    
    // Destructor
    ~Task();
    
    // Accessor Function
    
    char getTaskName();
    //getTaskName
    //@return char - get the Task Name
    
    int getStartTime();
    //getStartTime
    //@param int - get the Start time of the task
    
    int getEndTime();
    //getEndTime
    //@param int - get the End Time of the task
    
    int getProfit();
    //getProfit
    //param int -  get the Profit Time of the task
    
    // Mutator Function
    
    void setTaskName(char);
    // setTaskName
    // @param char - setTaskName;
    
    void setStartTime(int);
    // setStartTime
    // @param int - setStartTime
    
    void setEndTime(int);
    // setEndTime
    // @param int - setEndTime
    
    void setProfit(int);
    // setProfit
    // @param int - setProfit.
    
private:
    char Task_name;
    int Start_time;
    int End_time;
    int Profit;
    
};


#endif /* defined(__Optimization_Problem__Opt_logic__) */
