let num = [5, 8, 2, 9, 3];

console.log(num);

num.push(7) // Coloca na última posição do vetor
console.log(num.length) // Mostra o tamanho do array;
num.sort() // Coloca em ordem crescente

console.log(num)

for(let pos = 0; pos <= num.length; pos++){
    console.log(num[pos]);
}
console.log('------------------');

for(pos in num){
    console.log(num[pos]);
}

let posi = num.indexOf(9);

console.log(posi);

