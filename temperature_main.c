#include "temperature.h"
#include <stdio.h>
int main(int argc, char *argv[]) {
    float temp, converted_temp;
    int input_scale, output_scale;
    /*
    Was not sure what the argc and argv were meant for so i asked
    chat gpt to help me with this and hopefully its correct.
    */
   /*
   Anyways basically if the argument count is 4 then it takes each argument and matches it to 
   its corresponding variable, then it prints a message showing it recieved 
   all the information from the user.
   */
    
    if (argc == 4) {
        temp = atof(argv[1]);  
        input_scale = atoi(argv[2]);  
        output_scale = atoi(argv[3]);  
        
        printf("Command-line input received:\n");
        printf("Temperature: %.2f\n", temp);
        printf("Input scale: %d, Output scale: %d\n", input_scale, output_scale);
    }
    /*
    if there is no argument provided at main then the program prompts the user
    for a temperature value, input scale and output scale.
    */
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

    /*
    Now depending on which input and output scale the user chose the corresponding function
    is called to convert the input scaled temp to the output scaled temp using
    the users temp and storing it in the converted_temp variable.
    */
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
    /*
    calls the categorize temperature function with the parameter of the converted temp
    */
    categorize_temperature(converted_temp);

    return 0;
}



