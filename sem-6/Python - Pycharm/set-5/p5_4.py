names={1:["Yash"],2:["Manan"],3:["Vivek"]}
purchases={1:[2,1,3],2:[1,0,0],3:[1,1,2]}
bread=butter=milk=cbread=cbutter=cmilk=breadnbutter=sum=0
breadnotbutter=[]
bbm=[]
valuable=[]


for i in names:
    if purchases[i][0]>0:
        bread+=int(purchases[i][0])
        cbread+=1
    if purchases[i][1]>0:
        bread+=int(purchases[i][1])
        cbutter+=1
    if purchases[i][2]>0:
        bread+=int(purchases[i][2])
        cmilk+=1
    if purchases[i][0]>0 and purchases[i][1]>0:
        breadnbutter+=1
    if purchases[i][0]>0 and purchases[i][1]==0:
        breadnotbutter.append(names[i][0])
    if purchases[i][0] > 0 and purchases[i][1]>0 and purchases[i][2]>0:
        bbm.append(names[i][0])


print("\nHow many customers have purchased bread?")
print(cbread)

print("\nHow many customers have purchased butter?")
print(cbutter)

print("\nHow many customers have purchased bread and butter?")
print(breadnbutter)

print("\nWho has purchased bread but not butter?")
if len(breadnotbutter)==0:
    print("No One")
else:
    print(breadnotbutter)

print("\nWhich customers have purchased bread, butter and milk?")
if len(bbm)==0:
    print("No One")
else:
    print(bbm)
