#include <iostream> // For input and output operations
#include <cmath>    // For mathematical functions (optional for future use)

using namespace std;

int main() {
    double weight, height, bmi;

    // Prompt user to enter weight in kilograms
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    // Prompt user to enter height in meters
    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate BMI using the formula: weight (kg) / (height (m) * height (m))
    bmi = weight / pow(height, 2);

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
    system("pause");

    return 0;
}
