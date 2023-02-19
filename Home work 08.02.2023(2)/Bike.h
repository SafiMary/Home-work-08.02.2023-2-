#pragma once
#include <iostream>
#include "Ivehicle.h"



class Bike : public Ivehicle {
public:
	Bike(size_t speed);
	size_t getSpeed()const override;
	void printType()const override;
private:
	size_t _speed{};
};
