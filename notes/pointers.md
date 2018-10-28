# Pointers
Pointers are the variables that holds a memory address, usually the location of another variable in memory. Pointers are one of the strongest and also one of the most dangerous and vulnerable features of C/C++. For instance, *uninitialized*, or *wild pointers* can cause your system to crash. Perhaps worse, it is easy to use pointers incorrectly, causing bugs that are very difficult to find. So it makes it important to grasp the concept in order to exploit its power and use it without creating much problems to your program. Lets just dive into the technicalities without any further delay!

## Declaration and initialization of pointers
- Unary * character is used for the declaration of Pointers.
```
type * var_name
```
where `type` and `var_name` is any valid datatype and variable name(name of the pointer) respectively. <br> Some valid declarations are= <br>
```
int *iptr;          //creates an integer pointer
char *cptr;         //creates a character pointer
float *fptr;        //creates a float pointer
```
- Two operators, `*` and `&` are used with Pointers.
```
int i = 25;           // declares an int variable
int *iptr;            // declares an int pointer
iptr = &i;            // stores the memory address of i into iptr
```  
- `&` is the unary operator that returns the memory address of the operand. While unary operator `*` does the reverse. It returns the value of the variable located at the address following it. For example if `iptr` contains the memory address 1234 then `*iptr` will return the value stored at that memory address.
> The operand of `&` can an ordinary variable but the operand of `*` can only be a pointer variable.

### Dereferencing
The term refers to changing/accessing state of the pointer.<br>
- Asterisk(`*`) indirection operator is used along with pointer variable while dereferencing the pointer variable.
- Asterisk Operator is also called as value at operator
- When used with Pointer variable, it refers to variable being pointed to,this is called as Dereferencing of Pointers.
- Dereferencing Operation is performed to access or manipulate data contained in memory location pointed to by a pointer
- Any Operation performed on the de-referenced pointer directly affects the value of variable it pointes to.
```
// Sample Code for Dereferencing of Pointer
int n = 50 , x ;

int *ptr ; // Un-initialized Pointer

ptr = &n; // Stores address of n in ptr

x = *ptr; // Put Value at ptr in x
```

### Precaution
- Pointer variable must always point to the correct type of data.
```
float a, b;
int *p;
scanf("%f", a);        // reads the float value for a
p = &a;                // store the address of a into iptr
b = *p;                // store the value pointed to a by iptr into b
```
The above code intended to assign the value of `a` and `b` through the use of pointers, but it will not produce the desired result. Because `iptr` is an integer pointer and `b` is a float.
> Thus, making pointer point to incorrect datatype may lead to loss of information.

- Pointer variable must not remain uninitialized as it may result into system crashing. Even if legal value of the pointer is not known, it must be initialized with `NULL` pointer value.
```
int *ptr = NULL;      // initialized with NULL
.
.
.
if(ptr != NULL){      //check if ptr is pointing to legal address
.
.
.
.
}
```

## void Pointer
> void pointer is called general purpose pointer.

Consider the following code snippet-
```
float *ptr;
int num;

ptr = &num ;  // Illegal Use of Pointer
```
In the above example we have declared float pointer which is of no use in the program. We cannot use float pointer to store the integer pointer. So in order to increase the re-usability of the Pointer it is necessary to declared pointer variable as void Pointer.
### Dereferencing void Pointer:
> You can’t dereference the void pointer directly, you will need to cast it to another type in order to access the contents of the buffer

```
void *ptr;    // ptr is declared as Void pointer

char cnum;
int inum;
float fnum;
```
Here, suppose we have assigned integer address to a void pointer then-
```
ptr = &inum;  // ptr has address of integer data
```
Then to dereference this void pointer we should do- `*((int*)ptr)`. <br>
Similarly, for `float` and `char` we should do- `*((float*)ptr)` and
`*((char*)ptr)` respectively.

## Data Buffer/Memory Buffer
Buffer is like a space in physical memory which serves as a temporary stay for the data while switching the places for its finner processing. Idea of buffering is not specific to C programming language only. It's general computational phenomenon.<br>
Examples of when you use a buffer in C (applicable to other languages also):
1. Reading the contents of a file, before applying some operation (like parsing records, etc) on the data.
2. Saving user input, while awaiting further input.

This is the commonest use in C. A buffer will usually be declared as an array of `char` or `uint_8`, although it can be of any type, include `void *`

You may also hear the term buffering in relation to the standard IO streams library. One of the functions of the Standard IO Library (__stdio.h__) is to handle Input/Output buffering. That means when you read/write to/from files, the __stdio__ library intervenes and buffers these operations. The buffering mode is usually either Full Buffering, Line Buffering, or No Buffering (all defined via macros in __stdio.h__). You can easily tweak the buffering mode of any open file stream by using the __setbuf()__ function call.

## Dynamic Allocation of memory
In C, there are there are four ways in which one can allocate/reallocate and free the memory dynamically.
1. malloc()
2. calloc()
3. realloc()

These functions are from __stdlib.h__. <br>
A successful call to one of the memory allocation functions returns the beginning address of a memory block of the requested size. The return value has the type "pointer to void". The program can then use the allocated block in any way desired. When a block of memory is no longer needed, it should be released. All dynamically allocated memory blocks are automatically released when the program exits.



## Resources

- [C FAQ question on string initialisation](http://c-faq.com/decl/strlitinit.html)
- [Wikipedia](https://en.wikipedia.org/wiki/Pointer_(computer_programming))
- ["Equivalence" of arrays and pointers](http://c-faq.com/aryptr/aryptrequiv.html)
- [Binky Pointer Fun C](https://www.youtube.com/watch?v=5VnDaHBi8dM)
- [Char array vs Char Pointer - Stack Overflow](https://stackoverflow.com/questions/10186765/char-array-vs-char-pointer-in-c#10186799)
- [Pointers and Memory (pdf)](http://cslibrary.stanford.edu/102/PointersAndMemory.pdf)
- https://www.quora.com/What-does-buffer-mean-in-C
- http://www.c4learn.com/c-programming/
