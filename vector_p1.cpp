#include <iostream>
#include <vector>
#include <string> // Items ke naam store karne ke liye

using namespace std;

int main() {
    // 1. Vector banaya (String type ka, kyunki items ke naam honge)
    vector<string> backpack;
    
    int choice;
    string item;

    cout << "=== GAME BACKPACK SYSTEM ===" << endl;

    while (true) {
        // --- STATUS DIKHANA ---
        cout << "\n----------------------------" << endl;
        cout << "🎒 Backpack Status: ";
        
        // Function: empty() check kar raha hai
        if (backpack.empty()) {
            cout << "[ KHAALI HAI ]";
        } else {
            // Loop laga ke saare items dikha rahe hain
            cout << "[ ";
            for (int i = 0; i < backpack.size(); i++) {
                cout << backpack[i] << " | ";
            }
            cout << "]";
            
            // Function: size() bata raha hai total kitne items hain
            cout << "\nTotal Items: " << backpack.size();
        }
        cout << "\n----------------------------" << endl;

        // --- MENU ---
        cout << "1. Add Item (push_back)\n";
        cout << "2. Remove Last Item (pop_back)\n";
        cout << "3. Clear Backpack (clear)\n";
        cout << "4. Exit Game\n";
        cout << "Apna option chuno: ";
        cin >> choice;

        // --- ACTIONS ---
        if (choice == 1) {
            cout << "Item ka naam likho (e.g. Gun, Medkit): ";
            cin >> item;
            
            // ACTION 1: Item add kiya
            backpack.push_back(item); 
            cout << ">> " << item << " bag mein daal diya.";
        }
        else if (choice == 2) {
            if (backpack.empty()) {
                cout << ">> Galti: Bag pehle se khaali hai, kuch nahi nikal sakta!";
            } else {
                // ACTION 2: Last item uda diya
                cout << ">> " << backpack.back() << " ko bag se phek diya.";
                backpack.pop_back(); 
            }
        }
        else if (choice == 3) {
            // ACTION 3: Sab saaf
            backpack.clear();
            cout << ">> Poora bag khaali kar diya!";
        }
        else if (choice == 4) {
            cout << "Game Over. Bye Chief! 👋" << endl;
            break; // Loop tod diya
        }
        else {
            cout << ">> Galat button daba diya Chief!";
        }
    }

    return 0;
}