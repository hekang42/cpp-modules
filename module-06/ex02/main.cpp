#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int n = rand() % 3;
	if (n == 0)
		return new A();
	else if (n == 1)
		return new B();
	else
		return new C();	
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;	
}

int main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		Base *p = generate();
		identify(p);
	}
	return 0;

}