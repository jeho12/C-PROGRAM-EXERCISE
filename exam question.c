#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define COURSE_NAME "CMP 211"

// Define a structure to represent a student
struct Student {
    char full_name[100];
    float final_score;
};

// Function to input student details
void input_student_details(struct Student students[], int num_students) {
    for (int i = 0; i < num_students; i++) {
        printf("Enter full name for student %d: ", i + 1);
        scanf(" %[^\n]s", students[i].full_name);
    }
}

// Function to input final scores
void input_final_scores(struct Student students[], int num_students) {
    for (int i = 0; i < num_students; i++) {
        printf("Enter final score for %s: ", students[i].full_name);
        scanf("%f", &students[i].final_score);
    }
}

// Function to compute the total score of the class
float compute_class_total(struct Student students[], int num_students) {
    float total = 0.0;
    for (int i = 0; i < num_students; i++) {
        total += students[i].final_score;
    }
    return total;
}

// Function to compute the average score of the class
float compute_class_average(struct Student students[], int num_students) {
    float total_score = compute_class_total(students, num_students);
    return total_score / num_students;
}

// Main function
int main() {
    struct Student students[MAX_STUDENTS];
    int num_students;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    if (num_students > MAX_STUDENTS) {
        printf("Number of students exceeds maximum limit.\n");
        return 1;
    }

    input_student_details(students, num_students);

    input_final_scores(students, num_students);

    float total_score = compute_class_total(students, num_students);
    float average_score = compute_class_average(students, num_students);

    printf("\nClass Total Score for %s: %.2f\n", COURSE_NAME, total_score);
    printf("Class Average Score for %s: %.2f\n", COURSE_NAME, average_score);

    return 0;
}

