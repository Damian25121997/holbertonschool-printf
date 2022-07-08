_printf


NAME:

  _printf

DESCRIPTION:

  The funcion _printf is meant to produce an output according to a given format.
  There are 4 different formats to be called with the sign '%' and its corresponding letter, this formats are as follows:
  %c - prints a char
  %s - prints a string
  %d - prints a decimal
  %i - prints an interger
  It can also be used for printing a string by wraping it between quotes ("").
  
  RETURN VALUE:
  
   Upon successful return, the funcion should return the number of characters printed, excluding the null byte at the end of the string output.
  
  EXAMPLES:
  
   To print only a string.
    
    #include "main.h"
    _printf("This is a string");
    
   To print a character
   
    #include "main.h"
    _printf("Character: %c", char)
    
   To print a string fom a variable
   
    #include "main.h"
    _printf("String: %s", string)
    
   To print a decimal
   
    #include "main.h"
    _printf("Decimal: %d", dec)
    
   To print a interger
   
    #include "main.h"
    _printf("Interger: %i", int)
