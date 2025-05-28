def bin():
    global num
    li_bin = list()
    while(num != 1):
        li_bin.append(num%2)
        num = num//2
    li_bin.append(num)
    

num = int(input("Digite um número: "))
bin()