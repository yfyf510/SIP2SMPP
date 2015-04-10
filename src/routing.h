#ifndef ROUTING_H
#define ROUTING_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/time.h>

#include "sip_io.h"
#include "smpp_io.h"

#include "log/log.h"
#include "type_projet.h"
#include "sm_struct.h"
//INI FILE
//#include "ini/iniFile.h"
#include "config/config.h"
#include "config/struct.h"
#include "config/struct_display.h"

int start_routing();

int routing(const unsigned char *interface_name, const unsigned char *origin_ip, const unsigned int *origin_port, sm_data_t *p_sm);

int close_routing();

#endif /*ROUTING_H*/

