import time
class Test:
    def __init__(self):
        print("Object Initialisation....")
    def __del__(self):
        print("Fulfilling Last Wish and perfoming clean up activities ....")

t1=Test()
t1=None
#time.sleep(5)
print("End application")
