function random_walker(my_time)

    # num. of walker
    walker_num = 10000

    # list of inital positions
    pos = [0 for i in 1:walker_num]


    for t in 1:my_time
        # iterate  each walker
        for i in 1:walker_num 
            r = rand()

            # update positions
            if r < 0.5
               pos[i] += 1
            else 
                pos[i] -= 1
            end
           
        end
        # println( i, "\t" , mean(pos), "\t", var(pos))
    end

    return  pos

end

pos = random_walker(10000)
