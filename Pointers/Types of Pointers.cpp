/* Types of Pointer : 
	1. *Null pointer:
		-If we want to have a pointer variable which is just declared but will get address 
		later tp store. Here hence we use 'Null pointer'.
		-Null value = 0. (0 is a special reserved memory address)
		-Runtime error might occur on dereferencing
		
		Use:          int *ptr = NULL;
		
	2. Wild pointer:
		-A wild pointer is a type of a pointer where user declares the pointer but not 
		initialize it.
		-Due to this, it ends up pointing to some random memory location. Hence bcoz of this
		we might get some undefined behaviour & crushes.
		- In some cases we might get segmentation fault.
		
	3. Dangling pointer:
		-It is a type of pointer that points to a memory location that is not valid.
		
	4. Void pointer:	
		-Also called 'Generic Pointer'
		-These are special pointers that can point to any datatype value.
		-Void pointers cannot be dereferenced.
		-Typecasting.
*/

