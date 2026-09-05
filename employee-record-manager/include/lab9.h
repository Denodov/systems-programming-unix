/* Denys Odoviychuk
 * Section 3
 * Spring 2026 */
#ifndef LAB9_H
#define LAB9_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

#define MAXNMLEN 50
#define NUMEMPS 5

typedef struct date {
    int day;
    int month;
    int year;
} date_t;

typedef enum {
    HS, AA, BS, MS, PhD
} degree_t;

extern char *degreeNames[];

typedef int empID_t, deptID_t;

typedef struct emp {
    empID_t empID;
    char *name;
    date_t dob;
    deptID_t deptID;
    degree_t degree;
    struct emp *next;
} emp_t;

typedef struct emp_disk {
    empID_t empID;
    char name[MAXNMLEN];
    char padding[2];
    date_t dob;
    deptID_t deptID;
    degree_t degree;
    char padding2[20];
} emp_disk_t;

extern emp_t *head;
extern emp_t *tail;

int loadEmpData(char *datafileName);
void printEmpList(char direction);
void printEmpRecord(emp_t *empRec);

extern int running;
void handleSIGUSR1(int sig);
void handleSIGTERM(int sig);

#endif
