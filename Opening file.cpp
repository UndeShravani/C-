#include <fstream>  
#include <iostream> 
using  namespace  std ; 
int  main () { 
ifstream  inputFile ( "example.txt" );  
ofstream  outputFile ( "example.txt" );  
fstream  file ( "example.txt" , ios::in | ios::out);   
return  0 ; 
}