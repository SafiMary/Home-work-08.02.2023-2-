#include "Bike2.h"
#include "Ivehicle.h"

	Bike2::Bike2(size_t speed):_speed(speed) {}
	size_t Bike2::getSpeed() const  {
		return _speed;
	}
	void Bike2::printType() const {
		std::cout << "Bike2" << std::endl;
	}
