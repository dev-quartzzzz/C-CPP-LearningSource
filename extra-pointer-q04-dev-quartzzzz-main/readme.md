## Pointer Extra Practice: Q4 (Geometry Calculator)

Complete a program to make geometry calculator by using a function called `area_cal`.

The program will work **as follows**:

1. Receive **input** from the user about which **geometric shape** he/she want to calculate the area for.
2. Accept the numerical values for the calculation of the area of that specific shape.

Each shape has its **own formula**:

* Square (**S**) - `Length * Length`
* Rectangle (**R**) - `Width * Length`
* Circle (**C**) - `Pi * r^2`
* Triangle (**T**) - `1/2 * Base * Height`
* Trapezoid (**Z**) - `(1/2 * (Shorter length + Longer length)) * Height`

Finally, the program will display a message as follows:

```
Hi! The area of the [geometric shape name] is equal to [result].
```

If the user inputs the name of a geometric shape that is **not one of the following**: `S, R, C ,T ,Z`, the program will display the message:
```
Sorry, I have no idea TT.
```

**Note:**

* Students must perform geometric area calculations through **functions** 
 and **pointer** only.
* Students can assume that the user will input the name of the geometric shape and their name as strings.
The value of Pi is **3.14** for this exercise.
* You can use `math.h` and `string.h` library to make your life **easier**.

<hr>

**Case 1**

**Input:** 
```
C
3
```
**Expected output:** 
```
Hi! The area of Circle is equal to 28.26.
```

<hr>

**Case 2**

**Input:**
```
Rectangle
4
5
```
**Expected output:** 
```
Hi! The area of Rectangle is equal to 20.00.
```

<hr>

**Case 3**

**Input:**
```
A
```
**Expected output:** 
```
Sorry, I have no idea TT.
```

<hr>

**Case 4**

**Input:**
```
Z
5
7
10
```
**Expected output:** 
```
Hi! The area of Trapezoid is equal to 60.00.
```

<hr>
