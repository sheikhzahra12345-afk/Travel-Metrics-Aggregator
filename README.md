🚗 Travel Distance and Time Calculator — C++
📖 About the Project

Travel Distance and Time Calculator is a beginner-level C++ project designed to demonstrate fundamental Object-Oriented Programming (OOP) concepts.

The application records the distance and time of two different trips, displays the information entered by the user, and calculates the combined distance traveled and total travel time.

✨ Key Features

Record distance in kilometers for two trips.

Record travel time in hours for each trip.

Display individual trip information.

Calculate the combined distance of both trips.

Calculate the total time spent traveling.

Demonstrate essential C++ OOP principles.

🏗️ OOP Concepts
Encapsulation

The distance (km) and time (hr) variables are kept private inside the Travel class. They can be accessed and modified through the class's public member functions.

Constructor

The default Travel() constructor initializes the distance and time values when an object is created.

Destructor

The ~Travel() destructor demonstrates the destruction and cleanup of class objects.

Classes and Objects

The Travel class represents a travel record, while two objects are used to store information for two separate trips.

Member Functions

input() — Gets distance and time from the user.

show() — Displays the stored travel information.

Add(Travel p) — Combines the distance and time of two travel records.

📂 Class Structure

Class: Travel

Private Members:

km — Stores distance in kilometers.

hr — Stores travel time in hours.

Public Members:

Travel() — Default constructor.

~Travel() — Destructor.

input() — Reads travel data.

show() — Displays travel data.

Add(Travel p) — Calculates the combined travel distance and time.

▶️ Example
--- Travel Record 1 ---
Enter distance in kilometers: 120
Enter time in hours: 2

--- Travel Record 2 ---
Enter distance in kilometers: 80
Enter time in hours: 1

--- Travel Details ---
Travel 1: 120 km, 2 hr
Travel 2: 80 km, 1 hr

--- Combined Result ---
Total Distance: 200 km
Total Time: 3 hrs

💻 Running the Program
Using g++

Compile the program with:

g++ travel.cpp -o travel


Run it using:

./travel

Compatible IDEs

The project can also be compiled and executed using common C++ development environments, including:

Code::Blocks

Dev-C++

Visual Studio

CLion

Eclipse CDT

🎯 Learning Goals

By working with this project, beginners can practice:

Creating classes and objects

Using constructors and destructors

Applying encapsulation

Defining and using member functions

Passing objects as function arguments

Understanding basic C++ OOP programming

📜 License

This project is intended for educational and learning purposes and may be freely used or modified for practice.
