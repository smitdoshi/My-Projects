//
//  Opt_logic.cpp
//  Optimization_Problem
//
//  Created by SMIT N.DOSHI on 04/05/15.
//  Copyright (c) 2015 SMIT N.DOSHI. All rights reserved.
//

#include "Opt_logic.h"

// Default Constructor

Task::Task(){
    Task_name = ' ';
    
}

// Overload Constructor

Task::Task(char name,int start, int end, int profit){
    
    Task_name  = name;
    Start_time = start;
    End_time   = end;
    Profit     = profit;
}

// Destructor
Task::~Task(){
    
}

// Getters

char Task::getTaskName() {
    return Task_name;
}

int Task::getStartTime(){
    return Start_time;
}

int Task::getEndTime(){
    return End_time;
}

int Task::getProfit(){
    return Profit;
}

// Setters

void Task::setTaskName(char name){
    Task_name = name;
}

void Task::setStartTime(int startTime){
    Start_time = startTime;
}

void Task::setEndTime(int endTime){
    End_time = endTime;
}

void Task::setProfit(int profit){
    Profit = profit;
}
