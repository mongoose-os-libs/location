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

/* Location expressed as latitude+longtitude */
struct mgos_location_lat_lon {
  double lat;
  double lon;
};

/*
 * Fills provided `loc` with the device location data (currently device just
 * uses values from the config), see `struct mgos_location_lat_lon`. Returns
 * `true` on success, `false` otherwise.
 */
bool mgos_location_get(struct mgos_location_lat_lon *loc);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CS_MOS_LIBS_LOCATION_SRC_MGOS_LOCATION_H_ */
