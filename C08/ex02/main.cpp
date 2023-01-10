/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:53:54 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/10 17:52:08 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


class   myClass {

    private:
        int x;
        std::string str;
    public:
        myClass(int x, std::string str): x(x), str(str) {};
        ~myClass() {};
        int getX() const {

            return x;
        }
        std::string getStr() const {

            return str;
        }
} ;

std::ostream&   operator<<(std::ostream& output, const myClass& test) {

    output << "x: " << test.getX() << ", str:  " << test.getStr() << std::endl;
    return (output);
}

void    MutantStackTestsCustom() {

    MutantStack<myClass> mstack;

    myClass test(0, "hello");
    myClass test1(1, "World");
    myClass test2(2, "!");

    mstack.push(test);
    mstack.push(test1);
    mstack.push(test2);
    std::cout << std::endl;
    std::cout << "top: " << mstack.top() << std::endl;
    std::cout << "------------------------------" << std::endl;
    
    std::cout << "size: " << mstack.size() << std::endl;

    MutantStack<myClass>::iterator it = mstack.begin();
    MutantStack<myClass>::iterator ite = mstack.end();

    std::cout << "------------------------------" << std::endl;
    while (it != ite)   
    {
        std::cout << "values: " << *it << std::endl;
        ++it;
    }
    mstack.pop();
    std::cout << "------------------------------" << std::endl;
    std::cout << "top after pop: " << mstack.top() << std::endl;
    std::cout << "size after pop: " << mstack.size() << std::endl;
}


void    MutantStackTests(){

    MutantStack<int> mstack;

    if (mstack.empty())
        std::cout << "mstack is empty!" << std::endl;
    std::cout << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << std::endl;

    mstack.push(5);
    std::cout << "------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "pushing 5..." << std::endl;
    std::cout << std::endl;

    mstack.push(17);
    std::cout << "------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "pushing 17..." << std::endl;
    std::cout << std::endl;

    if (!mstack.empty())
        std::cout << "mstack is not empty anymore!" << std::endl;

    std::cout << "------------------------------" << std::endl;
    std::cout << "top: " << mstack.top() << std::endl;
    std::cout << std::endl;
    
    mstack.pop();
    
    std::cout << "------------------------------" << std::endl;
    std::cout << "top after pop: " << mstack.top() << std::endl;
    std::cout << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << "size: " << mstack.size() << std::endl;
    std::cout << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << "------------------------------" << std::endl;
    std::cout << "begin: " << *it << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << "end: " << *ite << std::endl;
    std::cout << std::endl;
    ++it;
    std::cout << "------------------------------" << std::endl;
    std::cout << "begin after increment: " << *it << std::endl;
    std::cout << std::endl;
    --it;
    std::cout << "------------------------------" << std::endl;
    std::cout << "begin after decriment: " << *it << std::endl;
    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;
    while (it != ite)
    {
        std::cout << "values: " << *it << std::endl;
        ++it;
    }
    
    for (int i = 0; i < 1000000; i++)
        mstack.push(i);
    
    std::cout << "------------------------------" << std::endl;    
    std::cout << "size after 1000000 values: " << mstack.size() << std::endl;
    std::cout << "top of my stack: " << mstack.top() << std::endl;
    std::stack<int> s(mstack);
    std::cout << "------------------------------" << std::endl;   
    std::cout << "size of copied stack: "  << s.size() << std::endl;
    std::cout << "top of the copied stack: " << s.top() << std::endl; 
};


int main()
{
    // std::cout << "Mutant Stack Test cases using normal data types: " << std::endl;
    // MutantStackTests();
    std::cout << "Mutant Stack Test cases using custom data types: " << std::endl;
    MutantStackTestsCustom();
    return 0;
}