/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "name.h"

bool_t
xdr_name (XDR *xdrs, name *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->content, 64,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}