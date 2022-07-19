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
