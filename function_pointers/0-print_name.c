#include "function_pointers.h"

/**
* print_name - function that print name
* @name: name
* @f: pointer
*/

void print_name(char *name, void (*f)(char *))
{
	/* Verifi si name ou f ne sont pas NULL*/
	if (!name || !f)
		return;

	/* utilise le pointer de focntion f pour appeler name*/
	/* f(name); est pareil que => (*f)(name) */
	f(name);

}
