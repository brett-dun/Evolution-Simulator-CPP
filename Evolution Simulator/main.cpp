//
//  main.cpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 6/28/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

#include <iostream>
//#include <cstdlib>
//#include <ctime>
#include <list>
#include <vector>

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    std::list<int> mylist;
    std::list<int>::iterator it;
    
    // set some initial values:
    for (int i=1; i<=5; ++i) mylist.push_back(i); // 1 2 3 4 5
    
    it = mylist.begin();
    ++it;       // it points now to number 2           ^
    
    mylist.insert (it,10);                        // 1 10 2 3 4 5
    
    // "it" still points to number 2                      ^
    mylist.insert (it,2,20);                      // 1 10 20 20 2 3 4 5
    
    --it;       // it points now to the second 20            ^
    
    std::vector<int> myvector (2,30);
    mylist.insert (it,myvector.begin(),myvector.end());
    // 1 10 20 30 30 20 2 3 4 5
    //               ^
    std::cout << "mylist contains:";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    
    //return 0;
    
    return 0;
}

