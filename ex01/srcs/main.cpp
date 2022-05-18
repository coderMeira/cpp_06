//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex01.hpp"
#include "Data.hpp"

int	main(void)
{
	Data		*d = new Data;
	Data		cens;
	uintptr_t	uip;

	d->k = 1;
	uip = cens.serialize(d);
	// std::cout << d->k << "\n";
	d = NULL;
	d = cens.deserialize(uip);
	std::cout << d->k << "\n";

	delete d;
	return (0);
}
