/*
Name: Saviyo Thomas
Roll No: CS11
Date: 14/08/2026
AIM: Create an application to manage employee data using structures. The program should allow input, display, and update employee details such as name, ID, salary, and department.
ALGORITHM:
Step 1: Start
Step 2: Define employee structure with name, id, salary, department and array of 50 with count
Step 3: Display menu repeatedly: 1.Enter details 2.Update details 3.Display details 4.Exit
Step 4: For input read name, id, department, salary and append via ip, for update search by id and edit selected field, for display print table
Step 5: On choice 4 exit
Step 6: Stop
*/
#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int id;
    float sal;
    char dept[50];
} e[50];

int count = 0;

// Helper function to clear leftover characters in the stdin buffer
void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Helper function to trim trailing newlines from fgets
void trim_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void ip(char n[50], char d[50], int id, float sal) {
    if (count >= 50) {
        printf("\nDatabase full!\n");
        return;
    }
    strcpy(e[count].name, n);
    strcpy(e[count].dept, d);
    e[count].id = id;
    e[count].sal = sal;
    count++;
}

void dis() {
    if (count == 0) {
        printf("\nNo employee records found.\n");
        return;
    }
    printf("\n%-20s %-10s %-15s %-10s", "Name", "ID", "Department", "Salary");
    printf("\n---------------------------------------------------------");
    for (int i = 0; i < count; i++) {
        printf("\n%-20s %-10d %-15s %-10.2f", e[i].name, e[i].id, e[i].dept, e[i].sal);
    }
    printf("\n");
}

void update(int t) {
    int temp;
    for (int i = 0; i < count; i++) {
        if (e[i].id == t) {
            printf("\nWhat to edit?\n1. Name\n2. ID\n3. Department\n4. Salary\n5. GO BACK\nChoice: ");
            scanf("%d", &temp);
            clear_buffer();

            switch (temp) {
                case 1:
                    printf("Enter new name: ");
                    fgets(e[i].name, 50, stdin);
                    trim_newline(e[i].name);
                    break;
                case 2:
                    printf("Enter new ID: ");
                    scanf("%d", &e[i].id);
                    clear_buffer();
                    break;
                case 3:
                    printf("Enter new Department: ");
                    fgets(e[i].dept, 50, stdin);
                    trim_newline(e[i].dept);
                    break;
                case 4:
                    printf("Enter new Salary: ");
                    scanf("%f", &e[i].sal);
                    clear_buffer();
                    break;
                case 5:
                    return;
                default:
                    printf("Invalid option.\n");
            }
            return;
        }
    }
    printf("\nEmployee ID %d not found.\n", t);
}

int main() {
    int ch, id, t;
    float sal;
    char n[50], d[50];

    while (1) {
        printf("\n------Menu------\n1. Enter employee details\n2. Update employee details\n3. Display employee details\n4. Exit\nEnter choice: ");
        if (scanf("%d", &ch) != 1) break;
        clear_buffer();

        switch (ch) {
            case 1:
                printf("\nEnter employee name: ");
                fgets(n, 50, stdin);
                trim_newline(n);

                printf("Enter employee id: ");
                scanf("%d", &id);
                clear_buffer();

                printf("Enter department: ");
                fgets(d, 50, stdin);
                trim_newline(d);

                printf("Enter salary: ");
                scanf("%f", &sal);
                clear_buffer();

                ip(n, d, id, sal);
                break;
            case 2:
                dis();
                if (count > 0) {
                    printf("\nEnter the ID of the employee to edit: ");
                    scanf("%d", &t);
                    clear_buffer();
                    update(t);
                }
                break;
            case 3:
                dis();
                break;
            case 4:
                return 0;
            default:
                printf("\nEnter a valid input\n");
                break;
        }
    }
    return 0;
}

/*
Input:
1, saviyo, 78, cs, 45000.50 (add)
1, johny, 1145, phy, 7800 (add)
3 (display)
2, 87 (update not found)
2, 78, 2, 5578 (update ID)
3 (display)
4 (exit)
Output:

------Menu------
1. Enter employee details
2. Update employee details
3. Display employee details
4. Exit
Enter choice: 
Enter employee name: Enter employee id: Enter department: Enter salary: 
------Menu------
1. Enter employee details
2. Update employee details
3. Display employee details
4. Exit
Enter choice: 
Enter employee name: Enter employee id: Enter department: Enter salary: 
------Menu------
1. Enter employee details
2. Update employee details
3. Display employee details
4. Exit
Enter choice: 
Name                 ID         Department      Salary    
---------------------------------------------------------
saviyo               78         cs              45000.50  
johny                1145       phy             7800.00   

------Menu------
1. Enter employee details
2. Update employee details
3. Display employee details
4. Exit
Enter choice: 
Name                 ID         Department      Salary    
---------------------------------------------------------
saviyo               78         cs              45000.50  
johny                1145       phy             7800.00   

Enter the ID of the employee to edit: 
Employee ID 87 not found.

------Menu------
1. Enter employee details
2. Update employee details
3. Display employee details
4. Exit
Enter choice: 
Name                 ID         Department      Salary    
---------------------------------------------------------
saviyo               78         cs              45000.50  
johny                1145       phy             7800.00   

Enter the ID of the employee to edit: 
What to edit?
1. Name
2. ID
3. Department
4. Salary
5. GO BACK
Choice: Enter new ID: 
------Menu------
1. Enter employee details
2. Update employee details
3. Display employee details
4. Exit
Enter choice: 
Name                 ID         Department      Salary    
---------------------------------------------------------
saviyo               5578       cs              45000.50  
johny                1145       phy             7800.00   

------Menu------
1. Enter employee details
2. Update employee details
3. Display employee details
4. Exit
Enter choice:
*/
