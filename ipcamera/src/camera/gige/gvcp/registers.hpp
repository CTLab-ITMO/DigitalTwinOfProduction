#include <cstdint>

enum registers : uint16_t {
    version_major = 0x0000,
    version_minor = 0x0000,
    device_mode_is_big_endian = 0x0004,
    device_mode_character_set = 0x0004,
    mac_address_high = 0x0008,
    mac_address_low = 0x000c,
    supported_ip_configuration_lla = 0x0010,
    supported_ip_configuration_dhcp = 0x0010,
    supported_ip_configuration_persistent_ip = 0x0010,
    current_ip_configuration_lla = 0x0014,
    current_ip_configuration_dhcp = 0x0014,
    current_ip_configuration_persistent_ip = 0x0014,
    current_ip_address = 0x0024,
    current_subnet_mask = 0x0034,
    current_default_gateway = 0x0044,
    gev_scsp  = 0x01c,
    first_url = 0x0200,
    second_url = 0x0400,
    number_of_interfaces = 0x0600,
    persistent_ip_address = 0x064c,
    persistent_subnet_mask = 0x065c,
    persistent_default_gateway = 0x066c,
    message_channel_count = 0x0900,
    stream_channel_count = 0x0904,
    supported_optional_commands_user_defined_name = 0x0934,
    supported_optional_commands_serial_number = 0x0934,
    supported_optional_commands_eventdata = 0x0934,
    supported_optional_commands_event = 0x0934,
    supported_optional_commands_packetresend = 0x0934,
    supported_optional_commands_writemem = 0x0934,
    supported_optional_commands_concatenation = 0x0934,
    heartbeat_timeout = 0x0938,
    timestamp_tick_frequency_high = 0x093c,
    timestamp_tick_frequency_low = 0x0940,
    timestamp_control = 0x0944,
    timestamp_value_high = 0x0948,
    timestamp_value_low = 0x094c,
    gev_ccp = 0x0a00,
    mcp_host_port = 0x0b00,
    mcda = 0x0b10,
    mctt = 0x0b14,
    mcrc = 0x0b18,
    scp_interface_index = 0x0d00,
    gev_scp_host_port = 0x0d00,
    scps_fire_test_packet = 0x0d04,
    scps_do_not_fragment = 0x0d04,
    scps_big_endian = 0x0d04,
    gev_scps_packet_size = 0x0d04,
    gev_scpd = 0x0d08,
    gev_scda = 0x0d18,
    ip_configuration_status = 0xa030,
    timestamp_counter_selector = 0xb8dc,
    timestamp_set_source = 0xb8dc,
    timestamp_set_activation = 0xb8dc,
    timestamp_reset_source = 0xb8dc,
    timestamp_reset_activation = 0xb8dc,
    timestamp_value_at_set = 0xb8e0,
    user_set_load_user_set1 = 0xd368,
};
