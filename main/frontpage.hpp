#pragma once

const char* frontpage = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>My First ESP32 Web Page</title>
  <style>
    /* CSS */
    body {
      font-family: Arial, sans-serif;
      background-color: #f0f0f0;
      text-align: center;
    }
    h1 {
      color: #333;
    }
    p {
      color: #666;
    }
    button {
      background-color: #007bff;
      color: white;
      border: none;
      padding: 10px 20px;
      cursor: pointer;
    }
  </style>
</head>
<body>
  <!-- HTML -->
  <h1>Hello, World!</h1>
  <p>This is my first web page.</p>
  <button>Click Me</button>
</body>
</html>
)=====";