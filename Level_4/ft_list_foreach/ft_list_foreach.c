#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *ptr;

	ptr = begin_list;
	while (ptr)
	{
		(*f)(prt->data);
		ptr = ptr->next;
	}
}
