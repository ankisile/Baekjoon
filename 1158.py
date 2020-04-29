input_list=input().split()
N= int(input_list[0])
K= int(input_list[1])

que=[i for i in range(1, N+1)]
print_que=[]

i=0
print_que.append("<")
while i<N:
        if(i+1)%K==0:
            print_que.append(str(que[i]))
            print_que.append(", ")
        else:
            que.append(que[i])
            N=N+1
        i+=1

del(print_que[len(print_que)-1])
print_que.append(">")
print("".join(print_que))
