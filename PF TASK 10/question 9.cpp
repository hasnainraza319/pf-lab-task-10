#include <stdio.h>

struct Employee {
    int employee_ID;
    char name[80];
    char department[80];
    float salary;
};

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int j = 0; j < n; j++) {
        printf("\nEnter details for the  employee %d:\n", j + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[j].employee_ID);
        printf("Name: ");
        scanf(" %[^\n]", employees[j].name);
        printf("Department: ");
        scanf(" %[^\n]", employees[j].department);
        printf("Salary: ");
        scanf("%f", &employees[j].salary);
    }

    printf("\nEmployee Details are:\n");
    for (int k = 0; k < n; k++) {
        printf("\nEmployee %d\n", k + 1);
        printf("Employee ID: %d\n", employees[k].employee_ID);
        printf("Name: %s\n", employees[k].name);
        printf("Department: %s\n", employees[k].department);
        printf("Salary: %.2f\n", employees[k].salary);
    }

    return 0;
}

