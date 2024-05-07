// NIM - Name
// NIM - Name

#include <stdio.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include "./libs/repository.h"

int main(int _argc, char **_argv)
{
    // Buka berkas dorm-repository.txt untuk membaca data asrama
    FILE *dorm_file = fopen("./storage/dorm-repository.txt", "r");
    if (dorm_file == NULL) {
        fprintf(stderr, "Error opening dorm-repository.txt\n");
        return 1;
    }

    // Baca dan tampilkan data asrama
    char dorm_data[100];
    while (fgets(dorm_data, sizeof(dorm_data), dorm_file) != NULL) {
        printf("%s", dorm_data);
    }
    fclose(dorm_file);

    // Buka berkas student-repository.txt untuk membaca data mahasiswa
    FILE *student_file = fopen("./storage/student-repository.txt", "r");
    if (student_file == NULL) {
        fprintf(stderr, "Error opening student-repository.txt\n");
        return 1;
    }

    // Baca dan tampilkan data mahasiswa
    char student_data[100];
    while (fgets(student_data, sizeof(student_data), student_file) != NULL) {
        printf("%s", student_data);
    }
    fclose(student_file);

    return 0;
}