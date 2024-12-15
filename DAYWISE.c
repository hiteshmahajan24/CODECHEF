// Day 1
//To CHECK WHETHER THE GIVEN NUMBER IS EVEN OR ODD
#include <stdio.h>
int main(){
    int num;
      printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("%d is Even.\n", num);
    } else{
        printf("%d is Odd.\n", num);
    }
    return 0;
}

//Day 2
//TO OUT THE LARGEST NUMBER OF THE THREE GIVEN NUMBERS
#include <stdio.h>
int main(){
    int a,b,c;
      printf("Enter the first number: ");
      scanf("%d", &a);
      printf("Enter the second number: ");
      scanf("%d", &b);
      printf("Enter the third number: ");
      scanf("%d", &c);
 if (a>b&&A>c){
        printf("%d is the largest number\n", a);
    };
 else if(b>c){
        printf("%d is the largest number\n", b)
    };
 else{  printf("%d is the largest number\n", b) };
   return 0;
}

//Day3
//SUM OF THE FIRST 10 NATURAL NUMBERS
#include <stdio.h>
int main() {
    int sum = 0, i;  
    for(i = 1; i <= 10; i++) {
        sum += i;  }
    printf("Sum of the first 10 natural numbers is: %d\n", sum);
    return 0;
}

//Day 4
//TO SWAP THE VALUES OF TWON VARIABLES
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a ^ b;  
    b = a ^ b;  
    a = a ^ b; 
    printf("After swapping: a = %d, b = %d\n", a, b);
 return 0;
}

//Day5
//WRITE A PROGRAM TO CHECK IF GIVEN YEAR IS A LEAP YEAR
#include <stdio.h>

int main() {
    int year;
  printf("Enter a year: ");
    scanf("%d", &year);  
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year); }
    return 0;
}

//Day 6
//