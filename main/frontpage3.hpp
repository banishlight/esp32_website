#pragma once

const char* frontpage3 = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cuba's Portfolio</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f4f4f4;
            text-align: center;
        }
        .navbar {
            background: #007BFF;
            padding: 10px;
            text-align: center;
        }
        .navbar a {
            color: white;
            text-decoration: none;
            padding: 10px 20px;
            display: inline-block;
        }
        .navbar a:hover {
            background: #0056b3;
            border-radius: 5px;
        }
        .container {
            max-width: 800px;
            margin: 50px auto;
            padding: 20px;
            background: white;
            border-radius: 10px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
        }
        h1 {
            color: #333;
        }
        p {
            color: #555;
        }
        .projects {
            margin-top: 20px;
        }
        .project {
            background: #ddd;
            padding: 10px;
            border-radius: 5px;
            margin: 10px 0;
        }
        a {
            color: #007BFF;
            text-decoration: none;
        }
        a:hover {
            text-decoration: underline;
        }
    </style>
</head>
<body>

    <div class="navbar">
        <a href="/">Home</a>
        <a href="/projects">Projects</a>
        <a href="/about">About</a>
        <a href="/contact">Contact</a>
    </div>

    <div class="container">
        <h1>Welcome to My Portfolio</h1>
        <p>Hi! This is my collection of my projects.</p>
        
        <div class="projects">
            <h2>Projects</h2>
            <div class="project">
                <h3>Project 1</h3>
                <p>A brief description of your project.</p>
                <a href="/project1">View Project</a>
            </div>
            <div class="project">
                <h3>Project 2</h3>
                <p>A brief description of another project.</p>
                <a href="/project2">View Project</a>
            </div>
        </div>
    </div>

</body>
</html>
)=====";