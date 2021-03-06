//
// Created by aisen on 23.04.2021.
//

#ifndef PSS_HW5_PASSENGERGATEWAY_H
#define PSS_HW5_PASSENGERGATEWAY_H


#include "../App.h"

class PassengerGateway {
private:
    App back;

public:
    PassengerGateway(App backEnd);
    bool LogIn(Passenger passenger);
    void orderHistory(Passenger passenger);

    void createOrder(Passenger passenger, string from, string to, int carType);

    void acceptRide(Passenger passenger, bool accept);

    void getCoordinates(Passenger passenger);

    void lookForPayment(Passenger passenger);

    void addPayment(Passenger passenger);

    void addPayment(Passenger passenger, string payment);

    void addPinnedAddress(Passenger passenger, string address);

    void lookForPinnedAddress(Passenger passenger);
};


#endif //PSS_HW5_PASSENGERGATEWAY_H
