/*to initialize or assign a reference to :L a function pointer, use a pointer assignment with the name of the ufnction and nothing else(no apersand and no parenthese). ex FP= pow

Example 1
Declare a pointer to a function that takes one type int argument and returns a type int.
	type(*ptrToFunction)(parameterlist)
	int(*FP)(int)

	2) Declare func2 as a pointer to a function that takes two parameters of type double arguments and has a void return type
		void(*func2)(double,double)
	3) declare func3 as a pointer to a function that takes an array of pointers to type char as its argument and returns a type char.
		char(*func3)(char*P[])// p is the name of the array
	*/
//#include <stdio.h>
/* the function prototype*/
//double square(double x)
	/* the pointer declaration */
	 /*double (*fp)(double);

int main(){*/
	/*initialize FP to point to square () */
	//fp = square;
	/* call sqaure() two ways*/
	/*printf("%f %f\n", square(6.6), fp(6.6));
	return 0;
}

double square (double x){
	return x*x;
}*/