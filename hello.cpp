#include "HelloWorld.hpp"

int main()
{
	IGreeter *l_greeter = new HelloWorld();
	l_greeter->greet();
	
	delete l_greeter;
	return 0;
}
