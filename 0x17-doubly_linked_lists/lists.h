#ifndef LIST_H
#define LIST_H

/* HEADER FILES */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <time.h>

/* LINKED LIST DECLARATION */
typedef struct dlistint_t {
	int n;
	struct dlistint_t *next;
	struct dlistint_t *prev;
}dlistint_t;

/* FUNCTION PROTOTYPES */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* FUNCTION PROTOTYPES FOR ADVANCED TASK */
int find4(char *usrn, int len);
int find5(char *usrn, int len);
int find6(char *usrn);

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);



#endif
