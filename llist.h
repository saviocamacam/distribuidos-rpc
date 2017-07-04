/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _LLIST_H_RPCGEN
#define _LLIST_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


enum color {
	ORANGE = 0,
	PUCE = 1,
	TURQUOISE = 2,
};
typedef enum color color;

struct person {
	char *name;
	char *numTelefone;
	struct person *previous;
	struct person *next;
};
typedef struct person person;

struct list {
	person *first;
	person *last;
	int numPersons;
};
typedef struct list list;

#define MANAGER 0x2fffffff
#define MANAGER_V1 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADD_PERSON 1
extern  int * add_person_1(person *, CLIENT *);
extern  int * add_person_1_svc(person *, struct svc_req *);
#define REMOVE_PERSON 2
extern  int * remove_person_1(person *, CLIENT *);
extern  int * remove_person_1_svc(person *, struct svc_req *);
extern int manager_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADD_PERSON 1
extern  int * add_person_1();
extern  int * add_person_1_svc();
#define REMOVE_PERSON 2
extern  int * remove_person_1();
extern  int * remove_person_1_svc();
extern int manager_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_color (XDR *, color*);
extern  bool_t xdr_person (XDR *, person*);
extern  bool_t xdr_list (XDR *, list*);

#else /* K&R C */
extern bool_t xdr_color ();
extern bool_t xdr_person ();
extern bool_t xdr_list ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_LLIST_H_RPCGEN */
