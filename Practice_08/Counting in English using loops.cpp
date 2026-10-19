		#include <stdio.h>
		//Task : Print Counting from 1-100 in english
		int main(){		
			int i=1;
			while(i<=100){
		if (i == 0)  printf("Zero");
if (i == 1)  printf("One");
if (i == 2)  printf("Two");
if (i == 3)  printf("Three");
if (i == 4)  printf("Four");
if (i == 5)  printf("Five");
if (i == 6)  printf("Six");
if (i == 7)  printf("Seven");
if (i == 8)  printf("Eight");
if (i == 9)  printf("Nine");
if (i == 10) printf("Ten");
if (i == 11) printf("Eleven");
if (i == 12) printf("Twelve");
if (i == 13) printf("Thirteen");
if (i == 14) printf("Fourteen");
if (i == 15) printf("Fifteen");
if (i == 16) printf("Sixteen");
if (i == 17) printf("Seventeen");
if (i == 18) printf("Eighteen");
if (i == 19) printf("Nineteen");
	int ten=i/10;
	int once=i%10;
if(i<2)
				i++;
			}
			return 0;
		}
