/* Denys Odoviychuk
 * Section 3
 * Spring 2026 */

#include "lab9.h"

char *degreeNames[] = {"HS", "AA", "BS", "MS", "PhD"};

emp_t *head = NULL;
emp_t *tail = NULL;

int loadEmpData(char *datafileName) {
    int fd = open(datafileName, O_RDONLY);
    if(fd == -1) {
        fprintf(stderr, "Error: cannot open file %s\n", datafileName);
        return 0;
    }

    emp_disk_t diskRec;
    int count = 0;

    while(read(fd, &diskRec, sizeof(emp_disk_t)) == sizeof(emp_disk_t)) {
        emp_t *emp = malloc(sizeof(emp_t));
        if(emp == NULL) {
            fprintf(stderr, "Error: malloc failed for emp\n");
            return count;
        }

        emp->empID = diskRec.empID;
        emp->name = malloc(MAXNMLEN);
        strcpy(emp->name, diskRec.name);
        emp->dob = diskRec.dob;
        emp->deptID = diskRec.deptID;
        emp->degree = diskRec.degree;
        emp->next = NULL;

        if(head == NULL) {
            head = emp;
            tail = emp;
        } else {
            tail->next = emp;
            tail = emp;
        }

        printf("Adding employee ID: %d\n", emp->empID);
        count++;
    }

    close(fd);
    return count;
}

static void printReverse(emp_t *curr) {
    if(curr == NULL)
        return;
    printReverse(curr->next);
    printEmpRecord(curr);
}
void printEmpList(char direction) {
    emp_t *curr = head;
    if(direction == 'f') {
        printf("Employee list in Forward direction:\n");
        while(curr != NULL) {
            printEmpRecord(curr);
            curr = curr->next;
        }
    } else if(direction == 'r') {
        printf("Employee list in Reverse direction:\n");
        printReverse(head);
    }
}

void printEmpRecord(emp_t *empRec) {
    printf("ID: %d\n", empRec->empID);
    printf("Name: %s\n", empRec->name);
    printf("DOB: %d/%d/%d\n", empRec->dob.day, empRec->dob.month, empRec->dob.year);
    printf("Dept: %d\n", empRec->deptID);
    printf("Degree: %s\n", degreeNames[empRec->degree]);
}
