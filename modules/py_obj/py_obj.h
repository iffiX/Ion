//
// Created by iffi on 19-3-24.
//

#ifndef ION_PYOBJ_H
#define ION_PYOBJ_H
#include <vector>
#include <string>
#include <complex>
#include <unordered_map>
#include <mapbox/variant.hpp>

// Forward declarations only
struct Null {};

struct Dictionary;

struct List;

typedef std::complex<double> Complex;
using Value = mapbox::util::variant<
        bool,
        long long int,
        double,
        Complex,
        std::string,
        Null,
        mapbox::util::recursive_wrapper<List>,
        mapbox::util::recursive_wrapper<Dictionary>>;


struct List {
    std::vector<Value> values;
};

struct Dictionary {
    std::unordered_map<std::string, Value> values;
};

#endif //ION_PYOBJ_H
