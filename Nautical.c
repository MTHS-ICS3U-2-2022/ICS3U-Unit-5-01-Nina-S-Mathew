// Copyright (c) 2022 Nina Mathew All rights reserved
//
// Created by: Nina Mathew
// Created on: April 14, 2023
// This program does a for loop

#include <stdio.h>

void nauticalMiles() {
    float nauticalMile;
    float kilometers;
    int ScanError = 0;

    printf("Enter a distance in nautical miles: ");
    ScanError = scanf("%f", &nauticalMile);

    if (ScanError == 0) {
        printf("Invalid input\n");
    } else {
        kilometers = nauticalMile * 1.85;
        printf("\n%.0f nautical miles is %.3f km\n", nauticalMile, kilometers);
    }
}

int main() {
        // Call functions
    nauticalMiles();
    printf("\nDone.\n");
    return 0;
}
