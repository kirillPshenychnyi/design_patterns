#include "Bus.hpp"
#include "Car.hpp"
#include "VehicleLogger.hpp"
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>


int main()
{
	typedef
		std::vector<std::unique_ptr<Vehicle> >
		Vehicles;

	CarLogger logger(std::cout);

	Vehicles vehicles;
	
	vehicles.push_back(std::make_unique<Car>("GAZ21", 200, Car::Type::Sedan));
	vehicles.push_back(std::make_unique<Bus>("PAZ3205", 130, 25));
	vehicles.push_back(std::make_unique<Car>("UAZ3163", 130, Car::Type::Jeep));

	std::for_each(
		vehicles.begin()
	,	vehicles.end()
	, [&logger](const Vehicles::value_type & _vehicle)
		{
			logger.log(*_vehicle);
		}
	);
	

	return 0;
}
