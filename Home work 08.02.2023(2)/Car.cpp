#include "Car.h"
#include "Ivehicle.h"

Car::Car(size_t speed):_speed(speed) {}
	size_t Car::getSpeed()const{
		return _speed;
	}
	void Car::printType()const {
		std::cout << "Car" << std::endl;
	}
