// ----------------------------------------------------------------------------------- //
// messages_dfs.h                                                                      //
// ----------------------------------------------------------------------------------- //
// Definitions for messages appearing on Renault Clio CAN bus.                         //
// Based on:                                                                           //
// https://hackaday.io/project/28150-jvc-to-clio                                       //
// https://hackaday.io/project/27439-smart-car-radio                                   //
// ----------------------------------------------------------------------------------- //

#ifndef messages_dfs_h
#define messages_dfs_h

#define KEEPALIVE            {0x79, 0x00, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81}
#define KEEPALIVE_ACK        {0x69, 0x00, 0xA2, 0xA2, 0xA2, 0xA2, 0xA2, 0xA2}
#define PONG_MSG             {0x74, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81}
//#define REMOTE_ACK           {0x74, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81} // same bytes as above
#define DISPLAY_MSG_OK       {0x30, 0x01, 0x00, 0xA2, 0xA2, 0xA2, 0xA2, 0xA2}

// Messages used to power up the display
#define START_SYNC_MSG       {0x7A, 0x01, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81}
#define SYNC_DISP_MSG        {0x70, 0x1A, 0x11, 0x00, 0x00, 0x00, 0x00, 0x01}
#define INIT_DISP_MSG        {0x70, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81}
//#define REGISTER_DISP_MSG    {0x70, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81} // same bytes as above
#define ENABLE_DISP_MSG      {0x04, 0x52, 0x02, 0xFF, 0xFF, 0x81, 0x81, 0x81}

// Messages to control icon display? To be confirmed.
#define ICON_1               {0x10, 0x1C, 0x7F, 0x55, 0x55, 0x3F, 0x60, 0x01}
#define ICON_2               {0x21 ,0x46 ,0x4D ,0x20 ,0x20 ,0x20 ,0x20 ,0x20}
#define ICON_3               {0x22 ,0x20 ,0x10 ,0x52 ,0x41 ,0x44 ,0x49 ,0x4F}
#define ICON_4               {0x23 ,0x20 ,0x46 ,0x4D ,0x20 ,0x20 ,0x20 ,0x20}
#define ICON_5               {0x24 ,0x00 ,0x81 ,0x81 ,0x81 ,0x81 ,0x81 ,0x81}

// Frame IDs
#define DISPLAY_CONTENT_FRAME_ID       0x121
#define KEEPALIVE_FRAME_ID             0x3CF
#define DISPLAY_RECEPTION_FRAME_ID     0x521
#define PING_MSG_FRAME_ID              0x1C1
#define PONG_MSG_FRAME_ID              0x5C1
#define REMOTE_IN_MSG_FRAME_ID         0x0A9
#define REMOTE_OUT_MSG_FRAME_ID        0x4A9
#define DISPLAY_SYNC_FRAME_ID          0x3DF
#define DISPLAY_ENABLE_FRAME_ID        0x1B1

#endif