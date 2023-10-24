

int countOdds(int low, int high){  
int range = (high - low)/2; //Divided by 2 if high - low + 1 is even
    if(high % 2 != 0 || low % 2 != 0)
        range = range + 1;
    return range;
}