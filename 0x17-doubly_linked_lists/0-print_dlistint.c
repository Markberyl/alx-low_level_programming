<<<<<<< HEAD
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head of the list
 * Return: number of nodes in the list
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
	return (size);

	while (h)
	{
	printf("%d\n", h->n);
	size++;
	h = h->next;
	}
	return (size);
}
=======
#include "lists.h" 
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list. 
 * Return: The number of nodes in the list.
 */
 size_t print_dlistint(const dlistint_t *h)
     {
	size_t nodes = 0;

 	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	} 
	return (nodes);}

>>>>>>> f2a4bfa5c3702f06d69bd51e5a557141ba0c0950
