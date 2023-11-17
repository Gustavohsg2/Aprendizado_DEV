function verificar() {
    var image = document.getElementById('imag');
    var ano = document.getElementById('txtano');
    if(Number.parseInt(ano.value) < 0 || Number.parseInt(ano.value) > 2023){
        window.alert('Não pode números negativos nem maiores que 2023!');
    }else{
        var fsex = document.getElementsByName('radsex');
        if(fsex[0].checked){
            gênero = 'Masculino';
        }else if(fsex[1].checked){
            gênero = 'Feminino';
        }

        var idade = 2023-Number.parseInt(ano.value);
        document.getElementById('prg').innerText = `Idade: ${idade}.`;
        
        if(idade>=18 && idade < 65){
            if(gênero =='Masculino'){
                image.src = 'img/jovem.webp';
            }else{
                image.src = 'img/jovem_m.jpg'
            }
        }
        if(idade >= 65){
            if(gênero=='Feminino'){
                image.src = 'img/idosa.jpg';
            }else{
                image.src = 'img/idoso_h.jpeg';     
            }
        }
    }
}