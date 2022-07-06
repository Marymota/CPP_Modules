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

#### Ex. 04