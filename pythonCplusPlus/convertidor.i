/* File : convertidor.i */
%module convertidor

%{
#include "convertidor.h"
%}

//Ignore the default constructor
 %ignore std::Converter::Converter(); 
/* Let's just grab the original header file here */
%include "convertidor.h"

