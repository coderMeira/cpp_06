//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex00.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Scalar		convert;
		std::string	literal = static_cast<std::string>(av[1]);
		t_type		type = convert.findType(literal);

		switch(type)
		{
			case CHAR:{
				char	c = literal.at(0);
				convert.print(c);
				break;
			}
			case INT:{
				int	i = std::atoi(literal.c_str());
				convert.print(i);
				break;
			}
			case FLOAT:{
				float	f = std::atof(literal.c_str());
				convert.print(f);
				break;
			}
			case DOUBLE:{
				double	d = static_cast<double>(std::atof(literal.c_str()));
				convert.print(d);
				break;
			}
			case INVALID:
				std::cout << "Invalid character input" << std::endl;
		}
	}
	return (0);
}
