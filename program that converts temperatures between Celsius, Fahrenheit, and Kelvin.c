#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

float celsius_to_kelvin(float celsius) {
    return celsius + 273.15;
}

float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheit_to_kelvin(float fahrenheit) {
    float celsius = fahrenheit_to_celsius(fahrenheit);
    return celsius_to_kelvin(celsius);
}

float kelvin_to_fahrenheit(float kelvin) {
    float celsius = kelvin_to_celsius(kelvin);
    return celsius_to_fahrenheit(celsius);
}

int main() {
    int choice;
    float temp, result;

    printf("Temperature Conversion\n");
    printf("1: Celsius to Fahrenheit\n");
    printf("2: Fahrenheit to Celsius\n");
    printf("3: Celsius to Kelvin\n");
    printf("4: Kelvin to Celsius\n");
    printf("5: Fahrenheit to Kelvin\n");
    printf("6: Kelvin to Fahrenheit\n");

    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = celsius_to_fahrenheit(temp);
            printf("%.2f Celsius is %.2f Fahrenheit.\n", temp, result);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            result = fahrenheit_to_celsius(temp);
            printf("%.2f Fahrenheit is %.2f Celsius.\n", temp, result);
            break;
        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = celsius_to_kelvin(temp);
            printf("%.2f Celsius is %.2f Kelvin.\n", temp, result);
            break;
        case 4:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temp);
            result = kelvin_to_celsius(temp);
            printf("%.2f Kelvin is %.2f Celsius.\n", temp, result);
            break;
        case 5:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            result = fahrenheit_to_kelvin(temp);
            printf("%.2f Fahrenheit is %.2f Kelvin.\n", temp, result);
            break;
        case 6:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temp);
            result = kelvin_to_fahrenheit(temp);
            printf("%.2f Kelvin is %.2f Fahrenheit.\n", temp, result);
            break;
        default:
            printf("Invalid choice!\n");
    }
    getch();
    return 0;
}
