# CPP_Module

### Module 01
#### Ex. 02

##### Address Manipulation

A pointer is a variable that holds the memory address of another variable.
A reference works as the same variable it is referencing but with other name. 

A pointer can be declared and assigned a value in different points of the code.
A reference needs to be assigned a value when it is declares (rule for some compilers).

A pointer can be re-assigned to another value.
A reference can't be re-assigned.

A pointer has a different memory address from the one it is pointing to.
A reference shares de same memory address with the variable it is referencing.

Resource:
geeksforgeeks.org/pointers-vs-references-cpp/

#### Ex. 03

Weapon passed as value

When the object "club" (class "Weapon") is constructed, recieves the type "crude spiked club".

After attacking the club changes types to "someother type of club" but the change does not affect the "club" the object is already holding. 

Weapon passed as reference

If the Weapon is passed as a reference then when the Weapon type changes its reference will change too (since references are alias and not copies).

For HumanB, since the attribute Weapon is not compulsory, and because a reference requires initialization at the construction of the object, we add the attribute as a pointer holding NULL, that can be set to hold the reference of Weapon later. 


### Module 01
#### Ex. 05

Define a data type that is a pointer of that type that points to any number of 'Object'
that takes '(void)' i.e.: Object::debug, Object::info, Object::warning & Object::error:
	
```typedef void (Object::*PTR)();"```
	 

Create an array of strings with the possible levels:

```std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};```


Create an array of member-to-function-pointers that matches the levels array positions:

```PTR msgs[4] = {&Object::debug, &Object::info, &Object::warning, &Object::error};```

When the string passed in the main function matches one of the strings in the levels array
print the equivalent function using the member-to-function-pointers:

```(this->*msgs[i])(); ```

'this->*' accesses the member function pointed by msgs[i];
->* combines its first operand, a pointer to an object of class type,
with its second operand, a pointer-to-member-type.
Parentheses required since * binds less tightly than the function call.

resources:    
isocpp.org/wiki/faq/pointers-to-members    
docs.microsoft.com/en-us/cpp/ccpp/pointer-to-member-operators-dot-star-and-star?view=msvc-170 

### Module 03

Destruction of classes allignment
	 A derived class needs to access methods and attributes of the base class.
A base class doesn't need to access elements of the derived class. 
Because of this, the derived object is always destroyed first. 
	
THE DIAMOND PROBLEM 
When using virtual inheritance, we are guaranteed 
to get only a single instance of the common base class.
The DiamondTrap class will have only a single instance
of the ClapTrap class, shared by both the ScavTrap and 
FragTrap classes.

"Solvind the Diamond Problem with Virtual Inheritance"
https://www.cprogramming.com/tutorial/virtual_inheritance.html

----------------------------------------------------------------------

Virtual base class in C++ (geeksforgeeks.org)

Virtual base classes are used in virtual inheritance in a way of 
preventing multiple "instances" of a given class appearing in an
inheritance hierarchy when using multiple inheritances.

Need for Virtual Base Classes:
In this exercise we have one class <ClapTrap>. This class in inherited
by class <FragTrap> and class <ScavTrap>. Both this classes ate inherited
in a new class <DiamondTrap>. Some data members/function of class 
<ClapTrap> are inherited twice to class <DiamondTrap> causing ambiguity
about which data/function member should be called. 
This confuses the compiler and displays an error. 

To resolve this ambiguity when class <ClapTrap> is inherited in both 
class <FragTrap> and class <ScavTrap>, it is declared as virtual base class.
-> class FragTrap : virtual public ClapTrap
-> class ScavTrap : virtual public ClapTrap
A single copy of its data members is shared by all the base classes that use
virtual base.

"Virtual base class in C++"
https://www.geeksforgeeks.org/virtual-base-class-in-c/
	
"Using-declaration"
https://en.cppreference.com/w/cpp/language/using_declaration


### Module 04
#### Ex. 00

*Instance:*

In a computer system, any time a new context is created based on some model,
it is said that the model has been instantiated.
In practice, this instance usually has a data structure in common with other instances,
but the values stored in the instances are separate.

---------------------------------------------------------------------------------------------

*Const classes:*

Instantiated class objects can be made constant by using the 'const' keyword.
All const variables must be initialized at time of creation.
In the case of const class objects, initialization is done via class constructors.
```const Animal* meta = new Animal();```
Once a const class object has been initialized via constructor, any attempt to modify
the member variables of the object is disallowed. This includes both changing member
variables directly (if they are public), or calling member functions that set the value
of member variables.

---------------------------------------------------------------------------------------------

*'New' keyword:*
Objects created on the stack have a name and don't need a pointer to be accessed.
The objects created with the 'new' keyword are allocated on the heap, don't have a name,
and need a pointer so that it can be referenced and to access its member variables 
and functions.
When 'new' is used to allocate memory for a c++ class object, the object's constructor is
called after the memory is allocated. 
The 'delete' operator must be used to deallocate the memory allocated by the 'new' operator.
The 'delete[]' operator is used to delete an array allocated by the 'new' operator.
	
---------------------------------------------------------------------------------------------
*Virtual functions and polymorphism*

A virtual function is a member function in the base class define with the virtual keyword. 
It is expected to be overriden in derived classes.
Without the virtual keyword, the call to the member function is set once by the compiler
as the version defined by the Parent class. This is known as static resolution, static 
linkage or early binding. 
(The arrow operator (->) is used to access member functions through a pointer.)
By declaring the member function of the Parent as virtual, the function will allways be 
overriden. This is even though the pointer of type Parent. But it holds the address of the 
Child. The virtual keyword tells the compiller that we don't want early binding for the given 
function. We'll use late binding or dynamic linkage. 

---------------------------------------------------------------------------------------------
	Resources:
	Wikipedia 						-> Instance (computer systems)
	learncpp.com 					-> 13.12-Const class objects and member functions
	iditect.com	 					-> Define class and create object in C: use object pointer
	microsoft.com 				-> new operator (C++)
	kindsonthegenius.com 	-> C++ OOP - Virtual Functions
