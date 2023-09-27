# webServe_qsts

    Explain the purpose of the poll() function in your HTTP server. How does it ensure non-blocking behavior, and why is it important for your server's performance?

    Can you describe the significance of reading and writing operations going through poll() simultaneously? How does this contribute to non-blocking I/O?

    In your HTTP server, why is it forbidden to check the value of errno after a read or write operation?

    How do you plan to ensure that a request to your server never hangs forever? What mechanisms or timeouts will you implement to achieve this?

    Explain the importance of compatibility with web browsers and NGINX in your server. What aspects of NGINX behavior will you be comparing and ensuring compatibility with?

    How will you handle HTTP response status codes in your server to ensure accuracy? Can you provide examples of situations where specific status codes should be returned?

    Describe the default error pages feature in your server. How will you handle cases where custom error pages are not provided?

    Explain how you will implement the ability for clients to upload files. What methods and protocols will you support for file uploads?

    What HTTP methods are required in your server implementation, and how will you support GET, POST, and DELETE methods?

    How do you plan to stress test your server to ensure it remains available at all costs? What tools or techniques will you use for stress testing?

    Explain the use of configuration files in your server. How will you parse and apply settings from the configuration file, especially for server ports, hostnames, and other server-specific options?

    Discuss the role of CGI (Common Gateway Interface) in your server. How will you handle CGI execution based on file extensions?

    Can you describe how you will handle chunked requests and responses in your server, especially when interacting with CGI?

    How will you ensure that your server works with multiple CGI programs (e.g., PHP, Python) and handles relative path file access correctly?

    What strategies will you employ to ensure the resilience of your server, making sure it never dies or becomes unresponsive under heavy load or unexpected circumstances?

    Explain how you will approach unit testing and validation of your server's features. What languages and tools will you use for testing and why?

    What steps will you take to ensure that your server is secure and protected against common web vulnerabilities (e.g., SQL injection, cross-site scripting)?

    Can you outline a high-level architecture of your HTTP server, including the major components and their interactions?
