data = new Date();
agora = data.getDay();

console.log(agora);

switch(agora){
    case 0:
        console.log('Hojé é domingo');
        break
    case 1:
        console.log('Hoje é segunda');
        break
    case 2:
        console.log('Hoje é terça!');
        break
}