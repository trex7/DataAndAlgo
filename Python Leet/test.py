# # creating a tree class
# class Tree:
#     #initiating by calling the print function and saving the arguments.
#     def __init__(self, length, width):
#         print("initiating")
#         self.length = length
#         self.width = width
#         print("end init")
    
#     def increaseLength(self):
#         self.length +=1
    
#     def increaseWidth(self):
#         self.width +=1
    
#     def printEverything(self):
#         print(str(self.length) + "  and " + str(self.width))
    
# def increment(n):
#     n =n+1
#     print(str(n))

# #Running for class
# tree = Tree(2,5)
# tree.printEverything()
# n=5
# increment(n)
# print(str(n))




# import time

# start =time.time()
# list1 = ["a","b","n","d"]
# list2 = ["x","y","n","e"]

# # if set(list1)&set(list2):
# #     pass
# if len(set(list1).intersection(set(list2)))>0:
#     print("hello")

# end=time.time()
# print(end-start)
# # 1.4066696166992188e-05

class Node:
    def __init__(self,val=None) -> None:
        self.val = val
        self.next = None

head = Node(10)
newhead = Node(15,head)
finHead = Node(20,newhead)

while finHead:
    print(finHead.val)
    finHead = finHead.next


print("Done")
    


