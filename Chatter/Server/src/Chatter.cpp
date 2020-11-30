// Chatter.cpp : Defines the entry point for the application.
//

#include "../header/Chatter.h"
#include <boost/asio.hpp>
using namespace std;
using namespace boost::asio::ip;
int main()
{
	boost::asio::io_context io_context;
	tcp::socket socket(io_context);
	tcp::endpoint endpoint;
	address address;
	address.from_string("127.0.0.1:80");
	endpoint.address(address);
	boost::system::error_code ec;
	socket.connect(endpoint, ec);
	cout << ec.message();


	return 0;
}
