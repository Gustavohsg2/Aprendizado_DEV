print("Digite um número para A:")
local A = io.read("*n")
print("Digite um número para B:")
local B = io.read("*n")
local aux = A
A = B
B = aux
print("O valor de A é:", A, "e o valor de B é:", B, ".")