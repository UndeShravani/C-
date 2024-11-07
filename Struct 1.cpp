#include <iostream> 
using  namespace  std ; 
struct  Student  { 
string  name; 
int  rollNumber; 
float  marks; 
}; 
int  main () { 
Student s1; 
s1.name =  "John Doe" ; 
s1.rollNumber =  101 ; 
s1.marks =  87.5 ; 
cout  <<  "Name: "  << s1.name <<  endl ; 
cout  <<  "Roll Number: "  << s1.rollNumber <<  endl ; 
cout  <<  "Marks: "  << s1.marks <<  endl ; 
return  0 ; 
}