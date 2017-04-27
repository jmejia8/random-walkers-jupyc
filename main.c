#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int* random_walker(int walker_num){
    int i, t, my_time = 10000;
    int k = RAND_MAX / 2;
    
    // list of inital positions
    int *pos = (int *)malloc (sizeof(int) * walker_num);
    
    for (i = 0; i < walker_num; ++i)
    	pos[i] = 0;

    for (i = 0; i < my_time; ++i){
        // iterate  each walker
        for (t = 0; t < walker_num; ++t){

            // update positions
            if (rand() < k)
               pos[t] += 1;
            else 
                pos[t] -= 1;
        } 
    }

    return pos;

}


int main(int argc, char const *argv[])
{
    srand(time(0));
    int* pos = random_walker(10000);
	return 0;
}