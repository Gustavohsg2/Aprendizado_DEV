print("Qual foi o tempo gasto pelo carro?")
local tem_gasto = io.read("*n")
print("Qual foi a velocidade média do carro?")
local ved_med = io.read("*n")
local dist = tem_gasto*ved_med
local litros = dist/12
print("A distância percorrida foi:", dist, "A quantidade de litros gastos foi:", litros)
