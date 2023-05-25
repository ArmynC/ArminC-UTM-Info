const express = require('express');
const app = express();
const http = require('http').createServer(app);
const io = require('socket.io')(http);

app.use(express.static(__dirname + '/public1'));

io.on('connection', (socket) => {
  console.log('a user connected');

  socket.on('disconnect', () => {
    console.log('user disconnected');
  });

  socket.on('chat message', (message) => {
    console.log('message: ' + message);
    io.emit('chat message', message);
  });
});

http.listen(3000, () => {
  console.log('listening on *:3000');
});
