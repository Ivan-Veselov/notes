#include <iostream>
#include <fstream>
#include <sstream>

/*
 * std::cin is an istream
 * std::cout is an ostream
 * std::wcin is an wistream that works with wchar_t
 *
 * fstreams are intended to work with files
 * stringstreams (from <sstream>) read from and write to std::string
 */
 
/*
 * if s is a stream then it has different bits for its state.
 * s.eof() -- returns true if bit std::istream::eofbit (for example istream) is set in
 * s.rdstate() (has type std::istream::iostate).
 * ?::failbit -- failed to read requested type.
 * ?::badbit -- unrecoverable internal error (stream is corrupted).
 * s.clear() -- clears bits.
 * s.fail returns true if failbit or badbit is set (if eofbit is set then failbit is also set)
 *
 * std::?::iostate is used as a collection of bits.
 *
 * Once an error has occured, subsequent IO operations on that stream will fail.
 *
 * Casting s to bool returns true if stream is in valid state (s.good()), which means that none of error bits is
 * set.
 *
 * Streams may be tied. Cout is tied to cin. Which means that cin >> val; will flush the buffer of cout.
 * It is useful for interacrive applications.
 */
 
void tie_cin_to_cerr() {
    std::ostream *old_tie = std::cin.tie(&std::cerr); // should return std::cout, as cin is tied to it by default
}

void open_file_stream() {
    ofstream out; // does not open stream as it is not binded to a file
    out.open("a.txt");
    
    if (out.fail()) { // or just if (out)
        // failbit is set if file was not opened
    }
}

