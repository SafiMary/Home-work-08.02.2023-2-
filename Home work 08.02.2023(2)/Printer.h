#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "Ivehicle.h"
#include "Bike2.h"
#include "Bike.h"
#include "Car.h"

	
	class Printer {
	public:
		void printDefault();
		void getIvehicle(std::shared_ptr<Ivehicle> a);
		void printavto();
	private:
	 std::vector<std::shared_ptr<Ivehicle>> _vec;
	};


