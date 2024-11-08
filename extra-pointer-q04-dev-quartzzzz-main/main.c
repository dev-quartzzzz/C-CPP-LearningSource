/*
---------- Pointer Extra: Geometry Calculator -------------
Student ID: 6788094
Name: Piyapong
Surname: Pongruang
Section: 3
-----------------------------------------------------------
*/

#include <math.h>
#include <stdio.h>
#include <string.h>

#define MAX 20

void area_cal(char shape, char *shape_name, float *area) {
  if (shape == 'S') 
  {
    // Your code started here.
    float num;
    scanf("%f", &num);
    *area = pow(num, 2);
    strcpy(shape_name, "Square");   
  } 
  else if (shape == 'R') {
    // Your code started here.
    float width, height;
    scanf("%f %f", &width, &height);
    *area = width*height;
    strcpy(shape_name, "Rectangle");
  } else if (shape == 'C') {
    // Your code started here.
    float num;
    scanf("%f", &num);
    *area = 3.14*pow(num, 2);
    strcpy(shape_name, "Circle");
  } else if (shape == 'T') {
    // Your code started here.
  float base, height;
  scanf("%f %f", &base, &height);
  *area = 0.5*base*height;
  strcpy(shape_name, "Triangle");
  } else if (shape == 'Z') {
    // Your code started here.
  float shorter, longer, height;
  scanf("%f %f %f", &shorter, &longer, &height);
  *area = 0.5*(shorter+longer)*height;
  strcpy(shape_name, "Trapezoid");
  }
}

int main(void) {
  char shape, shape_name[MAX];
  float area;
  scanf("%s", shape_name);
  shape = (strcmp(shape_name, "Trapezoid") == 0)? 'Z': shape_name[0];
  if (shape == 'S' || shape == 'R' || shape == 'C' || shape == 'T' ||
      shape == 'Z') {
    // Your code started here.
    area_cal(shape, shape_name, &area);
    if(area)
    {
      printf("Hi! The area of %s is equal to %.2f.",shape_name, area);
    }
    else {
      printf("Sorry, I have no idea TT.");
    }
  } else {
    printf("Sorry, I have no idea TT.");
  }
  return 0;
}
