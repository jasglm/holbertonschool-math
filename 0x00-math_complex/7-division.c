/*
* 7-division.c - division of complex
* Author: Jaasiel Gerardo López Mojica
* Date: March 18, 2022
*/

#include "holberton.h"
#include <math.h>

/**
* division - return the division
* @c1: complex
* @c2: complex
* @c3: complex pointer
* Return: void
*/

void division(complex c1, complex c2, complex *c3)
{
/* all at once */
double a = c1.re;
double b = c1.im;

double c = c2.re;
double d = c2.im;
/* to structure */
c3->re = ((a * c) + (b * d)) / (pow(c, 2) + pow(d, 2));
c3->im = ((b * c) - (a * d)) / (pow(c, 2) + pow(d, 2));
}
