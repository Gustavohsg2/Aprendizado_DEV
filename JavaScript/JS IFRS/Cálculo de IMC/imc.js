function calcularIMC(){
    peso = document.getElementById('peso');
    altura = document.getElementById('altura');

    peso.style.borderColor = "#ffffff";
    peso.style.backgroudColor = "#ffffff";
    altura.style.borderColor = "#ffffff";
    altura.style.backgroudColor = "#ffffff";
    
    if(peso.value == ""){
        window.alert("Preencha o peso!");
        peso.style.borderColor = "red";
        peso.style.backgroudColor = "#ffe5e5";
        peso.focus(); // Efeito de foco no elemento
        return false;   
    }
    if(altura.value == ""){
        window.alert("Preencha a altura!");
        altura.style.borderColor = "red";
        altura.style.backgroudColor = "#ffe5e5";
        altura.focus(); // Efeito de foco no elemento
        return false;
    }
    
    var peso_v = parseFloat(peso.value);

    var altura_v = parseFloat(altura.value);

    var resultado = peso_v / (altura_v*altura_v);
    window.alert('Seu IMC é: '+resultado);
}