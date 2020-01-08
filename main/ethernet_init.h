/*
 * ethernet_init.h
 */

#ifndef MAIN_ETHERNET_INIT_H_
#define MAIN_ETHERNET_INIT_H_

void init_ethernet(void);

/**
 * @brief   System event handler
 *          This method controls the service state on all active interfaces and applications are required
 *          to call it from the system event handler for normal operation of mDNS service.
 *
 * @param  ctx          The system event context
 * @param  event        The system event
 */
esp_err_t ethernet_handle_system_event(void *ctx, system_event_t *event);

#endif /* MAIN_ETHERNET_INIT_H_ */
