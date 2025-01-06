#pragma once

#include <deque>

template<class T, class Comp>
std::deque<T> Merge(const std::deque<T>& half1, const std::deque<T>& half2, const Comp& comparator) {
    std::deque<T> res;
    size_t left = 0, right = 0;

    while(left < half1.size() && right < half2.size()) {
        if(comparator(half1[left], half2[right])) {
            res.push_back(half1[left]);
            ++left;
        } else {
            res.push_back(half2[right]);
            ++right;
        }
    }

    while(left < half1.size()) {
        res.push_back(half1[left]);
        ++left;
    }

    while(right < half2.size()) {
        res.push_back(half2[right]);
        ++right;
    }
    return res;
}


template<class T, class Comp>
std::deque<T> MergeSort(const std::deque<T>& src, const Comp& comparator) {
    if(src.size() <= 1) {
        return src;
    }

    const size_t mid = src.size()/2;
    std::deque<T> left(src.begin(), src.begin()+mid);
    std::deque<T> right(src.begin()+mid, src.end());
    left = MergeSort(left, comparator);
    right = MergeSort(right, comparator);

    return Merge(left, right, comparator);
}
