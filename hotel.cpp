#include <iostream>
#include <stdio.h>
using namespace std;
struct Menus
{
  int no;
  string item;
  int price;
};

class Hotel
{
protected:
  int userChoise;
  int Dish;
  int qunty;
  float Gst = 0.00;

public:
  void star()
  {
    cout << "****************************************************************************************************************************************************************" << endl;
  }

  void info()
  {
    cout << "\t\t\t\t\tFor Menu Press       :1" << endl;
    cout << "\t\t\t\t\tOreder Dish Press    :2" << endl;
    cout << "\t\t\t\t\tcurrent Status Press :3" << endl;
    cout << "\t\t\t\t\tMake Bill press      :4" << endl;
    cout << "\t\t\t\t\tExit Press           :0" << endl;
  }

  void Choise()
  {
    cout << "Enter your Choise:";
    cin >> userChoise;
  }

  int returnChoise()
  {
    return userChoise;
  }

  void choisedish()
  {
    cout << "Enter Dish Number:";
    cin >> Dish;
    cout << "Entr Quntity:";
    cin >> qunty;
  }
  int returnchoisedish()
  {
    return Dish;
  }

  int quntity()
  {
    return qunty;
  }

  float Gstcal(int price)
  {
    Gst = (price * 18) / 100;
    return Gst;
  }

  void dottedline()
  {
    cout << "------------------------------------------------------------------";
  }
};

int main()
{
  int price = 0;
  int userchoce;
  int dishchoice;
  int Quntity;
  float Gst = 0.00;
  Menus m1[30] = {
      {0, "item", 0},
      {1, "Paneer Pakoda      ", 220},
      {2, "Palak Paneer       ", 170},
      {3, "Veg Burger         ", 110},
      {4, "Veg Grill  Sandwich", 160},
      {5, "Veg Fry rice       ", 160},
      {6, "Veg Biryani        ", 350},
      {7, "Mix Veg Pizzah     ", 450},
      {8, "Jeera Rice         ", 160},
      {9, "Potato Cheeps      ", 80},
      {10, "Masala Dosa        ", 90},
      {11, "Momos              ", 90},
      {12, "Franki             ", 140},
      {13, "Sweet Corn         ", 110},

      {14, "Gulab Jamun        ", 60},
      {15, "Kulfi              ", 40},
      {16, "Vanil Ice-Cream    ", 70},
      {17, "Chocolate Ice-Cream", 80},
      {18, "chocolate Cake     ", 500},

      {19, "Thums-Up           ", 35},
      {20, "Mountain duo       ", 30},
      {21, "Mazza              ", 35},
      {22, "Sosyo              ", 25},
      {23, "Mile               ", 50},
      {24, "Chocolat Milk      ", 80},
      {25, "Water              ", 30}

  };
  class Hotel h1;

  while (1)
  {
    h1.star();
    h1.info();
    h1.star();
    h1.Choise();
    h1.star();
    userchoce = h1.returnChoise();
    if (userchoce == 0)
    {
      break;
    }
    else if (userchoce >= 5)
    {
      cout << "Enter valid input" << endl;
    }
    else
    {
      switch (userchoce)
      {
      case 1:

        cout << "\t\t\tMenu" << endl;
        h1.dottedline();
        cout << endl
             << "No\t" << "item\t\t\t" << "price" << endl;
        for (int i = 0; i <= 13; i++)
        {
          if (i != 0)
          {
            cout << endl
                 << m1[i].no << "\t" << m1[i].item << "\t" << m1[i].price << endl;
          }
        }
        h1.dottedline();
        cout << endl
             << "\t\tDesert" << endl;
        cout << endl
             << "No\t" << "item\t\t\t" << "price" << endl;

        for (int i = 14; i <= 18; i++)
        {
          cout << endl
               << m1[i].no << "\t" << m1[i].item << "\t" << m1[i].price << endl;
        }
        h1.dottedline();
        cout << endl
             << "\t\tDrinks" << endl;
        cout << endl
             << "No\t" << "item\t\t\t" << "price" << endl;

        for (int i = 19; i <= 25; i++)
        {
          cout << endl
               << m1[i].no << "\t" << m1[i].item << "\t" << m1[i].price << endl;
        }

        break;
      case 2:

        cout << "\t\tOreder Dish" << endl;
        h1.choisedish();
        h1.star();
        cout << endl
             << "Yor Orede confirmed" << endl;
        dishchoice = h1.returnchoisedish();
        Quntity = h1.quntity();
        price = m1[dishchoice].price * Quntity;
        cout << "price is:" << price << endl;
        Gst = h1.Gstcal(price);
        cout << "GST is:" << Gst << endl;

        break;
      case 3:

        cout << "Dish name\t\t" << "Quntity\t" << "price" << "\t" << "total" << endl;
        cout << m1[dishchoice].item << "\t" << Quntity << "\t" << m1[dishchoice].price << "\t" << price << endl;

        break;
      case 4:
        h1.dottedline();
        cout << endl
             << "\t\t\t  Bhagirath Hotel" << endl;
        cout << "\t\t    436 Varachha Road Surat" << endl;
        cout << "\t\t\tMobile NO:7863074845" << endl;
        h1.dottedline();

        cout << endl
             << "Date:17/12/2024" << endl;
        cout << "Time:12:00" << endl;
        h1.dottedline();

        cout << endl
             << "Dish name\t\t" << "Quntity\t" << "price" << "\t" << "total" << endl;
        h1.dottedline();

        cout << endl
             << m1[dishchoice].item << "\t" << Quntity << "\t" << m1[dishchoice].price << "\t" << price << endl;
        h1.dottedline();

        cout << endl
             << "GSt\t\t\t\t" << "18%\t" << Gst << endl;
        h1.dottedline();

        cout << endl
             << "Total Bill\t\t\t\t" << price + Gst << endl;
        h1.dottedline();

        cout << endl
             << "\t\tThank you for your Visit" << endl;
        break;
      default:
        cout << "Enter valid input" << endl;
        break;
      }
      if (userchoce == 4)
      {
        break;
      }
    }
  }
  return 0;
}