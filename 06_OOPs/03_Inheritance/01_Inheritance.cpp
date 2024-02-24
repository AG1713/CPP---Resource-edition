/*
Inheritance
Inheritance is inclusion of contents of oone class in another. The original class is called the base class and the class which takes these
attributes is called the derived class.


Types of inheritance
1) Single level inheritance
In single level inheritance, only one base class and one derived class exist. The derived class contians all contents of the main class
and may be an extension to the main (base) class.
A--->B

2) Multiple inheritance
Here, we have multiple base class and single derived class containing contents of all the base classes.
(A,B)--->C

3) Hierarchical inheritance
Here, we have single base class and several derived classes (obv containing contents of base class). The derived classes may be
different verions of base class.
A--->(B,C)

4) Multilevel inheritance
Derived class derived from derived class, derived from base class or mor base classes
A--->B--->C--->D
eg. Animal--->Mammal--->Cow

5) Hybrid inheritance
It is the mixture of hierarchical inheritance and multiple inheritance
A--->(B,C)--->D

*/

// Syntax


// Derived class
// Syntax
// class {derived-class-name} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods etc
// };
