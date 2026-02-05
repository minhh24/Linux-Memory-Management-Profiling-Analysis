#include <stdlib.h>
#include <stdio.h>

int main() {
    // Cấp phát bộ nhớ cho một mảng số nguyên mà không giải phóng
    for (int i = 0; i < 10; i++) {
        int *leak = (int*)malloc(1024 * 1024 * sizeof(int)); // Cấp phát 4MB
        if (leak == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
        // Cố ý không giải phóng vùng nhớ được cấp phát để tạo memory leak
    }

    printf("Memory has been allocated but not freed. Exiting.\n");
    return 0;
}

