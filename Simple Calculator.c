#include<stdio.h>

//declare functions
float add(float a, float b);
float subtract(float a, float b);
float multiplication(float a, float b);
float divide(float a, float b);

//declare variables
float number01=0,number02=0;
char arithmetic_operator;

int main()
{
	//print instructions and get user inputs
	printf("Enter an arithematic expression (eg- 2+3) : ");
	scanf("%f %c%f", &number01, &arithmetic_operator, &number02);

	//calculation
	switch(arithmetic_operator)
	{
		case '+': printf("Result : %.2f",add(number01, number02));
				break;
		case '-': printf("Result : %.2f",subtract(number01, number02));
				break;
		case '*': printf("Result : %.2f",multiplication(number01, number02));
				break;
		case '/': 
		        //print error message if user try to enter 0 as number02
		        if(number02==0)
		        {
		        	printf("Can't divide by zero(0)\n");
				}
				
				else
				{
		        	printf("Result : %.2f",divide(number01, number02));
				}
				break;
				
		default : printf("Invalid operator\n");
		
	}
	
	
	
	return 0;
}

//function-addition
float add(float a, float b)
{
	return a+b;
}

//function-subtraction
float subtract(float a, float b)
{
	return a-b;
}

//function-multiplication
float multiplication(float a, float b)
{
	return a*b;
}

//function-divide
float divide(float a, float b)
{
	
	return a/b;
}
