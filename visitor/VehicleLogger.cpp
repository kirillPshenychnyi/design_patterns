#include "VehicleLogger.hpp"
#include "Bus.hpp"
#include "Car.hpp"

void CarLogger::log(const Vehicle & _vehicle)
{
	_vehicle.accept(*this);
	m_targetStream << '\n';
}

void CarLogger::visit(const Car & _car)
{
	m_targetStream << "Car" << '\n';
	logCommonInfo(_car);
	m_targetStream  
		<< "Type: " 
		<< Car::typeToString(_car.getType()) << '\n';
}

void CarLogger::visit(const Bus & _bus)
{
	m_targetStream << "Bus" << '\n';
	logCommonInfo(_bus);

	m_targetStream
		<< "Max passengers amount: "
		<< _bus.getPassengersAmount() << '\n';
}

void CarLogger::logCommonInfo(const Vehicle & _vehicle)
{
	m_targetStream 
		<< "Model: " << _vehicle.getModel() << '\n'
		<< "Horse power: " << _vehicle.getHorsePower() << '\n';
}
