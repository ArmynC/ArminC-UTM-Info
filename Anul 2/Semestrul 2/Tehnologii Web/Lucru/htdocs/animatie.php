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
        <title>Animatie</title>
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <style>
		#container {
			height: 100vh;
			display: flex;
			align-items: center;
			justify-content: center;
			font-size: 10rem;
			color: #fff;
			background-color: #000;
		}
	    </style>
    </head>
    <body>
        <div id="container">
            <script>
                const container = document.getElementById('container');

                document.addEventListener('keydown', (event) => {
                    const letter = event.key;
                    container.innerHTML += letter;
                });

                const resetButton = document.createElement('button');
                resetButton.innerText = 'Reset';
                resetButton.addEventListener('click', () => {
                    container.innerHTML = '';
                });
                document.body.appendChild(resetButton);

                const button1 = document.createElement('button');
                button1.innerText = 'Change Color';
                button1.addEventListener('click', () => {
                    const colors = ['#ff0000', '#00ff00', '#0000ff', '#ffff00', '#ff00ff', '#00ffff'];
                    const randomColor = colors[Math.floor(Math.random() * colors.length)];
                    container.style.backgroundColor = randomColor;
                });
                document.body.appendChild(button1);

                const button2 = document.createElement('button');
                button2.innerText = 'Rotate';
                button2.addEventListener('click', () => {
                    container.style.transform = 'rotate(45deg)';
                });
                document.body.appendChild(button2);

                const button3 = document.createElement('button');
                button3.innerText = 'Enlarge';
                button3.addEventListener('click', () => {
                    container.style.fontSize = '20rem';
                });
                document.body.appendChild(button3);

                const button4 = document.createElement('button');
                button4.innerText = 'Shrink';
                button4.addEventListener('click', () => {
                    container.style.fontSize = '5rem';
                });
                document.body.appendChild(button4);

                const button5 = document.createElement('button');
                button5.innerText = 'Blink';
                button5.addEventListener('click', () => {
                    container.style.animation = 'blink 1s infinite';
                });
                document.body.appendChild(button5);

                const button6 = document.createElement('button');
                button6.innerText = 'Fade In';
                button6.addEventListener('click', () => {
                    container.style.animation = 'fade-in 1s forwards';
                });
                document.body.appendChild(button6);

                const button7 = document.createElement('button');
                button7.innerText = 'Fade Out';
                button7.addEventListener('click', () => {
                    container.style.animation = 'fade-out 1s forwards';
                });
                document.body.appendChild(button7);

                const button8 = document.createElement('button');
                button8.innerText = 'Move Up';
                button8.addEventListener('click', () => {
                    container.style.animation = 'move-up 1s forwards';
                });
                document.body.appendChild(button8);

                const button9 = document.createElement('button');
                button9.innerText = 'Move Down';
                button9.addEventListener('click', () => {
                    container.style.animation = 'move-down 1s forwards';
                });
                document.body.appendChild(button9);

                const button10 = document.createElement('button');
                button10.innerText = 'Flip';
                button10.addEventListener('click', () => {
                    container.style.transform = 'scaleX(-1)';
                });
                document.body.appendChild(button10);

                const button11 = document.createElement('button');
                button11.innerText = 'Skew';
                button11.addEventListener('click', () => {
                    container.style.transform = 'skew(30deg)';
                });
                document.body.appendChild(button11);

                const button12 = document.createElement('button');
                button12.innerText = 'Wiggle';
                button12.addEventListener('click', () => {
                    container.style.animation = 'wiggle 1s infinite';
                });
                document.body.appendChild(button12);

                const button13 = document.createElement('button');
                button13.innerText = 'Pulse';
                button13.addEventListener('click', () => {
                    container.style.animation = 'pulse 1s infinite';
                });
                document.body.appendChild(button13);

                const button14 = document.createElement('button');
                button14.innerText = 'Slide In';
                button14.addEventListener('click', () => {
                    container.style.animation = 'slide-in 1s forwards';
                });
                document.body.appendChild(button14);
            </script>
        </div>
        <style>
            @keyframes blink {
                0% {
                    opacity: 1;
                }
                50% {
                    opacity: 0;
                }
                100% {
                    opacity: 1;
                }
            }

            @keyframes fade-in {
                0% {
                    opacity: 0;
                }
                100% {
                    opacity: 1;
                }
            }

            @keyframes fade-out {
                0% {
                    opacity: 1;
                }
                100% {
                    opacity: 0;
                }
            }

            @keyframes move-up {
                0% {
                    transform: translateY(0);
                }
                100% {
                    transform: translateY(-100px);
                }
            }

            @keyframes move-down {
                0% {
                    transform: translateY(0);
                }
                100% {
                    transform: translateY(100px);
                }
            }

            @keyframes wiggle {
                0% {
                    transform: rotate(0deg);
                }
                25% {
                    transform: rotate(10deg);
                }
                50% {
                    transform: rotate(-10deg);
                }
                75% {
                    transform: rotate(10deg);
                }
                100% {
                    transform: rotate(0deg);
                }
            }

            @keyframes pulse {
                0% {
                    transform: scale(1);
                }
                50% {
                    transform: scale(1.2);
                }
                100% {
                    transform: scale(1);
                }
            }

            @keyframes slide-in {
                0% {
                    transform: translateX(-100%);
                }
                100% {
                    transform: translateX(0);
                }
            }
        </style>
    </body>
</html>