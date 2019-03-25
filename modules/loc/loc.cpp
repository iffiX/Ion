#include "loc.h"

void Position::initialize(std::string *fn, unsigned l, unsigned c) {
    filename = fn;
    line = l;
    column = c;
}

void Position::lines(int count) {
    if (count) {
        column = 1u;
        line = _add(line, count, 1);
    }
}

void Position::columns(int count) {
    column = _add(column, count, 1);
}

unsigned Position::_add(unsigned lhs, int rhs, int min) {
    return static_cast<unsigned> (std::max(min, static_cast<int> (lhs) + rhs));
}

inline Position &operator+=(Position &res, int width) {
    res.columns(width);
    return res;
}

inline Position operator+(Position res, int width) {
    return res += width;
}

inline Position &operator-=(Position &res, int width) {
    return res += -width;
}

inline Position operator-(Position res, int width) {
    return res -= width;
}

inline bool operator==(const Position &pos1, const Position &pos2) {
    return (pos1.line == pos2.line
            && pos1.column == pos2.column
            && (pos1.filename == pos2.filename
                || (pos1.filename && pos2.filename
                    && *pos1.filename == *pos2.filename)));
}

inline bool operator!=(const Position &pos1, const Position &pos2) {
    return !(pos1 == pos2);
}

void Location::initialize(std::string *f, unsigned l, unsigned c) {
    begin.initialize(f, l, c);
    end = begin;
}

void Location::step() {
    begin = end;
}

void Location::columns(int count) {
    end += count;
}

void Location::lines(int count) {
    end.lines(count);
}