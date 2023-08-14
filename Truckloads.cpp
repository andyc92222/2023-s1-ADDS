#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates<=loadSize){
        return 1;
    }
    int index = numCrates/2;
    int num_A = numTrucks(index, loadSize);
    int num_B = numTrucks(numCrates-index, loadSize);

    return num_A+num_B;
}
    

