all:
	mkdir -p bin
	mkdir -p lib
	mkdir -p lib/proxy
	mkdir -p lib/service
	mkdir -p lib/client
	mkdir -p lib/stub
	g++ -Wall -g -c -I/usr/local/include/hot enqueue_report.cc -o lib/enqueue_report.o
	g++ -Wall -g -c -I/usr/local/include/hot transport_message.cc -o lib/transport_message.o
	g++ -Wall -g -c -I/usr/local/include/hot proxy/transport_service_proxy.cc -o lib/proxy/transport_service_proxy.o
	g++ -Wall -g -c -I/usr/local/include/hot proxy/transport_service_proxy_builder.cc -o lib/proxy/transport_service_proxy_builder.o
	g++ -Wall -g -c -I/usr/local/include/hot service/transport_service_request_handler.cc -o lib/service/transport_service_request_handler.o
	g++ -Wall -g -c -I/usr/local/include/hot client/transport_service_client.cc -o lib/client/transport_service_client.o
	g++ lib/enqueue_report.o lib/transport_message.o lib/proxy/transport_service_proxy.o lib/proxy/transport_service_proxy_builder.o lib/service/transport_service_request_handler.o  lib/client/transport_service_client.o  -lhotd -lpthread -o bin/transport_service_client.out
	g++ -Wall -g -c -I/usr/local/include/hot stub/transport_service_impl.cc -o lib/stub/transport_service_impl.o
	g++ -Wall -g -c -I/usr/local/include/hot stub/transport_service_server.cc -o lib/stub/transport_service_server.o
	g++ lib/enqueue_report.o lib/transport_message.o lib/proxy/transport_service_proxy.o lib/proxy/transport_service_proxy_builder.o lib/service/transport_service_request_handler.o  lib/stub/transport_service_impl.o lib/stub/transport_service_server.o  -lhotd -lpthread -o bin/transport_service_server.out
	g++ -Wall -g -c -I/usr/local/include/hot proxy/transport_monitor_service_proxy.cc -o lib/proxy/transport_monitor_service_proxy.o
	g++ -Wall -g -c -I/usr/local/include/hot proxy/transport_monitor_service_proxy_builder.cc -o lib/proxy/transport_monitor_service_proxy_builder.o
	g++ -Wall -g -c -I/usr/local/include/hot service/transport_monitor_service_request_handler.cc -o lib/service/transport_monitor_service_request_handler.o
	g++ -Wall -g -c -I/usr/local/include/hot client/transport_monitor_service_client.cc -o lib/client/transport_monitor_service_client.o
	g++ lib/enqueue_report.o lib/transport_message.o lib/proxy/transport_service_proxy.o lib/proxy/transport_service_proxy_builder.o lib/service/transport_service_request_handler.o lib/proxy/transport_monitor_service_proxy.o lib/proxy/transport_monitor_service_proxy_builder.o lib/service/transport_monitor_service_request_handler.o  lib/client/transport_monitor_service_client.o  -lhotd -lpthread -o bin/transport_monitor_service_client.out
	g++ -Wall -g -c -I/usr/local/include/hot stub/transport_monitor_service_impl.cc -o lib/stub/transport_monitor_service_impl.o
	g++ -Wall -g -c -I/usr/local/include/hot stub/transport_monitor_service_server.cc -o lib/stub/transport_monitor_service_server.o
	g++ lib/enqueue_report.o lib/transport_message.o lib/proxy/transport_service_proxy.o lib/proxy/transport_service_proxy_builder.o lib/service/transport_service_request_handler.o lib/proxy/transport_monitor_service_proxy.o lib/proxy/transport_monitor_service_proxy_builder.o lib/service/transport_monitor_service_request_handler.o  lib/stub/transport_monitor_service_impl.o lib/stub/transport_monitor_service_server.o  -lhotd -lpthread -o bin/transport_monitor_service_server.out
