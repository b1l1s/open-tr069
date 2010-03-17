// $Id$

#ifndef EVCPE_ERROR_H_
#define EVCPE_ERROR_H_

enum evcpe_error_type {
	EVCPE_ERR_SYSTEM,
	EVCPE_ERR_DNS,
	EVCPE_ERR_HTTP,
	EVCPE_ERR_SOAP,
	EVCPE_ERR_CWMP
};

enum evcpe_session_error {
	EVCPE_DNS_ERR_FORMAT,
	EVCPE_DNS_ERR_SERVER_FAILED,
	EVCPE_DNS_ERR_NOT_EXIST,
	EVCPE_DNS_ERR_NOT_IMPL,
	EVCPE_DNS_ERR_REFUSED,
	EVCPE_DNS_ERR_TIMED_OUT,
	EVCPE_DNS_ERR_INVALID,
	EVCPE_DNS_ERR_NO_ADDRESS,
	EVCPE_DNS_ERR_OTHER
};

#endif /* EVCPE_ERROR_H_ */
