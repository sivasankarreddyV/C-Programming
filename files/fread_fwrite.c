// Here’s an example C program that demonstrates how to use the fread() and fwrite() functions to read from and write to binary files. These functions are typically used when working with binary data or when you need to handle data in chunks rather than character-by-character or line-by-line.
// Using fread() and fwrite()

#include <stdio.h>

struct Record {
    int id;
    float value;
    char name[20];
};

int main() {
    FILE *file;
    struct Record records[3] = {
        {1, 12.34, "Record One"},
        {2, 56.78, "Record Two"},
        {3, 90.12, "Record Three"}
    };
    struct Record readRecords[3];

    // Writing to a binary file
    file = fopen("data.bin", "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    fwrite(records, sizeof(struct Record), 3, file);
    fclose(file);

    // Reading from the binary file
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    fread(readRecords, sizeof(struct Record), 3, file);
    fclose(file);

    // Displaying the read records
    for (int i = 0; i < 3; i++) {
        printf("Record %d: ID = %d, Value = %.2f, Name = %s\n", i+1, readRecords[i].id, readRecords[i].value, readRecords[i].name);
    }

    return 0;
}

