//
// Created by omer on 12/02/2022.
//

#ifndef LEARNINING_FO_TEST_POINT_H
#define LEARNINING_FO_TEST_POINT_H


class Point {
private:
    int m_x;
    int m_y;
public:
    Point(int x, int y){
        this->m_x = x;
        this->m_y = y;
    }
    /**
     * compare is a global function - definition in main.cpp
     * @param p1 - point
     * @param p2 - point
     * @return
     */
    friend int compare(const Point& p1, const Point& p2);

};


#endif //LEARNINING_FO_TEST_POINT_H
