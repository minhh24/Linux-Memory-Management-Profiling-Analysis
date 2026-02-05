#include <stdlib.h>
#include <stdio.h>

int main() {
    // Cấp phát và giải phóng bộ nhớ cho một mảng số nguyên
    for (int i = 0; i < 10; i++) {
        int *leak = (int*)malloc(1024 * 1024 * sizeof(int)); // Cấp phát 4MB
        if (leak == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
        // Giải phóng vùng nhớ đã cấp phát sau khi sử dụng
        free(leak);
    }

    printf("Memory has been allocated and freed. Exiting.\n");
    return 0;
}

