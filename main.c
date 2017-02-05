#include "main.h"

#define BUFF 1024

int main(int argc, char **argv) {
    bool d_flag = false, v_flag = false, r_flag = false;
    int tq = 10, i = 0;
    //argument parsing
    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-d") == 0 && !d_flag) {
            d_flag = true;
        }
        if (strcmp(argv[i], "-v") == 0 && !v_flag) {
            v_flag = true;
        }
        if (strcmp(argv[i], "-r") == 0 && !r_flag) {
            r_flag = true;
            i++;
            if (i > argc) {
                printf("No time quantum specified, using default value of 10\n");
            } else {
                tq = atoi(argv[i]);
            }
        }
    }
    parse_info();
    return(0);
}

void parse_info() {
    int num_procs = 0, thread_switch = 0, proc_switch = 0;
    char buff[BUFF];
//    proc_info *list;
    fgets(buff, BUFF, stdin);
    if (sscanf(buff, "%d %d %d", &num_procs, &thread_switch, &proc_switch) == 3) {
//        list = malloc(sizeof(proc_info) * num_procs);
        printf("%d %d %d", num_procs, thread_switch, proc_switch);
    } else {
        printf("Error in input file. Double check correct format");
        exit(EXIT_FAILURE);
    }

    return;
}