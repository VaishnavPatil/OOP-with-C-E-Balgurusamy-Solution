//
// Created by vaishnav on 16-01-2024.
//
#include <iostream>
using namespace std;

int main()
{
    // Get the number of ballots
    int numBallots;
    cout << "Enter the number of ballots: ";
    cin >> numBallots;

    // Initialize an array to store the count for each candidate (index 0 is not used)
    int count[6] = {0};

    // Variable to count spoilt ballots
    int spoiltBallots = 0;

    // Read each ballot and count the votes
    for (int i = 0; i < numBallots; ++i)
    {
        int ballot;
        cout << "Enter the candidate number for ballot " << (i + 1) << ": ";
        cin >> ballot;

        // Check if the ballot is within the valid range (1 to 5)
        while (ballot < 1 || ballot > 5)
        {
            cout << "Invalid candidate number. Please enter a valid candidate number (1 to 5): ";
            cin >> ballot;
        }

        // Increment the count for the corresponding candidate
        count[ballot]++;
    }

    // Display the results
    cout << "\nVotes count:" << endl;
    for (int i = 1; i <= 5; ++i)
    {
        cout << "Candidate " << i << ": " << count[i] << " votes" << endl;
    }

    cout << "\nSpoilt ballots: " << spoiltBallots << endl;

    return 0;
}
