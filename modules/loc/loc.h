#ifndef ION_LOC_H
#define ION_LOC_H

#include <string>
#include <iostream>

class Position {
public:

    /// Initialization.
    void initialize(std::string *file = nullptr,
                    unsigned line = 1u,
                    unsigned column = 1u);

    /**
     * @brief (line related) Advance to the COUNT next lines.
     */
    void lines(int count = 1);

    /**
     * @brief (column related) Advance to the COUNT next columns.
     */

    void columns(int count = 1);

    /// File name to which this position refers.
    std::string *filename;
    /// Current line number.
    unsigned line;
    /// Current column number.
    unsigned column;

private:
    /// Compute max (min, lhs+rhs).
    static unsigned _add(unsigned lhs, int rhs, int min);
};

/// Add \arg width columns, in place.
Position &operator+=(Position &res, int width);

/// Add \arg width columns.
Position operator+(Position res, int width);

/// Subtract \arg width columns, in place.
Position &operator-=(Position &res, int width);

/// Subtract \arg width columns.
Position operator-(Position res, int width);

/// Compare two position objects.
bool operator==(const Position &pos1, const Position &pos2);

/// Compare two position objects.
bool operator!=(const Position &pos1, const Position &pos2);

/**
 * @brief Intercept output stream redirection.
 * @param ostr the destination output stream
 * @param pos a reference to the position to redirect
 */
template<typename YYChar>
std::basic_ostream<YYChar> &
operator<<(std::basic_ostream<YYChar> &ostr, const Position &pos) {
    if (pos.filename)
        ostr << *pos.filename << ':';
    return ostr << pos.line << '.' << pos.column;
}

class Location {
public:

    /// Initialization.
    void initialize(std::string *file = nullptr, unsigned line = 1u, unsigned column = 1u);

    /// Reset initial location to final location.
    void step();

    /// Extend the current location to the COUNT next columns.
    void columns(int count = 1);

    /// Extend the current location to the COUNT next lines.
    void lines(int count = 1);

public:
    /// Beginning of the located region.
    Position begin;
    /// End of the located region.
    Position end;
};

#endif //ION_LOC_H
