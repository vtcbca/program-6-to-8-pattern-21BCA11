/* Write a program to print following pattern
   * * * * *
     * * *
       *
   Author:Divyang Chaudhari
   21BCA11 */

#include<stdio.h>
#include<conio.h>
 void main()
{
	int i,j,k;
	clrscr();
	for(i=5;i>=0;i=i-1)
	{
	 for(k=5;k>i;k--)
	 {
	  printf(" ");
	 }
	 for(j=1;j<=i;j=j+1)
	 {
	  printf(" * ");
	 }
	  printf("\n");
	}
	getch();
}