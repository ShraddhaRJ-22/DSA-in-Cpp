// Operators:
/*  1.Arithmentic Operators:    -Binary Operators: +,-,*,/,%(Remainder)
                                -Unary Operators: ++(incrementor),--(decrementor)
pre-incrementor: (++a)---> increment a instantly
post-incrementor: (a++)---> Current value of a is preserved temporarily. a will get incremented before
                            next statement is executed.
							
2. Rational Operator: Returns a Boolean Value i.e 1/0
== -> Gives True if both operands have equal value
!= -> Gives True if Both operands are not equal	
>  -> Gives True if left operand is more than right operand		
<  -> Gives True if left operand is less than right operand		
>= -> Gives True if left operand is more than or eual to right operand	
<= -> Gives True if left operand is less than or eual to right operand   
*/
#include<iostream> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	if(n>10){
		cout<<"More than 10"<<endl;
	}
	else if(n<10){
		cout<<"Less than 10"<<endl;
	}
	else{
		cout<<"Equal to 10"<<endl;
	}
	return 0;
}     

/*
3. Logical Operators: Used to connect multiple conditions or to reverse logical value
&& -> 'AND' gives us true if both operands are true,else false
|| -> 'OR' gives us true if atleast one of operands is true
!  -> 'NOT' gives opposite logical value.
*/
#include<iostream> 
using namespace std;
int main() 
{
	int n;
	cin>>n;
	if(n%2==0 && n%3==0){
		cout<<"Divisible by both"<<endl;
	}
	else if(n%2==0)
	{
		cout<<"Divisible by only 2"<<endl;
	}
	else if(n%3==0)
	{
		cout<<"Divisible by only 3"<<endl;
	}
	else{
		cout<<"Divisible by none"<<endl;
	}
	return 0;
}  
/*
Bitwise operators: are the operators that operate on bits and perform bitby-bit operations. 
& -> Binary AND. Copies a bit to the result if it exists in both operands.   
| ->  Binary OR. Copies a bit if it exists in either operand.
^ -> Binary XOR. Copies the bit if it is set in one operand but not both.
~ -> Binary Ones Complement. Flips the bit.
<< -> Binary Left Shift. Left operands bits are moved to left by the number of places specified by the right 
operand.
>> ->  Binary Right Shift.Left Operand bits are moved to moved right by the number of places specified by the 
right operand. 

Rest look from the saved PDF called Operators. 
