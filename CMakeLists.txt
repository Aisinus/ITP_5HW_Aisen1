cmake_minimum_required(VERSION 3.19)
project(PSS_HW5)

set(CMAKE_CXX_STANDARD 20)

add_executable(PSS_HW5 main.cpp users/Driver.cpp users/Driver.h Car.cpp Car.h Order.cpp Order.h users/Passenger.cpp users/Passenger.h Gateways/PassengerGateway.cpp Gateways/PassengerGateway.h Gateways/DriverGateway.cpp Gateways/DriverGateway.h App.cpp App.h Gateways/AdminGateway.cpp Gateways/AdminGateway.h users/Admin.cpp users/Admin.h)