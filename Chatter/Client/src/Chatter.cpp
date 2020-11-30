// Chatter.cpp : Defines the entry point for the application.
//

#include "../header/Chatter.h"
#include <boost/asio.hpp>
using namespace std;
using namespace boost::asio::ip;
int main()
{
	string nickName, ipAddress;
	cout << "Enter Nickname: ";
	cin >> nickName;
	cout << "Enter IP address: ";
	cin >> ipAddress;
	address address;
	address.from_string(ipAddress);





	return 0;
}
