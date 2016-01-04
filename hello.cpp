#include "HelloWorld.hpp"
#include "GoodbyeWorld.hpp"
#include <memory>

const int g_success = 0;
const int g_failure = 1;

int main()
{
	std::unique_ptr<IGreeter> l_greeter = std::make_unique<HelloWorld>();
	l_greeter->greet();
	
	l_greeter = std::make_unique<GoodbyeWorld>();
	l_greeter->greet();
	
	return g_success;
}
