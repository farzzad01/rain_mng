#include <iostream>
using namespace std;

const int NUM_MONTHS = 12;

void enterRainfall(float rainfall[][NUM_MONTHS], int numYears) {
    for (int year = 0; year < numYears; year++) {
        for (int month = 0; month < NUM_MONTHS; month++) {
            cout << "Enter the rainfall for year " << (year + 1) << ", month " << (month + 1) << ": ";
            cin >> rainfall[year][month];
        cout << "-----------------------------\n ";
            
        }
    }
}

void show_Rainfall(float rainfall[][NUM_MONTHS], int numYears) {
    cout << "Rainfall information for all entered years:\n";
    for (int year = 0; year < numYears; year++) {
        for (int month = 0; month < NUM_MONTHS; month++) {
            cout << "Year--> " << (year + 1) << ", Month--> " << (month + 1) << "-->  " << rainfall[year][month] << endl;
            cout << "-----------------------------\n ";

        }
    }
}

void show_YearlyRainfall(float rainfall[][NUM_MONTHS], int numYears) {
    int selectedYear, selectedMonth;
    cout << "Enter the year: ";
    cin >> selectedYear;
    cout << "Enter the month: ";
    cin >> selectedMonth;

    float selectedRainfall = rainfall[selectedYear - 1][selectedMonth - 1];
    cout << "-----------------------------\n ";
    cout << "Rainfall for year --> " << selectedYear << ", month --> " << selectedMonth << "-->  " << selectedRainfall << endl;
    cout << "-----------------------------\n ";

}

void show_RainiestYear(float rainfall[][NUM_MONTHS], int numYears) {
    float maxRainfall = 0;
    int maxYear = 0;
    for (int year = 0; year < numYears; year++) {
        float totalRainfall = 0;
        for (int month = 0; month < NUM_MONTHS; month++) {
            totalRainfall += rainfall[year][month];
        }
        if (totalRainfall > maxRainfall) {
            maxRainfall = totalRainfall;
            maxYear = year + 1;
        }
    }
    cout << "-----------------------------\n ";
    cout << "Rainiest year-->  " << maxYear << endl;
    cout << "-----------------------------\n ";

}

void show_RainiestMonth(float rainfall[][NUM_MONTHS], int numYears) {
    float maxRainfall = 0;
    int maxMonth = 0;
    for (int month = 0; month < NUM_MONTHS; month++) {
        float totalRainfall = 0;
        for (int year = 0; year < numYears; year++) {
            totalRainfall += rainfall[year][month];
        }
        if (totalRainfall > maxRainfall) {
            maxRainfall = totalRainfall;
            maxMonth = month + 1;
        }
    }
    cout << "-----------------------------\n";
    cout << "Rainiest month: " << maxMonth << endl;
    cout << "Total rainfall: " << maxRainfall << endl;
    cout << "-----------------------------\n";
}

void show_AverageRainfall(float rainfall[][NUM_MONTHS], int numYears) {
    for (int year = 0; year < numYears; year++) {
        float totalRainfall = 0;
        for (int month = 0; month < NUM_MONTHS; month++) {
            totalRainfall += rainfall[year][month];
        }
        float averageRainfall = totalRainfall / NUM_MONTHS;
        cout << "-----------------------------\n ";
        cout << "Average rainfall for year --> " << (year + 1) << ": " << averageRainfall << endl;
        cout << "-----------------------------\n ";

    }
}

int main() {
    int numYears;
    cout << "Enter the number of years: ";
    cin >> numYears;
    cout << "-----------------------------\n ";

    

    float rainfall[numYears][NUM_MONTHS];

    int choice;
    do {
        cout << "Choice Menu:\n";
        cout << "1. Enter rainfall information\n";
        cout << "2. show rainfall information for all entered years\n";
        cout << "3. show rainfall for a specific year and month\n";
        cout << "4. show the rainiest year\n";
        cout << "5. show the rainiest month\n";
        cout << "6. show average rainfall for each year\n";
        cout << "7. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enterRainfall(rainfall, numYears);
                break;
            case 2:
                show_Rainfall(rainfall, numYears);
                break;
            case 3:
                show_YearlyRainfall(rainfall, numYears);
                break;
            case 4:
                show_RainiestYear(rainfall, numYears);
                break;
            case 5:
                show_RainiestMonth(rainfall, numYears);
                break;
            case 6:
                show_AverageRainfall(rainfall, numYears);
                break;
            case 7:
                cout << "Exit\n";
                break;
            default:
                cout << "Please try again.\n";
                break;
        }
    } while (choice != 7);

    return 0;
}
