#include <iostream>

using namespace std;

void GoDoAnIntro();

int GoGetTheNumOfFlights();

int main()
{
    // program to enter in data for all the flights in a given day
    // Flight #
    // floight hours, # landings, fuel burn
    // 2D array

    const int flightData = 4;

    int flightNum = 0;

    GoDoAnIntro();

    flightNum = GoGetTheNumOfFlights();

   double flights[flightNum][flightData];

    //enter in the flight data
        int nextcount = 0;

        for(int count = 0; count < flightNum; count++)
        {
            cout << "\nEnter in the flight #: ";
            cin >> flights[count][nextcount];
                nextcount++;
            cout << "\nEnter the hours in flight: ";
            cin >> flights[count][nextcount];
                nextcount++;
            cout << "\nEnter the number of landings for flight #";
            cout << flights[count][0];
            cout << ": ";
            cin >> flights[count][nextcount];
                nextcount++;
            cout << "\nEnter the fuel burned for this flight: ";
            cin >> flights[count][nextcount];
                nextcount = 0;
        }


    cout << "These are the flights for today:\n\n";
    cout << "Flight #\tHours\tLandings\tFuel Burned" << endl;
    cout << "========\t=====\t========\t===========" << endl;

    for (int x = 0; x < flightNum; x++)
    {
    cout << flights[x][0] << "\t\t" << flights[x][1] << "\t" << flights[x][2] << "\t\t" << flights[x][3] << endl;
    }

    return 0;
}

    // ++++ Intro ++++
    void GoDoAnIntro()
    {
        cout << "FLIGHT DATA REPORT\n==================\n" << endl;
    }

    // ++++ Enter the data ++++
    int GoGetTheNumOfFlights()
    {
        int flts = 0;
        cout << "\n\nHow many flights were there today? ";
        cin >> flts;
        return flts;
    }


