#include <stdio.h>

// TODO: Implement the conversion functions
float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);


int main() {
    int choice;
    float temp, convertedTemp;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (choice == 1) {
         convertedTemp =  celsiusToFahrenheit(temp);

        // TODO: Call celsiusToFahrenheit and display result
        printf("Converted Temperature is %.2f", convertedTemp);
    } else if (choice == 2) {
         convertedTemp =  fahrenheitToCelsius(temp);
        // TODO: Call fahrenheitToCelsius and display result
        printf("Converted Temperature is %.2f", convertedTemp);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

// TODO: Implement the celsiusToFahrenheit function
float celsiusToFahrenheit(float celsius) {
   
    return (celsius*1.8)+32;

}

// TODO: Implement the fahrenheitToCelsius function
float fahrenheitToCelsius(float fahrenheit) {
   
    return (fahrenheit-32)/1.8;

}
