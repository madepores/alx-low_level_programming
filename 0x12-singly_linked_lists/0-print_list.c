#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
 
size_t cons = 0;

 while (h)
 {
 if (!h->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", h->len, h->str);
 cons = h->next;
 cons++;
 }

 return (cons);
}
