n = int(input())

senhas = []
for i in range(n):
    senhas.append(input())

ans = 0
for i in range(n):
    for j in range(n):
        if i == j: continue
        if(senhas[i].find(senhas[j]) != -1):
            ans += 1

print(ans)