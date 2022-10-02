#include <iostream>

using namespace std;

int main()
{
float height, weight, bmi;
    cout << "Masukkan tinggi badan Anda dalam centimeter: ";
    cin >> height;

    cout << "Masukkan berat badan Anda dalam kilogram: ";
    cin >> weight;

    bmi = weight/(height*height*0.0001);

    cout << "BMI anda: " << bmi << endl;

// untuk mengetahui status berat badan Anda
    if (bmi < 18.5)
        cout << "Underweight";
    else if (bmi < 25 && bmi >= 18.5)
        cout << "Ideal";
    else if (bmi >= 25 && bmi < 30)
        cout << "Overweight";
    else
        cout << "Obese";
    return 0;
}