//
// Created by vaishnav on 19-01-2024.
//
#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

double calculateAverage(int run, int inning, int notOut)
{
    if(inning - notOut == 0)
    {
        return 0.0;
    }
    else
    {
        return static_cast<double>(run)/(inning-notOut);
    }
}
void printTable(const vector<string>& player,const vector<int>& run, const vector<int>& inning, const vector<int>& notOut)
{
    cout<<left<<setw(15)<<"Player Name"<<setw(10)<<"Runs"<<setw(10)<<"Innings"<<setw(15)<<"Time Not Out"<<setw(10)<<"Batting Avg"<<endl;
    for(size_t i = 0; i<player.size(); i++)
    {
        double average = calculateAverage(run[i], inning[i],notOut[i]);
        cout << left << setw(15) << player[i] << setw(10) << run[i] << setw(10) << inning[i] << setw(15) << notOut[i] << setw(10) << fixed << setprecision(2) << average << endl;
    }
}
int main()
{
    vector<string> player = {"Sachin", "Saurav", "Rahul"};
    vector <int> run = {8430, 4200, 3350};
    vector <int> inning = {230, 130, 105};
    vector <int> notOut = {18, 9, 11};

    printTable(player, run, inning, notOut);

    return 0;
}