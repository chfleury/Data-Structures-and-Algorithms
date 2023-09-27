q, ans = int(input()) , []
for i in range(q):
    n = int(input())
    l = list(map(int, input().split()))
    ans.append(int(sum(l)/n  + 0.99999999))

for i in range(q):
    print(ans[i])
