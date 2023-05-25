const http = require("http");

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader("Content-Type", "text/html");
  res.write(`<!DOCTYPE html>
    <html>
      <head>
        <meta charset="UTF-8">
        <title>My Node.js App</title>
        <style>
          body {
            background-color: #f2f2f2;
          }
          h1 {
            font-size: 36px;
            text-align: center;
            color: #333;
            margin-top: 50px;
          }
        </style>
      </head>
      <body>
        <h1>Welcome to my Node.js app!</h1>
      </body>
    </html>`);
  res.end();
});

server.listen(3000, () => {
  console.log("Server running on port 3000");
});
