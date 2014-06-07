#include <iostream>
#include <ostream>
#include <boost/iostreams/device/file.hpp>
#include <boost/iostreams/stream.hpp>
#include <boost/thread.hpp>
#include <boost/thread/mutex.hpp>

namespace io = boost::iostreams;

void foo()
{
	std::cout << "foo" << std::endl;
}

int main()
{
	io::stream_buffer<io::file_sink> buf("log.txt");
	std::ostream out(&buf);

	out << "abc!";

	boost::thread th(foo);

	th.join();

	std::cout << "Hello world!" << std::endl;
	return 0;
}

