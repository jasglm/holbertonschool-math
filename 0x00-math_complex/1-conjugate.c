/*
* 1-conjugate.c - Conjugate of ocmplex
* Author: Jaasiel Gerardo López Mojica
* Date: March 18, 2022
*/

#include "holberton.h"
#include <stdio.h>

/**
* conjugate - return the conjugate
* @c: structure complex
* Return: complex
*/

complex conjugate(complex c)
{
c.im *= -1;
return (c);
}
