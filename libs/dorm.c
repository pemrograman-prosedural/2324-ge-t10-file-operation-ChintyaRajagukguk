#include "dorm.h"
#include <stdio.h>

// Provide the definition of the load_dorm_data function
void load_dorm_data() {
    FILE *dorm_file = fopen("./storage/dorm-repository.txt", "r");
    if (dorm_file == NULL) {
        fprintf(stderr, "Error opening dorm-repository.txt\n");
        return;
    }

    printf("Data Asrama:\n");
    char dorm_data[100];
    while (fgets(dorm_data, sizeof(dorm_data), dorm_file) != NULL) {
        printf("%s", dorm_data);
    }
    fclose(dorm_file);
}
