#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include "Printer.h"
#include "Ivehicle.h"
#include "Car.h"
#include "Bike.h"
#include "Bike2.h"
#include <memory>



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	std::shared_ptr<Ivehicle> car = std::make_shared<Car>(4);
	std::shared_ptr<Ivehicle> bike = std::make_shared<Bike>(4);
	std::shared_ptr<Ivehicle> bike2 = std::make_shared<Bike2>(4);
	Printer f;
	f.getIvehicle(car);
	f.getIvehicle(bike);
	f.getIvehicle(bike2);
	f.printavto();



}