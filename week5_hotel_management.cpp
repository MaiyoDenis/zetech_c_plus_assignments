// Denis Maiyo, BCS-03-0078/2025
// Week 5: Hotel Management System Using Arrays
// Program to monitor hotel revenue and room occupancy using 1D, 2D, and 3D arrays

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Seed for random number generation
    
    cout << "========== HOTEL MANAGEMENT SYSTEM ==========\n" << endl;
    
    // ========== 1D ARRAY - WEEKLY REVENUE TRACKER ==========
    cout << "\n--- 1D ARRAY: WEEKLY REVENUE TRACKER ---\n" << endl;
    
    const int DAYS_PER_WEEK = 7;
    double revenue[DAYS_PER_WEEK];
    string dayNames[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    // Input revenue for each day
    cout << "Enter revenue for each day of the week:\n" << endl;
    for (int i = 0; i < DAYS_PER_WEEK; i++) {
        cout << "Enter revenue for " << dayNames[i] << ": Ksh. ";
        cin >> revenue[i];
    }
    
    // Calculate total weekly revenue
    double totalWeeklyRevenue = 0;
    for (int i = 0; i < DAYS_PER_WEEK; i++) {
        totalWeeklyRevenue += revenue[i];
    }
    
    // Calculate average daily revenue
    double averageDailyRevenue = totalWeeklyRevenue / DAYS_PER_WEEK;
    
    // Display results
    cout << "\n--- Weekly Revenue Summary ---" << endl;
    for (int i = 0; i < DAYS_PER_WEEK; i++) {
        cout << dayNames[i] << ": Ksh. " << fixed << setprecision(2) << revenue[i] << endl;
    }
    cout << "Total Weekly Revenue:  Ksh. " << fixed << setprecision(2) << totalWeeklyRevenue << endl;
    cout << "Average Daily Revenue: Ksh. " << fixed << setprecision(2) << averageDailyRevenue << endl;
    
    
    // ========== 2D ARRAY - ROOM OCCUPANCY (ONE BRANCH) ==========
    cout << "\n--- 2D ARRAY: ROOM OCCUPANCY (One Branch) ---\n" << endl;
    
    const int FLOORS = 5;
    const int ROOMS_PER_FLOOR = 10;
    int occupancy[FLOORS][ROOMS_PER_FLOOR];
    
    // Simulate/input occupancy data (1 = occupied, 0 = vacant)
    cout << "Generating random occupancy data...\n" << endl;
    for (int i = 0; i < FLOORS; i++) {
        for (int j = 0; j < ROOMS_PER_FLOOR; j++) {
            occupancy[i][j] = rand() % 2;  // Random 0 or 1
        }
    }
    
    // Display occupancy and count occupied/vacant rooms per floor
    cout << "--- Room Occupancy Per Floor ---" << endl;
    for (int i = 0; i < FLOORS; i++) {
        int occupiedRooms = 0;
        int vacantRooms = 0;
        
        for (int j = 0; j < ROOMS_PER_FLOOR; j++) {
            if (occupancy[i][j] == 1) {
                occupiedRooms++;
            }
            else {
                vacantRooms++;
            }
        }
        
        cout << "Floor " << (i + 1) << ": Occupied=" << occupiedRooms 
             << ", Vacant=" << vacantRooms << endl;
    }
    
    
    // ========== 3D ARRAY - MULTIPLE BRANCHES ==========
    cout << "\n--- 3D ARRAY: MULTIPLE BRANCHES ---\n" << endl;
    
    const int BRANCHES = 3;
    int chain[BRANCHES][FLOORS][ROOMS_PER_FLOOR];
    
    // Assign random occupancy to each room in all branches
    cout << "Generating occupancy data for " << BRANCHES << " branches...\n" << endl;
    for (int b = 0; b < BRANCHES; b++) {
        for (int f = 0; f < FLOORS; f++) {
            for (int r = 0; r < ROOMS_PER_FLOOR; r++) {
                chain[b][f][r] = rand() % 2;  // Random 0 or 1
            }
        }
    }
    
    // Calculate total occupied rooms across all branches
    int totalOccupiedRooms = 0;
    int totalVacantRooms = 0;
    int totalRooms = BRANCHES * FLOORS * ROOMS_PER_FLOOR;
    
    for (int b = 0; b < BRANCHES; b++) {
        for (int f = 0; f < FLOORS; f++) {
            for (int r = 0; r < ROOMS_PER_FLOOR; r++) {
                if (chain[b][f][r] == 1) {
                    totalOccupiedRooms++;
                }
                else {
                    totalVacantRooms++;
                }
            }
        }
    }
    
    // Display summary for all branches
    cout << "--- Hotel Chain Summary ---" << endl;
    cout << "Total Branches:        " << BRANCHES << endl;
    cout << "Floors Per Branch:     " << FLOORS << endl;
    cout << "Rooms Per Floor:       " << ROOMS_PER_FLOOR << endl;
    cout << "Total Rooms:           " << totalRooms << endl;
    cout << "Total Occupied Rooms:  " << totalOccupiedRooms << endl;
    cout << "Total Vacant Rooms:    " << totalVacantRooms << endl;
    
    double occupancyPercentage = (totalOccupiedRooms * 100.0) / totalRooms;
    cout << "Occupancy Rate:        " << fixed << setprecision(2) << occupancyPercentage << "%" << endl;
    
    cout << "\n==========================================\n" << endl;
    
    return 0;
}
