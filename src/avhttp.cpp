#include <iostream>

// 异步, 
// 同步,
// 
// 
// 
// 
// 

#include "avhttp.hpp"


int main(int argc, char* argv[])
{
	boost::asio::io_service io;
	avhttp::http_stream h(io);
	h.open("http://w.qq.com/cgi-bin/get_group_pic?pic={64A234EE-8657-DA63-B7F4-C7718460F461}.gif");
	h.close();
	io.run();

	return 0;
}

