/****************************************************************************************************

RepRapFirmware - Main Include

This includes all the other include files in the right order and defines some globals.  
No other definitions or information should be in here.

-----------------------------------------------------------------------------------------------------

Version 0.1

18 November 2012

Adrian Bowyer
RepRap Professional Ltd
http://reprappro.com

Licence: GPL

****************************************************************************************************/

#ifndef REPRAPFIRMWARE_H
#define REPRAPFIRMWARE_H

// Warn of what's to come, so we can use pointers to classes...

class Platform;
class Webserver;
class GCodes;
class Move;
class Heat;
class RepRap;

extern RepRap reprap;

// Functions and globals not part of any class

char* ftoa(char *a, const float& f, int prec);
boolean StringEndsWith(char* string, char* ending);
boolean StringStartsWith(char* string, char* starting);
boolean StringEquals(char* s1, char* s2);
int StringContains(char* string, char* match);

extern char scratchString[30];

//#include <stdio.h>
//#include <stdlib.h>

#include <float.h>

#include "Configuration.h"
#include "Platform.h"
#include "Webserver.h" 
#include "GCodes.h"
#include "Move.h"
#include "Heat.h"
#include "Reprap.h"



#endif


