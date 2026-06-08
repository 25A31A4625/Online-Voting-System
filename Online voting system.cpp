#include <iostream>
using namespace std;

class Candidate {
public:
    string name;
    int votes;

    Candidate() {
        votes = 0;
    }
};

int main() {
    Candidate c1, c2, c3;

    c1.name = "Candidate A";
    c2.name = "Candidate B";
    c3.name = "Candidate C";

    int choice;

    do {
        cout << "\n===== ONLINE VOTING SYSTEM =====";
        cout << "\n1. Vote for Candidate A";
        cout << "\n2. Vote for Candidate B";
        cout << "\n3. Vote for Candidate C";
        cout << "\n4. View Results";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                c1.votes++;
                cout << "Vote cast successfully for "
                     << c1.name << "!\n";
                break;

            case 2:
                c2.votes++;
                cout << "Vote cast successfully for "
                     << c2.name << "!\n";
                break;

            case 3:
                c3.votes++;
                cout << "Vote cast successfully for "
                     << c3.name << "!\n";
                break;

            case 4:
                cout << "\n===== RESULTS =====\n";
                cout << c1.name << ": "
                     << c1.votes << " votes\n";
                cout << c2.name << ": "
                     << c2.votes << " votes\n";
                cout << c3.name << ": "
                     << c3.votes << " votes\n";
                break;

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}
