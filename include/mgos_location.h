/*
 * Copyright (c) 2014-2017 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_MOS_LIBS_LOCATION_SRC_MGOS_LOCATION_H_
#define CS_MOS_LIBS_LOCATION_SRC_MGOS_LOCATION_H_

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct mgos_location_lat_lon {
  double lat;
  double lon;
};

bool mgos_location_get(struct mgos_location_lat_lon *loc);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CS_MOS_LIBS_LOCATION_SRC_MGOS_LOCATION_H_ */
