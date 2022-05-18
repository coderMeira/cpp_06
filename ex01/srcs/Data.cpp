//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Data.hpp"

Data::Data() {
	// TODO (default constructor)
}

Data::Data(const Data& param) {
	// TODO (copy constructor)
	(void)param;
}

Data::~Data() {
	std::cout << "Data" << " destroyed" << std::endl;
	// TODO (destructor)
}

Data& Data::operator= (const Data& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const Data& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

uintptr_t	Data::serialize(Data* ptr)
{
	uintptr_t	ret = reinterpret_cast<uintptr_t>(ptr);

	return (ret);
}

Data*	Data::deserialize(uintptr_t raw)
{
	Data*	ret = reinterpret_cast<Data*>(raw);

	return (ret);
}
