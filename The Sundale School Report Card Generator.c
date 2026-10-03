#include <stdio.h>

int main() {
    int numStudents;
    printf("Enter number of students: ");
    scanf("%d", &numStudents);

    for (int i = 1; i <= numStudents; ++i) {
        double m1, m2, m3;
        printf("\nStudent %d marks in 3 subjects: ", i);
        scanf("%lf %lf %lf", &m1, &m2, &m3);

        double avg = (m1 + m2 + m3) / 3.0;
        int scaled = (int)(avg) / 10;

        char grade;
        switch (scaled) {
            case 10:
            case 9:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }

        int passed = (avg >= 60.0) && (m1 >= 40.0) && (m2 >= 40.0) && (m3 >= 40.0);
        
        printf("Average: %.2f | Grade: %c | Status: %s\n", avg, grade, passed ? "Passed" : "Failed");
    }
    return 0;
}