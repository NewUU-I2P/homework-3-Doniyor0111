#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here

    // make use of control flow statements
    // return result;
  

int main() {
    std::cout << "Enter MAC address (in x:x:x:x:x:x format): ";
    std::string macAddress;
    std::getline(std::cin, macAddress);

    std::stringstream ss(macAddress);
    std::string hexNumber;
    int firstOctet;

    std::getline(ss, hexNumber, ':');
    std::stringstream(hexNumber) >> std::hex >> firstOctet;


    std::string addressType;
    if (firstOctet % 2 == 0) {
        addressType = "Unicast";
    } else if (firstOctet == 0xFF) {
        addressType = "Broadcast";
    } else {
        addressType = "Multicast";
    }

    std::cout << "Address Type: " << addressType << std::endl;

    return 0;
}

}
