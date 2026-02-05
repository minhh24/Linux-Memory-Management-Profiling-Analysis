#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 100000;  // Số lượng phần tử trong mảng
    int *array = malloc(n * sizeof(int));

    if (array == NULL) {
        fprintf(stderr, "Không thể cấp phát bộ nhớ\n");
        return 1;
    }

    // Khởi tạo và tính tổng các phần tử trong mảng
    int sum = 0;
    for (int i = 0; i < n; i++) {
        array[i] = i;
        sum += array[i];
    }

    printf("Tổng các phần tử trong mảng: %d\n", sum);

    // Giải phóng bộ nhớ
    free(array);

    return 0;
}

