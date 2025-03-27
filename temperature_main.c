#include "temperature.h"
#include <stdio.h>
int main(int argc, char *argv[]) {
    float temp, converted_temp;
    int input_scale, output_scale;

    
    if (argc == 4) {
        temp = atof(argv[1]);  
        input_scale = atoi(argv[2]);  
        output_scale = atoi(argv[3]);  
        
        printf("Command-line input received:\n");
        printf("Temperature: %.2f\n", temp);
        printf("Input scale: %d, Output scale: %d\n", input_scale, output_scale);
    }
    
    else {
        
        printf("Enter the temperature value: ");
        scanf("%f", &temp);

        printf("Select the input scale:\n");
        printf("1. Celsius\n2. Fahrenheit\n3. Kelvin\n");
        printf("Enter choice (1, 2, or 3): ");
        scanf("%d", &input_scale);

        printf("Select the output scale:\n");
        printf("1. Celsius\n2. Fahrenheit\n3. Kelvin\n");
        printf("Enter choice (1, 2, or 3): ");
        scanf("%d", &output_scale);
    }

    
    if (input_scale == 1 && output_scale == 2) {
        converted_temp = celsius_to_fahrenheit(temp);
        printf("Converted temperature: %.2f °F\n", converted_temp);
    } else if (input_scale == 1 && output_scale == 3) {
        converted_temp = celsius_to_kelvin(temp);
        printf("Converted temperature: %.2f K\n", converted_temp);
    } else if (input_scale == 2 && output_scale == 1) {
        converted_temp = fahrenheit_to_celsius(temp);
        printf("Converted temperature: %.2f °C\n", converted_temp);
    } else if (input_scale == 2 && output_scale == 3) {
        converted_temp = celsius_to_kelvin(fahrenheit_to_celsius(temp));
        printf("Converted temperature: %.2f K\n", converted_temp);
    } else if (input_scale == 3 && output_scale == 1) {
        converted_temp = kelvin_to_celsius(temp);
        printf("Converted temperature: %.2f °C\n", converted_temp);
    } else if (input_scale == 3 && output_scale == 2) {
        converted_temp = celsius_to_fahrenheit(kelvin_to_celsius(temp));
        printf("Converted temperature: %.2f °F\n", converted_temp);
    } else {
        printf("Invalid input/output scale selection.\n");
        return 1;  
    }

    categorize_temperature(converted_temp);

    return 0;
}



