const express = require('express');
const app = express();

// Configurare folder public
app.use(express.static('public'));

// Ruta de start
app.get('/', (req, res) => {
  res.sendFile(__dirname + '/public/index.html');
});

// Pornire server
const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
  console.log(`Serverul rulează pe portul ${PORT}`);
});
