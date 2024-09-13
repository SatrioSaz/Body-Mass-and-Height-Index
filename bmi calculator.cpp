#include <iostream> // For input and output operations
#include <cmath>    // For mathematical functions (optional for future use)

using namespace std;

int main() {
    double weight, height_cm, height_m, bmi;
    string name;
    char gender;

    // Prompt user to enter weight in kilograms
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

     // Prompt user to enter height in centimeters
    cout << "Enter your height in Centimeters: ";
    cin >> height_cm;

    // Convert height from centimeters to meters
    height_m = height_cm / 100;

    // Calculate BMI using the formula: weight (kg) / (height (m) * height (m))
    bmi = weight / pow(height_m, 2);

    // Output the calculated BMI
    cout << "Your BMI is: " << bmi << endl;

    // Determine the BMI category
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "You have a normal weight." << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }

    cout << "Are you male or female (Enter M if male / F if female)." << endl;
    cin >> gender;
    if (gender == 'm' || gender == 'M') {
        if (height_cm >= 166 )
        {
            cout << "You are above the avarage height in indonesia." << endl;
        }
        if (height_cm <= 166 )
        {
            cout << "You are below the avarage height in indonesia." << endl;
        }
         if (height_cm == 166 )
        {
            cout << "You are the avarage height in indonesia." << endl;
        }
    } else if (gender == 'f' || gender == 'F') {
        if (height_cm >= 154 )
        {
            cout << "You are above the avarage height in indonesia." << endl;
        }
        if (height_cm <= 154 )
        {
            cout << "You are below the avarage height in indonesia." << endl;
        }
         if (height_cm == 154 )
        {
            cout << "You are the avarage height in indonesia." << endl;
        }
    } 
    system("pause");

    return 0;
}
