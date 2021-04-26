#include <iostream>
#include <ctime>
#include "users/Driver.h"
#include "users/Passenger.h"
#include "Gateways/PassengerGateway.h"
#include "Gateways/DriverGateway.h"
#include "Gateways/AdminGateway.h"


using namespace std;

int main() {
    srand(time(0));
    Driver driver("check1", "qwerty");
    Passenger passenger("chech1", "qwerty");
    Passenger passengerFromSecondDevice("chech1", "qwerty");
    Admin admin("admin","admin");
    Driver driver1("check2","qwerty");
    App backEnd;
    PassengerGateway passengerGateway(backEnd);
    DriverGateway driverGateway(backEnd);
    AdminGateway adminGateway(backEnd);
    //
    Car car("TT","1234",2,3,"0");
    driverGateway.addCar(driver,car);
    cout<<"\n";
    adminGateway.lookForCarsInQueue(admin);
    cout<<"\n";
    adminGateway.validateCar(admin,0);
    cout<<"\n";
   adminGateway.blockPassenger(admin,1);
    adminGateway.unBlockPassenger(admin,1);
    passengerGateway.createOrder(passenger,"from","to",1);
    cout<<"\n";
    passengerGateway.acceptRide(passenger,1);
    cout<<"\n";
    adminGateway.blockDriver(admin,1002);
  adminGateway.unBlockDriver(admin,1002);
    driverGateway.lookForOrders(driver1);
    cout<<"\n";
   driverGateway.acceptOrder(driver1,0);
    cout<<"\n";
   passengerGateway.getCoordinates(passengerFromSecondDevice);
    cout<<"\n";
    driverGateway.endOrder(driver1);
    cout<<"\n";
    passengerGateway.orderHistory(passengerFromSecondDevice);

    return 0;
}
