//
// Created by charl on 2017-02-05.
//

#ifndef OS_A2_MAIN_H
#define OS_A2_MAIN_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//should be used as array of proc_info each element containing an array
//of thread_info to loop through in the sim
typedef struct proc_info {
    int proc_num;
    int num_threads;
    int thread_switch;
    int proc_switch;
    struct thread_info *threads;
}proc_info;

typedef struct thread_info {
    int parent_proc;
    int thread_num;
    int arrival_time;
    int num_cpu;
}thread_info;

void parse_info();
#endif //OS_A2_MAIN_H
