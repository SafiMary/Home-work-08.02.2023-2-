#pragma once
#include <iostream>
#include "Ivehicle.h"
class Car :public Ivehicle {
public:
	Car(size_t speed);
	size_t getSpeed()const override;
	void printType() const override;
private:
	size_t _speed{};
};
