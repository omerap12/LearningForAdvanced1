#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>


/**
 * for-each template style
 * @tparam iterator - template iterator.
 * @tparam func - the func needs to work on.
 * @param begin - iterator begin.
 * @param end - iterator end.
 * @param f - random func.
 * @return - func
 */
template<class iterator, class func>
func forEach(iterator begin, iterator end, func f){
    while (begin != end){
        f(*begin);
        begin++;
    }
    return f;
};

/**
 * writing an object to pass as argument instead of func (we can't pass func as an argument in c++)
 * the struct is used to print the vector values and count sum at the same time.
 */
struct PrintAndSum{
    int sum = 0;
    void operator ()(int n){
        std::cout<<n<<std::endl;
        sum+=n;
    }
};


int main() {
    //using the for each from template style
    std::vector<int> vec = {1,2,3,4};

    PrintAndSum printandsum;
    //arguments passed by value, save the return object (the copied one) to the old one.
    printandsum = forEach(vec.begin(),vec.end(),printandsum);
    std::cout<<"finished for each sum is "<<printandsum.sum<<std::endl;

    /**
     * using for_each and lambda expression.
     * we use lambda expression for cases of local usage of the function.
     * we don't use lambda when we need to reuse the function code
     */

    int sum = 0;
    forEach(vec.begin(),vec.end(),[&sum](int n){sum+=n;});
    std::cout<<"finished for each sum is "<<sum<<std::endl;

    /**
     * using for each implemented by algorithm library
     */
     int sumMult = 1;
     std::for_each(vec.begin(),vec.end(),[&sumMult](int n){sumMult*=n;});
     std::cout<<"finished for each sumMult is "<<sumMult<<std::endl;

}
