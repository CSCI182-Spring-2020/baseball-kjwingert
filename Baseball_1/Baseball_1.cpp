#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#define Max_Player_Count 15

using namespace std; 

struct Player {
    string Name;
    int HitNo;
    int AtBat;
    int Walks;
    int Outs;
    int BattingAverage;
};

int main()
{

    ifstream inFile; 

   /* inFile.open("BaseballPlayers.h");
        if (!infile) {
            cout << "Unable to open file"
                exit(1); // terminate with error
        }*/

    Player Fleet[Max_Player_Count];

    char PlayerName[15];
    int nHitNo;
    int nAtBat;
    int nWalks;
    int nOuts;
    int nBattingAverage = nHitNo / nAtBat;
    int importCount = 0;


    while (!inFile.eof() && importCount < Max_Player_Count) {
        inFile >> PlayerName >> nHitNo >> nAtBat >> nWalks >> nOuts >> nBattingAverage;

        Fleet[importCount].Name = PlayerName;
        Fleet[importCount].HitNo = nHitNo;
        Fleet[importCount].AtBat = nAtBat;
        Fleet[importCount].Walks = nWalks;
        Fleet[importCount].Outs = nOuts;
        Fleet[importCount].BattingAverage = nBattingAverage;

        importCount++;
    }



    inFile.close();

    for (int i = 0; i <= Max_Player_Count-1; i++) 
    {
        cout << Fleet[i].Name << Fleet[i].HitNo << Fleet[i].AtBat << Fleet[i].Walks << Fleet[i].Outs << Fleet[i].BattingAverage << endl;
    }

}




