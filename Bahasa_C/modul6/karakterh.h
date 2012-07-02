#ifndef KARAKTERH_H_INCLUDED
#define KARAKTERH_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<fcntl.h>
#include "boolean.h"

#define MARK '.'

void START();
void ADV();
boolean EOP();
int CountHuruf(char ds);
int CountHurufA(char ds);
int CountAN(char ds);
boolean IsVokal(char ds);
boolean IsKonsonan(char ds);
boolean IsSimbol(char ds);
boolean IsNumber(char ds);
int CountVokal(char ds);
int CountKonsonan(char ds);
int Count_1(char ds);


#endif // KARAKTERH_H_INCLUDED
