#pragma once

#include "IGreeter.hpp"

class HelloWorld : public IGreeter
{
public:
	void greet() const override;
}
