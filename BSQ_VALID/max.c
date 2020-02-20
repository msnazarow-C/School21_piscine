#include "bsq.h"

t_max	max_count(t_max max, int i,int j, int count)
{
	if (count > max.count)
	{
		max.count = count;
		max.x = i;
		max.y = j;
	}
	return (max);
}