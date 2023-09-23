			::OPERATORS::

	// UNARY OPERATORS
	Act upon only 1 operand
(&)address-of
(*)dereference

	// BINARY OPERATORS
	Acts upon 2 operands
	Expect operands with the same type
(==)Equality
(+,-)Mathematical


	// TERNARY OPERATOR
	Acts upon 3 operands
(? :) Conditional

	// OVERLOADED OPERATORS
	(>>) (<<)("")(<>)
	
	
		::Expression::
		
		
		::Compound Expression::
	An expression with 2 or more operators



		::Lvalues & Rvalues::
Every expression in C++ is either an rvalue or an lvalue.

L-VALUES::
Refers to an object's identity (Memory Location)
Lvalues can stand on the left of an assignment.
Lvalue expressions yelds an object like const or a function


R-VALUES::
Refers to an object's contents (Value)
Rvalues cannot stand on the left of an assignment.
Rvalues is what is usually returned by a program


>INDEX<
(=) requires lvalue on its left and assigns an lvalue to it [yields lvalue]
(&) requires lvalue on its right and returns rvalue pointer [yields rvalue]
(*, []) requires lvalue operands beside it		      [yields lvalue]
(++) requires lvalue operand and if its prefixit yealds lavlue if its postfix it yealds rvalue 



		::Precedence & Associativity::
These control the order of operands being executed and what type of operand it is
Parenthesis can however, overide precedence and associativity
Precedence is concerned with the priority of each operator towards its operand
Associativity is concerned with which operators can be combined 

	!PRECEDENCE is different from ORDER OF EVALUATION!


		::Order of Evaluation::
		
Only 4 operators guarantee the order of evalution
( AND , OR, COMMA, CONDITIONAL )
 (&&) (||) (,) (?:)

Ensures its left operand is evaluated before its right and only if left operand is true 


##########################################

HOW IT WORKS

f() + g() * h() + j();

Precedence ensures the multiplication happens first
Associativity ensures the summation of the result of the multiplication to f() and then j()
Order of evaluation is left undefined in order to give the compiler the opportunity for optimization
########################################################



			::OVERFLOW::
Overflow happens when a value is computed that is outside the range of values that the type can represent.
This happens due to the default memory allocated to each object type.
Its output is undefined, either an overflow, a crash, a core dump, or undefined rvalue. 

I.E. int's limitation towards big numbers and unsigned's limitation towards negative numbers









