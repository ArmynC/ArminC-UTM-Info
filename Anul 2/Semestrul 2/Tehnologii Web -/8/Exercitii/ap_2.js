const express = require("express");
const app = express();

app.get("/", (req, res) => {
  res.send("Salut Node.js!");

});

app.listen(3000, () => {
  console.log("Serverul a pornit pe portul 3000.");
console.log("Serverul a pornit pe portul 3000.");
});