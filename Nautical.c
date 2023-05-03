// Copyright (c) 2022 Nina Mathew All rights reserved
//
// Created by: Nina Mathew
// Created on: April 14, 2023
// This program does a for loop


void nauticalMiles() {
    int nauticalMiles;
    int kilometers;
    int ScanError = 0;

    printf("Enter a distance in nautical miles: ");
    ScanError = scanf("%d", &nauticalMiles);

    if (ScanError == 0) {
        printf("Invalid input");
    } else {
        for (kilometers = 0; kilometers <= nauticalMiles; kilometers++) {
            printf("%d nautical miles is %d kilometers\n", kilometers,
            kilometers * 1.852);
        }
    }

    int main() {
        // Call functions
        nauticalMiles();
        return 0;
    }
}
