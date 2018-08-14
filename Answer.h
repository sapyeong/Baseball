#include "NumberContainer.h"

#pragma once

class Answer : public NumberContainer
{
public:
	void Generate();
protected:
	virtual const char* GetPrefix();
};