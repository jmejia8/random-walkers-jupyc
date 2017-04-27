from random import random

def random_walker(my_time):

    # num. of walker
    walker_num = 10000

    # list of inital positions
    pos = [0 for i in range(walker_num)]


    for i in range(my_time):
        # iterate  each walker
        for t in range(walker_num): 
            r = random()

            # update positions
            if r < 0.5:
               pos[t] += 1
            else :
                pos[t] -= 1
           

    return  pos


pos = random_walker(10000)

