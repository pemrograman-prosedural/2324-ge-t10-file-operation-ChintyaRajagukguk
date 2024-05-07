// NIM - Name
// NIM - Name

#include <stdio.h>
#include <string.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include "./libs/repository.h"

// Function to save dorm data to file
void save_dorm_data() {
    FILE *dorm_file = fopen("./storage/dorm-repository.txt", "w");
    if (dorm_file == NULL) {
        fprintf(stderr, "Error opening dorm-repository.txt for writing\n");
        return;
    }

    for (int i = 0; i < dorm_count; i++) {
        fprintf(dorm_file, "%s|%d|%s|%d\n", dorms[i].name, dorms[i].capacity, dorms[i].gender, dorms[i].status);
    }

    fclose(dorm_file);
}

// Function to save student data to file
void save_student_data() {
    FILE *student_file = fopen("./storage/student-repository.txt", "w");
    if (student_file == NULL) {
        fprintf(stderr, "Error opening student-repository.txt for writing\n");
        return;
    }

    for (int i = 0; i < student_count; i++) {
        fprintf(student_file, "%s|%s|%d|%s|%s\n", students[i].nim, students[i].name, students[i].year, students[i].gender, students[i].dorm);
    }

    fclose(student_file);
}

int main(int argc, char **argv)
{
    // Your existing code to load and display data

    // Save dorm and student data to files
    save_dorm_data();
    save_student_data();

    return 0;
}

