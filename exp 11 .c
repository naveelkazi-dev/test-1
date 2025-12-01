/* Aim : WAP to maintain a simple employee database using file handling
   Name : KAZI NAVEEL
   UIN  : 251P020
   Roll No : 19
   Division : C1
*/

#include <stdio.h>

struct emp {
    int id;
    char name[50];
    float salary;
};

int main() {

    struct emp e;
    FILE *f;
    int n, i;

    f = fopen("emp.txt", "w");   // file opens for writing fresh data

    printf("How many employees? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        printf("\nEnter ID: ");
        scanf("%d", &e.id);

        printf("Enter Name: ");
        scanf("%s", e.name);

        printf("Enter Salary: ");
        scanf("%f", &e.salary);

        fprintf(f, "%d %s %.2f\n", e.id, e.name, e.salary); // saving in file
    }

    fclose(f);
    printf("\nData Saved in emp.txt\n");

    // ================= DISPLAY PART ================= //

    f = fopen("emp.txt", "r");
    if(f == NULL) {
        printf("Error opening file!");
        return 0;
    }

    printf("\n\n--- Employee Database ---\n");
    printf("ID\tName\tSalary\n");
    printf("------------------------------\n");

    while(fscanf(f, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
        printf("%d\t%s\t%.2f\n", e.id, e.name, e.salary);
    }

    fclose(f);
    return 0;
}
