#include "temperature.h"
#include <stdio.h>
/*
functions to perform conversions between celsius, fahrenheit, and kelvin given
the equations and returns the conversion in the form of a float
*/
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

/*
uses if-else structure to output a message according to users inputted celsius temperature

*/
void categorize_temperature(float celsius) {
    if (celsius < 0) {
        printf("Temperature: Freezing\n");
        printf("Advisory: Wear a jacket.\n");
    } else if (celsius >= 0 && celsius <= 10) {
        printf("Temperature: Cold\n");
        printf("Advisory: Wear a warm coat.\n");
    } else if (celsius > 10 && celsius <= 25) {
        printf("Temperature: Comfortable\n");
        printf("Advisory: Go outside!\n");
    } else if (celsius > 25 && celsius <= 35) {
        printf("Temperature: Hot\n");
        printf("Advisory: Stay hydrated.\n");
    } else {
        printf("Temperature: Extreme Heat\n");
        printf("Advisory: Stay indoors, it's dangerously hot.\n");
    }
}

