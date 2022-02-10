#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
    // Write your code here.
    int temp;
    temp = swapValues.first;
    swapValues.first = swapValues.second;
    swapValues.second  = temp;
    
    pair<int, int> pr;
    pr.first = swapValues.first;
    pr.second = swapValues.second;
    
    return pr;
    
//     return pair;
}

// other variation
#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
    // Write your code here.
//     int temp;
//     temp = swapValues.first;
//     swapValues.first = swapValues.second;
//     swapValues.second  = temp;
    
    pair<int, int> pr;
    pr.first = swapValues.second;
    pr.second = swapValues.first;
    
    return pr;
    
//     return pair;
}