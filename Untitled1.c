#include <stdio.h>

// Structure to hold student data
struct Student {
    char name[100];
    int id;
    int ct1;
    int ct2;
    int ct3;
    int mid;
    int final;
    int total;
};

int main() {
    struct Student students[2];
    int i;
    //input  for student 1
    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%99s", students[0].name);
    printf("ID: ");
    scanf("%d", &students[1].id);
    printf("CT1 out of 10: ");
    scanf("%d", &students[0].ct1);
    printf("CT2 out of 10: ");
    scanf("%d", &students[0].ct2);
    printf("CT3 out of 10: ");
    scanf("%d", &students[0].ct3);
    printf("MID out of 30: ");
    scanf("%d", &students[0].mid);
    printf("FINAL out of 40: ");
    scanf("%d", &students[0].final);

    // Calculate total for student 1
    students[0].total = students[0].ct1 + students[0].ct2 + students[0].ct3 + students[0].mid + students[0].final;

    // Input and calculation for student 2
    printf("Enter details for student 2:\n");
    printf("Name: ");
    scanf("%99s", students[1].name);
    printf("ID: ");
    scanf("%d", &students[1].id);
    printf("CT1 out of 10: ");
    scanf("%d", &students[1].ct1);
    printf("CT2 out of 10: ");
    scanf("%d", &students[1].ct2);
    printf("CT3 out of 10: ");
    scanf("%d", &students[1].ct3);
    printf("MID out of 30: ");
    scanf("%d", &students[1].mid);
    printf("FINAL out of 40: ");
    scanf("%d", &students[1].final);

    // Calculate total for student 2
    students[1].total = students[1].ct1 + students[1].ct2 + students[1].ct3 + students[1].mid + students[1].final;

    // Output the total marks for both students
    printf("\nTotal marks obtained:\n");
    for (i = 0; i < 2; i++) {
        printf("%s (ID: %d): %d out of 100\n", students[i].name, students[i].id, students[i].total);
    }

    return 0;
}
