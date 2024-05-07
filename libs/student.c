#include "student.h"
#include <stdio.h>

// Provide the definition of the load_student_data function
void load_student_data() {
    FILE *student_file = fopen("./storage/student-repository.txt", "r");
    if (student_file == NULL) {
        fprintf(stderr, "Error opening student-repository.txt\n");
        return;
    }

    printf("\nData Mahasiswa:\n");
    char student_data[100];
    while (fgets(student_data, sizeof(student_data), student_file) != NULL) {
        printf("%s", student_data);
    }
    fclose(student_file);
}
