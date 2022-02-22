#include "libft.h"

bool	ft_isinteger(long nbr)
{
	return (nbr >= INT_MIN && nbr <= INT_MAX);
}