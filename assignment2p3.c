/* Lacy Hayes
COP 3223C
9.25.20
Assignment 2 */

// this program will generate a random number and see if it meets certain criteria

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
// defining random number
int myRandomNumber;
srand(time(NULL));
myRandomNumber = rand();

// printing the random number
printf("My random number = %d\n", myRandomNumber);

// is the number odd or even?
if (myRandomNumber%2 == 0) {
printf("\n%d is even", myRandomNumber); }
else {
printf("\n%d is odd", myRandomNumber); }

// is the number divisible by 3?
if (myRandomNumber%3 == 0) {
printf("\n%d is divisible by 3", myRandomNumber); }
else {
printf("\n%d is not divisible by 3", myRandomNumber); }

// is the number divisible by 10?
if (myRandomNumber%10 == 0) {
printf("\n%d is divisible by 10", myRandomNumber); }
else {
printf("\n%d is not divisible by 10", myRandomNumber); }

return 0;
}
