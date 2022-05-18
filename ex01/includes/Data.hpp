//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __DATA_HPP__
# define __DATA_HPP__

#include <iostream>

class Data {
	public:
		Data();
		Data(const Data&);
		~Data();
		Data&	operator= (const Data&); // const for safety... not super nesessary

		static uintptr_t	serialize(Data* ptr);
		static	Data*		deserialize(uintptr_t raw);
		int	k;
};

std::ostream&	operator<<(std::ostream&, const Data&);

#endif

