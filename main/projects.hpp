#pragma once

const char* projects = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My Projects</title>
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
        main {
            padding: 2rem;
            max-width: 1200px;
            margin: 0 auto;
        }
        .project {
            margin-bottom: 2rem;
            background-size: cover;
            background-position: center;
            color: #fff;
            padding: 2rem;
            border-radius: 10px;
            box-shadow: 0 0 10px rgba(0,0,0,0.1);
        }
        .project-content {
            background-color: rgba(0,0,0,0.7);
            padding: 1rem;
            border-radius: 5px;
        }
        .project h2 {
            margin-top: 0;
        }
        .project a {
            color: #fff;
            text-decoration: none;
            font-weight: bold;
        }
        .project a:hover {
            text-decoration: underline;
        }
    </style>
</head>
<body>
    <header>
        <h1>My Projects</h1>
    </header>
    <main>
        <div class="project" style="background-image: url('https://example.com/project1-bg.jpg');">
            <div class="project-content">
                <h2>MC++</h2>
                <p>A rewrite of the minecraft server client written in C++.  Focused on hardware efficiency and utilization.  The goal of the server is to support all of the Java edition game mechanics with stretch goals including modding support, and GPU hardware utilization for extensibility.</p>
                <a href="https://github.com/banishlight/McCPP">Learn More</a>
            </div>
        </div>

        <div class="project" style="background-image: url('https://example.com/project2-bg.jpg');">
            <div class="project-content">
                <h2>ESP32 Portfolio Website</h2>
                <p>This website is hosted on a ESP32-CAM microcontroller.  It's limited to the small hardware performance with the goal of still being responsive and attractive.</p>
                <a href="https://github.com/banishlight/esp32_website">Learn More</a>
            </div>
        </div>

        <div class="project" style="background-image: url('https://example.com/project3-bg.jpg');">
            <div class="project-content">
                <h2>Modern RX-8</h2>
                <p>A overhaul of a Mazda RX-8 with a focus on adding modern sports car features and improved performance/reliability.  The heart of the car is a Raspberry Pi that collects data over OBD2 and displays it in real time and more.</p>
                <a href="/RX8">Learn More</a>
            </div>
        </div>

        <div class="project" style="background-image: url('https://example.com/project3-bg.jpg');">
            <div class="project-content">
                <h2>Banishbot</h2>
                <p>A Starcraft BroodWar bot written with the C++ API.  The bot plays as the zerg race with the goal of being able to execute human written build orders.</p>
                <a href="https://github.com/banishlight/BanishBot">Learn More</a>
            </div>
        </div>
    </main>
</body>
</html>
)=====";