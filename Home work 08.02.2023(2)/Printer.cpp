#include "Printer.h"
#include "Ivehicle.h"
#include "Bike2.h"
#include "Bike.h"
#include "Car.h"

void Printer::printDefault() {
	std::cout << "Default Print message" << std::endl;
}
void Printer::getIvehicle(std::shared_ptr<Ivehicle> a) {
	_vec.push_back(a);
}
void Printer::printavto() {
	for (const auto& el : _vec) {
		el->printType();
	}
}