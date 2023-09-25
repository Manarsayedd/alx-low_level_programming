#include<stdlib>
#include"lists.h"
/**
 * list_len - function to print number of nodes
 * @h: first input
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
