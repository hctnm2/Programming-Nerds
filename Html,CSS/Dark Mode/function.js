var checkbox = document.querySelector('input[name=mode]');

checkbox.addEventListener('change', function(){
    if(this.checked){
        trans()
        document.documentElement.setAttribute('data-theme','dartheme')
    }
    else{
        trans()
        document.documentElement.setAttribute('data-theme','lighttheme')
    }
})

let trans = () => {
    document.documentElement.classList.add('transition');
    window.setTimeout(()=>{
        document.documentElement.classList.remove('transition');
    },1000)
}