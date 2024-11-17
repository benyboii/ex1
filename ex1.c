/******************
Name: Ben Bar
ID: 212234363
Assignment: ex1
*******************/
#include <stdio.h>

int main() {
  int number = 0;
  int position = 0;
  int bit = 0;
  int numberBitSetOne = 0;
  int numberBitSetZero = 0;
  int numberBitToggled = 0;
  int isEven = 0;
  int secondNumber = 0;
  int thirdBit = 0;
  int fifthBit = 0;
  int seventhBit = 0;
  int eleventhBit = 0;
  printf("What bit:\n");
  printf("Please enter a number:\n");
  scanf(" %d",&number);
  printf("Please enter a position:\n");
  scanf(" %d",&position);
  bit = (number >> position) & 1;
  printf("The bit in position %d of number %d is: %d\n",position,number,bit);
  
  // Set bit
  printf("\nSet bit:\n");
  printf("Please enter a number:\n");
  scanf(" %d",&number);
  printf("Please enter a position:\n");
  scanf(" %d",&position);
  numberBitSetOne = number | (1 << position);
  numberBitSetZero = numberBitSetOne ^ (1 << position);
  printf("Number with bit %d set to 1: %d\n",position,numberBitSetOne);
  printf("Number with bit %d set to 0: %d\n",position,numberBitSetZero);

  // Toggle bit
  printf("\nToggle bit:\n");
  printf("Please enter a number:\n");
  scanf(" %d",&number);
  printf("Please enter a position:\n");
  scanf(" %d",&position);
  numberBitToggled = number ^ (1 << position);
  printf("Number with bit %d toggled: %d\n",position,numberBitToggled);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  printf("Please enter a number:\n");
  scanf(" %d",&number);
  isEven = (number &  1) ^ 1;
  printf("%d\n",isEven);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  printf("Please enter the first number (octal):\n");
  scanf(" %o",&number);
  printf("Please enter the second number (octal):\n");
  scanf(" %o",&secondNumber);
  number += secondNumber;
  printf("The sum in hexadecimal: %X\n",number);
  thirdBit = (number >> 3) & 1;
  fifthBit = (number >> 5) & 1;
  seventhBit = (number >> 7) & 1;
  eleventhBit = (number >> 11) & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n",thirdBit,fifthBit,seventhBit,eleventhBit);
  printf("Bye!\n");
  return 0;
}
