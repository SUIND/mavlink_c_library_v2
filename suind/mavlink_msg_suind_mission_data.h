#pragma once
// MESSAGE SUIND_MISSION_DATA PACKING

#define MAVLINK_MSG_ID_SUIND_MISSION_DATA 70000


typedef struct __mavlink_suind_mission_data_t {
 uint64_t mission_time; /*<  Mission Timestamp.*/
 double latitude; /*<  Mission Latitude.*/
 double longitude; /*<  Mission Longitude.*/
 uint32_t mission_id; /*<  Mission ID.*/
 float mission_duration; /*< [seconds] Mission Duration.*/
 float spray_volume; /*< [litres] Spray Volume.*/
 float spray_area; /*< [acres] Spray Area.*/
 uint8_t target_system; /*<  System ID.*/
 uint8_t target_component; /*<  Component ID.*/
 char signature[128]; /*<  Signature.*/
 char serial_number[10]; /*<  Serial No.*/
 char signature_algorithm[15]; /*<  Signature Algorithm.*/
} mavlink_suind_mission_data_t;

#define MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN 195
#define MAVLINK_MSG_ID_SUIND_MISSION_DATA_MIN_LEN 195
#define MAVLINK_MSG_ID_70000_LEN 195
#define MAVLINK_MSG_ID_70000_MIN_LEN 195

#define MAVLINK_MSG_ID_SUIND_MISSION_DATA_CRC 238
#define MAVLINK_MSG_ID_70000_CRC 238

#define MAVLINK_MSG_SUIND_MISSION_DATA_FIELD_SIGNATURE_LEN 128
#define MAVLINK_MSG_SUIND_MISSION_DATA_FIELD_SERIAL_NUMBER_LEN 10
#define MAVLINK_MSG_SUIND_MISSION_DATA_FIELD_SIGNATURE_ALGORITHM_LEN 15

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SUIND_MISSION_DATA { \
    70000, \
    "SUIND_MISSION_DATA", \
    12, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_suind_mission_data_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_suind_mission_data_t, target_component) }, \
         { "mission_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_suind_mission_data_t, mission_id) }, \
         { "signature", NULL, MAVLINK_TYPE_CHAR, 128, 42, offsetof(mavlink_suind_mission_data_t, signature) }, \
         { "serial_number", NULL, MAVLINK_TYPE_CHAR, 10, 170, offsetof(mavlink_suind_mission_data_t, serial_number) }, \
         { "mission_duration", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_suind_mission_data_t, mission_duration) }, \
         { "spray_volume", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_suind_mission_data_t, spray_volume) }, \
         { "spray_area", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_suind_mission_data_t, spray_area) }, \
         { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_suind_mission_data_t, mission_time) }, \
         { "latitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_suind_mission_data_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_suind_mission_data_t, longitude) }, \
         { "signature_algorithm", NULL, MAVLINK_TYPE_CHAR, 15, 180, offsetof(mavlink_suind_mission_data_t, signature_algorithm) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SUIND_MISSION_DATA { \
    "SUIND_MISSION_DATA", \
    12, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_suind_mission_data_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_suind_mission_data_t, target_component) }, \
         { "mission_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_suind_mission_data_t, mission_id) }, \
         { "signature", NULL, MAVLINK_TYPE_CHAR, 128, 42, offsetof(mavlink_suind_mission_data_t, signature) }, \
         { "serial_number", NULL, MAVLINK_TYPE_CHAR, 10, 170, offsetof(mavlink_suind_mission_data_t, serial_number) }, \
         { "mission_duration", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_suind_mission_data_t, mission_duration) }, \
         { "spray_volume", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_suind_mission_data_t, spray_volume) }, \
         { "spray_area", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_suind_mission_data_t, spray_area) }, \
         { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_suind_mission_data_t, mission_time) }, \
         { "latitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_suind_mission_data_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_suind_mission_data_t, longitude) }, \
         { "signature_algorithm", NULL, MAVLINK_TYPE_CHAR, 15, 180, offsetof(mavlink_suind_mission_data_t, signature_algorithm) }, \
         } \
}
#endif

/**
 * @brief Pack a suind_mission_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param mission_id  Mission ID.
 * @param signature  Signature.
 * @param serial_number  Serial No.
 * @param mission_duration [seconds] Mission Duration.
 * @param spray_volume [litres] Spray Volume.
 * @param spray_area [acres] Spray Area.
 * @param mission_time  Mission Timestamp.
 * @param latitude  Mission Latitude.
 * @param longitude  Mission Longitude.
 * @param signature_algorithm  Signature Algorithm.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_suind_mission_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint32_t mission_id, const char *signature, const char *serial_number, float mission_duration, float spray_volume, float spray_area, uint64_t mission_time, double latitude, double longitude, const char *signature_algorithm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_double(buf, 8, latitude);
    _mav_put_double(buf, 16, longitude);
    _mav_put_uint32_t(buf, 24, mission_id);
    _mav_put_float(buf, 28, mission_duration);
    _mav_put_float(buf, 32, spray_volume);
    _mav_put_float(buf, 36, spray_area);
    _mav_put_uint8_t(buf, 40, target_system);
    _mav_put_uint8_t(buf, 41, target_component);
    _mav_put_char_array(buf, 42, signature, 128);
    _mav_put_char_array(buf, 170, serial_number, 10);
    _mav_put_char_array(buf, 180, signature_algorithm, 15);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN);
#else
    mavlink_suind_mission_data_t packet;
    packet.mission_time = mission_time;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.mission_id = mission_id;
    packet.mission_duration = mission_duration;
    packet.spray_volume = spray_volume;
    packet.spray_area = spray_area;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.signature, signature, sizeof(char)*128);
    mav_array_memcpy(packet.serial_number, serial_number, sizeof(char)*10);
    mav_array_memcpy(packet.signature_algorithm, signature_algorithm, sizeof(char)*15);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUIND_MISSION_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SUIND_MISSION_DATA_MIN_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_CRC);
}

/**
 * @brief Pack a suind_mission_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param mission_id  Mission ID.
 * @param signature  Signature.
 * @param serial_number  Serial No.
 * @param mission_duration [seconds] Mission Duration.
 * @param spray_volume [litres] Spray Volume.
 * @param spray_area [acres] Spray Area.
 * @param mission_time  Mission Timestamp.
 * @param latitude  Mission Latitude.
 * @param longitude  Mission Longitude.
 * @param signature_algorithm  Signature Algorithm.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_suind_mission_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint32_t mission_id, const char *signature, const char *serial_number, float mission_duration, float spray_volume, float spray_area, uint64_t mission_time, double latitude, double longitude, const char *signature_algorithm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_double(buf, 8, latitude);
    _mav_put_double(buf, 16, longitude);
    _mav_put_uint32_t(buf, 24, mission_id);
    _mav_put_float(buf, 28, mission_duration);
    _mav_put_float(buf, 32, spray_volume);
    _mav_put_float(buf, 36, spray_area);
    _mav_put_uint8_t(buf, 40, target_system);
    _mav_put_uint8_t(buf, 41, target_component);
    _mav_put_char_array(buf, 42, signature, 128);
    _mav_put_char_array(buf, 170, serial_number, 10);
    _mav_put_char_array(buf, 180, signature_algorithm, 15);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN);
#else
    mavlink_suind_mission_data_t packet;
    packet.mission_time = mission_time;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.mission_id = mission_id;
    packet.mission_duration = mission_duration;
    packet.spray_volume = spray_volume;
    packet.spray_area = spray_area;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.signature, signature, sizeof(char)*128);
    mav_array_memcpy(packet.serial_number, serial_number, sizeof(char)*10);
    mav_array_memcpy(packet.signature_algorithm, signature_algorithm, sizeof(char)*15);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUIND_MISSION_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUIND_MISSION_DATA_MIN_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUIND_MISSION_DATA_MIN_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN);
#endif
}

/**
 * @brief Pack a suind_mission_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param mission_id  Mission ID.
 * @param signature  Signature.
 * @param serial_number  Serial No.
 * @param mission_duration [seconds] Mission Duration.
 * @param spray_volume [litres] Spray Volume.
 * @param spray_area [acres] Spray Area.
 * @param mission_time  Mission Timestamp.
 * @param latitude  Mission Latitude.
 * @param longitude  Mission Longitude.
 * @param signature_algorithm  Signature Algorithm.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_suind_mission_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint32_t mission_id,const char *signature,const char *serial_number,float mission_duration,float spray_volume,float spray_area,uint64_t mission_time,double latitude,double longitude,const char *signature_algorithm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_double(buf, 8, latitude);
    _mav_put_double(buf, 16, longitude);
    _mav_put_uint32_t(buf, 24, mission_id);
    _mav_put_float(buf, 28, mission_duration);
    _mav_put_float(buf, 32, spray_volume);
    _mav_put_float(buf, 36, spray_area);
    _mav_put_uint8_t(buf, 40, target_system);
    _mav_put_uint8_t(buf, 41, target_component);
    _mav_put_char_array(buf, 42, signature, 128);
    _mav_put_char_array(buf, 170, serial_number, 10);
    _mav_put_char_array(buf, 180, signature_algorithm, 15);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN);
#else
    mavlink_suind_mission_data_t packet;
    packet.mission_time = mission_time;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.mission_id = mission_id;
    packet.mission_duration = mission_duration;
    packet.spray_volume = spray_volume;
    packet.spray_area = spray_area;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.signature, signature, sizeof(char)*128);
    mav_array_memcpy(packet.serial_number, serial_number, sizeof(char)*10);
    mav_array_memcpy(packet.signature_algorithm, signature_algorithm, sizeof(char)*15);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUIND_MISSION_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SUIND_MISSION_DATA_MIN_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_CRC);
}

/**
 * @brief Encode a suind_mission_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param suind_mission_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_suind_mission_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_suind_mission_data_t* suind_mission_data)
{
    return mavlink_msg_suind_mission_data_pack(system_id, component_id, msg, suind_mission_data->target_system, suind_mission_data->target_component, suind_mission_data->mission_id, suind_mission_data->signature, suind_mission_data->serial_number, suind_mission_data->mission_duration, suind_mission_data->spray_volume, suind_mission_data->spray_area, suind_mission_data->mission_time, suind_mission_data->latitude, suind_mission_data->longitude, suind_mission_data->signature_algorithm);
}

/**
 * @brief Encode a suind_mission_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param suind_mission_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_suind_mission_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_suind_mission_data_t* suind_mission_data)
{
    return mavlink_msg_suind_mission_data_pack_chan(system_id, component_id, chan, msg, suind_mission_data->target_system, suind_mission_data->target_component, suind_mission_data->mission_id, suind_mission_data->signature, suind_mission_data->serial_number, suind_mission_data->mission_duration, suind_mission_data->spray_volume, suind_mission_data->spray_area, suind_mission_data->mission_time, suind_mission_data->latitude, suind_mission_data->longitude, suind_mission_data->signature_algorithm);
}

/**
 * @brief Encode a suind_mission_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param suind_mission_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_suind_mission_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_suind_mission_data_t* suind_mission_data)
{
    return mavlink_msg_suind_mission_data_pack_status(system_id, component_id, _status, msg,  suind_mission_data->target_system, suind_mission_data->target_component, suind_mission_data->mission_id, suind_mission_data->signature, suind_mission_data->serial_number, suind_mission_data->mission_duration, suind_mission_data->spray_volume, suind_mission_data->spray_area, suind_mission_data->mission_time, suind_mission_data->latitude, suind_mission_data->longitude, suind_mission_data->signature_algorithm);
}

/**
 * @brief Send a suind_mission_data message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param mission_id  Mission ID.
 * @param signature  Signature.
 * @param serial_number  Serial No.
 * @param mission_duration [seconds] Mission Duration.
 * @param spray_volume [litres] Spray Volume.
 * @param spray_area [acres] Spray Area.
 * @param mission_time  Mission Timestamp.
 * @param latitude  Mission Latitude.
 * @param longitude  Mission Longitude.
 * @param signature_algorithm  Signature Algorithm.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_suind_mission_data_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint32_t mission_id, const char *signature, const char *serial_number, float mission_duration, float spray_volume, float spray_area, uint64_t mission_time, double latitude, double longitude, const char *signature_algorithm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_double(buf, 8, latitude);
    _mav_put_double(buf, 16, longitude);
    _mav_put_uint32_t(buf, 24, mission_id);
    _mav_put_float(buf, 28, mission_duration);
    _mav_put_float(buf, 32, spray_volume);
    _mav_put_float(buf, 36, spray_area);
    _mav_put_uint8_t(buf, 40, target_system);
    _mav_put_uint8_t(buf, 41, target_component);
    _mav_put_char_array(buf, 42, signature, 128);
    _mav_put_char_array(buf, 170, serial_number, 10);
    _mav_put_char_array(buf, 180, signature_algorithm, 15);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUIND_MISSION_DATA, buf, MAVLINK_MSG_ID_SUIND_MISSION_DATA_MIN_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_CRC);
#else
    mavlink_suind_mission_data_t packet;
    packet.mission_time = mission_time;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.mission_id = mission_id;
    packet.mission_duration = mission_duration;
    packet.spray_volume = spray_volume;
    packet.spray_area = spray_area;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.signature, signature, sizeof(char)*128);
    mav_array_memcpy(packet.serial_number, serial_number, sizeof(char)*10);
    mav_array_memcpy(packet.signature_algorithm, signature_algorithm, sizeof(char)*15);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUIND_MISSION_DATA, (const char *)&packet, MAVLINK_MSG_ID_SUIND_MISSION_DATA_MIN_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_CRC);
#endif
}

/**
 * @brief Send a suind_mission_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_suind_mission_data_send_struct(mavlink_channel_t chan, const mavlink_suind_mission_data_t* suind_mission_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_suind_mission_data_send(chan, suind_mission_data->target_system, suind_mission_data->target_component, suind_mission_data->mission_id, suind_mission_data->signature, suind_mission_data->serial_number, suind_mission_data->mission_duration, suind_mission_data->spray_volume, suind_mission_data->spray_area, suind_mission_data->mission_time, suind_mission_data->latitude, suind_mission_data->longitude, suind_mission_data->signature_algorithm);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUIND_MISSION_DATA, (const char *)suind_mission_data, MAVLINK_MSG_ID_SUIND_MISSION_DATA_MIN_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_suind_mission_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint32_t mission_id, const char *signature, const char *serial_number, float mission_duration, float spray_volume, float spray_area, uint64_t mission_time, double latitude, double longitude, const char *signature_algorithm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_double(buf, 8, latitude);
    _mav_put_double(buf, 16, longitude);
    _mav_put_uint32_t(buf, 24, mission_id);
    _mav_put_float(buf, 28, mission_duration);
    _mav_put_float(buf, 32, spray_volume);
    _mav_put_float(buf, 36, spray_area);
    _mav_put_uint8_t(buf, 40, target_system);
    _mav_put_uint8_t(buf, 41, target_component);
    _mav_put_char_array(buf, 42, signature, 128);
    _mav_put_char_array(buf, 170, serial_number, 10);
    _mav_put_char_array(buf, 180, signature_algorithm, 15);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUIND_MISSION_DATA, buf, MAVLINK_MSG_ID_SUIND_MISSION_DATA_MIN_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_CRC);
#else
    mavlink_suind_mission_data_t *packet = (mavlink_suind_mission_data_t *)msgbuf;
    packet->mission_time = mission_time;
    packet->latitude = latitude;
    packet->longitude = longitude;
    packet->mission_id = mission_id;
    packet->mission_duration = mission_duration;
    packet->spray_volume = spray_volume;
    packet->spray_area = spray_area;
    packet->target_system = target_system;
    packet->target_component = target_component;
    mav_array_memcpy(packet->signature, signature, sizeof(char)*128);
    mav_array_memcpy(packet->serial_number, serial_number, sizeof(char)*10);
    mav_array_memcpy(packet->signature_algorithm, signature_algorithm, sizeof(char)*15);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUIND_MISSION_DATA, (const char *)packet, MAVLINK_MSG_ID_SUIND_MISSION_DATA_MIN_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN, MAVLINK_MSG_ID_SUIND_MISSION_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE SUIND_MISSION_DATA UNPACKING


/**
 * @brief Get field target_system from suind_mission_data message
 *
 * @return  System ID.
 */
static inline uint8_t mavlink_msg_suind_mission_data_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Get field target_component from suind_mission_data message
 *
 * @return  Component ID.
 */
static inline uint8_t mavlink_msg_suind_mission_data_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  41);
}

/**
 * @brief Get field mission_id from suind_mission_data message
 *
 * @return  Mission ID.
 */
static inline uint32_t mavlink_msg_suind_mission_data_get_mission_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field signature from suind_mission_data message
 *
 * @return  Signature.
 */
static inline uint16_t mavlink_msg_suind_mission_data_get_signature(const mavlink_message_t* msg, char *signature)
{
    return _MAV_RETURN_char_array(msg, signature, 128,  42);
}

/**
 * @brief Get field serial_number from suind_mission_data message
 *
 * @return  Serial No.
 */
static inline uint16_t mavlink_msg_suind_mission_data_get_serial_number(const mavlink_message_t* msg, char *serial_number)
{
    return _MAV_RETURN_char_array(msg, serial_number, 10,  170);
}

/**
 * @brief Get field mission_duration from suind_mission_data message
 *
 * @return [seconds] Mission Duration.
 */
static inline float mavlink_msg_suind_mission_data_get_mission_duration(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field spray_volume from suind_mission_data message
 *
 * @return [litres] Spray Volume.
 */
static inline float mavlink_msg_suind_mission_data_get_spray_volume(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field spray_area from suind_mission_data message
 *
 * @return [acres] Spray Area.
 */
static inline float mavlink_msg_suind_mission_data_get_spray_area(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field mission_time from suind_mission_data message
 *
 * @return  Mission Timestamp.
 */
static inline uint64_t mavlink_msg_suind_mission_data_get_mission_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field latitude from suind_mission_data message
 *
 * @return  Mission Latitude.
 */
static inline double mavlink_msg_suind_mission_data_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field longitude from suind_mission_data message
 *
 * @return  Mission Longitude.
 */
static inline double mavlink_msg_suind_mission_data_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Get field signature_algorithm from suind_mission_data message
 *
 * @return  Signature Algorithm.
 */
static inline uint16_t mavlink_msg_suind_mission_data_get_signature_algorithm(const mavlink_message_t* msg, char *signature_algorithm)
{
    return _MAV_RETURN_char_array(msg, signature_algorithm, 15,  180);
}

/**
 * @brief Decode a suind_mission_data message into a struct
 *
 * @param msg The message to decode
 * @param suind_mission_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_suind_mission_data_decode(const mavlink_message_t* msg, mavlink_suind_mission_data_t* suind_mission_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    suind_mission_data->mission_time = mavlink_msg_suind_mission_data_get_mission_time(msg);
    suind_mission_data->latitude = mavlink_msg_suind_mission_data_get_latitude(msg);
    suind_mission_data->longitude = mavlink_msg_suind_mission_data_get_longitude(msg);
    suind_mission_data->mission_id = mavlink_msg_suind_mission_data_get_mission_id(msg);
    suind_mission_data->mission_duration = mavlink_msg_suind_mission_data_get_mission_duration(msg);
    suind_mission_data->spray_volume = mavlink_msg_suind_mission_data_get_spray_volume(msg);
    suind_mission_data->spray_area = mavlink_msg_suind_mission_data_get_spray_area(msg);
    suind_mission_data->target_system = mavlink_msg_suind_mission_data_get_target_system(msg);
    suind_mission_data->target_component = mavlink_msg_suind_mission_data_get_target_component(msg);
    mavlink_msg_suind_mission_data_get_signature(msg, suind_mission_data->signature);
    mavlink_msg_suind_mission_data_get_serial_number(msg, suind_mission_data->serial_number);
    mavlink_msg_suind_mission_data_get_signature_algorithm(msg, suind_mission_data->signature_algorithm);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN? msg->len : MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN;
        memset(suind_mission_data, 0, MAVLINK_MSG_ID_SUIND_MISSION_DATA_LEN);
    memcpy(suind_mission_data, _MAV_PAYLOAD(msg), len);
#endif
}
