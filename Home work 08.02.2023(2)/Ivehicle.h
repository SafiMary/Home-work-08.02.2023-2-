#pragma once
#include <iostream>

class Ivehicle
{
public:
	virtual size_t getSpeed() const = 0;
	virtual void printType()const = 0;
	virtual ~Ivehicle() = default;


};


