    let screen = document.getElementById('screen');
    buttons = document.querySelectorAll('.numpad');
    for(item of buttons){
        item.addEventListener('click', (e) => {
            buttonText = e.target.innerText;
            console.log("Button pressed " + buttonText);
            if (buttonText == 'x'){
                buttonText = '*';
                screenValue += buttonText;
                screen.value = screenValue; 
            }    
            else if (buttonText == 'AC') {
                screenValue = '';
                screen.value = screenValue;
            }
            else if (buttonText == '=') {
                screen.value = eval(screenValue);
            }
            else if (buttonText == 'CE') {
                screen.value = screen.value.slice(0, - 1);
            }
            else{
                screenValue += buttonText;
                screen.value = screenValue;
            }

        
        })
    }