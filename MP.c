/***************************************************************************
This is to certify that this project is my own work, based on my personal
efforts in studying and applying the concepts learned. I have constructed
the functions and their respective algorithms and corresponding code by
myself.
The program was run, tested, and debugged by my own efforts. I further
certify that I have not copied in part or whole or otherwise plagiarized
the work of other students and/or persons.
Arwyn Gabrielle A. Telosa, DLSU ID# 12209228
***************************************************************************/
/*
Description: This is a machine code that executes three things
The first option is pattern and number generation using
the user's four integer input. The second option is number
series sequencing, which requires the user to provide a
starting
point and a second input indicating how many numbers
they want
in the series. Users can also select the type of sequence
they
want to construct. Finally, there is a proper exit code
for the machine code.
Programmed by: Telosa, Arwyn Gabrielle A. [S13 B]
Last modified: {01 / 12 / 2022}
Version: 5
[Acknowledgements: [2022] CCPROG 1 Course Notes
]
[2022] CCPROG 1 Modules 1 to 6
[2022] CCPROG 1 Self - Evaluation Exercises &
Answers
[2022] CCPROG 1 Answers & Slide Files
by LIM-CHENG, Nathalie Rose
*/

#include <stdio.h>

#include <math.h>

#include <stdlib.h>

void displayOptions();
void displayMenu1();
void displayMenu2();

/* START of FUNCTIONS CALLED THROUGHOUT THE CODE */
/* This feature clears the exe file's screen and keeps the program
from running until a key is pressed.
*/
void clearScreen() {
  system("pause");
  system("cls");
}
/* This function shows an error message when the userenters an
invalid integer and does not meet specific conditions.
*/
void displayInvalid() {
  printf("\n");
  printf("INVALID INPUT\n");
  printf("[PRESS ENTER TO PROCEED BACK TO THE MAIN MENU]\n\n");
}
/* This function determines whether or not the parameter passed
is a prime number.
Precondition: if the function is called and a single integer value is passed
@param nPrime - represents the integer that is being passed to the
function
@return 1 - if the function is a prime number
@return 0 - if the function is not a prime number
*/
int primeChecker(int nPrime) {
  int nFactor, nFactors;
  nFactor = 1;
  nFactors = 0;
  while (nFactor <= nPrime) // checks 1 to
    nPrime exclusively {

      if (nPrime % nFactor == 0)
        nFactors++; //
      increments nFactors whenever nPrime is divisible to nFactor
      nFactor++; //
      increments nFactor before a loop ends
    }
  if (nFactors == 2)
    return 1; // returns 1,
  if only 2 factors
  else
    return 0; // returns 0,
  if not
}
/* END of FUNCTIONS CALLED THROUGHOUT THE CODE */
/* START OF FUNCTIONS FOR OPTION 2 */
/* This function gets X increments of N, starting from the
given integer of Y.
Precondition: if nExecute == 1
@param N - is the incrementing value
@param X - is the number of increments to be displayed
@param Y - is the starting value
*/
void
getIncrement(int N,
  int X,
  int Y) {
  int nRounds;
  printf("%d ", Y); // prints the first value
  while (nRounds != X - 1) // continues the loop
    until nRounds is unequal to X - 1 { // X - 1
      since first value was already printed
      printf("%d ", Y + N); // prints Y plus the
      incrementing value N
      nRounds++; //
      increments nRounds before starting the next loop
      Y += N; // makes
      sure to start from the latest value
    }
  printf("\n\n");
  clearScreen();
  displayMenu2();
}
/* This function gets X decrements of N, starting from the
given integer of Y.
Precondition: if nExecute == 2
@param N - is the decrementing value
@param X - is the number of decrements to be displayed
@param Y - is the starting value
*/
void
getDecrement(int N,
  int X,
  int Y) {
  int nRounds;
  printf("%d ", Y); // prints the first value
  while (nRounds != X - 1) // continues the loop
    until nRounds is unequal to X - 1 { // X - 1
      since first value was already printed
      printf("%d ", Y - N); // prints Y plus the
      decrementing value N
      nRounds++; //
      increments nRounds before starting the next loop
      Y -= N; // makes
      sure to start from the latest value
    }
  printf("\n\n");
  clearScreen();
  displayMenu2();
}
/* This function gets X even numbers starting from the
given integer of Y.
Precondition: if nExecute == 3 & Y should be a even number
@param X - is the number of even numbers to be displayed
@param Y - is the starting value
*/
void
getEven(int X,
  int Y) {
  int nRounds;
  printf("%d ", Y); // prints the first value
  while (nRounds != X - 1) // continues the loop
    until nRounds is unequal to X - 1 { // X - 1
      since first value was already printed
      printf("%d ", Y + 2); // prints Y plus the
      incrementing value 2
      nRounds++; //
      increments nRounds before starting the next loop
      Y += 2; // makes
      sure to start from the latest value
    }
  printf("\n\n");
  clearScreen();
  displayMenu2();
}
/* This function gets X odd numbers starting from the
given integer of Y.
Precondition: if nExecute == 4 & Y should be a odd number
@param X - is the number of odd numbers to be displayed
@param Y - is the starting value
*/
void
getOdd(int X,
  int Y) {
  int nRounds;
  printf("%d ", Y); // prints the first value
  while (nRounds != X - 1) // continues the loop
    until nRounds is unequal to X - 1 { // X - 1
      since first value was already printed
      printf("%d ", Y + 2); // prints Y plus the
      incrementing value 2
      nRounds++; //
      increments nRounds before starting the next loop
      Y += 2; // makes
      sure to start from the latest value
    }
  printf("\n\n");
  clearScreen();
  displayMenu2();
}
/* This function gets X prime numbers starting from the
given integer of Y.
Precondition: if nExecute == 5 & Y should be a prime number
@param X - is the number of prime numbers to be displayed
@param Y - is the starting value
*/
void
getPrime(int X,
  int Y) {
  int nRounds, nReturn;
  nRounds = 0;
  while (nRounds != X) // continues the loop until
    nRounds is unequal to X {
      nReturn = primeChecker(Y);
      if (nReturn == 1) {
        printf("%d ", Y); // prints the first Y value
        nRounds++; // adds nRounds
        before ending the loop
        Y++; // incrementing Y to
        find the next value that is prime
      } else {
        while (nReturn != 1) // continues until Y is finally a
          prime number {
            Y++;
            nReturn = primeChecker(Y);
          }
      }
    }
  printf("\n\n");
  clearScreen();
  displayMenu2();
}
/* This function gets the starting value, Y, and has conditional statements
depending on which nExecute function the user inputs.
Precondition: if the N & X are valid inputs
@param nExecute - is the option to be executed
@param N - is passed to getIncrement/Decrement as the
incrementing/decrementing value
@param X - is the number of displays
*/
void
getInputY(int nExecute,
  int N,
  int X) {
  int Y;
  printf("INPUT THE VALUE OF Y: ");
  scanf("%d", & Y);
  printf("\n");
  switch (nExecute) {
  case 1:
    getIncrement(N, X, Y);
    break;
  case 2:
    getDecrement(N, X, Y);
    break;
  }
  if (nExecute == 3) {
    if (Y % 2 == 0) // checks if Y is divisble
      by 2
    getEven(X, Y); // calls the function to
    get even numbers
    else // if not an even
      number, then an INVALID message will appear, and revert back to the main
    menu {
      displayInvalid();
      clearScreen();
      displayMenu2();
    }
  }
  if (nExecute == 4) {
    if (Y % 2 == 1) // checks if Y has a
      remainder of 1
    getOdd(X, Y); // calls the function to
    get odd numbers
    else // if not an odd number,
      then an INVALID message will appear, and revert back to the main menu {
        displayInvalid();
        clearScreen();
        displayMenu2();
      }
  }
  if (nExecute == 5) {
    int nPrimeY;
    nPrimeY = primeChecker(Y); // checks if Y is prime
    if (nPrimeY == 1)
      getPrime(X, Y); // calls the function to
    get prime numbers
    else // if not a prime
      number, then an INVALID message will appear, and revert back to the main
    menu {
      displayInvalid();
      clearScreen();
      displayMenu2();
    }
  }
}
/* This function gets the number of displays, X
Precondition: if nExecute from displayMenu2 is either 3, 4, or 5
@param nExecute - is the option to be executed & passed to getInputY to
know which
function to call
*/
void
getInputX(int nExecute) {
  int N, X;
  N = 0; // declares
  N as = since getInputY needs nExecute, N, X values to be passed
  printf("INPUT THE VALUE OF X: ");
  scanf("%d", & X);
  if (X >= 2) // checks if X is
    greater than or equal to 2
  getInputY(nExecute, N, X);
  else // if false,
    displays the INVALID message, and reverts back to the main menu {
      displayInvalid();
      clearScreen();
      displayMenu2();
    }
}
/* This function gets the number of displays, X
Precondition: if nExecute from displayMenu2 is either 1 or 2 & is called by
getInputN
@param nExecute - is the option to be executed & passed to returnInputY
to know which
function to call
@param N - is the incrementing/decrementing value, passed to getInputY
*/
void
returnInputX(int nExecute,
  int N) {
  int X;
  printf("INPUT THE VALUE OF X: ");
  scanf("%d", & X);
  if (X >= 2) // checks if
    X is greater than or equal to 2
  getInputY(nExecute, N, X);
  else // if false,
    displays the INVALID message, and reverts back to the main menu {
      displayInvalid();
      clearScreen();
      displayMenu2();
    }
}
/* This function gets the incrementing or decrementing value, N
Precondition: if the nExecute from displayMenu2 is either 1 or 2
@param nExecute - is the option to be executed & passed to returnInputY
to know which
function to call
*/
void
getInputN(int nExecute) {
  int N;
  printf("INPUT the VALUE OF N: ");
  scanf("%d", & N);
  if (N > 0) // checks if N is a
    positive number
  returnInputX(nExecute, N);
  else // if false,
    displays the INVALID message, and reverts back to the main menu {
      displayInvalid();
      clearScreen();
      displayMenu2();
    }
}
/* END OF FUNCTIONS FOR OPTION 2 */
/* START OF FUNCTIONS FOR OPTION 1 */
/* This function checks if the all four integer values are in an -M +N
series
Precondition: if the findMinusPlus function is called by the findRelation
function
@param nFirst - serves as the first integer to be tested
@param nSecond - serves as the second integer to be tested
@param nThird - serves as the third integer to be tested
@param nFourth - serves as the month integer to be tested
@param *pAnswer - is the next number from nFourth if the series is true
@return 1 - if the inputs are in an -M +N series
@return 0 - if the inputs are not in an -M +N series
*/
int
findMinusPlus(int nFirst,
  int nSecond,
  int nThird,
  int nFourth,
  int * pAnswer) {
  int nMinus, nPlus;
  if (nFirst - nSecond >= 0)
    // checks if nFirst - nSecond is positive
    if (nThird - nSecond >= 0)
      // checks if nThird - nSecond is positive
      if (nFirst - nSecond != 0 || nThird - nSecond != 0)
  // only one should be equal to
  {
    nMinus = nFirst - nSecond;
    // first value -- -M
    nPlus = nThird - nSecond;
    // second value -- +N
    if (nThird - nFourth == nMinus)
    // checks if nThird - nFourth is equal to -M
    {
      printf("-%d %+d Series\n", nMinus, nPlus);
      * pAnswer = nFourth + nPlus;
      // pointer pAnswer is equal to nFourth + N
      return 1;
    } else
      return 0;
  } else
    return 0;
  else
    return 0;
  else
    return 0;
}
/* This function checks if the all four integer values are in an +M -N
series
Precondition: if the findPlusMinus function is called by the findRelation
function
@param nFirst - serves as the first integer to be tested
@param nSecond - serves as the second integer to be tested
@param nThird - serves as the third integer to be tested
@param nFourth - serves as the month integer to be tested
@param *pAnswer - is the next number from nFourth if the series is true
@return 1 - if the inputs are in an +M -N series
@return 0 - if the inputs are not in an +M -N series
*/
int
findPlusMinus(int nFirst,
  int nSecond,
  int nThird,
  int nFourth,
  int * pAnswer) {
  int nPlus, nMinus;
  if (nSecond - nFirst >= 0)
    // checks if nSecond - nFirst is positive
    if (nSecond - nThird >= 0)
      // checks if nSecond - nThird is positive
      if (nSecond - nFirst != 0 || nSecond - nThird != 0)
  // only one should be equal to 0
  {
    nPlus = nSecond - nFirst;
    // first value -- +M
    nMinus = nSecond - nThird;
    // second value -- -N
    if (nFourth - nThird == nPlus)
    // checks if nFourth - nThird is equal to +M
    {
      printf("%+d -%d Series\n", nPlus, nMinus);
      * pAnswer = nFourth - nMinus;
      // pointer pAnswer is nFourth - N
      return 1;
      // if all true, returns 1
    } else
      return 0;
  } else
    return 0;
  else
    return 0;
  else
    return 0;
}
/* This function checks if the all four integer values are in an -M -N
series
Precondition: if the findMinusMN function is called by the findRelation
function
@param nFirst - serves as the first integer to be tested
@param nSecond - serves as the second integer to be tested
@param nThird - serves as the third integer to be tested
@param nFourth - serves as the month integer to be tested
@param *pAnswer - is the next number from nFourth if the series is true
@return 1 - if the inputs are in an -M -N series
@return 0 - if the inputs are not in an -M -N series
*/
int
findMinusMN(int nFirst,
  int nSecond,
  int nThird,
  int nFourth,
  int * pAnswer) {
  int nMinus1, nMinus2;
  if (nFirst - nSecond >= 0)
  // checks if nFirst - nSecond is a positive number
  {
    nMinus1 = nFirst - nSecond;
    // first value -- -M
    if (nSecond - nThird >= 0 && nSecond - nThird != nMinus1) //
      check is nSecond - nThird is a positive number and
    if it is not equal to - M {
      nMinus2 = nSecond - nThird;
      // second value -- -N
      if (nThird - nFourth == nMinus1)
      // checks if nThird - nFourth is equal to -M
      {
        printf("-%d -%d Series\n", nMinus1, nMinus2);
        * pAnswer = nFourth - nMinus2;
        // pointer pAnswer becomes nFourth - N
        return 1;
      } else
        return 0;
    }
    else
      return 0;
  } else
    return 0;
}
/* This function checks if the all four integer values are in an +M +N
series
Precondition: if the findPlusMN function is called by the findRelation
function
@param nFirst - serves as the first integer to be tested
@param nSecond - serves as the second integer to be tested
@param nThird - serves as the third integer to be tested
@param nFourth - serves as the month integer to be tested
@param *pAnswer - is the next number from nFourth if the series is true
@return 1 - if the inputs are in an +M +N series
@return 0 - if the inputs are not in an +M +N series
*/
int
findPlusMN(int nFirst,
  int nSecond,
  int nThird,
  int nFourth,
  int * pAnswer) {
  int nPlus1, nPlus2;
  if (nSecond - nFirst >= 0)
  // checks if nSecond - nFirst is a positive number
  {
    nPlus1 = nSecond - nFirst;
    // first value -- +M
    if (nThird - nSecond >= 0 && nThird - nSecond != nPlus1)
      // check is nThird - nSecond is a positive number and if it is not equal to
      +
      M {
        nPlus2 = nThird - nSecond;
        // second value -- +N
        if (nFourth - nThird == nPlus1)
        // checks if nFourth - nThird is equal to +M
        {
          printf("%+1d %+1d Series\n", nPlus1, nPlus2);
          * pAnswer = nFourth + nPlus2;
          // pointer pAnswer becomes nFourth + N
          return 1;
        } else
          return 0;
      }
    else
      return 0;
  } else
    return 0;
}
/* This function checks if the all four integer values are in an *N
series
Precondition: if the findN function is called by the findRelation function
@param nFirst - serves as the first integer to be tested
@param nSecond - serves as the second integer to be tested
@param nThird - serves as the third integer to be tested
@param nFourth - serves as the month integer to be tested
@param *pAnswer - is the next number from nFourth if the series is true
@return 1 - if the inputs are in an *N series
@return 0 - if the inputs are not in an *N series
*/
int
findN(int nFirst,
  int nSecond,
  int nThird,
  int nFourth,
  int * pAnswer) {
  int N;
  if (nFirst == 0 && nSecond == 0 && nThird == 0 && nFourth == 0)
  // since / 0 is undefined
  {
    // if all inputs are 0, they are
    automatically a * 1 series
    N = 1;
    printf("*%d Series\n", N);
    * pAnswer = nFourth * N;
    return 1;
    // if true, returns 1
  } else if (nFirst != 0 && nSecond != 0 && nThird != 0 && nFourth != 0) {
    if (nSecond / nFirst != 0 && nSecond % nFirst == 0)
      // checks if nSecond is divisible to nFirst and if it is a positive
      number {
        N = nSecond / nFirst;
        // N is the number in which nSecond is
        multiplied to, to make it divisible to nFirst
        if (nThird / nSecond == N && nThird % nSecond == 0)
          // checks if nThird is divisible to nSecond by N
          if (nFourth / nThird == N && nFourth % nThird == 0)
        // checks if nFourth is divisible to nThird by N
        {
          printf("*%d Series\n", N);
          * pAnswer = nFourth * N;
          return 1;
        } else
          return 0;
        else
          return 0;
      }
    else
      return 0;
  } else
    return 0;
}
/* This function checks if the all four integer values are in an decrementing
series
Precondition: if the findDecrement function is called by the findRelation
function
@param nFirst - serves as the first integer to be tested
@param nSecond - serves as the second integer to be tested
@param nThird - serves as the third integer to be tested
@param nFourth - serves as the month integer to be tested
@param *pAnswer - is the next number from nFourth if the series is true
@return 1 - if the inputs are in an decrementing series
@return 0 - if the inputs are not in an decrementing series
*/
int
findDecrement(int nFirst,
  int nSecond,
  int nThird,
  int nFourth,
  int * pAnswer) {
  int nDecrement;
  if (nFirst - nSecond > 0)
  // checks if nFirst - nSecond is a positive number
  {
    nDecrement = nFirst - nSecond;
    // decrement value
    if (nSecond - nThird == nDecrement)
      // checks if nSecond - nThird is equal to the decrement value
      if (nThird - nFourth == nDecrement)
    // checks if nThird - nFourth is equal to the decrement value
    {
      printf("Decrements of %d\n", nDecrement);
      * pAnswer = nFourth - nDecrement;
      // pointer pAnswer is equal to the nFourth minus the decrement value
      return 1;
    } else
      return 0;
    else
      return 0;
  } else
    return 0;
}
/* This function checks if the all four integer values are in an incrementing
series
Precondition: if the findIncrement function is called by the findRelation
function
@param nFirst - serves as the first integer to be tested
@param nSecond - serves as the second integer to be tested
@param nThird - serves as the third integer to be tested
@param nFourth - serves as the month integer to be tested
@param *pAnswer - is the next number from nFourth if the series is true
@return 1 - if the inputs are in an incrementing series
@return 0 - if the inputs are not in an incrementing series
*/
int
findIncrement(int nFirst,
  int nSecond,
  int nThird,
  int nFourth,
  int * pAnswer) {
  int nIncrement;
  if (nSecond - nFirst > 0)
  // checks if nSecond - nFirst is a positive number
  {
    nIncrement = nSecond - nFirst;
    // increment value
    if (nThird - nSecond == nIncrement)
      // checks if nThird - nSecond is equal to the increment value
      if (nFourth - nThird == nIncrement)
    // checks if nFourth - nThird is equal to the increment value
    {
      printf("Increments of %d\n", nIncrement);
      * pAnswer = nFourth + nIncrement;
      // pointer pAnswer is equal to the nFourth plus the increment value
      return 1;
    } else
      return 0;
    else
      return 0;
  } else
    return 0;
}
/* This function checks if the integer is an odd number
@param nNum - the number to be tested if it is odd or not
@return 1 - if function is an odd number
@return 0 - if function is not an odd number
*/
int
checkOdd(int nNum) {
  if (nNum % 2 == 1) // if
    remainder 1, then odd
  return 1;
  else
    return 0;
}
/* This function checks if all four integer inputs are sequential odd numbers
Precondition: if the findEven function is called by the findRelation function
@param nFirst - serves as the first integer to be tested
@param nSecond - serves as the second integer to be tested
@param nThird - serves as the third integer to be tested
@param nFourth - serves as the month integer to be tested
@return 1 - is the next sequential odd value after nFourth
@return 0 - if the 4 integers are not in a sequential odd series
*/
int
findOdd(int nFirst,
  int nSecond,
  int nThird,
  int nFourth) {
  int nOdd1;
  int nRes;
  nFirst = abs(nFirst); // converts
  inputs into positive values
  nSecond = abs(nSecond);
  nThird = abs(nThird);
  nFourth = abs(nFourth);
  nOdd1 = checkOdd(nFirst); // checks if
  the first number is an odd number
  if (nOdd1 == 1) {
    nRes = nFirst;
    if (nRes + 2 == nSecond) // adds 2 to
      check
    if the second number is the next number {
      nRes = nSecond;
      if (nRes + 2 == nThird) {
        nRes = nThird;
        if (nRes + 2 == nFourth)
          return 1;
        else
          return 0;
      } else
        return 0;
    } else
      return 0;
  } else
    return 0;
}
/* This function ckecks if the integer is an even number
@param nNum - the number to be tested if it is even or not
@return 1 - if function is an even number
@return 0 - if function is not an even number
*/
int
checkEven(int nNum) {
  if (nNum % 2 == 0) // if
    remainder 0, then even
  return 1;
  else
    return 0;
}
/* This function checks if all four integer inputs are sequential even
numbers
Precondition: if the findEven function is called by the findRelation function
@param nFirst - serves as the first integer to be tested
@param nSecond - serves as the second integer to be tested
@param nThird - serves as the third integer to be tested
@param nFourth - serves as the month integer to be tested
@return 1 - is the next sequential even value after nFourth
@return 0 - if the 4 integers are not in a sequential even series
*/
int
findEven(int nFirst,
  int nSecond,
  int nThird,
  int nFourth) {
  int nEven1;
  int nRes;
  nFirst = abs(nFirst);
  // converts inputs into positive values
  nSecond = abs(nSecond);
  nThird = abs(nThird);
  nFourth = abs(nFourth);
  nEven1 = checkEven(nFirst);
  // checks if the first number is even
  if (nEven1 == 1) {
    nRes = nFirst;
    if (nRes + 2 == nSecond)
    // adds 2 to check if the second number is the next even number
    {
      nRes = nSecond;
      if (nRes + 2 == nThird) {
        nRes = nThird;
        if (nRes + 2 == nFourth)
          return 1;
        else
          return 0;
      } else
        return 0;
    } else
      return 0;
  } else
    return 0;
}
/* This function finds the next prime number after the given nRes value.
Precondition: if nPrime1 for findPrimeSeq is equal to 1 and if it is called by
the
findPrimeSeq function
@param nRes - the starting prime number
@param nVal - checks if current nRes value is prime or not
@return nRes - is the next prime number after the given starting prime
number
*/
int
checkPrimeSeq(int nRes,
  int nVal) {
  while (nVal != 1) // continues loop while
    nRes is not a prime number {
      nRes++; // starts at
      the latest prime number, increments to the next number
      nVal = primeChecker(nRes); // nVal returns 1 if the
      incremented nRes is prime
    }
  return nRes; // returns the
  latest prime number
}
/* This function checks if all four integer inputs are sequential prime
numbers
Precondition: if the findPrimeSeq function is called by the findRelation
function
@param nFirst - serves as the first integer to be tested
@param nSecond - serves as the second integer to be tested
@param nThird - serves as the third integer to be tested
@param nFourth - serves as the month integer to be tested
@return nRes - is the next sequential prime value after nFourth
@return 0 - if the 4 integers are not in a sequential prime series
*/
int
findPrimeSeq(int nFirst,
  int nSecond,
  int nThird,
  int nFourth) {
  int nPrime1;
  int nRes, nVal;
  nVal = 0;
  // should be 0 since it returns true or false if nRes is prime or not
  nPrime1 = primeChecker(nFirst);
  // checks if nFirst is prime
  if (nPrime1 == 1)
  // starts checking if nFirst is prime
  {
    nRes = nFirst;
    // starts at nFirst
    nRes = checkPrimeSeq(nRes, nVal); //
    nRes becomes the next number from nFirst that is prime
    if (nRes == nSecond)
    // checks if nRes is equal to nSecond
    {
      nVal = 0;
      // reverts nVal to 0
      nRes = checkPrimeSeq(nRes, nVal); //
      nRes becomes the next number from nSecond that is prime
      if (nRes == nThird)
      // checks if nRes is equal to nThird
      {
        nVal = 0;
        // reverts nVal to 0
        nRes = checkPrimeSeq(nRes, nVal); //
        nRes becomes the next number from nThird that is prime
        if (nRes == nFourth)
        // checks if nRes is equal to nFourth
        {
          nVal = 0;
          // reverts nVal to 0
          nRes = checkPrimeSeq(nRes, nVal); //
          nRes becomes the next number from nThird that is prime
          printf("Prime Series\n");
          return nRes;
          // returns nRes (the next sequential prime number)
        } else
          return 0;
      } else
        return 0;
    } else
      return 0;
  } else
    return 0;
}
/* This function converts the next decimal value into its
binary counterpart
Precondition: if all 4 converted decimal values are in series
@return *pVal - is the converted binary value of the next decimal value
*/
void
convertBinary(int * pVal) {
  int nTemp, nNum;
  int nRounds, nBinary;
  nRounds = 0; //
  represents the place value of the number
  nBinary = 10; // base 10
  nNum = * pVal; // stores
  nVal
    *
    pVal = 0; // declares
  nVal as 0
  while (nNum != 0) // continues
    until nNum is unequal to 0 {
      nTemp = nNum % 2; // to
      convert decimal to binary, synthetic division is used, binary value are the
      remainders
      nTemp *= pow(nBinary, nRounds); // determines the
      place value of the binary value *
        pVal += nTemp; // adds the
      converted binary values together
      nNum /= 2; // removes
      the last digit of the decimal number
      nRounds++; //
      adds a place value
      for the next loop
    }
}
/* This function checks if the input is a binary number by converting
it to a decimal number
Precondition: if function is called in findBinary function
@param nNum - is the number to be checked and converted to decimal
@return nConvert - the converted decimal value
*/
int
checkInput(int nNum) {
  int nTemp, nConvert;
  int nRounds, nDecimal;
  nRounds = 0; //
  represents the place value or the position of the number
  nConvert = 0; // each
  number converted will be stored here, then added together
  nDecimal = 2; // base 2
  while (nNum != 0) // continues
    while the passed parameter is not equal to 0, stops when it is equal to 0 {
      nTemp = nNum % 10; // nTemp
      stores the last digit of the number
      if (nTemp == 1 || nTemp == 0) // checks if the
        last digit is 1 or 0 {
          nTemp *= pow(nDecimal, nRounds); // to convert
          binary to decimal--base 2 raised to the positiong
          nConvert += nTemp; // adds the
          converted decimal value together continuously
          nNum /= 10; //
          removes the last digit of the number
          nRounds++; // to
          add a place value
          for the next loop
        }
      else // if it is not
        1 or 0, then the input is not a binary number {
          nNum = 0;
          nConvert = 0;
        }
    }
  return nConvert;
}
/* This function determines whether or not all four integers are binary.
Additionally, it calls 2 extra morefunctions to translate from binary
to decimal and back again.
Precondition: if the findBinary function is called by the findRelation
function
@param nFirst - serves as the first integer to be tested
@param nSecond - serves as the second integer to be tested
@param nThird - serves as the third integer to be tested
@param nFourth - serves as the month integer to be tested
@return nVal - is the next binary series value after nFourth
@return 0 - if the 4 integers are not in a binary series
*/
int
findBinary(int nFirst,
  int nSecond,
  int nThird,
  int nFourth) {
  int n1, n2, n3, n4;
  int nSeries, nVal;
  nVal = 0;
  n1 = checkInput(nFirst); // converts inputs to a decimal
  number
  n2 = checkInput(nSecond);
  n3 = checkInput(nThird);
  n4 = checkInput(nFourth);
  nSeries = 1; // binary series should be incrementing
  if (n2 - n1 == nSeries && n3 - n2 == nSeries && n4 - n3 == nSeries)
  // checks if binary series is an incrementing series
  { // if
    true,
    printf("Binary Series\n");
    nVal = n4 + nSeries; // gets the next
    incrementing series in decimal
    convertBinary( & nVal); // converts the
    decimal value of nVal into binary
    return nVal; // returns the
    converted decimal to binary to the findRelation
    function
  }
  else // if false,
    return 0; // returns 0
  to findRelation
  function
}
/* This function determines the relationship between the user's four inputs.
If all function calls result in 0, it displays no relation; otherwise,
it displays the following number. Passes the answer pointer as well.
Precondition: all four integer inputs are valid
@param nFirst - serves as the first input to be passed to the function calls
@param nSecond - serves as the second input to be passed to the
function calls
@param nThird - serves as the third input to be passed to the function
calls
@param nFourth - serves as the fourth input to be passed to the function
calls
*/
void
findRelation(int nFirst,
  int nSecond,
  int nThird,
  int nFourth) {
  int nBinary, nPrimeSeq, nIncrement, nDecrement, N, nPlus, nMinus,
  nPlusMinus, nMinusPlus;
  int nAnswer, nEven, nOdd;
  nAnswer = 0; // passed to different function
  calls as a pointer value
  nBinary = findBinary(nFirst, nSecond, nThird, nFourth);
  // calls functions
  to check the series /
    nPrimeSeq = findPrimeSeq(nFirst, nSecond, nThird, nFourth);
  nEven = findEven(nFirst, nSecond, nThird, nFourth);
  nOdd = findOdd(nFirst, nSecond, nThird, nFourth);
  nIncrement = findIncrement(nFirst, nSecond, nThird, nFourth, &
    nAnswer);
  nDecrement = findDecrement(nFirst, nSecond, nThird, nFourth, &
    nAnswer);
  N = findN(nFirst, nSecond, nThird, nFourth, & nAnswer);
  nPlus = findPlusMN(nFirst, nSecond, nThird, nFourth, & nAnswer);
  nMinus = findMinusMN(nFirst, nSecond, nThird, nFourth, & nAnswer);
  nPlusMinus = findPlusMinus(nFirst, nSecond, nThird, nFourth, &
    nAnswer);
  nMinusPlus = findMinusPlus(nFirst, nSecond, nThird, nFourth, &
    nAnswer);
  if (nEven) // prints even
    series only since it is automatic increments / decrements of 2
  printf("Even Series\n");
  if (nOdd) // prints odd
    series only since it is automatic increments / decrements of 2
  printf("Odd Series\n");
  if (nBinary == 0 && nPrimeSeq == 0 && nIncrement == 0 &&
    nDecrement == 0 && N == 0 && nPlus == 0 && nMinus == 0 &&
    nPlusMinus == 0 && nMinusPlus == 0) {
    printf("NO RELATION\n\n"); // if all variables return
    0, then there is no relation between all 4 numbers
    clearScreen();
    displayMenu1();
  } else if (nBinary) // returned value is the
    next binary value {
      printf("\n5TH NUMBER: %d\n", nBinary); //
      prints the next binary value
      if (nPlus) // a +M +N series
        is possible alongside the binary sequence { // other
          series are not possible since these binary values are incrementing
          if (nAnswer != nBinary) // checks if the pointer
            nAnswer from the + M + N series is not equal to the next binary value {
              printf("5TH NUMBER: %d\n", nAnswer);
              printf("\n");
              clearScreen();
              displayMenu1();
            }
          else {
            printf("\n");
            clearScreen();
            displayMenu1();
          }
        }
      else {
        printf("\n");
        clearScreen();
        displayMenu1();
      }
    }
  else if (nPrimeSeq) // returned value is the
    next sequential prime value {
      printf("\n5TH NUMBER: %d\n", nPrimeSeq); //
      prints the next sequential prime value
      if (nPlus) // a +M +N series is
        possible alongside the binary sequence { // other series are
          not possible since it only checks
          for incrementing sequential prime values
          if (nAnswer != nPrimeSeq) // checks if the pointer
            nAnswer from the + M + N series is not equal to the next sequential prime
          value {
            printf("5TH NUMBER: %d\n", nAnswer);
            printf("\n");
            clearScreen();
            displayMenu1();
          } else {
            printf("\n");
            clearScreen();
            displayMenu1();
          }
        }
      else {
        printf("\n");
        clearScreen();
        displayMenu1();
      }
    }
  else if (nIncrement) // returned value is 1
  {
    printf("\n5TH NUMBER: %d\n", nAnswer); // prints the
    next incrementing value
    printf("\n");
    clearScreen();
    displayMenu1();
  } else if (nDecrement) // returned value is 1
  {
    printf("\n5TH NUMBER: %d\n", nAnswer); // prints the
    next decrementing value
    printf("\n");
    clearScreen();
    displayMenu1();
  } else if (N) // returned value is 1
  {
    printf("\n5TH NUMBER: %d\n", nAnswer); // prints the
    next * N value
    printf("\n");
    clearScreen();
    displayMenu1();
  } else if (nPlus) // returned value is 1
  {
    printf("\n5TH NUMBER: %d\n", nAnswer); // prints the
    nFourth + N value
    printf("\n");
    clearScreen();
    displayMenu1();
  } else if (nMinus) // returned value is 1
  {
    printf("\n5TH NUMBER: %d\n", nAnswer); // prints the
    nFourth - N value
    printf("\n");
    clearScreen();
    displayMenu1();
  } else if (nPlusMinus) // returned value is 1
  {
    printf("\n5TH NUMBER: %d\n", nAnswer); // prints the
    nFourth - N value
    printf("\n");
    clearScreen();
    displayMenu1();
  } else if (nMinusPlus) // returned value is 1
  {
    printf("\n5TH NUMBER: %d\n", nAnswer); // prints the
    nFourth + N value
    printf("\n");
    clearScreen();
    displayMenu1();
  }
}
/* END OF FUNCTIONS FOR OPTION 1 */
/* START OF FUNCTIONS FOR DISPLAYING OPTIONS */
/* This function displays the first menu. It
accepts the 4 integer inputs for the pattern
and number generation. Each integer input has
a conditional statement which checks if the input
is equal to the sentinel value. If not equal to the
sentinel value, the program will then ask for the
next input. Moreover calls thr findRelation function
used to determine the pattern if all 4 inputs are valid.
Precondition: if case is case 1 from the displayOptions function
*/
void
displayMenu1() {
  int nFirst, nSecond, nThird, nFourth, nSentinel;
  nSentinel = -999; // invalid input that reverts
  the program back to the main menu
  printf("PATTERN & 5th NUMBER GENERATION\n");
  printf("\n");
  printf("INPUT 4 INTEGERS:\n"); // prompt
  for users to input 4 integers
  scanf("%d", & nFirst);
  if (nFirst > nSentinel) // checks
    for the sentinel value {
      scanf("%d", & nSecond);
      scanf("%d", & nThird);
      scanf("%d", & nFourth);
      printf("\n");
      printf("PATTERN/s:\n");
      findRelation(nFirst, nSecond, nThird, nFourth);
    }
  else {
    displayInvalid();
    clearScreen();
    displayOptions();
  }
}
/* This function asks users which of the following
number pattern sequencing they would want. It also calls
the functions to get the N, X, and Y values depending
on which patterns are chosen.
Precondition: if nOption == 2 from the displayOptions function
*/
void
displayMenu2() {
  int nExecute;
  printf("NUMBER SERIES SEQUENCING\n");
  do {
    printf("\n");
    printf("Please choose which of the following to execute:\n");
    // promput for users to choose which of the following to
    implement
    printf("[1] - Increments of N\n");
    printf("[2] - Decrements of N\n");
    printf("[3] - Incrementing Even Series\n");
    printf("[4] - Incrementing Odd Series\n");
    printf("[5] - Incrementing Prime Series\n");
    printf("[6] - Go back to Main Menu\n");
    printf("\n");
    printf("EXECUTE: ");
    scanf("%d", & nExecute);
    system("cls");
  } while (nExecute < 1 || nExecute > 6);
  // loops the statemets if the user input is not 1 to 6
  if (nExecute == 1)
    getInputN(nExecute);
  else if (nExecute == 2)
    getInputN(nExecute);
  else if (nExecute == 3)
    getInputX(nExecute);
  else if (nExecute == 4)
    getInputX(nExecute);
  else if (nExecute == 5)
    getInputX(nExecute);
  else if (nExecute == 6)
    displayOptions(nExecute);
}
/* This function displays all three options that the machine
code can do that users can pick. It also calls the displayMenu
functions depencding on the value of nOption.
Precondition: it is called by the main function
*/
void
displayOptions() {
  int nOption;
  do {
    printf("Please choose which of the following to execute:\n");
    // prompt for the three options
    printf("[1] - Pattern & 5th Number Generation\n");
    printf("[2] - Number Series Sequencing\n");
    printf("[3] - Exit\n");
    printf("\n");
    printf("EXECUTE: ");
    scanf("%d", & nOption); // gets the user
    input
    for the option
    system("cls");
  } while (nOption < 1 || nOption > 3); //
  loops the statemets
  if the user input is not 1 to 3
  switch (nOption) {
  case 1:
    displayMenu1();
    break;
  case 2:
    displayMenu2();
    break;
  case 3:
    printf("THANK YOU for using this machine code!\n");
    printf("Have a great day ahead!");
    break;
  }
}
/* END OF FUNCTIONS FOR DISPLAYING OPTIONS */
/* This is the main function, it calls the displayOptions function.
After it calls the displayOptions function the machine code
will now operate continuously.
@return if the program was executed succesfully
*/
int
main() {
  displayOptions();
  return 0;
}