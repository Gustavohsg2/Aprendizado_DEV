local val = 0
local inv = 0

repeat
    local y = 11
    local r = 0
    local r1 = 0
    local n10 = 0
    local n11 = 0
    local x = 10   
    print("Digite o cpf dígito por dígito:")
    while x >= 2 do
        local n = io.read("*n")
        if n >= 0 and n <= 9 then
            r = r+(n*x)
            r1 = r1+(n*y)
            y = y - 1
            x = x - 1
        else
            print("==================================================\nN�MERO INV�LIDO! DIGITE NOVAMENTE SOMENTE N�MEROS DE 0 a 9!\n==================================================\n")
            x = x+1
        end
    end

    local t = io.read("*n")
    while t < 0 or t > 9 do
    	print("==================================================\nN�MERO INV�LIDO! DIGITE NOVAMENTE SOMENTE N�MEROS DE 0 a 9!\n==================================================\n")
		t = io.read("*n")
	end

	local t2 = io.read("*n")
	while t2 < 0 or t2 > 9 do
		print("==================================================\nN�MERO INV�LIDO! DIGITE NOVAMENTE SOMENTE N�MEROS DE 0 a 9!\n==================================================\n\n")
		t2 = io.read("*n")
    end

    if r % 11 >= 2 then
        n10 = ((r % 11) * -1) + 11
        r1 = r1 + (2 * n10)
    end

    if r1 % 11 >= 2 then
        n11 = ((r1 % 11) * -1) + 11
    end

    if (n10==t) and (n11==t2) then
    	print("\n==========\nCpf V�lido\n==========\n")
		val = val+1
    else
        print("\n==========\nCpf Inv�lido\n==========\n")
		inv = inv+1;
    end

    print("Deseja continuar? \n1 - Sim\n2 - Não")
    local con = io.read("*n")
    
until con == 2
-- Corrigit o sistema de continuar ou não, por input tipo char
local qcpf = inv+val;
local porval = (val/(qcpf))*100
local porinv = (inv/(qcpf))*100
print("\nForam testados", qcpf ,"cpf's\n\nForam digitados ", val," cpf's v�lidos e ", inv," cpf's inv�lidos\n\nForam digitados %", porval," de cpf's v�lidos e %", porinv," de cpf's inv�lidos\n")