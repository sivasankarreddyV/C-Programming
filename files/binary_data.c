// Binary files store data in the same format in which it is held in memory. You can read and write binary files using fread() and fwrite().
// Writing and Reading Binary Data

#include <stdio.h>

struct Data {
    int id;
    float value;
};

int main() {
    struct Data data = {1, 23.45};
    
    // Writing to a binary file
    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    fwrite(&data, sizeof(struct Data), 1, file);
    fclose(file);

    // Reading from a binary file
    struct Data read_data;
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    fread(&read_data, sizeof(struct Data), 1, file);
    fclose(file);

    printf("ID: %d, Value: %.2f\n", read_data.id, read_data.value);
    return 0;
}

