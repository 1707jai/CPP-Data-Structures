#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int value;
    
    // YAHAN HAI MAGIC:
    // Humne pehle hi maan liya ki user 'y' bolega, 
    // taaki loop kam se kam ek baar chal jaye.
    char choice = 'y'; 

    cout << "= = = Dynamic Number Store System (While Loop) = = = " << endl;

    // Jab tak choice 'y' hai, tab tak chalo
    while (choice == 'y')
     {
        cout << "Koi number daalo: ";
        cin >> value;
        
        numbers.push_back(value); // Jhole mein daalna zaroori hai

        cout << "Aur add karna hai? (y/n): ";
        cin >> choice; // Ab yahan user decide karega agli baar chalana hai ya nahi
    }

    // Output wala hissa same rahega
    cout << "\nChief, aapne total " << numbers.size() << " numbers daale hain." << endl;
    
    int total_num = 0;
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
        total_num = total_num + numbers[i];
    }
    
    cout << "\nInka Sum hai: " << total_num << endl;

    return 0;
}


