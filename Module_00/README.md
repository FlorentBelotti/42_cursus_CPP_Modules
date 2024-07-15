<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <header>
        <h1>CPP_Modules_00</h1>
        <p>My first steps in C++ programming</p>
    </header>
    <main>
        <h2>Table of Contents</h2>
        <ul>
            <li><a href="#introduction">Introduction</a></li>
            <li><a href="#exercise-00-megaphone">Exercise 00: Megaphone</a></li>
            <li><a href="#exercise-01-my-awesome-phonebook">Exercise 01: My Awesome PhoneBook</a></li>
            <li><a href="#exercise-02-your-dream-job">Exercise 02: Your Dream Job</a></li>
        </ul>
        <section id="introduction">
            <h2>Introduction</h2>
            <p>
                C++ is a general-purpose programming language created by Bjarne Stroustrup as an
                extension of the C programming language, also known as "C with Classes". It supports
                procedural, object-oriented, and generic programming paradigms. These modules aim
                to introduce you to Object-Oriented Programming (OOP) using C++. Although C++ is a
                complex language, for this course, you will adhere to the C++98 standard.
            </p>
            <p><strong>Project Objective:</strong> Introduce basic C++ concepts and practices through practical exercises.</p>
        </section>
        <section id="exercise-00-megaphone">
            <h2>Exercise 00: Megaphone</h2>
            <p>
                Write a program that behaves as follows:
            </p>
            <pre>
                $>./megaphone "shhhhh... I think the students are asleep..."
                SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
                $>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
                DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
                $>./megaphone
                * LOUD AND UNBEARABLE FEEDBACK NOISE *
                $>
            </pre>
            <p><strong>Concepts Used:</strong> Standard Input and Output streams, basic string manipulation.</p>
        </section>
        <section id="exercise-01-my-awesome-phonebook">
            <h2>Exercise 01: My Awesome PhoneBook</h2>
            <p>
                Design a program that behaves like a not-so-awesome phonebook. You need to implement two classes:
            </p>
            <ul>
                <li>
                    <strong>PhoneBook</strong>: Represents the directory. Contains an array of contacts and can store up to 8 contacts. If a 9th contact is added, it replaces the oldest one.
                </li>
                <li>
                    <strong>Contact</strong>: Represents a contact in the directory. A contact has the following fields: first name, last name, nickname, phone number, and darkest secret.
                </li>
            </ul>
            <p>
                The program accepts the following commands: <code>ADD</code>, <code>SEARCH</code>, and <code>EXIT</code>.
            </p>
            <ul>
                <li><strong>ADD</strong>: Add a new contact.</li>
                <li><strong>SEARCH</strong>: Display a list of contacts and allows the user to view contact details.</li>
                <li><strong>EXIT</strong>: Quit the program.</li>
            </ul>
            <p><strong>Concepts Used:</strong> Classes, member functions, arrays, basic I/O operations, string handling.</p>
        </section>
        <section id="exercise-02-your-dream-job">
            <h2>Exercise 02: Your Dream Job</h2>
            <p>
                Recreate a missing file for a banking application. Implement the missing <code>Account.cpp</code> based on the provided <code>Account.hpp</code> and log files.
            </p>
            <p><strong>Concepts Used:</strong> Classes, constructors, destructors, member functions, file I/O.</p>
        </section>
    </main>
</body>
</html>
