#include "push_swap.h"

t_list	*ftlstlast(t_list *list)
{
	t_list	*curr;

	curr = list;
	while (curr->next != NULL)
		curr = curr->next;
	return (curr);
}

void	rotate(t_list **list)
{
	t_list	*first;
	t_list	*last;

	first = *list;
	if (!first->next)
		return ;
	last = ftlstlast(*list);
	last->next = first;
	*list = first->next;
	first->next = NULL;
}

void	ra(t_duo *duo)
{
	rotate(&(duo->a.head));
	write(1, "ra\n", 3);
}

void	rb(t_duo *duo)
{
	rotate(&(duo->b.head));
	write(1, "rb\n", 3);
}

void	rr(t_duo *duo)
{
	rotate(&(duo->a.head));
	rotate(&(duo->b.head));
	write(1, "rr\n", 3);
}