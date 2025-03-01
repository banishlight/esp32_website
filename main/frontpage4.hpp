#pragma once

const char* frontpage4 = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cuba Giesbrecht - Portfolio</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 0;
            padding: 0;
            background-color: #f4f4f4;
        }
        header {
            background-color: #333;
            color: #fff;
            text-align: center;
            padding: 1rem;
        }
        nav {
            background-color: #444;
            color: #fff;
            text-align: center;
            padding: 0.5rem;
        }
        nav a {
            color: #fff;
            text-decoration: none;
            padding: 0.5rem 1rem;
        }
        main {
            padding: 2rem;
            max-width: 800px;
            margin: 0 auto;
        }
        footer {
            background-color: #333;
            color: #fff;
            text-align: center;
            padding: 1rem;
            position: fixed;
            bottom: 0;
            width: 100%;
        }
    </style>
</head>
<body>
    <header>
        <h1>Cuba Giesbrecht</h1>
        <p>Programmer & Esports Coach/Player</p>
    </header>
    
    <nav>
        <a href="/home">Home</a>
        <a href="/about">About</a>
        <a href="/projects">Projects</a>
        <a href="/contact">Contact</a>
    </nav>
    
    <main>
        <section id="home">
            <h2>Welcome to My Portfolio</h2>
            <p>Hello! I'm a passionate web developer and designer. This portfolio showcases my skills and projects.</p>
        </section>
        
        <section id="about">
            <h2>About Me</h2>
            <p>I have X years of experience in web development, specializing in HTML, CSS, and JavaScript. I love creating responsive and user-friendly websites.</p>
        </section>
        
        <section id="projects">
            <h2>My Projects</h2>
            <ul>
                <li>Project 1: Description of project 1</li>
                <li>Project 2: Description of project 2</li>
                <li>Project 3: Description of project 3</li>
            </ul>
        </section>
        
        <section id="contact">
            <h2>Contact Me</h2>
            <p>Email: your.email@example.com</p>
            <p>Phone: (123) 456-7890</p>
        </section>
    </main>
    
</body>
</html>
)=====";