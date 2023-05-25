const express = require("express");
const app = express();
const path = require("path");

// Serve static files from the public folder
app.use(express.static(path.join(__dirname, "public")));

// Handle requests to the root URL
app.get("/", (req, res) => {
  res.sendFile(path.join(__dirname, "public", "index.html"));
});

// Start the server
const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
  console.log(`Server running on port ${PORT}`);
});
