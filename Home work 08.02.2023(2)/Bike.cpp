#include "Bike.h"
#include "Ivehicle.h"

	Bike::Bike(size_t speed) :_speed(speed) {}
	size_t Bike::getSpeed()const {
		return _speed;
	}
	void Bike::printType()const {
		std::cout << "Bike" << std::endl;
	}
