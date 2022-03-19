/*
* 6-multiplication.c - multiplication of complex
* Author: Jaasiel Gerardo López Mojica
* Date: March 18, 2022
*/

#include "holberton.h"
#include <math.h>

/**
* multiplication - return the multiplication
* @c1: complex
* @c2: complex
* @c3: complex pointer
* Return: void
*/

void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
