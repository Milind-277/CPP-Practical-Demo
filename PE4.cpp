//Create a system to track the names of events, hours volunteered, and feedback ratings. Use three parallel vectors:
    //1. vector<string> for event names. 
    //2. vector<int> for hours volunteered. 
    //3. vector<float> for feedback ratings.



#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> eventNames;
    vector<int> hoursVolunteered;
    vector<float> feedbackRatings;

    int choice;

    do {
        cout << "\n--- Local Event Volunteer Tracker ---\n";
        cout << "1. Add Event Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Update Feedback Rating\n";
        cout << "4. Calculate Total Hours Volunteered\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            int hours;
            float rating;

            cout << "Enter Event Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter Hours Volunteered: ";
            cin >> hours;

            cout << "Enter Feedback Rating (1–5): ";
            cin >> rating;

            eventNames.push_back(name);
            hoursVolunteered.push_back(hours);
            feedbackRatings.push_back(rating);

            cout << "Record Added Successfully!\n";
        }

        else if (choice == 2) {
            if (eventNames.empty()) {
                cout << "No records available!\n";
            } else {
                cout << "\n--- Event Records ---\n";
                for (int i = 0; i < eventNames.size(); i++) {
                    cout << i + 1 << ". " << eventNames[i]
                         << " | Hours: " << hoursVolunteered[i]
                         << " | Rating: " << feedbackRatings[i] << "\n";
                }
            }
        }

        else if (choice == 3) {
            int index;
            float newRating;

            if (eventNames.empty()) {
                cout << "No records to update!\n";
            } else {
                cout << "Enter event number to update rating: ";
                cin >> index;

                if (index < 1 || index > eventNames.size()) {
                    cout << "Invalid event number!\n";
                } else {
                    cout << "Enter new rating: ";
                    cin >> newRating;
                    feedbackRatings[index - 1] = newRating;
                    cout << "Rating Updated Successfully!\n";
                }
            }
        }

        else if (choice == 4) {
            int total = 0;
            for (int h : hoursVolunteered)
                total += h;

            cout << "Total Hours Volunteered: " << total << " hours\n";
        }

    } while (choice != 5);

    cout << "Thank you for using the Volunteer Tracker!\n";

    return 0;
    
}
