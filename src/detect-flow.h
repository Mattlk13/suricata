#ifndef __DETECT_FLOW_H__
#define __DETECT_FLOW_H__

typedef struct _DetectFlowData {
    u_int8_t flags;     /* flags to match */
    u_int8_t match_cnt; /* number of matches we need */
} DetectFlowData;

/* prototypes */
void DetectFlowRegister (void);

#endif /* __DETECT_FLOW_H__ */

