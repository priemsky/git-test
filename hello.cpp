#include "HelloWorld.hpp"
#include <memory>

int main()
{
	std::unique_ptr<IGreeter> l_greeter = std::make_unique<HelloWorld>();
	l_greeter->greet();
	
	return 0;
}
