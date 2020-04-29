input_list=input().split()
N= int(input_list[0])
K= int(input_list[1])

que=[i for i in range(1, N+1)]
print_que=[]

i=K-1
while True:
		
        print_que.append(que.pop(i))
        if not que: #조건이 거짓일때 수행
            break
        i=(i+K-1)%len(que) #가장 먼저 pop하는 인덱스는 k-1이다.
	#따라서 i=k-1이 되고 그다음 i는 이 i에 k-1을 더해주고 배열의 크기로 나눈 나머지가 된다.

print("<"+", ".join(map(str,print_que))+">") 
