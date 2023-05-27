<?php
    session_start();
    
    if(!isset($_SESSION["login_user"])){
        header("location: login.php");
        exit();
    }
    ?>
<!DOCTYPE html>
<html>
    <head>
        <title>Calculator</title>
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
    </head>
    <body>
        <div class="container">
            <div>
                <form oninput="x.value=parseInt(a.value)+parseInt(b.value)">0
                    <input type="range" id="a" value="100" min="0" max="9000">9000 +
                    <input type="number" id="b" value="23"> =
                    <output name="x" for="a b"></output>
                </form>
            </div>
            <div>
            <br><br><p>---</p>
                <body>
                    <form>
                        <div>
                            <label for="nume">Nume</label>
                            <input type="text" id="nume" name="nume" placeholder="Numele tau"/>
                        </div>
                        <div>
                            <label for="cantitate">Cantitate</label>
                            <input type="text" id="cantitate" placeholder="Cantitatea"/>
                        </div>
                        <div>
                            <label for="pret">Pret</label>
                            <input type="text" id="pret" placeholder="Pretul"/>
                        </div>
                        <div>
                            <label for="rezultat">Rezultat</label>
                            <input type="text" id="rezultat" size="80 "readonly placeholder="Rezultatul">
                        </div>
                        <div>
                            <input type="button" class="simple-button" onclick="calcul()" value="Calculeaza">
                        </div>
                    </form>
                </body>
                    <script>
                        function calcul() {
                          var numeField = document.getElementById("nume").value;
                          var cantitateField = parseInt(document.getElementById("cantitate").value);
                          var pretField = parseInt(document.getElementById("pret").value);
                          var rezultatField = document.getElementById("rezultat");
                        
                        
                          var rezultat = cantitateField * pretField;
                          
                          rezultatField.value = 'Domnule ' + numeField.toUpperCase() + ' ai cumparat '
                                  + cantitateField + ' produse cu pretul de '
                                  + pretField + ' lei, iar totalul este '
                                  + rezultat + ' lei.';
                        }
                    </script>
            </div>
            <br><br><p>---</p>
                <body>
                    <input type="text" id="rezultatul" value="0" readonly>
                    <br><br>
                    <button onclick="adunare()">+</button>
                    <button onclick="scadere()">-</button>
                    <br><br>
                    <button onclick="resetare()">R</button>
                </body>
                <script>
                    let rezultatul = 0;

                    function adunare() {
                        let num = parseInt(prompt("Aduna:"));
                        if (!isNaN(num)) {
                            rezultatul += num;
                            document.getElementById("rezultatul").value = rezultatul;
                        }
                    }

                    function scadere() {
                        let num = parseInt(prompt("Scade:"));
                        if (!isNaN(num)) {
                            rezultatul -= num;
                            document.getElementById("rezultatul").value = rezultatul;
                        }
                    }

                    function resetare() {
                        rezultatul = 0;
                        document.getElementById("rezultatul").value = rezultatul;
                    }
                </script>
            </div>
            <div>
            <br><br><p>---</p>
            <body>
                <input type="text" id="ghiceste" placeholder="Ghiceste intre 1 si 100">
                <button onclick="verificare()">Guess</button>
                <br><br>
                <p id="msj"></p>
                <button onclick="reseteaza()">R</button>
            </body>
            <script>
                let aleatoriu = Math.floor(Math.random() * 100) + 1;
                let k = 0;

                function verificare() {
                    let ghiceste = parseInt(document.getElementById("ghiceste").value);
                    if (!isNaN(ghiceste)) {
                        k++;
                        if (ghiceste === aleatoriu) {
                            document.getElementById("msj").innerHTML = "Ai ghicit numarul in " + k + " incercari.";
                        } else if (ghiceste < aleatoriu) {
                            document.getElementById("msj").innerHTML = "Prea mic, mai incearca..";
                        } else {
                            document.getElementById("msj").innerHTML = "Prea mare, mai incearca..";
                        }
                    }
                }

                function reseteaza() {
                    aleatoriu = Math.floor(Math.random() * 100) + 1;
                    guessCkount = 0;
                    document.getElementById("ghiceste").value = "";
                    document.getElementById("msj").innerHTML = "";
                }
            </script>
        </div>
        <div>
        <br><br><p>---</p>
        <body>
            <form name="f">
                nr:<input type="text" name="nr" onclick="this.value=''" />
                factorial=<input type="text" name="rez" readonly />
                <input type="button" onclick="factorial();" value="Calculeaza factorial" />
                <input type="reset" value="sterge" />
            </form>
        </body>
        <script>
        function factorial()
        {
            nr=parseInt(f.nr.value);
            fact=1;i=2;
            for(;i<=nr;i++)
            {fact*=i;}
                alert(fact);
            f.rezu.value=fact;
        }
	    </script>
        </div>
        <div>
        <br><br><p>---</p>
            <script>
                function f1(r,b1)
                {
                    for(i=0;i<=4;i++)
                    {
                        if(r[i].selected)
                        {
                            b1.value = r[i].value;
                        }
                    }
                }
                function f2(r,t1,t2,t3)
                {
                    x=t1.value;
                    x=parseFloat(x);
                    y=t2.value;
                    y=parseFloat(y);
                    for(i=0;i<=4;i++)
                    {
                            if(r[i].selected)
                            {
                                op=r[i].value;
                            }
                    }
                
                        switch(op)
                    {
                        case "+":
                        {
                        s=x+y;
                        t3.value=s;
                        }
                        break;
                        case "-":
                        {
                        s=x-y;
                        t3.value=s;
                        }
                        break;
                        case "*":
                        {
                        s=x*y;
                        t3.value=s;
                        }
                        break;
                        case "/":
                        {
                        s=x/y;
                        t3.value=s;
                        }
                        break;
                        case "^":
                        {
                            s=1;
                            for(i=1;i<=y;i++)
                                {
                                    s = s*x;
                                    t3.value=s;
                                }
                        }
                        break;
                    }
                }
                
                function f3(q,t3)
                {
                    q.value="";
                    t3.value="";
                }
            </script>
	        <body>
                <form name = "f">
                    <input type="text" name = "t1" onclick="f3(t1,t3)"/>
                    <input type="button" name = "b1" value = "?"/>
                    <input type="text" name = "t2" onclick="f3(t2,t3)"/>
                    <input type="button" name = "b2" value = "=" onclick="f2(r,t1,t2,t3)"/>
                    <input type="text" name = "t3" readonly />
                    <br/>
                    <br/>
                    Alegeti operatia
                    <select name="r" onclick ="f1(r,b1)">
                    <option value="+">+</option>
                    <option value="-">-</option>
                    <option value="*">*</option>
                    <option value="/">/</option>
                    <option value="^">^</option>	
                    </select>
                    <br/>
                    <input type="reset" onclick="f3(t2,t3)"/>
                </form>
	        </body>
        </div>
    </body>
</html>
