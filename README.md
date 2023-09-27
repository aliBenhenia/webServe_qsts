Purpose of poll()

The poll() function is at the core of our HTTP server's non-blocking I/O strategy. It allows us to efficiently manage multiple file descriptors (e.g., client connections, server sockets) by simultaneously monitoring them for both read and write events. This is crucial for preventing our server from blocking, ensuring it remains responsive to multiple clients concurrently.
Simultaneous Read and Write with poll()

By using poll() to monitor both read and write events on file descriptors, our server can achieve true non-blocking I/O. This means that we can handle incoming client requests, read data from clients, and write responses back to clients without blocking the execution of other tasks. This concurrent monitoring significantly improves the server's efficiency and responsiveness.
Avoiding errno Checks

In our HTTP server, it is forbidden to check the value of errno after a read or write operation. This restriction is in place to ensure that error handling is consistent and reliable. Instead of relying on errno, our server uses error codes and structured error-handling mechanisms to manage and report errors, enhancing code robustness.
Preventing Request Hangs

We ensure that a request to our server never hangs forever by implementing timeout mechanisms. Requests that do not receive timely responses are terminated gracefully, preventing resource leaks and ensuring that the server remains available for other clients.
Compatibility with Web Browsers and NGINX

Compatibility with web browsers and NGINX is essential for seamless integration into existing web ecosystems. We closely align our server's behavior with NGINX, including header handling and response behaviors, to ensure that our server works harmoniously within diverse web environments.
HTTP Response Status Codes

Our server meticulously handles HTTP response status codes to provide accurate and meaningful responses to clients. For instance, we return a "404 Not Found" status code when a requested resource is not found, and a "200 OK" status code for successful responses.
Default Error Pages

Our server offers default error pages for common HTTP errors. In cases where custom error pages are not provided by the user, these defaults ensure a consistent and user-friendly experience for clients encountering errors.
Client File Uploads

We implement client file uploads using accepted HTTP methods, such as POST. Clients can upload files securely, and our server validates and processes these uploads according to the defined rules in the configuration file.
Supported HTTP Methods

Our server supports essential HTTP methods, including GET, POST, and DELETE. These methods are crucial for a fully functional web server that can retrieve, modify, and delete resources as required.
Stress Testing

To guarantee high availability, our server undergoes rigorous stress testing. We employ tools and techniques to simulate heavy loads and extreme conditions, ensuring that our server remains responsive even under extreme stress.
Configuration Files

Our server uses configuration files to define server settings, such as ports, hostnames, and routing rules. These settings are parsed and applied at runtime, allowing users to customize the server's behavior to suit their needs.
CGI Execution

Our server supports CGI (Common Gateway Interface) execution based on file extensions. For example, .php files trigger the execution of the PHP interpreter. This extensibility allows the server to execute dynamic scripts seamlessly.
Handling Chunked Requests and Responses

We handle chunked requests and responses gracefully, ensuring proper decoding and encoding of data when interacting with CGI programs. This ensures compatibility with web standards and client expectations.
Resilience and Reliability

Our server is designed with resilience in mind. It employs fault-tolerant techniques and graceful error handling to prevent crashes or unresponsiveness under heavy loads or unexpected circumstances. It aims to stay available at all costs.
Unit Testing and Validation

We prioritize testing and validation of our server's features. We employ languages like [mention testing language/tool] to conduct comprehensive unit tests. This approach helps us catch and rectify issues early in the development process.
Security Measures

To protect against common web vulnerabilities, our server implements robust security measures. It includes input validation, data sanitization, and protection against attacks such as SQL injection and cross-site scripting (XSS).
High-Level Architecture

Our HTTP server's high-level architecture consists of several key components, including:

    [List major components and their interactions here]

This architecture ensures modularity, scalability, and maintainability, making it easy for developers to extend and customize the server's functionality.
