#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

void addStudent() {
    struct Student s;
    FILE *file = fopen("students.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fprintf(file, "%d %s %.2f\n", s.roll_no, s.name, s.marks);
    fclose(file);

    printf("Student record added successfully!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n=== Student Record Management System ===\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                printf("View Students option selected.\n");
                break;
            case 3:
                printf("Search Student option selected.\n");
                break;
            case 4:
                printf("Update Student option selected.\n");
                break;
            case 5:
                printf("Delete Student option selected.\n");
                break;
            case 6:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
