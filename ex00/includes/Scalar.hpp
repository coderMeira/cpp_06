//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __SCALAR_HPP__
# define __SCALAR_HPP__

#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
#include <limits.h>

typedef enum	s_types{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
}	t_type;

class Scalar {
	public:
		Scalar();
		Scalar(const Scalar&);
		~Scalar();
		Scalar&	operator= (const Scalar&); // const for safety... not super nesessary

		t_type		findType(std::string literal) const;
		void		print(char c) const;
		void		print(int i) const;
		void		print(float f) const;
		void		print(double i) const;
};

std::ostream&	operator<<(std::ostream&, const Scalar&);

#endif

