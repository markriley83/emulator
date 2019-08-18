#include <file-utils.h>
#include "catch.hpp"

SCENARIO("Reading a file", "[file]") {
    GIVEN("I have a path to a file") {
        std::string filename = "../tests/res/test-files-reading.txt";
        WHEN("I pass it to the file reader") {
            std::vector<uint8_t> fileBuf = readFileToBuffer(filename);
            THEN("I get a vector file buffer containing my file contents") {
                std::string test_string = std::string( fileBuf.begin(), fileBuf.end() );
                REQUIRE(test_string == "some contents");
            }
        }
    }
}