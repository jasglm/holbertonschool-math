/*
* 2-modulus.c - Modulus of complex
* Author: Jaasiel Gerardo López Mojica
* Date: March 18, 2022
*/

#include "holberton.h"
#include <math.h>

/**
* modulus - return the modulus
* @c: structure complex
* Return: c
*/

double modulus(complex c)
{
	double mod;

	mod = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (mod);
}
