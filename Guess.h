#include "NumberContainer.h"

#pragma once

class Guess : public NumberContainer
{
public:
	void Input();
protected:
	virtual const char* GetPrefix();
};