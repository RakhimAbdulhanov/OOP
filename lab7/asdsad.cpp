#include <string>
#include <iostream>
#include <exception>

using namespace std;

class SkiRent
{
public:
  int RentBoots(int feetSize, int skierLevel)
  {
    return 20;
  }
  int RentSki(int weight, int skierLevel)
  {
    return 40;
  }
  int RentPole(int height)
  {
    return 5;
  }
};

class SkiResortTicketSystem
{
public:
  int BuyOneDayTicket()
  {
    return 120;
  }
  int BuyHalfDayTicket()
  {
    return 60;
  }
};

class BookException : public exception
{
  string e;

public:
  BookException(string message) : e(message) {}
  const char *what() { return e.c_str(); }
};

class HotelBookingSystem
{
public:
  int BookRoom(int roomQuality)
  {
    switch (roomQuality)
    {
    case 3:
      return 250;
    case 4:
      return 500;
    case 5:
      return 900;
    default:
      throw BookException("roomQuality should be in range [3;5]");
    }
  }
};

class SkiResortFacade
{
private:
  SkiRent *_skiRent;
  SkiResortTicketSystem *_skiResortTicketSystem;
  HotelBookingSystem *_hotelBookingSystem;

public:
  int HaveGoodRest(int height, int weight, int feetSize, int skierLevel, int roomQuality)
  {
    int skiPrice = _skiRent->RentSki(weight, skierLevel);
    int skiBootsPrice = _skiRent->RentBoots(feetSize, skierLevel);
    int polePrice = _skiRent->RentPole(height);
    int oneDayTicketPrice = _skiResortTicketSystem->BuyOneDayTicket();
    int hotelPrice = _hotelBookingSystem->BookRoom(roomQuality);

    return skiPrice + skiBootsPrice + polePrice + oneDayTicketPrice + hotelPrice;
  };
  SkiResortFacade()
  {
    _skiRent = new SkiRent();
    _skiResortTicketSystem = new SkiResortTicketSystem();
    _hotelBookingSystem = new HotelBookingSystem();
  };

  int HaveRestWithOwnSkis()
  {
    int oneDayTicketPrice = _skiResortTicketSystem->BuyOneDayTicket();
    return oneDayTicketPrice;
  };
};

int main()
{
  SkiResortFacade *skiResortFacade = new SkiResortFacade();
  try
  {
    int weekendRestPrice = skiResortFacade->HaveGoodRest(175, 60, 42, 2, 5);
    cout << "Price: " << weekendRestPrice;
  }
  catch (BookException &e)
  {
    cout << e.what();
  }
  return 0;
}