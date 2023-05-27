const http = require('http');

http.createServer((request, response) => {
    request.on('data', (date) => {
        console.log(date);
    }).on('error', (eroare) => {
        console.error(eroare);
    }).on('end', () => {
        console.log("Am primit o cerere");
        response.statusCode = 200;
        response.setHeader('Content-Type', 'text/html');
        
        response.write("<html><body>O pagina cu node</body></html>");
        response.end();
        
        console.log("Am trimis un raspuns");
    });
}).listen(8080);

console.log('Serverul a pornit pe portul 8080'); 