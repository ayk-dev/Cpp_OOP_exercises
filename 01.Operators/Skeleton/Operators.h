#ifndef OPERATORS_H
#define OPERATORS_H

#include <ostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> & operator<< (std::vector<std::string> & vc, const std::string & str) {
    vc.push_back(str);
    return vc;
}

std::string operator+ (const std::string & str, int num) {
    std::ostringstream result;

    result << str << num;

    return result.str();
}

std::ostream & operator<< (std::ostream & ostr, const std::vector<std::string> & vec) {
    for (std::string s : vec)
        ostr << s << std::endl;

    return ostr;
}

#endif