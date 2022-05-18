//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex02.hpp"

// It randomly instanciates A, B or C and returns the instance as a Base pointer.
// Feel free to use anything you like for the random choice implementation.
Base *generate(void)
{
	int		randomClass = rand() % 3;
	Base	*ptr;

	switch (randomClass)
	{
	case 0:
		std::cout << "Generating random class of type: " << "A\n";
		ptr = new A;
		break;
	case 1:
		std::cout << "Generating random class of type: " << "B\n";
		ptr = new B;
		break;
	case 2:
		std::cout << "Generating random class of type: " << "C\n";
		ptr = new C;
		break;
	}
		return (ptr);
}

// It prints the actual type of the object pointed to by p : "A", "B" or "C".
void identify(Base* p)
{
	char	c = 0;

	if (A *test = dynamic_cast<A*>(p))
		c = 'A';
	else if (B *test = dynamic_cast<B*>(p))
		c = 'B';
	else if (C *test = dynamic_cast<C*>(p))
		c = 'C';

	if (c)
		std::cout << "The pointer points to a " << c << " object\n";
	else
		std::cout << "The pointer points to no object\n";
}

// It prints the actual type of the object pointed to by p : "A", "B" or "C".
// Using a pointer inside this function is forbidden.
void identify(Base &p){
	char	c = 0;

	try {
		A test = dynamic_cast<A&>(p);
		c = 'A';
	}
	catch(std::exception &e) { }

	try {
		B test = dynamic_cast<B&>(p);
		c = 'B';
	}
	catch(std::exception &e) { }

	try {
		C test = dynamic_cast<C&>(p);
		c = 'C';
	}
	catch(std::exception &e) { }

	if (c)
		std::cout << "The reference points to a " << c << " object\n";
	else
		std::cout << "The reference points to no object\n";
}

int main(void)
{
	Base*	ptr;

	std::srand(std::time(0));
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	return (0);
}
