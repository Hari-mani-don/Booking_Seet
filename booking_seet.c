
     //2D array

//Booking cenima seet program in c


#include <stdio.h>

#define ROWS 5
#define COLS 10  

int initializeSeatingChart(int seatingChart[ROWS][COLS]) {
    // Initialize the seating chart with available seats
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seatingChart[i][j] = 0; // 0 represents an available seat
        }
    }
}

int printSeatingChart(int seatingChart[ROWS][COLS]) {
    
    printf("Seating Chart:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", seatingChart[i][j]);
        }
        printf("\n");
    }
}

int reserveSeat(int seatingChart[ROWS][COLS], int row, int column) {
    if (row >= 0 && row < ROWS && column >= 0 && column < COLS) {
        if (seatingChart[row][column] == 0) {
            seatingChart[row][column] = 1; // 1 represents a reserved seat
            printf("Seat at Row %d, Column %d reserved.\n", row, column);
        } else {
            printf("Seat at Row %d, Column %d is already reserved.\n", row, column);
        }
    } else {
        printf("Invalid seat coordinates.\n");
    }
}

int main() {
    int seatingChart[ROWS][COLS];

    initializeSeatingChart(seatingChart);
    printSeatingChart(seatingChart);

    reserveSeat(seatingChart, 2, 4);
    reserveSeat(seatingChart, 1, 3);
    reserveSeat(seatingChart, 0, 2);
    reserveSeat(seatingChart, 2, 4);

    printSeatingChart(seatingChart);

    return 0;
}
