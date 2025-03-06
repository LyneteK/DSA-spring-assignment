#include <stdio.h>
#include <stdlib.h>





// Function to calculate the average of four test scores
float calculate_average(float assignment, float coursework, float midterm, float end_term) {
    return (assignment + coursework + midterm + end_term) / 4.0;
}

int main() {
    float physics[4], chemistry[4], math[4];
    float avg_physics, avg_chemistry, avg_math, overall_avg;

    // Input marks for Physics
    printf("Enter marks for Physics (Assignment, Coursework, Midterm, End-term): ");
    for(int i = 0; i < 4; i++) {
        scanf("%f", &physics[i]);
    }

    // Input marks for Chemistry
    printf("Enter marks for Chemistry (Assignment, Coursework, Midterm, End-term): ");
    for(int i = 0; i < 4; i++) {
        scanf("%f", &chemistry[i]);
    }

    // Input marks for Math
    printf("Enter marks for Math (Assignment, Coursework, Midterm, End-term): ");
    for(int i = 0; i < 4; i++) {
        scanf("%f", &math[i]);
    }

    // Calculate individual subject averages
    avg_physics = calculate_average(physics[0], physics[1], physics[2], physics[3]);
    avg_chemistry = calculate_average(chemistry[0], chemistry[1], chemistry[2], chemistry[3]);
    avg_math = calculate_average(math[0], math[1], math[2], math[3]);

    // Calculate overall average
    overall_avg = (avg_physics + avg_chemistry + avg_math) / 3.0;

    // Display results
    printf("\nAverage Marks:\n");
    printf("Physics: %.2f\n", avg_physics);
    printf("Chemistry: %.2f\n", avg_chemistry);
    printf("Math: %.2f\n", avg_math);
    printf("Overall Average: %.2f\n", overall_avg);

    return 0;
}





