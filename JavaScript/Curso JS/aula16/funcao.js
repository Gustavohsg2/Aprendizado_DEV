function parimp(n) {
    if(n%2 == 0){
        return 'Par';
    }else{
        return 'Ímpar'
    }
}


let num = parimp(4);
console.log(num);

num = parimp(1);
console.log(num);