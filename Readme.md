#Building and Running
Project is using Cmake as a building tool
Download Cmake from https://cmake.org/download/

#Project Structure
Project have 3 modules:
1)Gateway - include `AdminGateway, PassengerGateway, DriverGateway`.
2)User - includes `Admin, Driver and Passenger`.
2)App - include `App (backend)`.

`System.h` contain 'System' class, which one responsible for DB interaction and manage of users classes

`Gateway` contain methods for get values and queries from users to `System`

`Admin.h, Passenger.h, Driver.h` classes which contain info from user ('login, password, name and etc')

---
#Gateways
## Passenger Gateway

Methods in passenger gateway:

* `LogIn()`  - login passenger.
* `orderHistory()` - get order history of user.
* `createOrder()` - create and add order to available orders.
* `acceptRide()` - accept or decline the conditions of order.
* `getCoordinates()` - output the relative position during the ride.
* `lookForPayment()` - payment methods.
* `addPayment()` - add the payment method to the payment methods.
* `addPinnedAddress` - save the address to the pinned addresses.
* `lookForPinnedAddresses` - pinned addresses.

## Driver Gateway
Methods in DriverGateway:

* `LogIn()`  - login driver.
* `lookForOrders()` - check the available orders.
* `acceptOrder()` - take one from available orders.
* `endOrder()` - finishes the ride and close current order.
* `addCar()` - adds additional car to the driver.

---
# Users
## Passenger
* `isBlocked` - status of user.
* `id` - unique identifier of the passenger.
* `login` - login of the passenger.
* `password` - password of passenger.
* `rating` - rating of the passenger.
* `name` - name of passenger.
* `paymentMethods` - payment methods.
* `orderHistory` - previous orders.
* `pinnedAdresses` - pinned addresses.
* `activeOrder` - current active order.
* `proposedOrder` - order offered by system.
* `propose` - status of the proposed order.
* `active` - status of user.

## Driver
Same fields as `Passenger`.

* `cars` - driver's cars.
* `chosenCar` - car currently in use.
* `proposedOrders` - available orders from passengers.

##Admin
* `id` - admin id.
*`login` - admin login.
*`password` - admin password.
  
# Other classes
##Order
Class order contains info about the person who placed this order, time, number, and etc.

##Car
Class car contains info about the car, such as model, number, color, type, and etc.
