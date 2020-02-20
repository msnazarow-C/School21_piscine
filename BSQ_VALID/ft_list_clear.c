#include "bsq.h"

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list)
	{
	    free((*begin_list)->data);
	    (*begin_list)->data = NULL;
		ft_list_clear(&(*begin_list)->next);
	}
	free(*begin_list);
	*begin_list = NULL;
}
