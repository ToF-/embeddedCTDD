void RuntimeError(const char * message, int parameter, const char * file, int line);

#define RUNTIME_ERROR(decription, parameter) \
    RuntimeError(decription, parameter, __FILE__, __LINE__);
