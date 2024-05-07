#include "gender.h"
#include <stdio.h>

void load_gender_data() {
    FILE *gender_file = fopen("./storage/gender-repository.txt", "r");
    if (gender_file == NULL) {
        fprintf(stderr, "Error opening gender-repository.txt\n");
        return;
    }

    printf("Data Gender:\n");
    char gender_data[100];
    while (fgets(gender_data, sizeof(gender_data), gender_file) != NULL) {
        printf("%s", gender_data);
    }
    fclose(gender_file);
}
