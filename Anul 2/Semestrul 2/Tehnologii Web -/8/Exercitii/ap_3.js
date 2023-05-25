const http = require('http');

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end('<html><head><title>My Node.js App</title><style>body { background-color: #f2f2f2; }</style></head><body><h1>Welcome to my Node.js app!</h1></body></html>');});

server.listen(3000, () => {
  console.log('Server running on port 3000');
});
