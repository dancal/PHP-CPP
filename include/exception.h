/**
 * 	Exception.h
 * 	Implementation of Php Exceptions.
 * 
 * 	@author Jasper van Eck <jasper.vaneck@copernica.com>
 * 	@copyright 2013 Copernica BV
 */
#include <exception>

/**
 *  Set up namespace
 */
namespace Php {

/** 
 *  Class definition
 */
class Exception : public std::exception
{
private:
	/**
	 * 	The exception message
	 * 	@var	char*
	 */
	std::string _message;
	
	/**
	 * 	The PHP exception code
	 * 	@var	int
	 */
	int _code;
	
public:
	/**
	 * 	Constructor
	 * 	@param	&string
	 */
	Exception(const std::string &message, int code = 0) : std::exception(), _message(message), _code(code)
	{
	}
	
	/**
	 *  Destructor
	 */
	virtual ~Exception()
	{
	}
	
	/**
	 * 	Returns the message of the exception.
	 * 	@return &string
	 */
	std::string &message() throw()
	{
		return _message;
	}
};

/**
 *  End of namespace
 */
}

 
