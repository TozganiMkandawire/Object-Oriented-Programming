#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_seat(int** seat, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j > 0) printf(" ");
            printf("%02d", seat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    const int SIZE = 10;
    int** seat = (int**)malloc(SIZE * sizeof(int*));
    for (int i = 0; i < SIZE; i++) {
        seat[i] = (int*)malloc(SIZE * sizeof(int));
        memset(seat[i], 0, SIZE * sizeof(int));
    }
    seat[0][0] = 11; seat[0][3] = 24;
    seat[1][1] = 35;
    seat[2][5] = 47;
    seat[3][3] = 58;
    seat[4][9] = 69;
    seat[5][0] = 70; seat[5][5] = 81; seat[5][9] = 92;
    seat[6][4] = 13;
    seat[7][7] = 26;
    seat[8][2] = 39;
    seat[9][9] = 44;

    printf("[Original Seat Map]\n");
    print_seat(seat, SIZE, SIZE);

    int** backup = (int**)malloc(SIZE * sizeof(int*));
    for (int i = 0; i < SIZE; i++) {
        backup[i] = (int*)malloc(SIZE * sizeof(int));
        memcpy(backup[i], seat[i], SIZE * sizeof(int));
    }

    printf("\n[Backup Seat Map]\n");
    print_seat(backup, SIZE, SIZE);

    memset(seat[5], 0, SIZE * sizeof(int));
    printf("\n[Original Seat Map After Clearing Row 5]\n");
    print_seat(seat, SIZE, SIZE);

    printf("\n[Backup Seat Map After Original Was Modified]\n");
    print_seat(backup, SIZE, SIZE);

    int maxCount = -1, maxRow = 0;
    for (int i = 0; i < SIZE; i++) {
        int count = 0;
        for (int j = 0; j < SIZE; j++)
            if (backup[i][j] != 0) count++;
        if (count > maxCount) {
            maxCount = count;
            maxRow = i;
        }
    }

    printf("\n[Row With Most Assigned Seats]\n");
    printf("Row: %d\n", maxRow);
    printf("Count: %d\n", maxCount);

    for (int i = 0; i < SIZE; i++) {
        free(seat[i]);
        free(backup[i]);
    }
    free(seat);
    free(backup);

    return 0;
}