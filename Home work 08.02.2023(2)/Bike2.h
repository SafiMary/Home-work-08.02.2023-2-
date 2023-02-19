#pragma once
#include <iostream>
#include <memory>
#include "Ivehicle.h"
class Bike2 : public Ivehicle {
public:
	Bike2(size_t speed);
	size_t getSpeed() const override;
	void printType() const override;
private:
	size_t _speed{};
	
	
};

