print("Digite a altura da lata de óleo:")
local alt = io.read("*n")
print("Digite o raio da lata de óleo:")
local raio = io.read("*n")
local vol = 3.14159*(raio*raio)*alt
print("O volume da lata de óleo é:", vol)