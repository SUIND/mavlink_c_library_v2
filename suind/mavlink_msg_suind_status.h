#pragma once
// MESSAGE SUIND_STATUS PACKING

#define MAVLINK_MSG_ID_SUIND_STATUS 70000


typedef struct __mavlink_suind_status_t {
 uint16_t area_sprayed; /*< [acres] Area Sprayed in Acres.*/
 uint8_t reserve[100]; /*<  Reserve bytes for future.*/
} mavlink_suind_status_t;

#define MAVLINK_MSG_ID_SUIND_STATUS_LEN 102
#define MAVLINK_MSG_ID_SUIND_STATUS_MIN_LEN 102
#define MAVLINK_MSG_ID_70000_LEN 102
#define MAVLINK_MSG_ID_70000_MIN_LEN 102

#define MAVLINK_MSG_ID_SUIND_STATUS_CRC 45
#define MAVLINK_MSG_ID_70000_CRC 45

#define MAVLINK_MSG_SUIND_STATUS_FIELD_RESERVE_LEN 100

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SUIND_STATUS { \
    70000, \
    "SUIND_STATUS", \
    2, \
    {  { "area_sprayed", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_suind_status_t, area_sprayed) }, \
         { "reserve", NULL, MAVLINK_TYPE_UINT8_T, 100, 2, offsetof(mavlink_suind_status_t, reserve) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SUIND_STATUS { \
    "SUIND_STATUS", \
    2, \
    {  { "area_sprayed", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_suind_status_t, area_sprayed) }, \
         { "reserve", NULL, MAVLINK_TYPE_UINT8_T, 100, 2, offsetof(mavlink_suind_status_t, reserve) }, \
         } \
}
#endif

/**
 * @brief Pack a suind_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param area_sprayed [acres] Area Sprayed in Acres.
 * @param reserve  Reserve bytes for future.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_suind_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t area_sprayed, const uint8_t *reserve)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUIND_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, area_sprayed);
    _mav_put_uint8_t_array(buf, 2, reserve, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUIND_STATUS_LEN);
#else
    mavlink_suind_status_t packet;
    packet.area_sprayed = area_sprayed;
    mav_array_memcpy(packet.reserve, reserve, sizeof(uint8_t)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUIND_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUIND_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SUIND_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUIND_STATUS_LEN, MAVLINK_MSG_ID_SUIND_STATUS_CRC);
}

/**
 * @brief Pack a suind_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param area_sprayed [acres] Area Sprayed in Acres.
 * @param reserve  Reserve bytes for future.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_suind_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t area_sprayed, const uint8_t *reserve)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUIND_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, area_sprayed);
    _mav_put_uint8_t_array(buf, 2, reserve, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUIND_STATUS_LEN);
#else
    mavlink_suind_status_t packet;
    packet.area_sprayed = area_sprayed;
    mav_array_memcpy(packet.reserve, reserve, sizeof(uint8_t)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUIND_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUIND_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUIND_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUIND_STATUS_LEN, MAVLINK_MSG_ID_SUIND_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUIND_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUIND_STATUS_LEN);
#endif
}

/**
 * @brief Pack a suind_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param area_sprayed [acres] Area Sprayed in Acres.
 * @param reserve  Reserve bytes for future.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_suind_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t area_sprayed,const uint8_t *reserve)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUIND_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, area_sprayed);
    _mav_put_uint8_t_array(buf, 2, reserve, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUIND_STATUS_LEN);
#else
    mavlink_suind_status_t packet;
    packet.area_sprayed = area_sprayed;
    mav_array_memcpy(packet.reserve, reserve, sizeof(uint8_t)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUIND_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUIND_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SUIND_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUIND_STATUS_LEN, MAVLINK_MSG_ID_SUIND_STATUS_CRC);
}

/**
 * @brief Encode a suind_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param suind_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_suind_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_suind_status_t* suind_status)
{
    return mavlink_msg_suind_status_pack(system_id, component_id, msg, suind_status->area_sprayed, suind_status->reserve);
}

/**
 * @brief Encode a suind_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param suind_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_suind_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_suind_status_t* suind_status)
{
    return mavlink_msg_suind_status_pack_chan(system_id, component_id, chan, msg, suind_status->area_sprayed, suind_status->reserve);
}

/**
 * @brief Encode a suind_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param suind_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_suind_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_suind_status_t* suind_status)
{
    return mavlink_msg_suind_status_pack_status(system_id, component_id, _status, msg,  suind_status->area_sprayed, suind_status->reserve);
}

/**
 * @brief Send a suind_status message
 * @param chan MAVLink channel to send the message
 *
 * @param area_sprayed [acres] Area Sprayed in Acres.
 * @param reserve  Reserve bytes for future.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_suind_status_send(mavlink_channel_t chan, uint16_t area_sprayed, const uint8_t *reserve)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUIND_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, area_sprayed);
    _mav_put_uint8_t_array(buf, 2, reserve, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUIND_STATUS, buf, MAVLINK_MSG_ID_SUIND_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUIND_STATUS_LEN, MAVLINK_MSG_ID_SUIND_STATUS_CRC);
#else
    mavlink_suind_status_t packet;
    packet.area_sprayed = area_sprayed;
    mav_array_memcpy(packet.reserve, reserve, sizeof(uint8_t)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUIND_STATUS, (const char *)&packet, MAVLINK_MSG_ID_SUIND_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUIND_STATUS_LEN, MAVLINK_MSG_ID_SUIND_STATUS_CRC);
#endif
}

/**
 * @brief Send a suind_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_suind_status_send_struct(mavlink_channel_t chan, const mavlink_suind_status_t* suind_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_suind_status_send(chan, suind_status->area_sprayed, suind_status->reserve);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUIND_STATUS, (const char *)suind_status, MAVLINK_MSG_ID_SUIND_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUIND_STATUS_LEN, MAVLINK_MSG_ID_SUIND_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SUIND_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_suind_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t area_sprayed, const uint8_t *reserve)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, area_sprayed);
    _mav_put_uint8_t_array(buf, 2, reserve, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUIND_STATUS, buf, MAVLINK_MSG_ID_SUIND_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUIND_STATUS_LEN, MAVLINK_MSG_ID_SUIND_STATUS_CRC);
#else
    mavlink_suind_status_t *packet = (mavlink_suind_status_t *)msgbuf;
    packet->area_sprayed = area_sprayed;
    mav_array_memcpy(packet->reserve, reserve, sizeof(uint8_t)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUIND_STATUS, (const char *)packet, MAVLINK_MSG_ID_SUIND_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUIND_STATUS_LEN, MAVLINK_MSG_ID_SUIND_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE SUIND_STATUS UNPACKING


/**
 * @brief Get field area_sprayed from suind_status message
 *
 * @return [acres] Area Sprayed in Acres.
 */
static inline uint16_t mavlink_msg_suind_status_get_area_sprayed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field reserve from suind_status message
 *
 * @return  Reserve bytes for future.
 */
static inline uint16_t mavlink_msg_suind_status_get_reserve(const mavlink_message_t* msg, uint8_t *reserve)
{
    return _MAV_RETURN_uint8_t_array(msg, reserve, 100,  2);
}

/**
 * @brief Decode a suind_status message into a struct
 *
 * @param msg The message to decode
 * @param suind_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_suind_status_decode(const mavlink_message_t* msg, mavlink_suind_status_t* suind_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    suind_status->area_sprayed = mavlink_msg_suind_status_get_area_sprayed(msg);
    mavlink_msg_suind_status_get_reserve(msg, suind_status->reserve);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SUIND_STATUS_LEN? msg->len : MAVLINK_MSG_ID_SUIND_STATUS_LEN;
        memset(suind_status, 0, MAVLINK_MSG_ID_SUIND_STATUS_LEN);
    memcpy(suind_status, _MAV_PAYLOAD(msg), len);
#endif
}
