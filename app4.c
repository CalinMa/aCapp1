/*Write a program that reads from the keyboard a natural number with exactly three digits 
and determines the sum of all the digits;
Open Cygwin, run gcc app1.c -o app1.exe to make an exe file, then run ./app1.exe to start 
the program.
Note that the numbers are declared as int */
int n,a,b,c,s;

main(){
printf("Enter the natural number with exactly 3 digits: ");
scanf("%d",&n);

while (n<100 || n>1000) {
	printf("Please re-enter a 3 digits natural number: ");
scanf("%d",&n);
}


if (n>99 && n<1000) {
a=n/100;
b=(n%100)/10;
c=n%10;
s=a+b+c;
printf("The sum you are looking for is: ");
printf("%d",s);
} 

}

