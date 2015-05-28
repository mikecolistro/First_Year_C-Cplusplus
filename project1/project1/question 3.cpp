#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main(void){
int time;
float gravity, distance, velocity;
printf("For how long in seconds did the orange fall\n");
scanf("%d", &time);
printf("It fell for %d seconds\n", time);
gravity = 9.81 * (time *time);
printf("The force of gravity is at %.2f m/s^2\n", gravity);
distance = 0.5 * gravity * time * time;
printf("The distance the orange travelled was %.2f meters\n", distance);
velocity= gravity * time;
printf("The velocity of the orange is %.2f m/s\n", velocity);

}