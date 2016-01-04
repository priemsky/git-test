#pragma once

#include "IGreeter.hpp"

class GoodbyeWorld : public IGreeter
{
public:
	void greet() const override;
}
