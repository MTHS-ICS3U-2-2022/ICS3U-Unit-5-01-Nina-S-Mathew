#!/usr/bin/env python3
""""
Created by: Nina Mathew
Created on: April 17, 2023
This is the " value of one number raised to the power of another. " module
"""


def nautical_miles():
    nautical_miles_str = input("Enter a distance in nautical miles: ")

    try:
        nautical_miles = int(nautical_miles_str)
    except ValueError:
        print("Invalid Input, Please Try Again.")
    else:
        kilometers = 1.85 * nautical_miles
        print(f"The distance in kilometers is: {kilometers:.3f} km")


def main() -> None:
    """The main() function calls other functions to run the program, Returns None."""

    nautical_miles()

    print("\nDone.")


if __name__ == "__main__":
    main()
