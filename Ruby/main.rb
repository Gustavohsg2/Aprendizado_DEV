# Declaração de variáveis
numero = 10
texto = "Olá, mundo!"
condicao = true

# Condicional if
if condicao
    puts "A condição é verdadeira!"
else
    puts "A condição é falsa!"
end

# Imprimindo variáveis
puts "O valor do número é: #{numero}"
puts "O valor do texto é: #{texto}"

# Estrutura de repetição (for)
for i in 0..4
    puts "Contagem: #{i}"
end

# Estrutura de repetição (while)
contador = 1
while contador <= 5 do
    puts "Contador: #{contador}"
    contador += 1
end

# Estrutura de repetição (loop)
loop do
    puts "Loop infinito..."
    break
end