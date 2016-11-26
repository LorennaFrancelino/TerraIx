#define nx_struct struct
#define nx_union union
# 152 "/home/branco/arduino-1.0.5/hardware/tools/avr/bin/../lib/gcc/avr/4.3.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/home/branco/arduino-1.0.5/hardware/tools/avr/bin/../lib/gcc/avr/4.3.2/../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/home/branco/arduino-1.0.5/hardware/tools/avr/bin/../lib/gcc/avr/4.3.2/../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 334
static __inline int16_t __nesc_ntoh_int16(const void * source)  ;
#line 334
static __inline int16_t __nesc_hton_int16(void * target, int16_t value)  ;





static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 372
static __inline int32_t __nesc_ntoh_int32(const void * source)  ;
#line 372
static __inline int32_t __nesc_hton_int32(void * target, int32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 116 "/home/branco/arduino-1.0.5/hardware/tools/avr/bin/../lib/gcc/avr/4.3.2/../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x40379010, const void *arg_0x403791a8, size_t arg_0x40379340);



extern void *memset(void *arg_0x4037c350, int arg_0x4037c4a8, size_t arg_0x4037c640);
# 71 "/home/branco/arduino-1.0.5/hardware/tools/avr/bin/../lib/gcc/avr/4.3.2/../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x4038e730, const void *arg_0x4038e8c8);
# 25 "/home/branco/gitspace/Terra/TerraVM/src/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/home/branco/gitspace/Terra/TerraVM/src/system/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 239 "/home/branco/arduino-1.0.5/hardware/tools/avr/bin/../lib/gcc/avr/4.3.2/../../../avr/include/avr/fuse.h" 3
#line 234
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 38 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/atm328phardware.h"
typedef uint8_t __nesc_atomic_t;

static __inline void __nesc_enable_interrupt();




static __inline void __nesc_disable_interrupt();





static __inline __nesc_atomic_t __nesc_atomic_start();







static __inline void __nesc_atomic_end(__nesc_atomic_t old_SREG);
#line 84
#line 77
typedef enum __nesc_unnamed4247 {
  ATM328P_POWER_IDLE, 
  ATM328P_POWER_ADC_NOISERED, 
  ATM328P_POWER_EXT_STANDBY, 
  ATM328P_POWER_SAVE, 
  ATM328P_POWER_STANDBY, 
  ATM328P_POWER_DOWN
} __attribute((packed))  mcu_power_t  ;

static __inline mcu_power_t combine_mcu_power_t(mcu_power_t mp1, mcu_power_t mp2);
#line 98
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;

static __inline float __nesc_ntoh_afloat(const void * source)  ;





static __inline float __nesc_hton_afloat(void * target, float value)  ;
# 1175 "/home/branco/arduino-1.0.5/hardware/tools/avr/bin/../lib/gcc/avr/4.3.2/../../../avr/include/avr/power.h" 3
#line 1164
typedef enum __nesc_unnamed4248 {

  clock_div_1 = 0, 
  clock_div_2 = 1, 
  clock_div_4 = 2, 
  clock_div_8 = 3, 
  clock_div_16 = 4, 
  clock_div_32 = 5, 
  clock_div_64 = 6, 
  clock_div_128 = 7, 
  clock_div_256 = 8
} clock_div_t;
# 6 "VMData.h"
enum __nesc_unnamed4249 {

  MSG_BUFF_SIZE = 28, 
  BLOCK_SIZE = 24, 
  SET_DATA_SIZE = 18, 
  SEND_DATA_SIZE = 16, 


  CURRENT_MAX_BLOCKS = 5
};
# 4 "VMError.h"
enum __nesc_unnamed4250 {


  I_ERROR_ID = 0, 
  I_ERROR = 1, 



  E_DIVZERO = 10, 
  E_IDXOVF = 11, 
  E_STKOVF = 20, 
  E_NOSETUP = 21
};
# 23 "TerraVM.h"
const uint8_t IS_RangeMask[6][3] = { 
{ 0, 47, 0x00 }, 
{ 48, 63, 0x01 }, 
{ 64, 103, 0x03 }, 
{ 104, 143, 0x07 }, 
{ 144, 191, 0x0f }, 
{ 192, 255, 0x3f } };
#line 57
typedef int64_t s64;
typedef uint64_t u64;
typedef int32_t s32;
typedef uint32_t u32;
typedef int16_t s16;
typedef uint16_t u16;
typedef int8_t s8;
typedef uint8_t u8;
typedef float f32;

enum __nesc_unnamed4251 {



  EVT_QUEUE_SIZE = 6, 





  DEFAULT_VARS = 0, 
  STRUC_DEF = 2, 
  VAR_SPACE = 4, 
  EVT_VARS = 6, 
  TMR_DEFS = 8, 
  GR_DEFS = 10, 
  AGG_DEFS = 12, 
  EVT_SPACE = 14, 
  FUNCTION_SPACE = 16, 
  INIT_FUNCTION = 18, 
  MOTE_ID = 20, 
  RESULT = 22, 


  U8 = 0, 
  U16 = 1, 
  U32 = 2, 
  F32 = 3, 
  S8 = 4, 
  S16 = 5, 
  S32 = 6, 


  x8 = 0, 
  x16 = 1, 
  x32 = 2, 


  U32_F = 0, 
  S32_F = 1, 
  F_U32 = 2, 
  F_S32 = 3, 


  op_nop = 0, 
  op_end = 1, 
  op_bnot = 2, 
  op_lnot = 3, 
  op_neg = 4, 
  op_sub = 5, 
  op_add = 6, 
  op_mod = 7, 
  op_mult = 8, 
  op_div = 9, 
  op_bor = 10, 
  op_band = 11, 
  op_lshft = 12, 
  op_rshft = 13, 
  op_bxor = 14, 
  op_eq = 15, 
  op_neq = 16, 
  op_gte = 17, 
  op_lte = 18, 
  op_gt = 19, 
  op_lt = 20, 
  op_lor = 21, 
  op_land = 22, 
  op_popx = 23, 

  op_neg_f = 25, 
  op_sub_f = 26, 
  op_add_f = 27, 
  op_mult_f = 28, 
  op_div_f = 29, 
  op_eq_f = 30, 
  op_neq_f = 31, 
  op_gte_f = 32, 
  op_lte_f = 33, 
  op_gt_f = 34, 
  op_lt_f = 35, 
  op_func = 36, 
  op_outEvt_e = 37, 
  op_outevt_z = 38, 
  op_clken_e = 39, 
  op_clken_v = 40, 
  op_clken_c = 41, 
  op_set_v = 42, 
  op_setarr_vc = 43, 
  op_setarr_vv = 44, 

  op_poparr_v = 48, 
  op_pusharr_v = 50, 
  op_getextdt_e = 52, 
  op_trg = 54, 
  op_exec = 56, 
  op_chkret = 58, 
  op_tkins_z = 60, 

  op_push_c = 64, 
  op_cast = 68, 
  op_memclr = 72, 
  op_ifelse = 76, 
  op_asen = 80, 
  op_tkclr = 84, 
  op_outEvt_c = 88, 
  op_getextdt_v = 92, 
  op_inc = 96, 
  op_dec = 100, 
  op_set_e = 104, 
  op_deref = 112, 
  op_memcpy = 120, 

  op_tkins_max = 136, 
  op_push_v = 144, 
  op_pop = 160, 
  op_outEvt_v = 176, 
  op_set_c = 192
};







#line 188
typedef struct evtData {
  uint8_t evtId;
  uint8_t auxId;
  void *data;
} evtData_t;
# 12 "BasicServices.h"
enum __nesc_unnamed4252 {



  AM_NEWPROGVERSION = 160, 
  AM_NEWPROGBLOCK = 161, 
  AM_REQPROGBLOCK = 162, 
  AM_SETDATAND = 131, 
  AM_REQDATA = 132, 
  AM_PINGMSG = 133, 

  AM_CUSTOM_START = 140, 
  AM_CUSTOM_END = 149, 
  AM_CUSTOM_0 = 140, 
  AM_CUSTOM_1 = 141, 
  AM_CUSTOM_2 = 142, 
  AM_CUSTOM_3 = 143, 
  AM_CUSTOM_4 = 144, 
  AM_CUSTOM_5 = 145, 
  AM_CUSTOM_6 = 146, 
  AM_CUSTOM_7 = 147, 
  AM_CUSTOM_8 = 148, 
  AM_CUSTOM_9 = 149, 




  AM_RESERVED_END = 127, 


  RootNode = 1, 





  RESEND_DELAY = 20L, 
  SEND_TIMEOUT = 1000L, 
  MAX_SEND_RETRIES = 5, 






  REQUEST_TIMEOUT = 500L, 
  REQUEST_TIMEOUT_BS = 500L, 

  REQUEST_VERY_LONG_TIMEOUT = 600000L, 
  DISSEMINATION_TIMEOUT = 300L, 
#line 72
  IN_QSIZE = 5, 
  OUT_QSIZE = 10, 









  SET_DATA_LIST_SIZE = 5, 


  ST_IDLE = 1, 
  ST_WAIT_PROG_VER = 2, 
  ST_WAIT_PROG_BLK = 3, 
  ST_WAIT_DATA = 4, 
  ST_DSM_PROG = 5, 


  RO_NEW_VERSION = 1, 
  RO_DATA_FULL = 2, 
  RO_DATA_SINGLE = 3, 
  RO_IDLE = 4, 


  REQ_ACK_BIT = 0, 
  REQ_RETRY_BIT = 1
};
#line 132
#line 119
typedef nx_struct newProgVersion {
  nx_uint16_t versionId;
  nx_uint16_t blockLen;
  nx_uint16_t blockStart;
  nx_uint16_t startProg;
  nx_uint16_t endProg;
  nx_uint16_t nTracks;
  nx_uint16_t wClocks;
  nx_uint16_t asyncs;
  nx_uint16_t wClock0;
  nx_uint16_t gate0;
  nx_uint16_t inEvts;
  nx_uint16_t async0;
} __attribute__((packed)) newProgVersion_t;





#line 134
typedef nx_struct newProgBlock {
  nx_uint16_t versionId;
  nx_uint16_t blockId;
  nx_uint8_t data[BLOCK_SIZE];
} __attribute__((packed)) newProgBlock_t;





#line 140
typedef nx_struct reqProgBlock {
  nx_uint8_t reqOper;
  nx_uint16_t versionId;
  nx_uint16_t blockId;
} __attribute__((packed)) reqProgBlock_t;








#line 147
typedef nx_struct setDataND {
  nx_uint16_t versionId;
  nx_uint16_t seq;
  nx_uint16_t targetMote;
  nx_uint8_t nSections;
  nx_int8_t Data[SET_DATA_SIZE];
} __attribute__((packed)) setDataND_t;




#line 155
typedef nx_struct reqData {
  nx_uint16_t versionId;
  nx_uint16_t seq;
} __attribute__((packed)) reqData_t;






#line 160
typedef nx_struct setDataBuffer {
  nx_uint16_t versionId;
  nx_uint16_t seq;
  nx_uint8_t AM_ID;
  nx_uint8_t buffer[MSG_BUFF_SIZE];
} __attribute__((packed)) setDataBuff_t;








#line 167
typedef nx_struct sendBS {

  nx_uint16_t Sender;
  nx_uint16_t seq;

  nx_uint8_t evtId;
  nx_int8_t Data[SEND_DATA_SIZE];
} __attribute__((packed)) sendBS_t;








#line 176
typedef nx_struct GenericData {
  nx_uint8_t AM_ID;
  nx_uint8_t DataSize;
  nx_uint16_t sendToMote;
  nx_uint8_t reqAck;
  nx_uint8_t RFPower;
  nx_uint8_t Data[MSG_BUFF_SIZE];
} __attribute__((packed)) GenericData_t;



#line 185
typedef nx_struct ctpMsg {
  nx_uint8_t data[MSG_BUFF_SIZE];
} __attribute__((packed)) ctpMsg_t;
# 6 "/home/branco/gitspace/Terra/TerraVM/src/system/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4253 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4254 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/home/branco/gitspace/Terra/TerraVM/src/system/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4255 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4256 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4257 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 38 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/platforms/uno/platform_message.h"
typedef serial_header_t message_header_t;

typedef struct __nesc_unnamed4258 {
} 
#line 40
message_footer_t;
typedef struct __nesc_unnamed4259 {
} 
#line 41
message_metadata_t;
# 19 "/home/branco/gitspace/Terra/TerraVM/src/system/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 41 "/home/branco/gitspace/Terra/TerraVM/src/system/Timer.h"
typedef struct __nesc_unnamed4260 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4261 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4262 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4263 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 43 "/home/branco/gitspace/Terra/TerraVM/src/system/Leds.h"
enum __nesc_unnamed4264 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 91 "/home/branco/gitspace/Terra/TerraVM/src/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b);
# 40 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartConfig.h"
#line 36
typedef enum __nesc_unnamed4265 {
  ATM328P_USART_ASYNC = 0x00, 
  ATM328P_USART_SYNC = 0x01, 
  ATM328P_USART_MSPI = 0x03
} atm328p_usart_mode_t;







#line 42
typedef enum __nesc_unnamed4266 {
  ATM328P_USART_BITS_5 = 0x00, 
  ATM328P_USART_BITS_6 = 0x01, 
  ATM328P_USART_BITS_7 = 0x02, 
  ATM328P_USART_BITS_8 = 0x03, 
  ATM328P_USART_BITS_9 = 0x07
} atm328p_usart_bits_t;






#line 50
typedef enum __nesc_unnamed4267 {

  ATM328P_USART_PARITY_NONE = 0x00, 
  ATM328P_USART_PARITY_EVEN = 0x02, 
  ATM328P_USART_PARITY_ODD = 0x03
} atm328p_usart_parity_t;










#line 57
typedef struct __nesc_unnamed4268 {

  atm328p_usart_mode_t mode;
  atm328p_usart_bits_t bits;
  atm328p_usart_parity_t parity;
  bool two_stop_bits;
  bool polarity_rising_edge;
  bool double_speed;
  uint32_t baud;
} atm328p_usart_config_t;
# 44 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pTimerClockSource.h"
#line 36
typedef enum __nesc_unnamed4269 {
  TIMER_CLOCK_INTERNAL_PRESCALE_1 = 0x01, 
  TIMER_CLOCK_INTERNAL_PRESCALE_8 = 0x02, 
  TIMER_CLOCK_INTERNAL_PRESCALE_64 = 0x03, 
  TIMER_CLOCK_INTERNAL_PRESCALE_256 = 0x04, 
  TIMER_CLOCK_INTERNAL_PRESCALE_1024 = 0x05, 
  TIMER_CLOCK_EXTERNAL_FALLING = 0x06, 
  TIMER_CLOCK_EXTERNAL_RISING = 0x07
} atm328p_timer_clock_t;
# 42 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/platforms/uno/chips/atm328p/timer/Atm328pTimerConfig.h"
typedef struct __nesc_unnamed4270 {
} 
#line 42
T16khz;







typedef struct __nesc_unnamed4271 {
} 
#line 50
T2Mhz;
# 9 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustom.h"
enum __nesc_unnamed4272 {



  O_CUSTOM_A = 20, 
  O_CUSTOM = 23, 

  O_SEND = 40, 
  O_SEND_ACK = 41, 




  I_CUSTOM_A_ID = 12, 
  I_CUSTOM_A = 13, 
  I_CUSTOM = 15, 

  I_SEND_DONE_ID = 40, 
  I_SEND_DONE = 41, 
  I_SEND_DONE_ACK_ID = 42, 
  I_SEND_DONE_ACK = 43, 
  I_RECEIVE_ID = 44, 
  I_RECEIVE = 45, 
  I_Q_READY = 46, 


  F_GETNODEID = 0, 
  F_RANDOM = 1, 
  F_GETMEM = 2, 
  F_GETTIME = 3, 

  F_QPUT = 10, 
  F_QGET = 11, 
  F_QSIZE = 12, 
  F_QCLEAR = 13, 



  TID_SENSOR_DONE = 0 << 5, 
  TID_TIMER_TRIGGER = 1 << 5, 
  TID_MSG_DONE = 2 << 5, 
  TID_MSG_REC = 3 << 5, 


  SENSOR_COUNT = 0
};







#line 58
typedef nx_struct qData {
  nx_uint8_t id;
  nx_uint8_t data[SEND_DATA_SIZE];
  nx_uint8_t len;
} __attribute__((packed)) qData_t;
# 14 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/usrMsg.h"
enum __nesc_unnamed4273 {
  USRMSG_QSIZE = 10, 
  AM_USRMSG = 145
};







#line 20
typedef nx_struct usrMsg {
  nx_uint8_t type;
  nx_uint16_t source;
  nx_uint16_t target;
  nx_uint8_t data[22];
} __attribute__((packed)) usrMsg_t;
typedef evtData_t TerraVMC__evtQ__t;
typedef TMilli BasicServicesP__SendDataFullTimer__precision_tag;
typedef TMilli BasicServicesP__TimerAsync__precision_tag;
typedef TMilli BasicServicesP__ProgReqTimer__precision_tag;
typedef TMilli BasicServicesP__TimerVM__precision_tag;
typedef TMilli BasicServicesP__sendTimer__precision_tag;
typedef TMicro Atm328pUsartP__BusyWait__precision_tag;
typedef uint16_t Atm328pUsartP__BusyWait__size_type;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef GenericData_t /*BasicServicesC.inQueue*/dataQueueC__0__dataType;
typedef /*BasicServicesC.inQueue*/dataQueueC__0__dataType /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataType;
typedef GenericData_t /*BasicServicesC.outQueue*/dataQueueC__1__dataType;
typedef /*BasicServicesC.outQueue*/dataQueueC__1__dataType /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataType;
typedef T16khz /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__precision_tag;
typedef uint8_t /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__size_type;
typedef /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__precision_tag /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__precision_tag;
typedef /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__size_type /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__size_type;
typedef T16khz /*Atm328pAlarms0C.HplAlarm0B*/HplAtm328pAlarmC__1__precision_tag;
typedef uint8_t /*Atm328pAlarms0C.HplAlarm0B*/HplAtm328pAlarmC__1__size_type;
typedef /*Atm328pAlarms0C.HplAlarm0B*/HplAtm328pAlarmC__1__precision_tag /*Atm328pAlarms0C.HplAlarm0B*/HplAtm328pAlarmC__1__HplAtm328pAlarm__precision_tag;
typedef /*Atm328pAlarms0C.HplAlarm0B*/HplAtm328pAlarmC__1__size_type /*Atm328pAlarms0C.HplAlarm0B*/HplAtm328pAlarmC__1__HplAtm328pAlarm__size_type;
typedef T16khz /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__precision_tag;
typedef uint8_t /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type;
typedef /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__precision_tag /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__precision_tag;
typedef /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__size_type;
typedef /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__precision_tag /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__precision_tag;
typedef /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__size_type;
typedef T16khz /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__precision_tag;
typedef uint8_t /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__size_type;
typedef /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__precision_tag /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Alarm__precision_tag;
typedef /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__size_type /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Alarm__size_type;
typedef /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__precision_tag /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__HplAlarm__precision_tag;
typedef /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__size_type /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__HplAlarm__size_type;
typedef T16khz /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__precision_type;
typedef uint8_t /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__size_type;
typedef /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__precision_type /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__precision_tag;
typedef /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__size_type /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__size_type;
typedef /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__size_type /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__size_type;
typedef uint8_t HplAtm328pTimer0P__Timer__size_type;
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type;
typedef T16khz /*CounterMilli32C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint8_t /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type;
typedef T16khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint8_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type;
typedef TMilli /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.LocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.LocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.LocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.LocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.LocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.LocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef evtData_t /*TerraVMAppC.evtQ*/QueueC__0__queue_t;
typedef /*TerraVMAppC.evtQ*/QueueC__0__queue_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__t;
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void TerraVMC__procEvent__runTask(void );
# 24 "VMCustom.nc"
static uint32_t TerraVMC__VMCustom__getTime(void );
#line 21
static void *TerraVMC__VMCustom__getRealAddr(uint16_t Maddr);
#line 17
static void TerraVMC__VMCustom__push(uint32_t val);
#line 16
static uint32_t TerraVMC__VMCustom__pop(void );

static void TerraVMC__VMCustom__queueEvt(uint8_t evtId, uint8_t auxId, void *data);
static int32_t TerraVMC__VMCustom__getMVal(uint16_t Maddr, uint8_t tp);
# 19 "BSTimer.nc"
static void TerraVMC__BSTimerAsync__fired(void );
# 20 "BSUpload.nc"
static void TerraVMC__BSUpload__stop(void );


static void TerraVMC__BSUpload__setEnv(newProgVersion_t *data);
#line 35
static void TerraVMC__BSUpload__loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[]);


static uint8_t *TerraVMC__BSUpload__getSection(uint16_t Addr);
#line 32
static void TerraVMC__BSUpload__resetMemory(void );
#line 29
static void TerraVMC__BSUpload__start(bool resetFlag);
#line 26
static void TerraVMC__BSUpload__getEnv(newProgVersion_t *data);
# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
static void TerraVMC__BSBoot__booted(void );
# 19 "BSTimer.nc"
static void TerraVMC__BSTimerVM__fired(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t PlatformP__PlatformInit__default__init(void );
#line 62
static error_t McuInitP__Init__init(void );
#line 62
static error_t McuInitP__IoBusInit__default__init(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__default__lowestState(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t McuSleepC__Init__init(void );
# 76 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
uint8_t arg_0x403f2bd8);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
uint8_t arg_0x403f2bd8);
# 57 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void BasicServicesP__ProgReqTimerTask__runTask(void );
# 9 "BSRadio.nc"
static error_t BasicServicesP__BSRadio__send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck);
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP__SendDataFullTimer__fired(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void BasicServicesP__sendNextMsg__runTask(void );
# 110 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
static void BasicServicesP__RadioSender__sendDone(
# 27 "BasicServicesP.nc"
am_id_t arg_0x40610a60, 
# 103 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 113 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static void BasicServicesP__RadioControl__startDone(error_t error);
#line 138
static void BasicServicesP__RadioControl__stopDone(error_t error);
# 17 "BSTimer.nc"
static bool BasicServicesP__BSTimerAsync__isRunning(void );
#line 15
static void BasicServicesP__BSTimerAsync__startOneShot(uint32_t dt);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



BasicServicesP__RadioReceiver__receive(
# 28 "BasicServicesP.nc"
am_id_t arg_0x40615010, 
# 71 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static void BasicServicesP__outQ__dataReady(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void BasicServicesP__procInputEvent__runTask(void );
# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
static void BasicServicesP__TOSBoot__booted(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP__TimerAsync__fired(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void BasicServicesP__sendMessage__runTask(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP__ProgReqTimer__fired(void );
#line 83
static void BasicServicesP__TimerVM__fired(void );
# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static void BasicServicesP__inQ__dataReady(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP__sendTimer__fired(void );
# 16 "BSTimer.nc"
static uint32_t BasicServicesP__BSTimerVM__getNow(void );
#line 15
static void BasicServicesP__BSTimerVM__startOneShot(uint32_t dt);
# 100 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x406f4068, 
# 80 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 126 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Packet.nc"
static 
#line 123
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
# 59 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/PacketAcknowledgements.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 71
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__noAck(
#line 65
message_t * msg);
#line 85
static bool /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 88 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(
#line 84
message_t * amsg);
#line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
# 104 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407a6b58, 
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407a6b58, 
# 96 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407a6518, 
# 71 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407a5688, 
# 31 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407a5688);
# 23 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407a5688, 
# 23 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 57 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
static void Atm328pUsartP__HplUsart__rxDone(void );
static void Atm328pUsartP__HplUsart__txDone(void );
static void Atm328pUsartP__HplUsart__txNowEmpty(void );
# 35 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/UartError.nc"
static void Atm328pUsartP__UartError__default__receiveError(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void Atm328pUsartP__do_notify_flush__runTask(void );
# 54 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFlush.nc"
static void Atm328pUsartP__SerialFlush__default__flushDone(void );
# 48 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/UartStream.nc"
static error_t Atm328pUsartP__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 95 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/StdControl.nc"
static error_t Atm328pUsartP__StdControl__start(void );









static error_t Atm328pUsartP__StdControl__stop(void );
#line 95
static error_t HplAtm328pUsartP__TxControl__start(void );









static error_t HplAtm328pUsartP__TxControl__stop(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t HplAtm328pUsartP__Init__init(void );
# 36 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
static void HplAtm328pUsartP__Usart__disableRxcInterrupt(void );


static void HplAtm328pUsartP__Usart__disableTxcInterrupt(void );








static bool HplAtm328pUsartP__Usart__dataOverrun(void );
#line 42
static void HplAtm328pUsartP__Usart__disableDreInterrupt(void );






static bool HplAtm328pUsartP__Usart__parityError(void );





static void HplAtm328pUsartP__Usart__tx(uint8_t data);
#line 41
static void HplAtm328pUsartP__Usart__enableDreInterrupt(void );










static uint8_t HplAtm328pUsartP__Usart__rx(void );
#line 47
static bool HplAtm328pUsartP__Usart__frameError(void );
#line 46
static bool HplAtm328pUsartP__Usart__txEmpty(void );
# 95 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/StdControl.nc"
static error_t HplAtm328pUsartP__RxControl__start(void );









static error_t HplAtm328pUsartP__RxControl__stop(void );
# 41 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/power/HplAtm328pPower.nc"
static bool HplAtm328pPowerP__HplAtm328pPower__isUsartPowered(void );









static void HplAtm328pPowerP__HplAtm328pPower__powerOnTimer0(void );
# 37 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartConfig.nc"
static atm328p_usart_config_t *PlatformUsartConfigC__Atm328pUsartConfig__getConfig(void );
# 31 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 2 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMAux.nc"
static void SerialAuxDummyP__AMAux__setPower(message_t *p_msg, uint8_t power);
# 94 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
static void /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__resetRange(uint16_t from, uint16_t to);
#line 50
static bool /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__get(uint16_t bitnum);





static void /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__set(uint16_t bitnum);
#line 87
static bool /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__isAllBitSet(void );
# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__get(void *Data);

static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__read(void *Data);
#line 8
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__put(void *Data);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady__runTask(void );
# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__get(void *Data);

static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__read(void *Data);
#line 8
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__put(void *Data);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady__runTask(void );
# 38 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarm.nc"
static /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__size_type /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__now(void );
#line 35
static void /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__start(/*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__size_type t);
static void /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__stop(void );
#line 36
static void /*Atm328pAlarms0C.HplAlarm0B*/HplAtm328pAlarmC__1__HplAtm328pAlarm__stop(void );
# 109 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__size_type /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__getNow(void );
#line 103
static void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__startAt(/*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__size_type t0, /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__size_type dt);
#line 73
static void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__stop(void );
# 35 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmIsr.nc"
static void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Isr__fired(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Alarm__default__fired(void );
# 35 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmIsr.nc"
static void /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Isr__fired(void );
# 64 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__size_type /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__get(void );






static bool /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__isOverflowPending(void );
# 38 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer.nc"
static void /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__overflow(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t HplAtm328pTimer0P__Init__init(void );
# 41 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer.nc"
static bool HplAtm328pTimer0P__Timer__test(void );
#line 35
static HplAtm328pTimer0P__Timer__size_type HplAtm328pTimer0P__Timer__get(void );
static void HplAtm328pTimer0P__Timer__set(HplAtm328pTimer0P__Timer__size_type val);








static void HplAtm328pTimer0P__Timer__start(void );
# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t NoInitC__Init__init(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static uint32_t /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x409bab38);
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x409bab38);
# 92 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static bool /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x409bab38);
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x409bab38, 
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x409bab38);
# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static void /*HilTimerMilliC.LocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 13 "VMCustom.nc"
static void VMCustomP__VM__procOutEvt(uint8_t id, uint32_t value);
static void VMCustomP__VM__callFunction(uint8_t id);
static void VMCustomP__VM__reset(void );
# 12 "BSRadio.nc"
static void VMCustomP__BSRadio__receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len);
#line 11
static void VMCustomP__BSRadio__sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked);
#line 10
static void VMCustomP__BSRadio__sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void VMCustomP__BCRadio_receive__runTask(void );
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Queue.nc"
static 
#line 71
/*TerraVMAppC.evtQ*/QueueC__0__Queue__t  

/*TerraVMAppC.evtQ*/QueueC__0__Queue__head(void );
#line 90
static error_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__enqueue(
#line 86
/*TerraVMAppC.evtQ*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*TerraVMAppC.evtQ*/QueueC__0__Queue__t  

/*TerraVMAppC.evtQ*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*TerraVMAppC.evtQ*/QueueC__0__Queue__empty(void );







static uint8_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__size(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t TerraVMC__procEvent__postTask(void );
# 13 "VMCustom.nc"
static void TerraVMC__VMCustom__procOutEvt(uint8_t id, uint32_t value);
static void TerraVMC__VMCustom__callFunction(uint8_t id);
static void TerraVMC__VMCustom__reset(void );
# 17 "BSTimer.nc"
static bool TerraVMC__BSTimerAsync__isRunning(void );
#line 15
static void TerraVMC__BSTimerAsync__startOneShot(uint32_t dt);
# 90 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Queue.nc"
static error_t TerraVMC__evtQ__enqueue(
#line 86
TerraVMC__evtQ__t  newVal);
#line 81
static 
#line 79
TerraVMC__evtQ__t  

TerraVMC__evtQ__dequeue(void );
#line 58
static uint8_t TerraVMC__evtQ__size(void );
# 16 "BSTimer.nc"
static uint32_t TerraVMC__BSTimerVM__getNow(void );
#line 15
static void TerraVMC__BSTimerVM__startOneShot(uint32_t dt);
# 60 "TerraVMC.nc"
enum TerraVMC____nesc_unnamed4274 {
#line 60
  TerraVMC__procEvent = 0U
};
#line 60
typedef int TerraVMC____nesc_sillytask_procEvent[TerraVMC__procEvent];
#line 27
u32 TerraVMC__old;

nx_uint16_t TerraVMC__MoteID;

nx_uint8_t TerraVMC__CEU_data[BLOCK_SIZE * CURRENT_MAX_BLOCKS];

uint16_t TerraVMC__PC;

bool TerraVMC__haltedFlag = TRUE;

bool TerraVMC__procFlag = FALSE;

nx_uint8_t TerraVMC__ExtDataSysError;


uint16_t TerraVMC__ProgStart;
uint16_t TerraVMC__ProgEnd;
uint16_t TerraVMC__nTracks;
uint16_t TerraVMC__wClocks;
uint16_t TerraVMC__asyncs;
uint16_t TerraVMC__wClock0;
uint16_t TerraVMC__gate0;
uint16_t TerraVMC__inEvts;
uint16_t TerraVMC__async0;
nx_uint8_t *TerraVMC__MEM;


uint16_t TerraVMC__currStack = BLOCK_SIZE * CURRENT_MAX_BLOCKS - 1 - 4;






static inline void TerraVMC__Decoder(uint8_t Opcode, uint8_t Modifier);
static inline void TerraVMC__ceu_boot(void );
static void TerraVMC__push(uint32_t value);
static uint32_t TerraVMC__pop(void );
static void TerraVMC__pushf(float value);
static float TerraVMC__popf(void );


static inline void TerraVMC__ceu_out_wclock(uint32_t ms);





static inline void TerraVMC__BSBoot__booted(void );
#line 87
static uint8_t TerraVMC__getOpCode(uint8_t *Opcode, uint8_t *Modifier);
#line 103
static inline uint16_t TerraVMC__getLblAddr(uint16_t lbl);









static inline void TerraVMC__TViewer(char *cmd, uint16_t p1, uint16_t p2);






static void TerraVMC__evtError(uint8_t ecode);
#line 139
static inline uint8_t TerraVMC__getPar8(uint8_t p_len);





static uint16_t TerraVMC__getPar16(uint8_t p_len);
#line 159
static uint32_t TerraVMC__getPar32(uint8_t p_len);
#line 174
static uint8_t TerraVMC__getBits(uint8_t data, uint8_t stBit, uint8_t endBit);





static inline uint8_t TerraVMC__getBitsPow(uint8_t data, uint8_t stBit, uint8_t endBit);


static uint32_t TerraVMC__unit2val(uint32_t val, uint8_t unit);









static void TerraVMC__push(uint32_t value);
#line 206
static void TerraVMC__pushf(float value);
#line 220
static uint32_t TerraVMC__pop(void );



static float TerraVMC__popf(void );




static uint32_t TerraVMC__getMVal(uint16_t Maddr, uint8_t type);
#line 241
static inline float TerraVMC__getMValf(uint16_t Maddr);



static void TerraVMC__setMVal(uint32_t buffer, uint16_t Maddr, uint8_t fromTp, uint8_t toTp);
#line 288
static inline uint16_t TerraVMC__getEvtCeuId(uint8_t EvtId);
#line 325
typedef u16 TerraVMC__tceu_noff;
typedef u16 TerraVMC__tceu_nlbl;




#line 328
typedef struct TerraVMC____nesc_unnamed4275 {
  s32 togo;
  TerraVMC__tceu_nlbl lbl;
} TerraVMC__tceu_wclock;





#line 333
typedef struct TerraVMC____nesc_unnamed4276 {
  u8 stack;
  u8 tree;
  TerraVMC__tceu_nlbl lbl;
} TerraVMC__tceu_trk;

enum TerraVMC____nesc_unnamed4277 {
  TerraVMC__Inactive = 0, 
  TerraVMC__Init = 1
};


static int TerraVMC__ceu_go(int *ret);
#line 358
#line 348
typedef struct TerraVMC____nesc_unnamed4278 {
  int tracks_n;
  u8 stack;
  void *ext_data;
  int ext_int;
  int wclk_late;
  TerraVMC__tceu_wclock *wclk_cur;
  int async_cur;
  TerraVMC__tceu_trk *p_tracks;
  nx_uint8_t *p_mem;
} TerraVMC__tceu;



TerraVMC__tceu TerraVMC__CEU_ = { 
0, 
0x01, 
(void *)0, 
0, 
0, 
(void *)0, 
0, 
(void *)0, 
(void *)0 };




static int TerraVMC__ceu_track_cmp(TerraVMC__tceu_trk *trk1, TerraVMC__tceu_trk *trk2);
#line 390
static void TerraVMC__ceu_track_ins(u8 stack, u8 tree, int chk, TerraVMC__tceu_nlbl lbl);
#line 427
static int TerraVMC__ceu_track_rem(TerraVMC__tceu_trk *trk, u8 N);
#line 457
static inline void TerraVMC__ceu_track_clr(TerraVMC__tceu_nlbl l1, TerraVMC__tceu_nlbl l2);










static void TerraVMC__ceu_spawn(TerraVMC__tceu_nlbl *lbl);








static void TerraVMC__ceu_trigger(TerraVMC__tceu_noff off, uint8_t auxId);
#line 507
static int TerraVMC__ceu_wclock_lt(TerraVMC__tceu_wclock *tmr);









static void TerraVMC__ceu_wclock_enable(int gte, s32 us, TerraVMC__tceu_nlbl lbl);
#line 534
static inline void TerraVMC__ceu_async_enable(int gte, TerraVMC__tceu_nlbl lbl);







static inline int TerraVMC__ceu_go_init(int *ret);
#line 555
static inline int TerraVMC__ceu_go_event(int *ret, int id, uint8_t auxId, void *data);
#line 571
static inline int TerraVMC__ceu_go_async(int *ret, int *pending);
#line 607
static inline int TerraVMC__ceu_go_wclock(int *ret, s32 dt, s32 *nxt);
#line 664
static inline void TerraVMC__execTrail(uint16_t lbl);
#line 683
static int TerraVMC__ceu_go(int *ret);
#line 736
static inline void TerraVMC__ceu_boot(void );









static inline void TerraVMC__f_nop(uint8_t Modifier);

static inline void TerraVMC__f_end(uint8_t Modifier);




static inline void TerraVMC__f_bnot(uint8_t Modifier);






static inline void TerraVMC__f_lnot(uint8_t Modifier);






static inline void TerraVMC__f_neg(uint8_t Modifier);






static inline void TerraVMC__f_sub(uint8_t Modifier);








static inline void TerraVMC__f_add(uint8_t Modifier);








static inline void TerraVMC__f_mod(uint8_t Modifier);









static inline void TerraVMC__f_mult(uint8_t Modifier);








static inline void TerraVMC__f_div(uint8_t Modifier);









static inline void TerraVMC__f_bor(uint8_t Modifier);







static inline void TerraVMC__f_band(uint8_t Modifier);







static inline void TerraVMC__f_lshft(uint8_t Modifier);







static inline void TerraVMC__f_rshft(uint8_t Modifier);







static inline void TerraVMC__f_bxor(uint8_t Modifier);







static inline void TerraVMC__f_eq(uint8_t Modifier);








static inline void TerraVMC__f_neq(uint8_t Modifier);







static inline void TerraVMC__f_gte(uint8_t Modifier);







static inline void TerraVMC__f_lte(uint8_t Modifier);







static inline void TerraVMC__f_gt(uint8_t Modifier);







static inline void TerraVMC__f_lt(uint8_t Modifier);







static inline void TerraVMC__f_lor(uint8_t Modifier);







static inline void TerraVMC__f_land(uint8_t Modifier);
#line 958
static inline void TerraVMC__f_div_f(uint8_t Modifier);








static inline void TerraVMC__f_eq_f(uint8_t Modifier);








static inline void TerraVMC__f_neq_f(uint8_t Modifier);







static inline void TerraVMC__f_gte_f(uint8_t Modifier);







static inline void TerraVMC__f_lte_f(uint8_t Modifier);







static inline void TerraVMC__f_gt_f(uint8_t Modifier);







static inline void TerraVMC__f_lt_f(uint8_t Modifier);








static inline void TerraVMC__f_func(uint8_t Modifier);







static inline void TerraVMC__f_outevt_e(uint8_t Modifier);









static inline void TerraVMC__f_outevt_z(uint8_t Modifier);






static inline void TerraVMC__f_clken_e(uint8_t Modifier);
#line 1058
static inline void TerraVMC__f_clken_v(uint8_t Modifier);
#line 1078
static inline void TerraVMC__f_clken_c(uint8_t Modifier);
#line 1096
static inline void TerraVMC__f_set_v(uint8_t Modifier);
#line 1118
static inline void TerraVMC__f_setarr_vc(uint8_t Modifier);
#line 1152
static inline void TerraVMC__f_setarr_vv(uint8_t Modifier);
#line 1193
static inline void TerraVMC__f_poparr_v(uint8_t Modifier);
#line 1227
static inline void TerraVMC__f_pusharr_v(uint8_t Modifier);
#line 1255
static inline void TerraVMC__f_getextdt_e(uint8_t Modifier);










static inline void TerraVMC__f_trg(uint8_t Modifier);









static inline void TerraVMC__f_exec(uint8_t Modifier);









static inline void TerraVMC__f_chkret(uint8_t Modifier);









static inline void TerraVMC__f_push_c(uint8_t Modifier);








static inline void TerraVMC__f_cast(uint8_t Modifier);
#line 1319
static inline void TerraVMC__f_memclr(uint8_t Modifier);
#line 1332
static inline void TerraVMC__f_ifelse(uint8_t Modifier);
#line 1344
static inline void TerraVMC__f_asen(uint8_t Modifier);
#line 1356
static inline void TerraVMC__f_tkclr(uint8_t Modifier);
#line 1368
static inline void TerraVMC__f_outevt_c(uint8_t Modifier);










static inline void TerraVMC__f_getextdt_v(uint8_t Modifier);
#line 1391
static inline void TerraVMC__f_inc(uint8_t Modifier);








static inline void TerraVMC__f_dec(uint8_t Modifier);









static inline void TerraVMC__f_set_e(uint8_t Modifier);
#line 1427
static inline void TerraVMC__f_deref(uint8_t Modifier);
#line 1444
static inline void TerraVMC__f_memcpy(uint8_t Modifier);
#line 1457
static inline void TerraVMC__f_tkins_z(uint8_t Modifier);
#line 1470
static inline void TerraVMC__f_tkins_max(uint8_t Modifier);










static inline void TerraVMC__f_push_v(uint8_t Modifier);
#line 1497
static inline void TerraVMC__f_pop(uint8_t Modifier);
#line 1515
static inline void TerraVMC__f_popx(uint8_t Modifier);




static inline void TerraVMC__f_outevt_v(uint8_t Modifier);
#line 1532
static inline void TerraVMC__f_set_c(uint8_t Modifier);
#line 1553
static inline void TerraVMC__Decoder(uint8_t Opcode, uint8_t Modifier);
#line 1647
static void TerraVMC__VMCustom__queueEvt(uint8_t evtId, uint8_t auxId, void *data);
#line 1662
static inline void TerraVMC__procEvent__runTask(void );
#line 1687
static inline int32_t TerraVMC__VMCustom__getMVal(uint16_t Maddr, uint8_t tp);






static inline void *TerraVMC__VMCustom__getRealAddr(uint16_t Maddr);





static inline uint32_t TerraVMC__VMCustom__pop(void );


static inline void TerraVMC__VMCustom__push(uint32_t value);







static inline uint32_t TerraVMC__VMCustom__getTime(void );



static inline void TerraVMC__BSTimerVM__fired(void );









static inline bool TerraVMC__hasAsync(void );










static inline void TerraVMC__BSTimerAsync__fired(void );
#line 1748
static inline void TerraVMC__BSUpload__stop(void );




static inline void TerraVMC__BSUpload__setEnv(newProgVersion_t *data);
#line 1768
static inline void TerraVMC__BSUpload__getEnv(newProgVersion_t *data);
#line 1784
static void TerraVMC__BSUpload__start(bool resetFlag);
#line 1802
static inline uint8_t *TerraVMC__BSUpload__getSection(uint16_t Addr);



static inline void TerraVMC__BSUpload__resetMemory(void );
#line 1819
static inline void TerraVMC__BSUpload__loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[]);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t PlatformP__PlatformInit__init(void );
#line 62
static error_t PlatformP__McuInit__init(void );
# 41 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/platforms/uno/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );





static inline error_t PlatformP__PlatformInit__default__init(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t McuInitP__PowerInit__init(void );
#line 62
static error_t McuInitP__IoBusInit__init(void );
#line 62
static error_t McuInitP__IoModuleInit__init(void );
# 44 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/McuInitP.nc"
static inline error_t McuInitP__Init__init(void );









static inline error_t McuInitP__IoBusInit__default__init(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 48 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/McuSleepC.nc"
volatile bool McuSleepC__dirty = TRUE;
mcu_power_t McuSleepC__mode;



static inline void McuSleepC__update_power_mode(void );
#line 73
static inline error_t McuSleepC__Init__init(void );
#line 86
static inline void McuSleepC__McuSleep__sleep(void );
#line 118
static inline void McuSleepC__McuPowerState__update(void );




static inline mcu_power_t McuSleepC__McuPowerOverride__default__lowestState(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/home/branco/gitspace/Terra/TerraVM/src/system/RealMainP.nc"
int main(void )   ;
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
uint8_t arg_0x403f2bd8);
# 76 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4279 {

  SchedulerBasicP__NUM_TASKS = 17U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t BasicServicesP__ProgReqTimerTask__postTask(void );
# 12 "BSRadio.nc"
static void BasicServicesP__BSRadio__receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len);
#line 11
static void BasicServicesP__BSRadio__sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked);
#line 10
static void BasicServicesP__BSRadio__sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error);
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP__SendDataFullTimer__startOneShot(uint32_t dt);
# 88 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMPacket.nc"
static am_addr_t BasicServicesP__RadioAMPacket__source(
#line 84
message_t * amsg);
#line 147
static am_id_t BasicServicesP__RadioAMPacket__type(
#line 143
message_t * amsg);
# 2 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMAux.nc"
static void BasicServicesP__AMAux__setPower(message_t *p_msg, uint8_t power);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t BasicServicesP__sendNextMsg__postTask(void );
# 80 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
static error_t BasicServicesP__RadioSender__send(
# 27 "BasicServicesP.nc"
am_id_t arg_0x40610a60, 
# 80 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 104 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static error_t BasicServicesP__RadioControl__start(void );
# 19 "BSTimer.nc"
static void BasicServicesP__BSTimerAsync__fired(void );
# 126 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Packet.nc"
static 
#line 123
void * 


BasicServicesP__RadioPacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t BasicServicesP__RadioPacket__maxPayloadLength(void );
# 46 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
static uint32_t BasicServicesP__Random__rand32(void );
# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static error_t BasicServicesP__outQ__get(void *Data);

static error_t BasicServicesP__outQ__read(void *Data);
#line 8
static error_t BasicServicesP__outQ__put(void *Data);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t BasicServicesP__procInputEvent__postTask(void );
# 92 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static bool BasicServicesP__TimerAsync__isRunning(void );
#line 73
static void BasicServicesP__TimerAsync__startOneShot(uint32_t dt);




static void BasicServicesP__TimerAsync__stop(void );
# 59 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/PacketAcknowledgements.nc"
static error_t BasicServicesP__RadioAck__requestAck(
#line 53
message_t * msg);
#line 71
static error_t BasicServicesP__RadioAck__noAck(
#line 65
message_t * msg);
#line 85
static bool BasicServicesP__RadioAck__wasAcked(
#line 80
message_t * msg);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t BasicServicesP__sendMessage__postTask(void );
# 20 "BSUpload.nc"
static void BasicServicesP__BSUpload__stop(void );


static void BasicServicesP__BSUpload__setEnv(newProgVersion_t *data);
#line 35
static void BasicServicesP__BSUpload__loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[]);


static uint8_t *BasicServicesP__BSUpload__getSection(uint16_t Addr);
#line 32
static void BasicServicesP__BSUpload__resetMemory(void );
#line 29
static void BasicServicesP__BSUpload__start(bool resetFlag);
#line 26
static void BasicServicesP__BSUpload__getEnv(newProgVersion_t *data);
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP__ProgReqTimer__startOneShot(uint32_t dt);




static void BasicServicesP__ProgReqTimer__stop(void );
# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
static void BasicServicesP__BSBoot__booted(void );
# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static uint32_t BasicServicesP__TimerVM__getNow(void );
#line 92
static bool BasicServicesP__TimerVM__isRunning(void );
#line 73
static void BasicServicesP__TimerVM__startOneShot(uint32_t dt);




static void BasicServicesP__TimerVM__stop(void );
# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static error_t BasicServicesP__inQ__get(void *Data);

static error_t BasicServicesP__inQ__read(void *Data);
#line 8
static error_t BasicServicesP__inQ__put(void *Data);
# 94 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
static void BasicServicesP__BM__resetRange(uint16_t from, uint16_t to);
#line 50
static bool BasicServicesP__BM__get(uint16_t bitnum);





static void BasicServicesP__BM__set(uint16_t bitnum);
#line 87
static bool BasicServicesP__BM__isAllBitSet(void );
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP__sendTimer__startOneShot(uint32_t dt);
# 19 "BSTimer.nc"
static void BasicServicesP__BSTimerVM__fired(void );
# 141 "BasicServicesP.nc"
enum BasicServicesP____nesc_unnamed4280 {
#line 141
  BasicServicesP__ProgReqTimerTask = 1U
};
#line 141
typedef int BasicServicesP____nesc_sillytask_ProgReqTimerTask[BasicServicesP__ProgReqTimerTask];
#line 901
enum BasicServicesP____nesc_unnamed4281 {
#line 901
  BasicServicesP__procInputEvent = 2U
};
#line 901
typedef int BasicServicesP____nesc_sillytask_procInputEvent[BasicServicesP__procInputEvent];
#line 1007
enum BasicServicesP____nesc_unnamed4282 {
#line 1007
  BasicServicesP__sendMessage = 3U
};
#line 1007
typedef int BasicServicesP____nesc_sillytask_sendMessage[BasicServicesP__sendMessage];
#line 1054
enum BasicServicesP____nesc_unnamed4283 {
#line 1054
  BasicServicesP__sendNextMsg = 4U
};
#line 1054
typedef int BasicServicesP____nesc_sillytask_sendNextMsg[BasicServicesP__sendNextMsg];
#line 82
nx_uint16_t BasicServicesP__MoteID;
bool BasicServicesP__firstInic = TRUE;
uint32_t BasicServicesP__reSendDelay;

GenericData_t BasicServicesP__tempInputInQ;
GenericData_t BasicServicesP__tempInputOutQ;
GenericData_t BasicServicesP__tempOutputInQ;
GenericData_t BasicServicesP__tempOutputOutQ;
GenericData_t BasicServicesP__lastNewProgVersion;
message_t BasicServicesP__sendBuff;






uint8_t BasicServicesP__sendCounter;


uint8_t BasicServicesP__userRFPowerIdx;


uint8_t BasicServicesP__ReqState = ST_IDLE;


nx_uint16_t BasicServicesP__ProgVersion;
nx_uint16_t BasicServicesP__ProgMoteSource;
nx_uint16_t BasicServicesP__ProgBlockStart;
nx_uint16_t BasicServicesP__ProgBlockLen;
uint8_t BasicServicesP__loadingProgramFlag = FALSE;

uint8_t BasicServicesP__ProgTimeOutCounter = 0;
uint16_t BasicServicesP__DsmBlockCount = 0;
nx_uint16_t BasicServicesP__lastRecNewProgVersion;


nx_uint16_t BasicServicesP__NewDataSeq;
nx_uint16_t BasicServicesP__maxSeenDataSeq;

nx_uint16_t BasicServicesP__NewDataMoteSource;
#line 137
static void BasicServicesP__sendReqProgBlock(reqProgBlock_t *Data);
static inline void BasicServicesP__sendNewProgVersion(newProgVersion_t *Data);
static void BasicServicesP__sendNewProgBlock(newProgBlock_t *Data);





static inline void BasicServicesP__TViewer(char *cmd, uint16_t p1, uint16_t p2);
#line 157
static inline void BasicServicesP__inicCtlData(void );
#line 176
static inline void BasicServicesP__TOSBoot__booted(void );
#line 202
static inline uint32_t BasicServicesP__getRequestTimeout(void );




static inline void BasicServicesP__RadioControl__startDone(error_t error);
#line 236
static inline void BasicServicesP__RadioControl__stopDone(error_t error);
#line 251
static inline uint32_t BasicServicesP__BSTimerVM__getNow(void );
static void BasicServicesP__BSTimerVM__startOneShot(uint32_t dt);






static inline void BasicServicesP__TimerVM__fired(void );








static void BasicServicesP__BSTimerAsync__startOneShot(uint32_t dt);




static inline bool BasicServicesP__BSTimerAsync__isRunning(void );

static inline void BasicServicesP__TimerAsync__fired(void );
#line 288
static uint16_t BasicServicesP__getNextEmptyBlock(void );
#line 398
static inline void BasicServicesP__recNewProgVersionNet_receive(message_t *msg, void *payload, uint8_t len);
#line 422
static inline void BasicServicesP__recNewProgBlockNet_receive(message_t *msg, void *payload, uint8_t len);
#line 459
static inline void BasicServicesP__recReqProgBlockNet_receive(message_t *msg, void *payload, uint8_t len);
#line 475
static inline void BasicServicesP__recSetDataNDNet_receive(message_t *msg, void *payload, uint8_t len);
#line 498
static inline void BasicServicesP__recCustomMsgNet_receive(message_t *msg, void *payload, uint8_t len);









static inline void BasicServicesP__recReqDataNet_receive(message_t *msg, void *payload, uint8_t len);
#line 521
static inline message_t *BasicServicesP__RadioReceiver__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 591
static inline void BasicServicesP__procNewProgVersion(newProgVersion_t *Data);
#line 624
static inline void BasicServicesP__procNewProgBlock(newProgBlock_t *Data);
#line 656
static inline void BasicServicesP__procRecReqProgBlock(reqProgBlock_t *Data);
#line 700
static inline void BasicServicesP__ProgReqTimerTask__runTask(void );
#line 769
static inline void BasicServicesP__ProgReqTimer__fired(void );




static inline void BasicServicesP__SendDataFullTimer__fired(void );
#line 901
static inline void BasicServicesP__procInputEvent__runTask(void );
#line 930
static inline void BasicServicesP__inQ__dataReady(void );
#line 946
static inline error_t BasicServicesP__RadioSender_send(uint8_t am_id, uint16_t target, message_t *msg, uint8_t len);
#line 979
static void BasicServicesP__sendRadioN(void );
#line 1007
static inline void BasicServicesP__sendMessage__runTask(void );
#line 1044
static inline void BasicServicesP__outQ__dataReady(void );









static inline void BasicServicesP__sendNextMsg__runTask(void );









static inline void BasicServicesP__sendTimer__fired(void );
#line 1076
static inline void BasicServicesP__RadioSender__sendDone(am_id_t id, message_t *msg, error_t error);
#line 1136
static inline void BasicServicesP__sendNewProgVersion(newProgVersion_t *Data);
#line 1152
static void BasicServicesP__sendNewProgBlock(newProgBlock_t *Data);
#line 1168
static void BasicServicesP__sendReqProgBlock(reqProgBlock_t *Data);
#line 1216
static inline error_t BasicServicesP__BSRadio__send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x406f4068, 
# 103 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x406f4a28, 
# 71 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 101
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);
#line 113
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 131
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 153
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(message_t *amsg);
#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);









static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__requestAck(message_t *msg);


static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__noAck(message_t *msg);
#line 204
static inline bool /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__wasAcked(message_t *msg);
# 113 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4284 {
#line 191
  SerialP__RunTx = 5U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4285 {
#line 322
  SerialP__startDoneTask = 6U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4286 {
#line 332
  SerialP__stopDoneTask = 7U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4287 {
#line 341
  SerialP__defaultSerialFlushTask = 8U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4288 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4289 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4290 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4291 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4292 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4293 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4294 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4295 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 518
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 559
static inline void SerialP__RunTx__runTask(void );
#line 668
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407a6b58, 
# 96 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407a6518, 
# 71 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407a5688, 
# 31 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407a5688);
# 23 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407a5688, 
# 23 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4296 {
#line 158
  SerialDispatcherP__0__signalSendDone = 9U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4297 {
#line 275
  SerialDispatcherP__0__receiveTask = 10U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4298 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4299 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4300 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4301 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 36 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
static void Atm328pUsartP__HplUsart__disableRxcInterrupt(void );


static void Atm328pUsartP__HplUsart__disableTxcInterrupt(void );








static bool Atm328pUsartP__HplUsart__dataOverrun(void );
#line 42
static void Atm328pUsartP__HplUsart__disableDreInterrupt(void );






static bool Atm328pUsartP__HplUsart__parityError(void );





static void Atm328pUsartP__HplUsart__tx(uint8_t data);
#line 41
static void Atm328pUsartP__HplUsart__enableDreInterrupt(void );










static uint8_t Atm328pUsartP__HplUsart__rx(void );
#line 47
static bool Atm328pUsartP__HplUsart__frameError(void );
#line 46
static bool Atm328pUsartP__HplUsart__txEmpty(void );
# 35 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/UartError.nc"
static void Atm328pUsartP__UartError__receiveError(void );
# 41 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/power/HplAtm328pPower.nc"
static bool Atm328pUsartP__HplPower__isUsartPowered(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t Atm328pUsartP__do_notify_flush__postTask(void );
# 95 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/StdControl.nc"
static error_t Atm328pUsartP__HplTxControl__start(void );









static error_t Atm328pUsartP__HplTxControl__stop(void );
# 54 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFlush.nc"
static void Atm328pUsartP__SerialFlush__flushDone(void );
# 79 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/UartStream.nc"
static void Atm328pUsartP__UartStream__receivedByte(uint8_t byte);
#line 99
static void Atm328pUsartP__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void Atm328pUsartP__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 95 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/StdControl.nc"
static error_t Atm328pUsartP__HplRxControl__start(void );









static error_t Atm328pUsartP__HplRxControl__stop(void );
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
static void Atm328pUsartP__McuPowerState__update(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t Atm328pUsartP__HplUsartInit__init(void );
# 287 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartP.nc"
enum Atm328pUsartP____nesc_unnamed4302 {
#line 287
  Atm328pUsartP__do_notify_flush = 11U
};
#line 287
typedef int Atm328pUsartP____nesc_sillytask_do_notify_flush[Atm328pUsartP__do_notify_flush];
#line 63
#line 59
struct Atm328pUsartP____nesc_unnamed4303 {
  uint8_t *buf;
  uint16_t len;
  uint16_t idx;
} Atm328pUsartP__tx;
#line 63
#line 59
struct Atm328pUsartP____nesc_unnamed4303 



Atm328pUsartP__rx;

bool Atm328pUsartP__byte_receive_enabled = FALSE;

bool Atm328pUsartP__notify_flush = FALSE;


static inline bool Atm328pUsartP__receive_with_error_notify(uint8_t *dst);
#line 100
static inline void Atm328pUsartP__UartError__default__receiveError(void );




static inline error_t Atm328pUsartP__StdControl__start(void );
#line 128
static error_t Atm328pUsartP__StdControl__stop(void );
#line 164
static error_t Atm328pUsartP__UartStream__send(uint8_t *buf, uint16_t len);
#line 287
static inline void Atm328pUsartP__do_notify_flush__runTask(void );
#line 302
static inline void Atm328pUsartP__SerialFlush__default__flushDone(void );




static inline void Atm328pUsartP__HplUsart__rxDone(void );
#line 332
static inline void Atm328pUsartP__HplUsart__txDone(void );
#line 345
static inline void Atm328pUsartP__HplUsart__txNowEmpty(void );
# 37 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartConfig.nc"
static atm328p_usart_config_t *HplAtm328pUsartP__Config__getConfig(void );
# 57 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
static void HplAtm328pUsartP__Usart__rxDone(void );
static void HplAtm328pUsartP__Usart__txDone(void );
static void HplAtm328pUsartP__Usart__txNowEmpty(void );
# 49 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
enum HplAtm328pUsartP____nesc_unnamed4304 {
#line 49
  HplAtm328pUsartP__UCSR0A_WMASK = ~(((1 << 4) | (1 << 3)) | (1 << 2))
};
static inline error_t HplAtm328pUsartP__Init__init(void );
#line 93
static inline error_t HplAtm328pUsartP__RxControl__start(void );





static inline error_t HplAtm328pUsartP__RxControl__stop(void );





static inline error_t HplAtm328pUsartP__TxControl__start(void );





static inline error_t HplAtm328pUsartP__TxControl__stop(void );










static inline void HplAtm328pUsartP__Usart__disableRxcInterrupt(void );









static inline void HplAtm328pUsartP__Usart__disableTxcInterrupt(void );




static inline void HplAtm328pUsartP__Usart__enableDreInterrupt(void );




static inline void HplAtm328pUsartP__Usart__disableDreInterrupt(void );
#line 157
static inline bool HplAtm328pUsartP__Usart__txEmpty(void );




static inline bool HplAtm328pUsartP__Usart__frameError(void );




static inline bool HplAtm328pUsartP__Usart__dataOverrun(void );




static inline bool HplAtm328pUsartP__Usart__parityError(void );









static inline uint8_t HplAtm328pUsartP__Usart__rx(void );









static inline void HplAtm328pUsartP__Usart__tx(uint8_t data);








void __vector_18(void ) __attribute((signal))   ;




void __vector_19(void ) __attribute((signal))   ;




void __vector_20(void ) __attribute((signal))   ;
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
static void HplAtm328pPowerP__McuPowerState__update(void );
# 61 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/power/HplAtm328pPowerP.nc"
static inline bool HplAtm328pPowerP__HplAtm328pPower__isUsartPowered(void );


static inline void HplAtm328pPowerP__HplAtm328pPower__powerOnTimer0(void );
# 41 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/platforms/uno/PlatformUsartConfigC.nc"
static atm328p_usart_config_t PlatformUsartConfigC__cfg = { 
.mode = ATM328P_USART_ASYNC, 
.bits = ATM328P_USART_BITS_8, 
.parity = ATM328P_USART_PARITY_NONE, 
.two_stop_bits = FALSE, 
.polarity_rising_edge = FALSE, 
.double_speed = TRUE, 
.baud = 115200ul };


static inline atm328p_usart_config_t *PlatformUsartConfigC__Atm328pUsartConfig__getConfig(void );
# 51 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 27 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/SerialAuxDummyP.nc"
static inline void SerialAuxDummyP__AMAux__setPower(message_t *p_msg, uint8_t power);
# 44 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVectorC.nc"
typedef uint8_t /*BasicServicesC.Bitmap*/vmBitVectorC__0__int_type;

enum /*BasicServicesC.Bitmap*/vmBitVectorC__0____nesc_unnamed4305 {

  vmBitVectorC__0__ELEMENT_SIZE = 8 * sizeof(/*BasicServicesC.Bitmap*/vmBitVectorC__0__int_type ), 
  vmBitVectorC__0__ARRAY_SIZE = (5 + /*BasicServicesC.Bitmap*/vmBitVectorC__0__ELEMENT_SIZE - 1) / /*BasicServicesC.Bitmap*/vmBitVectorC__0__ELEMENT_SIZE
};

/*BasicServicesC.Bitmap*/vmBitVectorC__0__int_type /*BasicServicesC.Bitmap*/vmBitVectorC__0__m_bits[/*BasicServicesC.Bitmap*/vmBitVectorC__0__ARRAY_SIZE];

static inline uint16_t /*BasicServicesC.Bitmap*/vmBitVectorC__0__getIndex(uint16_t bitnum);




static inline uint16_t /*BasicServicesC.Bitmap*/vmBitVectorC__0__getMask(uint16_t bitnum);
#line 84
static bool /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__get(uint16_t bitnum);





static inline void /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__set(uint16_t bitnum);
#line 118
static bool /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__isAllBitSet(void );







static inline void /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__resetRange(uint16_t from, uint16_t to);
# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static void /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__dataReady(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady__postTask(void );
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
enum /*BasicServicesC.inQueue.dQueue*/dataQueueP__0____nesc_unnamed4306 {
#line 16
  dataQueueP__0__dataReady = 12U
};
#line 16
typedef int /*BasicServicesC.inQueue.dQueue*/dataQueueP__0____nesc_sillytask_dataReady[/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady];
#line 9
bool /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__flagFreeQ = TRUE;


/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataType /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qData[5];
uint8_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qHead = 0;
#line 13
uint8_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qTail = 0;
#line 13
uint8_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qSize = 0;


static inline void /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady__runTask(void );




static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__put(void *Data);
#line 37
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__get(void *Data);
#line 60
static inline error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__read(void *Data);
# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static void /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__dataReady(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady__postTask(void );
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
enum /*BasicServicesC.outQueue.dQueue*/dataQueueP__1____nesc_unnamed4307 {
#line 16
  dataQueueP__1__dataReady = 13U
};
#line 16
typedef int /*BasicServicesC.outQueue.dQueue*/dataQueueP__1____nesc_sillytask_dataReady[/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady];
#line 9
bool /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__flagFreeQ = TRUE;


/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataType /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qData[10];
uint8_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qHead = 0;
#line 13
uint8_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qTail = 0;
#line 13
uint8_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize = 0;


static inline void /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady__runTask(void );




static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__put(void *Data);
#line 37
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__get(void *Data);
#line 60
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__read(void *Data);
# 39 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmC.nc"
static inline void /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__start(/*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__size_type t);








static inline void /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__stop(void );









static inline /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__size_type /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__now(void );
#line 48
static inline void /*Atm328pAlarms0C.HplAlarm0B*/HplAtm328pAlarmC__1__HplAtm328pAlarm__stop(void );
# 35 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmIsr.nc"
static void HplAtm328pAlarmIsr0P__InterruptA__fired(void );
#line 35
static void HplAtm328pAlarmIsr0P__InterruptB__fired(void );
# 40 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmIsr0P.nc"
void __vector_14(void ) __attribute((signal))   ;




void __vector_15(void ) __attribute((signal))   ;
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__fired(void );
# 38 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarm.nc"
static /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__size_type /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__now(void );
#line 35
static void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__start(/*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__size_type t);
static void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__stop(void );
# 41 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pAlarmC.nc"
/*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__m_alarmAt;

static inline void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Isr__fired(void );










static inline void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__stop(void );









static inline void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__startAt(/*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type t0, /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type dt);
#line 107
static inline /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__getNow(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Alarm__fired(void );
# 36 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarm.nc"
static void /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__HplAlarm__stop(void );
# 43 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pAlarmC.nc"
static inline void /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Isr__fired(void );
#line 117
static inline void /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Alarm__default__fired(void );
# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static void /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__overflow(void );
# 41 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer.nc"
static bool /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__test(void );
#line 35
static /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__size_type /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__get(void );
# 40 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pTimerToCounter.nc"
static inline /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__size_type /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__get(void );




static inline bool /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__isOverflowPending(void );









static inline void /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__overflow(void );
# 51 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/power/HplAtm328pPower.nc"
static void HplAtm328pTimer0P__HplAtm328pPower__powerOnTimer0(void );
# 38 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer.nc"
static void HplAtm328pTimer0P__Timer__overflow(void );
# 46 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer0P.nc"
void __vector_16(void ) __attribute((signal))   ;





static inline uint8_t HplAtm328pTimer0P__Timer__get(void );





static inline void HplAtm328pTimer0P__Timer__set(uint8_t val);








static inline bool HplAtm328pTimer0P__Timer__test(void );
#line 79
static inline void HplAtm328pTimer0P__Timer__start(void );
#line 105
static inline error_t HplAtm328pTimer0P__Init__init(void );
# 64 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC__0____nesc_unnamed4308 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 4, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) + 4, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0____nesc_unnamed4309 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 4, 
  TransformAlarmC__0__MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );




static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type dt);
#line 162
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 22 "/home/branco/gitspace/Terra/TerraVM/src/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
enum /*HilTimerMilliC.TimerC*/AlarmToTimerC__0____nesc_unnamed4310 {
#line 74
  AlarmToTimerC__0__fired = 14U
};
#line 74
typedef int /*HilTimerMilliC.TimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.TimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x409bab38);
#line 71
enum /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0____nesc_unnamed4311 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 15U
};
#line 71
typedef int /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0____nesc_unnamed4312 {

  VirtualizeTimerC__0__NUM_TIMERS = 6U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0____nesc_unnamed4313 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 189
static inline uint32_t /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/home/branco/gitspace/Terra/TerraVM/src/system/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.LocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 52 "/home/branco/gitspace/Terra/TerraVM/src/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 24 "VMCustom.nc"
static uint32_t VMCustomP__VM__getTime(void );
#line 21
static void *VMCustomP__VM__getRealAddr(uint16_t Maddr);
#line 17
static void VMCustomP__VM__push(uint32_t val);
#line 16
static uint32_t VMCustomP__VM__pop(void );

static void VMCustomP__VM__queueEvt(uint8_t evtId, uint8_t auxId, void *data);
static int32_t VMCustomP__VM__getMVal(uint16_t Maddr, uint8_t tp);
# 9 "BSRadio.nc"
static error_t VMCustomP__BSRadio__send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck);
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
static uint16_t VMCustomP__Random__rand16(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t VMCustomP__BCRadio_receive__postTask(void );
# 181 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustomP.nc"
enum VMCustomP____nesc_unnamed4314 {
#line 181
  VMCustomP__BCRadio_receive = 16U
};
#line 181
typedef int VMCustomP____nesc_sillytask_BCRadio_receive[VMCustomP__BCRadio_receive];
#line 18
nx_uint8_t VMCustomP__ExtDataCustomA;
usrMsg_t VMCustomP__ExtDataRadioReceived;
nx_uint8_t VMCustomP__ExtDataSendDoneError;
nx_uint8_t VMCustomP__ExtDataWasAcked;
#line 39
static void VMCustomP__proc_send_x(uint16_t id, uint16_t addr, uint8_t ack);









static inline void VMCustomP__proc_send(uint16_t id, uint32_t addr);


static inline void VMCustomP__proc_send_ack(uint16_t id, uint32_t addr);




static inline void VMCustomP__proc_req_custom_a(uint16_t id, uint32_t value);









static inline void VMCustomP__proc_req_custom(uint16_t id, uint32_t value);









static inline void VMCustomP__func_getNodeId(uint16_t id);






static inline void VMCustomP__func_random(uint16_t id);






static inline void VMCustomP__func_getMem(uint16_t id);







static inline void VMCustomP__func_getTime(uint16_t id);
#line 148
static void VMCustomP__VM__procOutEvt(uint8_t id, uint32_t value);
#line 160
static inline void VMCustomP__VM__callFunction(uint8_t id);
#line 177
static inline void VMCustomP__VM__reset(void );



static inline void VMCustomP__BCRadio_receive__runTask(void );




static inline void VMCustomP__BSRadio__receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len);









static void VMCustomP__BSRadio__sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error);









static void VMCustomP__BSRadio__sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked);
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
/*TerraVMAppC.evtQ*/QueueC__0__queue_t  /*TerraVMAppC.evtQ*/QueueC__0__queue[6];
uint8_t /*TerraVMAppC.evtQ*/QueueC__0__head = 0;
uint8_t /*TerraVMAppC.evtQ*/QueueC__0__tail = 0;
uint8_t /*TerraVMAppC.evtQ*/QueueC__0__size = 0;

static inline bool /*TerraVMAppC.evtQ*/QueueC__0__Queue__empty(void );



static inline uint8_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__size(void );



static inline uint8_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__maxSize(void );



static inline /*TerraVMAppC.evtQ*/QueueC__0__queue_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__head(void );



static inline void /*TerraVMAppC.evtQ*/QueueC__0__printQueue(void );
#line 85
static /*TerraVMAppC.evtQ*/QueueC__0__queue_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__dequeue(void );
#line 97
static error_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__enqueue(/*TerraVMAppC.evtQ*/QueueC__0__queue_t newVal);
# 124 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 47 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/platforms/uno/PlatformP.nc"
static inline error_t PlatformP__PlatformInit__default__init(void )
#line 47
{
#line 47
  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t PlatformP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__PlatformInit__default__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/home/branco/gitspace/Terra/TerraVM/src/system/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 58 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer0P.nc"
static inline void HplAtm328pTimer0P__Timer__set(uint8_t val)
{
  * (volatile uint8_t *)(0x26 + 0x20) = val;
}

# 118 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
{
  McuSleepC__dirty = TRUE;
}

# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
inline static void HplAtm328pPowerP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 64 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/power/HplAtm328pPowerP.nc"
static inline void HplAtm328pPowerP__HplAtm328pPower__powerOnTimer0(void )
#line 64
{
#line 64
  * (volatile uint8_t *)0x64 &= ~(1 << 5);
#line 64
  HplAtm328pPowerP__McuPowerState__update();
}

# 51 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/power/HplAtm328pPower.nc"
inline static void HplAtm328pTimer0P__HplAtm328pPower__powerOnTimer0(void ){
#line 51
  HplAtm328pPowerP__HplAtm328pPower__powerOnTimer0();
#line 51
}
#line 51
# 79 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer0P.nc"
static inline void HplAtm328pTimer0P__Timer__start(void )
{
  HplAtm328pTimer0P__HplAtm328pPower__powerOnTimer0();


  * (volatile uint8_t *)(0x25 + 0x20) &= ~(0x07 << 0);


  HplAtm328pTimer0P__Timer__set(0);


  * (volatile uint8_t *)0x6E |= 1 << 0;


  * (volatile uint8_t *)(0x25 + 0x20) |= TIMER_CLOCK_INTERNAL_PRESCALE_1024 << 0;
}










static inline error_t HplAtm328pTimer0P__Init__init(void )
{
  HplAtm328pTimer0P__Timer__start();
  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t McuInitP__IoModuleInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm328pTimer0P__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/McuInitP.nc"
static inline error_t McuInitP__IoBusInit__default__init(void )
#line 54
{
#line 54
  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t McuInitP__IoBusInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuInitP__IoBusInit__default__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 73 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/McuSleepC.nc"
static inline error_t McuSleepC__Init__init(void )
{




  * (volatile uint8_t *)0x7A &= ~(1 << 7);

  * (volatile uint8_t *)0x64 |= (uint8_t )(((((((1 << 0) | (1 << 2)) | (1 << 1)) | (1 << 5)) | (1 << 3)) | (1 << 6)) | (1 << 7));

  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t McuInitP__PowerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuSleepC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 44 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/McuInitP.nc"
static inline error_t McuInitP__Init__init(void )
{
  error_t res = SUCCESS;

#line 47
  res = ecombine(res, McuInitP__PowerInit__init());
  res = ecombine(res, McuInitP__IoBusInit__init());
  res = ecombine(res, McuInitP__IoModuleInit__init());
  return res;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t PlatformP__McuInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuInitP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 41 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/platforms/uno/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t res = PlatformP__McuInit__init();

#line 44
  return ecombine(res, PlatformP__PlatformInit__init());
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 18 "VMCustom.nc"
inline static void VMCustomP__VM__queueEvt(uint8_t evtId, uint8_t auxId, void *data){
#line 18
  TerraVMC__VMCustom__queueEvt(evtId, auxId, data);
#line 18
}
#line 18
# 181 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustomP.nc"
static inline void VMCustomP__BCRadio_receive__runTask(void )
#line 181
{
  VMCustomP__VM__queueEvt(I_RECEIVE_ID, __nesc_ntoh_uint8(VMCustomP__ExtDataRadioReceived.type.nxdata), &VMCustomP__ExtDataRadioReceived);
  VMCustomP__VM__queueEvt(I_RECEIVE, 0, &VMCustomP__ExtDataRadioReceived);
}

# 90 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Queue.nc"
inline static error_t TerraVMC__evtQ__enqueue(TerraVMC__evtQ__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*TerraVMAppC.evtQ*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 61 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
static inline uint8_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 6;
}





static inline void /*TerraVMAppC.evtQ*/QueueC__0__printQueue(void )
#line 69
{
}

# 97 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 103 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 48 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmC.nc"
static inline void /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__stop(void )
{
  * (uint8_t *)110U &= ~2;
}

# 36 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarm.nc"
inline static void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__stop(void ){
#line 36
  /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__stop();
#line 36
}
#line 36
# 54 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pAlarmC.nc"
static inline void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__stop(void )
{
  /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__stop();
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 64 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
inline static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();
}

# 109 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned int __nesc_result;
#line 109

#line 109
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 52 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer0P.nc"
static inline uint8_t HplAtm328pTimer0P__Timer__get(void )
{
  return * (volatile uint8_t *)(0x26 + 0x20);
}

# 35 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer.nc"
inline static /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__size_type /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__get(void ){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = HplAtm328pTimer0P__Timer__get();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 40 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pTimerToCounter.nc"
static inline /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__size_type /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__get(void )
{
  return /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__get();
}

# 64 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
inline static /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 67 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer0P.nc"
static inline bool HplAtm328pTimer0P__Timer__test(void )
{
  return * (volatile uint8_t *)(0x15 + 0x20) & (1 << 0);
}

# 41 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer.nc"
inline static bool /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__test(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm328pTimer0P__Timer__test();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 45 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pTimerToCounter.nc"
static inline bool /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__isOverflowPending(void )
{
  return /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__test();
}

# 71 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
inline static bool /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 15 "BSTimer.nc"
inline static void TerraVMC__BSTimerVM__startOneShot(uint32_t dt){
#line 15
  BasicServicesP__BSTimerVM__startOneShot(dt);
#line 15
}
#line 15
# 69 "TerraVMC.nc"
static inline void TerraVMC__ceu_out_wclock(uint32_t ms)
#line 69
{
#line 69
  if (ms != 0x7FFFFFFF) {
#line 69
      TerraVMC__BSTimerVM__startOneShot(ms);
    }
}

#line 607
static inline int TerraVMC__ceu_go_wclock(int *ret, s32 dt, s32 *nxt)
{
  int i;
  s32 min_togo = 0x7FFFFFFF;
  TerraVMC__tceu_wclock *CLK0 = (TerraVMC__tceu_wclock *)((&TerraVMC__CEU_)->p_mem + TerraVMC__wClock0);

  (&TerraVMC__CEU_)->stack = 0x01;

  if (! (&TerraVMC__CEU_)->wclk_cur) {
      if (nxt) {
#line 616
        *nxt = 0x7FFFFFFF;
        }
      TerraVMC__ceu_out_wclock(0x7FFFFFFF);
      return 0;
    }
  if ((&TerraVMC__CEU_)->wclk_cur->togo <= dt) {
      min_togo = (&TerraVMC__CEU_)->wclk_cur->togo;
      (&TerraVMC__CEU_)->wclk_late = dt - (&TerraVMC__CEU_)->wclk_cur->togo;
    }




  (&TerraVMC__CEU_)->wclk_cur = (void *)0;
  for (i = 0; i < TerraVMC__wClocks; i++) 
    {
      TerraVMC__tceu_wclock *tmr = &CLK0[i];

#line 633
      ;
      if (tmr->lbl == TerraVMC__Inactive) {
        continue;
        }
      if (tmr->togo == min_togo) {
          tmr->togo = 0L;
          ;
          TerraVMC__ceu_spawn(& tmr->lbl);
        }
      else 
#line 641
        {
          tmr->togo -= dt;
          if (tmr->togo < 0) {
              tmr->togo = 0L;
              TerraVMC__ceu_spawn(& tmr->lbl);
            }
          else {
#line 647
            TerraVMC__ceu_wclock_lt(tmr);
            }
        }
    }


  {
#line 653
    int s = TerraVMC__ceu_go(ret);

#line 654
    if (nxt) {
      *nxt = (&TerraVMC__CEU_)->wclk_cur ? (&TerraVMC__CEU_)->wclk_cur->togo : 0x7FFFFFFF;
      }
#line 656
    (&TerraVMC__CEU_)->wclk_late = 0;
    TerraVMC__ceu_out_wclock((&TerraVMC__CEU_)->wclk_cur ? (&TerraVMC__CEU_)->wclk_cur->togo : 0x7FFFFFFF);

    return s;
  }
}

# 189 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static uint32_t BasicServicesP__TimerVM__getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__getNow(0U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 251 "BasicServicesP.nc"
static inline uint32_t BasicServicesP__BSTimerVM__getNow(void )
#line 251
{
#line 251
  return BasicServicesP__TimerVM__getNow();
}

# 16 "BSTimer.nc"
inline static uint32_t TerraVMC__BSTimerVM__getNow(void ){
#line 16
  unsigned int __nesc_result;
#line 16

#line 16
  __nesc_result = BasicServicesP__BSTimerVM__getNow();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 1715 "TerraVMC.nc"
static inline void TerraVMC__BSTimerVM__fired(void )
{
  u32 now = (u32 )TerraVMC__BSTimerVM__getNow();
  s32 dt = now - TerraVMC__old;

#line 1719
  TerraVMC__old = now;
  ;
  TerraVMC__ceu_go_wclock((void *)0, dt, (void *)0);
}

# 19 "BSTimer.nc"
inline static void BasicServicesP__BSTimerVM__fired(void ){
#line 19
  TerraVMC__BSTimerVM__fired();
#line 19
}
#line 19
# 259 "BasicServicesP.nc"
static inline void BasicServicesP__TimerVM__fired(void )
#line 259
{
  BasicServicesP__BSTimerVM__fired();
}

# 571 "TerraVMC.nc"
static inline int TerraVMC__ceu_go_async(int *ret, int *pending)
{
  int i;
#line 573
  int s = 0;
  TerraVMC__tceu_nlbl *ASY0 = (TerraVMC__tceu_nlbl *)((&TerraVMC__CEU_)->p_mem + TerraVMC__async0);

#line 575
  ;


  for (i = 0; i < TerraVMC__asyncs; i++) {
      int idx = ((&TerraVMC__CEU_)->async_cur + i) % TerraVMC__asyncs;

#line 580
      if (ASY0[idx] != TerraVMC__Inactive) {

          TerraVMC__ceu_track_ins(0x01, 0xFF, 0, ASY0[idx]);
          ASY0[idx] = TerraVMC__Inactive;
          (&TerraVMC__CEU_)->async_cur = (idx + 1) % TerraVMC__asyncs;

          (&TerraVMC__CEU_)->wclk_late--;
          s = TerraVMC__ceu_go(ret);
          break;
        }
    }

  if (pending != (void *)0) 
    {
      *pending = 0;
      for (i = 0; i < TerraVMC__asyncs; i++) {
          if (ASY0[i] != TerraVMC__Inactive) {
              *pending = 1;
              break;
            }
        }
    }

  return s;
}

# 15 "BSTimer.nc"
inline static void TerraVMC__BSTimerAsync__startOneShot(uint32_t dt){
#line 15
  BasicServicesP__BSTimerAsync__startOneShot(dt);
#line 15
}
#line 15
# 1725 "TerraVMC.nc"
static inline bool TerraVMC__hasAsync(void )
#line 1725
{
  uint8_t i;
  TerraVMC__tceu_nlbl *ASY0 = (TerraVMC__tceu_nlbl *)((&TerraVMC__CEU_)->p_mem + TerraVMC__async0);

#line 1728
  for (i = 0; i < TerraVMC__asyncs; i++) {
      if (ASY0[i] != TerraVMC__Inactive) {
          return TRUE;
        }
    }
  return FALSE;
}

static inline void TerraVMC__BSTimerAsync__fired(void )
{
  ;
  if (TerraVMC__hasAsync()) {
#line 1739
    TerraVMC__BSTimerAsync__startOneShot(2);
    }
#line 1740
  TerraVMC__ceu_go_async((void *)0, (void *)0);
}

# 19 "BSTimer.nc"
inline static void BasicServicesP__BSTimerAsync__fired(void ){
#line 19
  TerraVMC__BSTimerAsync__fired();
#line 19
}
#line 19
# 275 "BasicServicesP.nc"
static inline void BasicServicesP__TimerAsync__fired(void )
#line 275
{
#line 275
  BasicServicesP__BSTimerAsync__fired();
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t BasicServicesP__sendNextMsg__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BasicServicesP__sendNextMsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 1064 "BasicServicesP.nc"
static inline void BasicServicesP__sendTimer__fired(void )
#line 1064
{
  ;
  BasicServicesP__sendNextMsg__postTask();
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t BasicServicesP__ProgReqTimerTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BasicServicesP__ProgReqTimerTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 769 "BasicServicesP.nc"
static inline void BasicServicesP__ProgReqTimer__fired(void )
#line 769
{
  BasicServicesP__ProgReqTimerTask__postTask();
}

# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

#line 286
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 315
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void BasicServicesP__SendDataFullTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 73
}
#line 73
# 1802 "TerraVMC.nc"
static inline uint8_t *TerraVMC__BSUpload__getSection(uint16_t Addr)
#line 1802
{
  return (uint8_t *)&TerraVMC__CEU_data[Addr];
}

# 38 "BSUpload.nc"
inline static uint8_t *BasicServicesP__BSUpload__getSection(uint16_t Addr){
#line 38
  unsigned char *__nesc_result;
#line 38

#line 38
  __nesc_result = TerraVMC__BSUpload__getSection(Addr);
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38
# 50 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
inline static bool BasicServicesP__BM__get(uint16_t bitnum){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__get(bitnum);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 774 "BasicServicesP.nc"
static inline void BasicServicesP__SendDataFullTimer__fired(void )
#line 774
{
  newProgBlock_t xBlock;

#line 776
  ;

  if (BasicServicesP__BM__get(BasicServicesP__DsmBlockCount + __nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata))) {
      uint8_t *mem;
      uint16_t i;

#line 781
      __nesc_hton_uint16(xBlock.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata));
      __nesc_hton_uint16(xBlock.blockId.nxdata, (uint16_t )(BasicServicesP__DsmBlockCount + __nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata)));
      mem = BasicServicesP__BSUpload__getSection((BasicServicesP__DsmBlockCount + __nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata)) * BLOCK_SIZE);
      for (i = 0; i < BLOCK_SIZE; i++) __nesc_hton_uint8(xBlock.data[i].nxdata, __nesc_ntoh_uint8((* (nx_uint8_t *)(mem + i)).nxdata));
      BasicServicesP__sendNewProgBlock(&xBlock);
    }
  BasicServicesP__DsmBlockCount++;
  if (BasicServicesP__DsmBlockCount < __nesc_ntoh_uint16(BasicServicesP__ProgBlockLen.nxdata)) {

      BasicServicesP__SendDataFullTimer__startOneShot(DISSEMINATION_TIMEOUT);
    }
  else 
#line 791
    {
      BasicServicesP__ReqState = ST_IDLE;
    }
}

# 204 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x409bab38){
#line 83
  switch (arg_0x409bab38) {
#line 83
    case 0U:
#line 83
      BasicServicesP__TimerVM__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      BasicServicesP__TimerAsync__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      BasicServicesP__sendTimer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      BasicServicesP__ProgReqTimer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      BasicServicesP__SendDataFullTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x409bab38);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 144 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}











static inline void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void BasicServicesP__TimerAsync__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
#line 73
inline static void BasicServicesP__TimerAsync__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 180 "TerraVMC.nc"
static inline uint8_t TerraVMC__getBitsPow(uint8_t data, uint8_t stBit, uint8_t endBit)
#line 180
{
#line 180
  return 1 << TerraVMC__getBits(data, stBit, endBit);
}

#line 1532
static inline void TerraVMC__f_set_c(uint8_t Modifier)
#line 1532
{
  uint8_t v1_len;
#line 1533
  uint8_t p1_1len;
#line 1533
  uint8_t p2_len;
#line 1533
  uint8_t tp1;
  uint16_t Maddr;
  uint32_t Const;

#line 1536
  tp1 = TerraVMC__getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  p1_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  p2_len = (uint8_t )(TerraVMC__getBits(Modifier, 4, 5) + 1);
  Maddr = TerraVMC__getPar16(p1_1len);
  Const = TerraVMC__getPar32(p2_len);
  ;
  if (tp1 == F32) {
      float buffer = * (float *)&Const;

#line 1545
      TerraVMC__setMVal(* (uint32_t *)&buffer, Maddr, F32, tp1);
    }
  else 
#line 1546
    {
      TerraVMC__setMVal(Const, Maddr, S32, tp1);
    }
}

# 13 "VMCustom.nc"
inline static void TerraVMC__VMCustom__procOutEvt(uint8_t id, uint32_t value){
#line 13
  VMCustomP__VM__procOutEvt(id, value);
#line 13
}
#line 13
# 139 "TerraVMC.nc"
static inline uint8_t TerraVMC__getPar8(uint8_t p_len)
#line 139
{
  uint8_t temp = (uint8_t )__nesc_ntoh_uint8(TerraVMC__CEU_data[TerraVMC__PC].nxdata);

#line 141
  TerraVMC__PC++;
  ;
  return temp;
}

#line 1520
static inline void TerraVMC__f_outevt_v(uint8_t Modifier)
#line 1520
{
  uint8_t v2_len;
#line 1521
  uint8_t tp2;
#line 1521
  uint8_t p2_1len;
#line 1521
  uint8_t Cevt;
  uint16_t Maddr;

#line 1523
  p2_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  tp2 = TerraVMC__getBits(Modifier, 0, 2);
  v2_len = tp2 == F32 ? 4 : 1 << (tp2 & 0x3);
  Cevt = TerraVMC__getPar8(1);
  Maddr = TerraVMC__getPar16(p2_1len);
  ;
  TerraVMC__VMCustom__procOutEvt(Cevt, Maddr);
}

#line 1497
static inline void TerraVMC__f_pop(uint8_t Modifier)
#line 1497
{
  uint8_t v1_len;
#line 1498
  uint8_t tp1;
#line 1498
  uint8_t p1_1len;
  uint16_t Maddr;

#line 1500
  p1_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  tp1 = TerraVMC__getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  Maddr = TerraVMC__getPar16(p1_1len);
  if (tp1 == F32) {
      float Value = TerraVMC__popf();

#line 1506
      ;
      TerraVMC__setMVal(* (uint32_t *)&Value, Maddr, F32, tp1);
    }
  else 
#line 1508
    {
      int32_t Value = TerraVMC__pop();

#line 1510
      ;
      TerraVMC__setMVal(Value, Maddr, S32, tp1);
    }
}

# 100 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/atm328phardware.h"
static __inline  float __nesc_ntoh_afloat(const void * source)
#line 100
{
  float f;

#line 102
  memcpy(&f, source, sizeof(float ));
  return f;
}

# 241 "TerraVMC.nc"
static inline float TerraVMC__getMValf(uint16_t Maddr)
#line 241
{
  return (float )__nesc_ntoh_afloat((* (nx_float *)(TerraVMC__MEM + Maddr)).nxdata);
}

#line 1481
static inline void TerraVMC__f_push_v(uint8_t Modifier)
#line 1481
{
  uint8_t v1_len;
#line 1482
  uint8_t tp1;
#line 1482
  uint8_t p1_1len;
  uint16_t Maddr;

#line 1484
  p1_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  tp1 = TerraVMC__getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  Maddr = TerraVMC__getPar16(p1_1len);
  if (tp1 == F32) {
      ;
      TerraVMC__pushf(TerraVMC__getMValf(Maddr));
    }
  else 
#line 1491
    {
      ;
      TerraVMC__push(TerraVMC__getMVal(Maddr, tp1));
    }
}

#line 1470
static inline void TerraVMC__f_tkins_max(uint8_t Modifier)
#line 1470
{
  uint8_t stack;
#line 1471
  uint8_t p1_1len;
  uint16_t lbl;

#line 1473
  stack = (uint8_t )((&TerraVMC__CEU_)->stack + TerraVMC__getBits(Modifier, 1, 2));
  p1_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  lbl = TerraVMC__getPar16(p1_1len);
  ;
  ;
  TerraVMC__ceu_track_ins(stack, 255, 0, lbl);
}

#line 1444
static inline void TerraVMC__f_memcpy(uint8_t Modifier)
#line 1444
{
  uint8_t p1_1len;
#line 1445
  uint8_t p2_1len;
#line 1445
  uint8_t p3_1len;
  uint16_t size;
#line 1446
  uint16_t MaddrFrom;
#line 1446
  uint16_t MaddrTo;

#line 1447
  p1_1len = TerraVMC__getBitsPow(Modifier, 2, 2);
  p2_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p3_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  size = TerraVMC__getPar16(p1_1len);
  MaddrFrom = TerraVMC__getPar16(p2_1len);
  MaddrTo = TerraVMC__getPar16(p3_1len);
  ;
  memcpy((void *)(TerraVMC__MEM + MaddrTo), (void *)(TerraVMC__MEM + MaddrFrom), size);
}

#line 1427
static inline void TerraVMC__f_deref(uint8_t Modifier)
#line 1427
{
  uint16_t MAddr;
  uint8_t type;

#line 1430
  type = TerraVMC__getBits(Modifier, 0, 2);
  MAddr = (uint16_t )TerraVMC__pop();
  ;
  switch (type) {
      case U8: ;
#line 1434
      TerraVMC__push((uint8_t )TerraVMC__getMVal(MAddr, type));
#line 1434
      break;
      case U16: ;
#line 1435
      TerraVMC__push((uint16_t )TerraVMC__getMVal(MAddr, type));
#line 1435
      break;
      case U32: ;
#line 1436
      TerraVMC__push((uint32_t )TerraVMC__getMVal(MAddr, type));
#line 1436
      break;
      case F32: ;
#line 1437
      TerraVMC__pushf(TerraVMC__getMValf(MAddr));
#line 1437
      break;
      case S8: ;
#line 1438
      TerraVMC__push((int8_t )TerraVMC__getMVal(MAddr, type));
#line 1438
      break;
      case S16: ;
#line 1439
      TerraVMC__push((int16_t )TerraVMC__getMVal(MAddr, type));
#line 1439
      break;
      case S32: ;
#line 1440
      TerraVMC__push((int32_t )TerraVMC__getMVal(MAddr, type));
#line 1440
      break;
    }
}

#line 1410
static inline void TerraVMC__f_set_e(uint8_t Modifier)
#line 1410
{
  uint8_t v1_len;
#line 1411
  uint8_t tp1;
  uint16_t Maddr1;

#line 1413
  tp1 = TerraVMC__getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  Maddr1 = (uint16_t )TerraVMC__pop();
  if (tp1 == F32) {
      float Value = TerraVMC__popf();

#line 1418
      TerraVMC__setMVal(* (uint32_t *)&Value, Maddr1, F32, tp1);
      ;
    }
  else 
#line 1420
    {
      uint32_t Value = TerraVMC__pop();

#line 1422
      TerraVMC__setMVal(Value, Maddr1, S32, tp1);
      ;
    }
}

#line 1400
static inline void TerraVMC__f_dec(uint8_t Modifier)
#line 1400
{
  uint8_t v1_len;
#line 1401
  uint8_t tp1;
  uint16_t Maddr;

#line 1403
  tp1 = TerraVMC__getBits(Modifier, 0, 1);
  v1_len = 1 << tp1;
  Maddr = (uint16_t )TerraVMC__pop();
  ;
  TerraVMC__setMVal(TerraVMC__getMVal(Maddr, tp1) - 1, Maddr, tp1, tp1);
}

#line 1391
static inline void TerraVMC__f_inc(uint8_t Modifier)
#line 1391
{
  uint8_t v1_len;
#line 1392
  uint8_t tp1;
  uint16_t Maddr;

#line 1394
  tp1 = TerraVMC__getBits(Modifier, 0, 1);
  v1_len = 1 << tp1;
  Maddr = (uint16_t )TerraVMC__pop();
  ;
  TerraVMC__setMVal(TerraVMC__getMVal(Maddr, tp1) + 1, Maddr, tp1, tp1);
}

#line 1379
static inline void TerraVMC__f_getextdt_v(uint8_t Modifier)
#line 1379
{
  uint8_t p1_1len;
#line 1380
  uint8_t p2_1len;
  uint16_t Maddr;
#line 1381
  uint16_t size;

#line 1382
  p1_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Maddr = TerraVMC__getPar16(p1_1len);
  size = TerraVMC__getPar16(p2_1len);
  ;
  ;
  memcpy(TerraVMC__MEM + Maddr, (&TerraVMC__CEU_)->ext_data, size);
}

#line 1368
static inline void TerraVMC__f_outevt_c(uint8_t Modifier)
#line 1368
{
  uint8_t Clen;
  uint8_t Cevt;
  uint32_t Const;

#line 1372
  Clen = (uint8_t )(TerraVMC__getBits(Modifier, 0, 1) + 1);
  Cevt = TerraVMC__getPar8(1);
  Const = TerraVMC__getPar32(Clen);
  ;
  TerraVMC__VMCustom__procOutEvt(Cevt, Const);
}

#line 457
static inline void TerraVMC__ceu_track_clr(TerraVMC__tceu_nlbl l1, TerraVMC__tceu_nlbl l2)
#line 457
{
  int i;

#line 459
  for (i = 1; i <= (&TerraVMC__CEU_)->tracks_n; i++) {
      TerraVMC__tceu_trk *trk = (&TerraVMC__CEU_)->p_tracks + i;

#line 461
      if (trk->lbl >= l1 && trk->lbl <= l2) {
          TerraVMC__ceu_track_rem((void *)0, i);
          i--;
        }
    }
}

#line 1356
static inline void TerraVMC__f_tkclr(uint8_t Modifier)
#line 1356
{
  uint8_t p1_1len;
#line 1357
  uint8_t p2_1len;
  uint16_t lbl1;
#line 1358
  uint16_t lbl2;

#line 1359
  p1_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  lbl1 = TerraVMC__getPar16(p1_1len);
  lbl2 = TerraVMC__getPar16(p2_1len);
  ;
  ;
  TerraVMC__ceu_track_clr(lbl1, lbl2);
}

# 169 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static bool BasicServicesP__TimerAsync__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__isRunning(1U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 273 "BasicServicesP.nc"
static inline bool BasicServicesP__BSTimerAsync__isRunning(void )
#line 273
{
#line 273
  return BasicServicesP__TimerAsync__isRunning();
}

# 17 "BSTimer.nc"
inline static bool TerraVMC__BSTimerAsync__isRunning(void ){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = BasicServicesP__BSTimerAsync__isRunning();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 534 "TerraVMC.nc"
static inline void TerraVMC__ceu_async_enable(int gte, TerraVMC__tceu_nlbl lbl)
#line 534
{
  ((TerraVMC__tceu_nlbl *)((&TerraVMC__CEU_)->p_mem + TerraVMC__async0))[gte] = lbl;
  if (!TerraVMC__BSTimerAsync__isRunning()) {
    TerraVMC__BSTimerAsync__startOneShot(2);
    }
}

#line 1344
static inline void TerraVMC__f_asen(uint8_t Modifier)
#line 1344
{
  uint8_t p1_1len;
#line 1345
  uint8_t p2_1len;
  uint16_t gate;
#line 1346
  uint16_t lbl;

#line 1347
  p1_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  gate = TerraVMC__getPar16(p1_1len);
  lbl = TerraVMC__getPar16(p2_1len);
  ;
  ;
  TerraVMC__ceu_async_enable(gate, lbl);
}

#line 103
static inline uint16_t TerraVMC__getLblAddr(uint16_t lbl)
#line 103
{
  ;
  return lbl;
}

#line 1332
static inline void TerraVMC__f_ifelse(uint8_t Modifier)
#line 1332
{
  uint8_t p1_1len;
#line 1333
  uint8_t p2_1len;
  uint16_t lbl1;
#line 1334
  uint16_t lbl2;

#line 1335
  p1_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  lbl1 = TerraVMC__getPar16(p1_1len);
  lbl2 = TerraVMC__getPar16(p2_1len);
  ;
  ;
  if (TerraVMC__pop()) {
#line 1341
    TerraVMC__PC = TerraVMC__getLblAddr(lbl1);
    }
  else {
#line 1341
    TerraVMC__PC = TerraVMC__getLblAddr(lbl2);
    }
}

#line 1319
static inline void TerraVMC__f_memclr(uint8_t Modifier)
#line 1319
{
  uint8_t p1_1len;
#line 1320
  uint8_t p2_1len;
  uint16_t Maddr;
#line 1321
  uint16_t size;

#line 1322
  p1_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Maddr = TerraVMC__getPar16(p1_1len);
  size = TerraVMC__getPar16(p2_1len);
  ;
  ;

  {
#line 1329
    int x;

#line 1329
    for (x = 0; x < size; x++) * (uint8_t *)(TerraVMC__MEM + Maddr + x) = 0;
  }
}

#line 1305
static inline void TerraVMC__f_cast(uint8_t Modifier)
#line 1305
{
  uint32_t stacki;
  float stackf;
  uint8_t mode;

#line 1309
  mode = TerraVMC__getBits(Modifier, 0, 1);
  ;
  switch (mode) {
      case U32_F: stacki = TerraVMC__pop();
#line 1312
      ;
#line 1312
      TerraVMC__pushf((f32 )* (u32 *)&stacki);
#line 1312
      break;
      case S32_F: stacki = TerraVMC__pop();
#line 1313
      ;
#line 1313
      TerraVMC__pushf((f32 )* (s32 *)&stacki);
#line 1313
      break;
      case F_U32: stackf = TerraVMC__popf();
#line 1314
      ;
#line 1314
      TerraVMC__push((u32 )* (f32 *)&stackf);
#line 1314
      break;
      case F_S32: stackf = TerraVMC__popf();
#line 1315
      ;
#line 1315
      TerraVMC__push((u32 )* (f32 *)&stackf);
#line 1315
      break;
    }
}

#line 1296
static inline void TerraVMC__f_push_c(uint8_t Modifier)
#line 1296
{
  uint8_t p1_len;
  uint32_t Const;

#line 1299
  p1_len = (uint8_t )(TerraVMC__getBits(Modifier, 0, 1) + 1);
  Const = TerraVMC__getPar32(p1_len);
  ;
  TerraVMC__push(Const);
}

#line 1457
static inline void TerraVMC__f_tkins_z(uint8_t Modifier)
#line 1457
{
  uint8_t tree;
#line 1458
  uint8_t chk;
#line 1458
  uint8_t p2_1len;
#line 1458
  uint8_t par1;
  uint16_t lbl;

#line 1460
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  par1 = TerraVMC__getPar8(1);
  chk = TerraVMC__getBits(par1, 7, 7);
  tree = TerraVMC__getBits(par1, 0, 6);
  lbl = TerraVMC__getPar16(p2_1len);
  ;
  ;
  TerraVMC__ceu_track_ins(0, tree, chk, lbl);
}

#line 1286
static inline void TerraVMC__f_chkret(uint8_t Modifier)
#line 1286
{
  uint8_t p1_1len;
  uint16_t Maddr;

#line 1289
  p1_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Maddr = TerraVMC__getPar16(p1_1len);
  ;
  ;
  if (* (uint8_t *)(TerraVMC__MEM + Maddr) > 0) {
#line 1293
    TerraVMC__PC = TerraVMC__PC + 1;
    }
}

#line 1276
static inline void TerraVMC__f_exec(uint8_t Modifier)
#line 1276
{
  uint8_t p1_1len;
  uint16_t Const;

#line 1279
  p1_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Const = TerraVMC__getPar16(p1_1len);
  ;
  ;
  TerraVMC__PC = TerraVMC__getLblAddr(Const);
}

#line 1266
static inline void TerraVMC__f_trg(uint8_t Modifier)
#line 1266
{
  uint8_t p1_1len;
  uint16_t gtAddr;

#line 1269
  p1_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  gtAddr = TerraVMC__getPar16(p1_1len);
  ;
  ;
  TerraVMC__ceu_trigger(gtAddr, 0);
}

#line 1255
static inline void TerraVMC__f_getextdt_e(uint8_t Modifier)
#line 1255
{
  uint8_t p1_1len;
  uint16_t Maddr;
#line 1257
  uint16_t len;

#line 1258
  p1_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Maddr = (uint16_t )TerraVMC__pop();
  len = TerraVMC__getPar16(p1_1len);
  ;
  ;
  memcpy(TerraVMC__MEM + Maddr, (&TerraVMC__CEU_)->ext_data, len);
}

#line 1227
static inline void TerraVMC__f_pusharr_v(uint8_t Modifier)
#line 1227
{
  uint8_t v1_len;
#line 1228
  uint8_t p1_1len;
#line 1228
  uint8_t v2_len;
#line 1228
  uint8_t p2_1len;
#line 1228
  uint8_t p3_1len;
#line 1228
  uint8_t Aux;
#line 1228
  uint8_t tp1;
#line 1228
  uint8_t tp2;
  uint16_t Maddr;
#line 1229
  uint16_t Vidx;
#line 1229
  uint16_t Max;

  p3_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Aux = TerraVMC__getPar8(1);
  p1_1len = TerraVMC__getBitsPow(Aux, 7, 7);
  tp1 = TerraVMC__getBits(Aux, 4, 6);
  p2_1len = TerraVMC__getBitsPow(Aux, 3, 3);
  tp2 = TerraVMC__getBits(Aux, 0, 2);

  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  v2_len = tp2 == F32 ? 4 : 1 << (tp2 & 0x3);

  Maddr = TerraVMC__getPar16(p1_1len);
  Vidx = TerraVMC__getPar16(p2_1len);
  Max = TerraVMC__getPar16(p3_1len);

  if (TerraVMC__getMVal(Vidx, tp2) >= Max) {
    TerraVMC__evtError(E_IDXOVF);
    }
  else 
#line 1247
    {
      ;

      TerraVMC__push(Maddr + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len);
    }
}

#line 1193
static inline void TerraVMC__f_poparr_v(uint8_t Modifier)
#line 1193
{
  uint8_t v1_len;
#line 1194
  uint8_t p1_1len;
#line 1194
  uint8_t v2_len;
#line 1194
  uint8_t p2_1len;
#line 1194
  uint8_t p3_1len;
#line 1194
  uint8_t Aux;
#line 1194
  uint8_t tp1;
#line 1194
  uint8_t tp2;
  uint16_t Maddr;
#line 1195
  uint16_t Vidx;
#line 1195
  uint16_t Max;

  p3_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Aux = TerraVMC__getPar8(1);
  p1_1len = TerraVMC__getBitsPow(Aux, 7, 7);
  tp1 = TerraVMC__getBits(Aux, 4, 6);
  p2_1len = TerraVMC__getBitsPow(Aux, 3, 3);
  tp2 = TerraVMC__getBits(Aux, 0, 2);

  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  v2_len = tp2 == F32 ? 4 : 1 << (tp2 & 0x3);

  Maddr = TerraVMC__getPar16(p1_1len);
  Vidx = TerraVMC__getPar16(p2_1len);
  Max = TerraVMC__getPar16(p3_1len);
  if (TerraVMC__getMVal(Vidx, tp2) >= Max) {
    TerraVMC__evtError(E_IDXOVF);
    }
  else 
#line 1212
    {
      if (tp1 == F32) {
          float v2 = TerraVMC__popf();

#line 1215
          ;

          TerraVMC__setMVal(* (uint32_t *)&v2, Maddr + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, F32, tp1);
        }
      else 
#line 1218
        {
          int32_t v2 = TerraVMC__pop();

#line 1220
          ;

          TerraVMC__setMVal(v2, Maddr + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, S32, tp1);
        }
    }
}

#line 1152
static inline void TerraVMC__f_setarr_vv(uint8_t Modifier)
#line 1152
{
  uint8_t v1_len;
#line 1153
  uint8_t p1_1len;
#line 1153
  uint8_t p2_1len;
#line 1153
  uint8_t v2_len;
#line 1153
  uint8_t p3_1len;
#line 1153
  uint8_t p4_1len;
#line 1153
  uint8_t v4_len;
#line 1153
  uint8_t Aux;
#line 1153
  uint8_t tp1;
#line 1153
  uint8_t tp2;
#line 1153
  uint8_t tp4;
  uint16_t Maddr1;
#line 1154
  uint16_t Vidx;
#line 1154
  uint16_t Max;
#line 1154
  uint16_t Maddr2;

#line 1155
  Modifier = TerraVMC__getPar8(1);
  Aux = TerraVMC__getPar8(1);

  p1_1len = TerraVMC__getBitsPow(Modifier, 7, 7);
  tp1 = TerraVMC__getBits(Modifier, 4, 6);
  p2_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  tp2 = TerraVMC__getBits(Modifier, 0, 2);

  p3_1len = TerraVMC__getBitsPow(Aux, 4, 4);
  p4_1len = TerraVMC__getBitsPow(Aux, 3, 3);
  tp4 = TerraVMC__getBits(Aux, 0, 2);

  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  v2_len = tp2 == F32 ? 4 : 1 << (tp2 & 0x3);
  v4_len = tp4 == F32 ? 4 : 1 << (tp4 & 0x3);

  Maddr1 = TerraVMC__getPar16(p1_1len);
  Vidx = TerraVMC__getPar16(p2_1len);
  Max = TerraVMC__getPar16(p3_1len);
  Maddr2 = TerraVMC__getPar16(p4_1len);

  ;

  if (TerraVMC__getMVal(Vidx, tp2) >= Max) {
    TerraVMC__evtError(E_IDXOVF);
    }
  else 
#line 1180
    {
      if (tp4 == F32) {
          float buffer = TerraVMC__getMValf(Maddr2);

#line 1183
          TerraVMC__setMVal(* (uint32_t *)&buffer, Maddr1 + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, tp4, tp1);
        }
      else 
#line 1184
        {
          uint32_t buffer = TerraVMC__getMVal(Maddr2, tp4);

#line 1186
          TerraVMC__setMVal(buffer, Maddr1 + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, tp4, tp1);
        }
    }
}

#line 1118
static inline void TerraVMC__f_setarr_vc(uint8_t Modifier)
#line 1118
{
  uint8_t v1_len;
#line 1119
  uint8_t p1_1len;
#line 1119
  uint8_t p2_1len;
#line 1119
  uint8_t v2_len;
#line 1119
  uint8_t p3_1len;
#line 1119
  uint8_t p4_len;
#line 1119
  uint8_t Aux;
#line 1119
  uint8_t tp1;
#line 1119
  uint8_t tp2;
  uint16_t Maddr;
#line 1120
  uint16_t Vidx;
#line 1120
  uint16_t Max;
  uint32_t Const;

#line 1122
  Modifier = TerraVMC__getPar8(1);
  Aux = TerraVMC__getPar8(1);

  p1_1len = TerraVMC__getBitsPow(Modifier, 7, 7);
  tp1 = TerraVMC__getBits(Modifier, 4, 6);
  p2_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  tp2 = TerraVMC__getBits(Modifier, 0, 2);
  p3_1len = TerraVMC__getBitsPow(Aux, 2, 2);
  p4_len = (uint8_t )(TerraVMC__getBits(Aux, 0, 1) + 1);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  v2_len = tp2 == F32 ? 4 : 1 << (tp2 & 0x3);

  Maddr = TerraVMC__getPar16(p1_1len);
  Vidx = TerraVMC__getPar16(p2_1len);
  Max = TerraVMC__getPar16(p3_1len);
  Const = TerraVMC__getPar32(p4_len);
  ;

  if (TerraVMC__getMVal(Vidx, tp2) >= Max) {
    TerraVMC__evtError(E_IDXOVF);
    }
  else 
#line 1142
    {
      if (tp1 == F32) {
          float buffer = (float )Const;

#line 1145
          TerraVMC__setMVal(* (uint32_t *)&buffer, Maddr + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, tp2, tp1);
        }
      else 
#line 1146
        {
          TerraVMC__setMVal(Const, Maddr + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, tp2, tp1);
        }
    }
}

#line 1096
static inline void TerraVMC__f_set_v(uint8_t Modifier)
#line 1096
{
  uint8_t p1_1len;
#line 1097
  uint8_t p2_1len;
  uint8_t tp1;
#line 1098
  uint8_t tp2;
  uint16_t Maddr1;
#line 1099
  uint16_t Maddr2;

#line 1100
  Modifier = TerraVMC__getPar8(1);
  p1_1len = TerraVMC__getBitsPow(Modifier, 7, 7);
  tp1 = TerraVMC__getBits(Modifier, 4, 6);
  p2_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  tp2 = TerraVMC__getBits(Modifier, 0, 2);
  Maddr1 = TerraVMC__getPar16(p1_1len);
  Maddr2 = TerraVMC__getPar16(p2_1len);

  ;

  if (tp2 == F32) {
      float buffer = TerraVMC__getMValf(Maddr2);

#line 1112
      TerraVMC__setMVal(* (uint32_t *)&buffer, Maddr1, tp2, tp1);
    }
  else 
#line 1113
    {
      uint32_t buffer = TerraVMC__getMVal(Maddr2, tp2);

#line 1115
      TerraVMC__setMVal(buffer, Maddr1, tp2, tp1);
    }
}

#line 1078
static inline void TerraVMC__f_clken_c(uint8_t Modifier)
#line 1078
{
  uint8_t p1_1len;
#line 1079
  uint8_t p2_len;
#line 1079
  uint8_t p3_1len;
  uint16_t gate;
#line 1080
  uint16_t lbl;
  uint32_t Ctime;

#line 1082
  Modifier = TerraVMC__getPar8(1);
  p1_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  p2_len = (uint8_t )(TerraVMC__getBits(Modifier, 1, 2) + 1);
  p3_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  gate = TerraVMC__getPar16(p1_1len);
  Ctime = TerraVMC__getPar32(p2_len);
  lbl = TerraVMC__getPar16(p3_1len);
  ;
  ;
  TerraVMC__ceu_wclock_enable(gate, (s32 )Ctime, lbl);
}

#line 1058
static inline void TerraVMC__f_clken_v(uint8_t Modifier)
#line 1058
{
  uint8_t p1_1len;
#line 1059
  uint8_t p2_1len;
#line 1059
  uint8_t p3_1len;
#line 1059
  uint8_t unit;
#line 1059
  uint8_t timeTp;
  uint16_t gate;
#line 1060
  uint16_t lbl;
#line 1060
  uint16_t VtimeAddr;
  uint32_t Time = 0;

#line 1062
  Modifier = TerraVMC__getPar8(1);
  unit = TerraVMC__getBits(Modifier, 5, 7);
  timeTp = TerraVMC__getBits(Modifier, 3, 4);
  p1_1len = TerraVMC__getBitsPow(Modifier, 2, 2);
  p2_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p3_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  gate = TerraVMC__getPar16(p1_1len);
  VtimeAddr = TerraVMC__getPar16(p2_1len);
  lbl = TerraVMC__getPar16(p3_1len);
  Time = TerraVMC__getMVal(VtimeAddr, timeTp);
  ;

  ;
  TerraVMC__ceu_wclock_enable(gate, (s32 )TerraVMC__unit2val(Time, unit), lbl);
}

#line 1042
static inline void TerraVMC__f_clken_e(uint8_t Modifier)
#line 1042
{
  uint8_t p1_1len;
#line 1043
  uint8_t p2_1len;
#line 1043
  uint8_t unit;
  uint16_t gate;
#line 1044
  uint16_t lbl;
  uint32_t Time = 0;

#line 1046
  Modifier = TerraVMC__getPar8(1);
  p1_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  unit = TerraVMC__getBits(Modifier, 4, 6);
  gate = TerraVMC__getPar16(p1_1len);
  lbl = TerraVMC__getPar16(p2_1len);
  Time = TerraVMC__pop();
  ;

  ;
  TerraVMC__ceu_wclock_enable(gate, (s32 )TerraVMC__unit2val(Time, unit), lbl);
}

#line 1035
static inline void TerraVMC__f_outevt_z(uint8_t Modifier)
#line 1035
{
  uint8_t Cevt;

#line 1037
  Cevt = TerraVMC__getPar8(1);
  ;
  TerraVMC__VMCustom__procOutEvt(Cevt, 0);
}

#line 1025
static inline void TerraVMC__f_outevt_e(uint8_t Modifier)
#line 1025
{
  uint8_t Cevt;
  uint32_t value;

#line 1028
  value = TerraVMC__pop();
  Cevt = TerraVMC__getPar8(1);
  ;
  ;
  TerraVMC__VMCustom__procOutEvt(Cevt, value);
}

#line 1703
static inline void TerraVMC__VMCustom__push(uint32_t value)
#line 1703
{
  TerraVMC__push(value);
}

# 17 "VMCustom.nc"
inline static void VMCustomP__VM__push(uint32_t val){
#line 17
  TerraVMC__VMCustom__push(val);
#line 17
}
#line 17
# 1711 "TerraVMC.nc"
static inline uint32_t TerraVMC__VMCustom__getTime(void )
#line 1711
{
  return TerraVMC__BSTimerVM__getNow();
}

# 24 "VMCustom.nc"
inline static uint32_t VMCustomP__VM__getTime(void ){
#line 24
  unsigned int __nesc_result;
#line 24

#line 24
  __nesc_result = TerraVMC__VMCustom__getTime();
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 99 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustomP.nc"
static inline void VMCustomP__func_getTime(uint16_t id)
#line 99
{
  uint32_t val;

#line 101
  val = VMCustomP__VM__getTime();
  ;
  VMCustomP__VM__push(val);
}

# 1687 "TerraVMC.nc"
static inline int32_t TerraVMC__VMCustom__getMVal(uint16_t Maddr, uint8_t tp)
#line 1687
{
  return TerraVMC__getMVal(Maddr, tp);
}

# 19 "VMCustom.nc"
inline static int32_t VMCustomP__VM__getMVal(uint16_t Maddr, uint8_t tp){
#line 19
  int __nesc_result;
#line 19

#line 19
  __nesc_result = TerraVMC__VMCustom__getMVal(Maddr, tp);
#line 19

#line 19
  return __nesc_result;
#line 19
}
#line 19
# 1700 "TerraVMC.nc"
static inline uint32_t TerraVMC__VMCustom__pop(void )
#line 1700
{
  return TerraVMC__pop();
}

# 16 "VMCustom.nc"
inline static uint32_t VMCustomP__VM__pop(void ){
#line 16
  unsigned int __nesc_result;
#line 16

#line 16
  __nesc_result = TerraVMC__VMCustom__pop();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 91 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustomP.nc"
static inline void VMCustomP__func_getMem(uint16_t id)
#line 91
{
  uint8_t val;
  uint16_t Maddr;

#line 94
  Maddr = (uint16_t )VMCustomP__VM__pop();
  val = (uint8_t )VMCustomP__VM__getMVal(Maddr, 0);
  ;
  VMCustomP__VM__push(val);
}

# 89 "/home/branco/gitspace/Terra/TerraVM/src/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
inline static uint16_t VMCustomP__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 84 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustomP.nc"
static inline void VMCustomP__func_random(uint16_t id)
#line 84
{
  uint16_t stat;

  stat = VMCustomP__Random__rand16();
  ;
  VMCustomP__VM__push(stat);
}

#line 77
static inline void VMCustomP__func_getNodeId(uint16_t id)
#line 77
{
  uint16_t stat;

  stat = TOS_NODE_ID;
  ;
  VMCustomP__VM__push(stat);
}

#line 160
static inline void VMCustomP__VM__callFunction(uint8_t id)
#line 160
{
  ;
  switch (id) {
      case F_GETNODEID: VMCustomP__func_getNodeId(id);
#line 163
      break;
      case F_RANDOM: VMCustomP__func_random(id);
#line 164
      break;
      case F_GETMEM: VMCustomP__func_getMem(id);
#line 165
      break;
      case F_GETTIME: VMCustomP__func_getTime(id);
#line 166
      break;
    }
}

# 14 "VMCustom.nc"
inline static void TerraVMC__VMCustom__callFunction(uint8_t id){
#line 14
  VMCustomP__VM__callFunction(id);
#line 14
}
#line 14
# 1017 "TerraVMC.nc"
static inline void TerraVMC__f_func(uint8_t Modifier)
#line 1017
{
  uint8_t fID;

#line 1019
  fID = TerraVMC__getPar8(1);
  ;
  ;
  TerraVMC__VMCustom__callFunction(fID);
}

#line 1008
static inline void TerraVMC__f_lt_f(uint8_t Modifier)
#line 1008
{
  float v1;
#line 1009
  float v2;

#line 1010
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 < v2);
}

#line 1000
static inline void TerraVMC__f_gt_f(uint8_t Modifier)
#line 1000
{
  float v1;
#line 1001
  float v2;

#line 1002
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 > v2);
}

#line 992
static inline void TerraVMC__f_lte_f(uint8_t Modifier)
#line 992
{
  float v1;
#line 993
  float v2;

#line 994
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 <= v2);
}

#line 984
static inline void TerraVMC__f_gte_f(uint8_t Modifier)
#line 984
{
  float v1;
#line 985
  float v2;

#line 986
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 >= v2);
}

#line 976
static inline void TerraVMC__f_neq_f(uint8_t Modifier)
#line 976
{
  float v1;
#line 977
  float v2;

#line 978
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 != v2);
}

#line 967
static inline void TerraVMC__f_eq_f(uint8_t Modifier)
#line 967
{
  float v1;
#line 968
  float v2;

#line 969
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 == v2);
}

#line 958
static inline void TerraVMC__f_div_f(uint8_t Modifier)
#line 958
{
  float v1;
#line 959
  float v2;

#line 960
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 / v2);
}

#line 1515
static inline void TerraVMC__f_popx(uint8_t Modifier)
#line 1515
{
  TerraVMC__pop();
  ;
}

#line 918
static inline void TerraVMC__f_land(uint8_t Modifier)
#line 918
{
  int32_t v1;
#line 919
  int32_t v2;

#line 920
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 && v2);
}

#line 910
static inline void TerraVMC__f_lor(uint8_t Modifier)
#line 910
{
  int32_t v1;
#line 911
  int32_t v2;

#line 912
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 || v2);
}

#line 902
static inline void TerraVMC__f_lt(uint8_t Modifier)
#line 902
{
  int32_t v1;
#line 903
  int32_t v2;

#line 904
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 < v2);
}

#line 894
static inline void TerraVMC__f_gt(uint8_t Modifier)
#line 894
{
  int32_t v1;
#line 895
  int32_t v2;

#line 896
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 > v2);
}

#line 886
static inline void TerraVMC__f_lte(uint8_t Modifier)
#line 886
{
  int32_t v1;
#line 887
  int32_t v2;

#line 888
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 <= v2);
}

#line 878
static inline void TerraVMC__f_gte(uint8_t Modifier)
#line 878
{
  int32_t v1;
#line 879
  int32_t v2;

#line 880
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 >= v2);
}

#line 870
static inline void TerraVMC__f_neq(uint8_t Modifier)
#line 870
{
  int32_t v1;
#line 871
  int32_t v2;

#line 872
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 != v2);
}

#line 861
static inline void TerraVMC__f_eq(uint8_t Modifier)
#line 861
{
  int32_t v1;
#line 862
  int32_t v2;

#line 863
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 == v2);
}

#line 853
static inline void TerraVMC__f_bxor(uint8_t Modifier)
#line 853
{
  int32_t v1;
#line 854
  int32_t v2;

#line 855
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 ^ v2);
}

#line 845
static inline void TerraVMC__f_rshft(uint8_t Modifier)
#line 845
{
  int32_t v1;
#line 846
  int32_t v2;

#line 847
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 >> v2);
}

#line 837
static inline void TerraVMC__f_lshft(uint8_t Modifier)
#line 837
{
  int32_t v1;
#line 838
  int32_t v2;

#line 839
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 << v2);
}

#line 829
static inline void TerraVMC__f_band(uint8_t Modifier)
#line 829
{
  int32_t v1;
#line 830
  int32_t v2;

#line 831
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 & v2);
}

#line 821
static inline void TerraVMC__f_bor(uint8_t Modifier)
#line 821
{
  int32_t v1;
#line 822
  int32_t v2;

#line 823
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 | v2);
}

#line 811
static inline void TerraVMC__f_div(uint8_t Modifier)
#line 811
{
  int32_t v1;
#line 812
  int32_t v2;

#line 813
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v2 == 0 ? 0 : v1 / v2);
  if (v2 == 0) {
#line 818
    TerraVMC__evtError(E_DIVZERO);
    }
}

#line 802
static inline void TerraVMC__f_mult(uint8_t Modifier)
#line 802
{
  int32_t v1;
#line 803
  int32_t v2;

#line 804
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 * v2);
}

#line 792
static inline void TerraVMC__f_mod(uint8_t Modifier)
#line 792
{
  int32_t v1;
#line 793
  int32_t v2;

#line 794
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v2 == 0 ? 0 : v1 % v2);
  if (v2 == 0) {
#line 799
    TerraVMC__evtError(E_DIVZERO);
    }
}

#line 783
static inline void TerraVMC__f_add(uint8_t Modifier)
#line 783
{
  int32_t v1;
#line 784
  int32_t v2;

#line 785
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 + v2);
}

#line 774
static inline void TerraVMC__f_sub(uint8_t Modifier)
#line 774
{
  int32_t v1;
#line 775
  int32_t v2;

#line 776
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 - v2);
}

#line 767
static inline void TerraVMC__f_neg(uint8_t Modifier)
#line 767
{
  int32_t v1;

#line 769
  v1 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(-1 * v1);
}

#line 760
static inline void TerraVMC__f_lnot(uint8_t Modifier)
#line 760
{
  int32_t v1;

#line 762
  v1 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(!v1);
}

#line 753
static inline void TerraVMC__f_bnot(uint8_t Modifier)
#line 753
{
  int32_t v1;

#line 755
  v1 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(~v1);
}

#line 748
static inline void TerraVMC__f_end(uint8_t Modifier)
#line 748
{
  ;
  ;
}

#line 746
static inline void TerraVMC__f_nop(uint8_t Modifier)
#line 746
{
#line 746
  ;
}

#line 1553
static inline void TerraVMC__Decoder(uint8_t Opcode, uint8_t Modifier)
#line 1553
{


  ;
  switch (Opcode) {
      case op_nop: TerraVMC__f_nop(Modifier);
#line 1558
      break;
      case op_end: TerraVMC__f_end(Modifier);
#line 1559
      break;
      case op_bnot: TerraVMC__f_bnot(Modifier);
#line 1560
      break;
      case op_lnot: TerraVMC__f_lnot(Modifier);
#line 1561
      break;
      case op_neg: TerraVMC__f_neg(Modifier);
#line 1562
      break;
      case op_sub: TerraVMC__f_sub(Modifier);
#line 1563
      break;
      case op_add: TerraVMC__f_add(Modifier);
#line 1564
      break;
      case op_mod: TerraVMC__f_mod(Modifier);
#line 1565
      break;
      case op_mult: TerraVMC__f_mult(Modifier);
#line 1566
      break;
      case op_div: TerraVMC__f_div(Modifier);
#line 1567
      break;
      case op_bor: TerraVMC__f_bor(Modifier);
#line 1568
      break;
      case op_band: TerraVMC__f_band(Modifier);
#line 1569
      break;
      case op_lshft: TerraVMC__f_lshft(Modifier);
#line 1570
      break;
      case op_rshft: TerraVMC__f_rshft(Modifier);
#line 1571
      break;
      case op_bxor: TerraVMC__f_bxor(Modifier);
#line 1572
      break;
      case op_eq: TerraVMC__f_eq(Modifier);
#line 1573
      break;
      case op_neq: TerraVMC__f_neq(Modifier);
#line 1574
      break;
      case op_gte: TerraVMC__f_gte(Modifier);
#line 1575
      break;
      case op_lte: TerraVMC__f_lte(Modifier);
#line 1576
      break;
      case op_gt: TerraVMC__f_gt(Modifier);
#line 1577
      break;
      case op_lt: TerraVMC__f_lt(Modifier);
#line 1578
      break;
      case op_lor: TerraVMC__f_lor(Modifier);
#line 1579
      break;
      case op_land: TerraVMC__f_land(Modifier);
#line 1580
      break;
      case op_popx: TerraVMC__f_popx(Modifier);
#line 1581
      break;






      case op_div_f: TerraVMC__f_div_f(Modifier);
#line 1588
      break;
      case op_eq_f: TerraVMC__f_eq_f(Modifier);
#line 1589
      break;
      case op_neq_f: TerraVMC__f_neq_f(Modifier);
#line 1590
      break;
      case op_gte_f: TerraVMC__f_gte_f(Modifier);
#line 1591
      break;
      case op_lte_f: TerraVMC__f_lte_f(Modifier);
#line 1592
      break;
      case op_gt_f: TerraVMC__f_gt_f(Modifier);
#line 1593
      break;
      case op_lt_f: TerraVMC__f_lt_f(Modifier);
#line 1594
      break;
      case op_func: TerraVMC__f_func(Modifier);
#line 1595
      break;
      case op_outEvt_e: TerraVMC__f_outevt_e(Modifier);
#line 1596
      break;
      case op_outevt_z: TerraVMC__f_outevt_z(Modifier);
#line 1597
      break;
      case op_clken_e: TerraVMC__f_clken_e(Modifier);
#line 1598
      break;
      case op_clken_v: TerraVMC__f_clken_v(Modifier);
#line 1599
      break;
      case op_clken_c: TerraVMC__f_clken_c(Modifier);
#line 1600
      break;
      case op_set_v: TerraVMC__f_set_v(Modifier);
#line 1601
      break;
      case op_setarr_vc: TerraVMC__f_setarr_vc(Modifier);
#line 1602
      break;
      case op_setarr_vv: TerraVMC__f_setarr_vv(Modifier);
#line 1603
      break;



      case op_poparr_v: TerraVMC__f_poparr_v(Modifier);
#line 1607
      break;
      case op_pusharr_v: TerraVMC__f_pusharr_v(Modifier);
#line 1608
      break;
      case op_getextdt_e: TerraVMC__f_getextdt_e(Modifier);
#line 1609
      break;
      case op_trg: TerraVMC__f_trg(Modifier);
#line 1610
      break;
      case op_exec: TerraVMC__f_exec(Modifier);
#line 1611
      break;
      case op_chkret: TerraVMC__f_chkret(Modifier);
#line 1612
      break;
      case op_tkins_z: TerraVMC__f_tkins_z(Modifier);
#line 1613
      break;


      case op_push_c: TerraVMC__f_push_c(Modifier);
#line 1616
      break;
      case op_cast: TerraVMC__f_cast(Modifier);
#line 1617
      break;
      case op_memclr: TerraVMC__f_memclr(Modifier);
#line 1618
      break;
      case op_ifelse: TerraVMC__f_ifelse(Modifier);
#line 1619
      break;
      case op_asen: TerraVMC__f_asen(Modifier);
#line 1620
      break;
      case op_tkclr: TerraVMC__f_tkclr(Modifier);
#line 1621
      break;
      case op_outEvt_c: TerraVMC__f_outevt_c(Modifier);
#line 1622
      break;
      case op_getextdt_v: TerraVMC__f_getextdt_v(Modifier);
#line 1623
      break;
      case op_inc: TerraVMC__f_inc(Modifier);
#line 1624
      break;
      case op_dec: TerraVMC__f_dec(Modifier);
#line 1625
      break;
      case op_set_e: TerraVMC__f_set_e(Modifier);
#line 1626
      break;
      case op_deref: TerraVMC__f_deref(Modifier);
#line 1627
      break;
      case op_memcpy: TerraVMC__f_memcpy(Modifier);
#line 1628
      break;

      case op_tkins_max: TerraVMC__f_tkins_max(Modifier);
#line 1630
      break;
      case op_push_v: TerraVMC__f_push_v(Modifier);
#line 1631
      break;
      case op_pop: TerraVMC__f_pop(Modifier);
#line 1632
      break;
      case op_outEvt_v: TerraVMC__f_outevt_v(Modifier);
#line 1633
      break;
      case op_set_c: TerraVMC__f_set_c(Modifier);
#line 1634
      break;
    }
}

#line 664
static inline void TerraVMC__execTrail(uint16_t lbl)
#line 664
{
  uint8_t Opcode;
#line 665
  uint8_t Param1;

#line 666
  ;
  if (TerraVMC__haltedFlag) {
#line 667
    return;
    }
  TerraVMC__PC = TerraVMC__getLblAddr(lbl);
  if (TerraVMC__PC == 0) {
      ;
      return;
    }
  TerraVMC__getOpCode(&Opcode, &Param1);
  while (Opcode != op_end) {
      if (TerraVMC__haltedFlag) {
#line 676
        return;
        }
#line 677
      TerraVMC__Decoder(Opcode, Param1);
      TerraVMC__getOpCode(&Opcode, &Param1);
    }
  ;
}

#line 113
static inline void TerraVMC__TViewer(char *cmd, uint16_t p1, uint16_t p2)
#line 113
{
  ;
}

# 177 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustomP.nc"
static inline void VMCustomP__VM__reset(void )
#line 177
{
}

# 15 "VMCustom.nc"
inline static void TerraVMC__VMCustom__reset(void ){
#line 15
  VMCustomP__VM__reset();
#line 15
}
#line 15
# 303 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 303
{
#line 303
  return __nesc_ntoh_uint8(source);
}

#line 334
static __inline  int16_t __nesc_ntoh_int16(const void * source)
#line 334
{
#line 334
  return __nesc_ntoh_uint16(source);
}




static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

#line 372
static __inline  int32_t __nesc_ntoh_int32(const void * source)
#line 372
{
#line 372
  return __nesc_ntoh_uint32(source);
}

# 49 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustomP.nc"
static inline void VMCustomP__proc_send(uint16_t id, uint32_t addr)
#line 49
{
  VMCustomP__proc_send_x(id, (uint16_t )addr, FALSE);
}

# 1694 "TerraVMC.nc"
static inline void *TerraVMC__VMCustom__getRealAddr(uint16_t Maddr)
#line 1694
{
  ;
  return TerraVMC__MEM + Maddr;
}

# 21 "VMCustom.nc"
inline static void *VMCustomP__VM__getRealAddr(uint16_t Maddr){
#line 21
  void *__nesc_result;
#line 21

#line 21
  __nesc_result = TerraVMC__VMCustom__getRealAddr(Maddr);
#line 21

#line 21
  return __nesc_result;
#line 21
}
#line 21
# 8 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t BasicServicesP__outQ__put(void *Data){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__put(Data);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 1216 "BasicServicesP.nc"
static inline error_t BasicServicesP__BSRadio__send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck)
#line 1216
{
  ;
  memcpy(& BasicServicesP__tempInputOutQ.Data, dataMsg, dataSize);
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.AM_ID.nxdata, am_id);
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.DataSize.nxdata, dataSize);
  __nesc_hton_uint16(BasicServicesP__tempInputOutQ.sendToMote.nxdata, target);
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.reqAck.nxdata, reqAck);
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.RFPower.nxdata, BasicServicesP__userRFPowerIdx);
  ;
  if (BasicServicesP__outQ__put(&BasicServicesP__tempInputOutQ) != SUCCESS) {
      ;
      return EBUSY;
    }
  return SUCCESS;
}

# 9 "BSRadio.nc"
inline static error_t VMCustomP__BSRadio__send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = BasicServicesP__BSRadio__send(am_id, target, dataMsg, dataSize, reqAck);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 52 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustomP.nc"
static inline void VMCustomP__proc_send_ack(uint16_t id, uint32_t addr)
#line 52
{
  VMCustomP__proc_send_x(id, (uint16_t )addr, TRUE);
}


static inline void VMCustomP__proc_req_custom_a(uint16_t id, uint32_t value)
#line 57
{
  uint8_t auxId;

#line 59
  __nesc_hton_uint8(VMCustomP__ExtDataCustomA.nxdata, (uint8_t )value);
  ;
  auxId = (uint8_t )value;

  VMCustomP__VM__queueEvt(I_CUSTOM_A_ID, auxId, &VMCustomP__ExtDataCustomA);
  VMCustomP__VM__queueEvt(I_CUSTOM_A, 0, &VMCustomP__ExtDataCustomA);
}

static inline void VMCustomP__proc_req_custom(uint16_t id, uint32_t value)
#line 67
{
  ;

  __nesc_hton_uint8(VMCustomP__ExtDataCustomA.nxdata, 0);
  VMCustomP__VM__queueEvt(I_CUSTOM, 0, &VMCustomP__ExtDataCustomA);
}

# 92 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static bool BasicServicesP__TimerVM__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__isRunning(0U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 78
inline static void BasicServicesP__TimerVM__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
#line 73
inline static void BasicServicesP__TimerVM__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 106 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/atm328phardware.h"
static __inline  float __nesc_hton_afloat(void * target, float value)
#line 106
{
  memcpy(target, &value, sizeof(float ));
  return value;
}

# 303 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

#line 334
static __inline  int16_t __nesc_hton_int16(void * target, int16_t value)
#line 334
{
#line 334
  __nesc_hton_uint16(target, value);
#line 334
  return value;
}











static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 372
static __inline  int32_t __nesc_hton_int32(void * target, int32_t value)
#line 372
{
#line 372
  __nesc_hton_uint32(target, value);
#line 372
  return value;
}

# 39 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmC.nc"
static inline void /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__start(/*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__size_type t)
{
  /* atomic removed: atomic calls only */
#line 41
  {
    * (/*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__size_type *)71U = t;
    * (uint8_t *)53U |= 2;
    * (uint8_t *)110U |= 2;
  }
}

# 35 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarm.nc"
inline static void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__start(/*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__size_type t){
#line 35
  /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__start(t);
#line 35
}
#line 35
# 58 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmC.nc"
static inline /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__size_type /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__now(void )
{
  /* atomic removed: atomic calls only */
#line 60
  {
    /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__size_type __nesc_temp = 
#line 60
    * (/*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__size_type *)70U;

#line 60
    return __nesc_temp;
  }
}

# 38 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarm.nc"
inline static /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__size_type /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__now(void ){
#line 38
  unsigned char __nesc_result;
#line 38

#line 38
  __nesc_result = /*Atm328pAlarms0C.HplAlarm0A*/HplAtm328pAlarmC__0__HplAtm328pAlarm__now();
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38
# 107 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pAlarmC.nc"
static inline /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__getNow(void )
{
  /* atomic removed: atomic calls only */
#line 109
  {
    /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type __nesc_temp = 
#line 109
    /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__now();

#line 109
    return __nesc_temp;
  }
}

#line 64
static inline void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__startAt(/*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type t0, /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type dt)
{
  /* atomic removed: atomic calls only */
#line 66
  {
    /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type now;
    /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__size_type next = t0 + dt;

    now = /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__getNow();


    if (t0 > now) 
      {
        if (next >= t0 || next <= now) 
          {
            dt = 0;
            goto doit;
          }
      }
    else 
      {
        if (next >= t0 && next <= now) 
          {
            dt = 0;
            goto doit;
          }
      }


    dt = next - now;

    doit: 







      /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__m_alarmAt = /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__getNow() + dt + 1 + 1;

    /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__start(/*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__m_alarmAt);
  }
}

# 103 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 139 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type __nesc_temp = 
#line 93
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

      {
#line 93
        __nesc_atomic_end(__nesc_atomic); 
#line 93
        return __nesc_temp;
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned int __nesc_result;
#line 116

#line 116
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.TimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Timer__fired();
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void BasicServicesP__sendTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 1044 "BasicServicesP.nc"
static inline void BasicServicesP__outQ__dataReady(void )
#line 1044
{
  ;
  BasicServicesP__sendCounter = 0;
  BasicServicesP__sendTimer__startOneShot(BasicServicesP__reSendDelay);
}

# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static void /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__dataReady(void ){
#line 15
  BasicServicesP__outQ__dataReady();
#line 15
}
#line 15
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static inline void /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady__runTask(void )
#line 16
{
  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize > 0) {
    /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__dataReady();
    }
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t BasicServicesP__procInputEvent__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BasicServicesP__procInputEvent);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 930 "BasicServicesP.nc"
static inline void BasicServicesP__inQ__dataReady(void )
#line 930
{
  ;
  BasicServicesP__procInputEvent__postTask();
}

# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static void /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__dataReady(void ){
#line 15
  BasicServicesP__inQ__dataReady();
#line 15
}
#line 15
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static inline void /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady__runTask(void )
#line 16
{
  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qSize > 0) {
    /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__dataReady();
    }
}

# 302 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartP.nc"
static inline void Atm328pUsartP__SerialFlush__default__flushDone(void )
#line 302
{
}

# 54 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFlush.nc"
inline static void Atm328pUsartP__SerialFlush__flushDone(void ){
#line 54
  Atm328pUsartP__SerialFlush__default__flushDone();
#line 54
}
#line 54
# 287 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartP.nc"
static inline void Atm328pUsartP__do_notify_flush__runTask(void )
{
  Atm328pUsartP__SerialFlush__flushDone();
}

# 60 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned int )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 10 "BSRadio.nc"
inline static void BasicServicesP__BSRadio__sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error){
#line 10
  VMCustomP__BSRadio__sendDone(am_id, msg, dataMsg, error);
#line 10
}
#line 10

inline static void BasicServicesP__BSRadio__sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked){
#line 11
  VMCustomP__BSRadio__sendDoneAck(am_id, msg, dataMsg, error, wasAcked);
#line 11
}
#line 11
# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t BasicServicesP__outQ__get(void *Data){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__get(Data);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 204 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
static inline bool /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__wasAcked(message_t *msg)
#line 204
{
  return FALSE;
}

# 85 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/PacketAcknowledgements.nc"
inline static bool BasicServicesP__RadioAck__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 11 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t BasicServicesP__outQ__read(void *Data){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__read(Data);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 1076 "BasicServicesP.nc"
static inline void BasicServicesP__RadioSender__sendDone(am_id_t id, message_t *msg, error_t error)
#line 1076
{
  bool doneStatus;
#line 1077
  bool reqRetry;
#line 1077
  bool reqAck;

  if (id > AM_RESERVED_END) {
      BasicServicesP__outQ__read(&BasicServicesP__tempOutputOutQ);
      doneStatus = error == SUCCESS;
      reqAck = (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.reqAck.nxdata) & (1 << REQ_ACK_BIT)) > 0;
      reqRetry = (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.reqAck.nxdata) & (1 << REQ_RETRY_BIT)) > 0;
      if (doneStatus && reqAck) {
#line 1084
        doneStatus = (uint8_t )BasicServicesP__RadioAck__wasAcked(msg);
        }
#line 1085
      if (doneStatus) {
          ;
          BasicServicesP__outQ__get(&BasicServicesP__tempOutputOutQ);
          BasicServicesP__sendCounter = 0;
          BasicServicesP__sendTimer__startOneShot(BasicServicesP__reSendDelay);
          if (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata) >= AM_CUSTOM_START && __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata) <= AM_CUSTOM_END) {
              ;
              if (reqAck == TRUE) {
                BasicServicesP__BSRadio__sendDoneAck(__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata), msg, BasicServicesP__tempOutputOutQ.Data, error, BasicServicesP__RadioAck__wasAcked(msg));
                }
              else {
#line 1095
                BasicServicesP__BSRadio__sendDone(__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata), msg, BasicServicesP__tempOutputOutQ.Data, error);
                }
            }
        }
      else 
#line 1097
        {
          ;
          if (BasicServicesP__sendCounter < MAX_SEND_RETRIES) {
              ;
              BasicServicesP__sendTimer__startOneShot(BasicServicesP__reSendDelay);
            }
          else 
#line 1102
            {
              ;
              BasicServicesP__outQ__get(&BasicServicesP__tempOutputOutQ);
              BasicServicesP__sendCounter = 0;
              BasicServicesP__sendTimer__startOneShot(BasicServicesP__reSendDelay);
              if (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata) >= AM_CUSTOM_START && __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata) <= AM_CUSTOM_END) {
                  ;
                  if (reqAck == TRUE) {
                    BasicServicesP__BSRadio__sendDoneAck(__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata), msg, BasicServicesP__tempOutputOutQ.Data, error, FALSE);
                    }
                  else {
                    BasicServicesP__BSRadio__sendDone(__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata), msg, BasicServicesP__tempOutputOutQ.Data, error);
                    }
                }
            }
        }
    }
}

# 110 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x406f4068, message_t * msg, error_t error){
#line 110
  BasicServicesP__RadioSender__sendDone(arg_0x406f4068, msg, error);
#line 110
}
#line 110
# 101 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x407a6b58, message_t * msg, error_t error){
#line 100
  switch (arg_0x407a6b58) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x407a6b58, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 212
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t VMCustomP__BCRadio_receive__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(VMCustomP__BCRadio_receive);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 186 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustomP.nc"
static inline void VMCustomP__BSRadio__receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len)
#line 186
{
  ;
  if (am_id == AM_USRMSG) {
      memcpy(&VMCustomP__ExtDataRadioReceived, payload, sizeof(usrMsg_t ));
      VMCustomP__BCRadio_receive__postTask();
    }
  else 
#line 191
    {
      ;
    }
}

# 12 "BSRadio.nc"
inline static void BasicServicesP__BSRadio__receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len){
#line 12
  VMCustomP__BSRadio__receive(am_id, msg, payload, len);
#line 12
}
#line 12
# 498 "BasicServicesP.nc"
static inline void BasicServicesP__recCustomMsgNet_receive(message_t *msg, void *payload, uint8_t len)
#line 498
{
  uint8_t am_id = (uint8_t )BasicServicesP__RadioAMPacket__type(msg);

#line 500
  ;
  ;
  BasicServicesP__BSRadio__receive(am_id, msg, payload, len);
}

# 8 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t BasicServicesP__inQ__put(void *Data){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__put(Data);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 508 "BasicServicesP.nc"
static inline void BasicServicesP__recReqDataNet_receive(message_t *msg, void *payload, uint8_t len)
#line 508
{
  reqData_t *xmsg;

#line 510
  ;

  memcpy(BasicServicesP__tempInputInQ.Data, payload, sizeof(reqData_t ));
  xmsg = (reqData_t *)BasicServicesP__tempInputInQ.Data;
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.AM_ID.nxdata, AM_REQDATA);
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.DataSize.nxdata, sizeof(reqData_t ));

  if (BasicServicesP__inQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 517
    ;
    }
}

# 88 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMPacket.nc"
inline static am_addr_t BasicServicesP__RadioAMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 475 "BasicServicesP.nc"
static inline void BasicServicesP__recSetDataNDNet_receive(message_t *msg, void *payload, uint8_t len)
#line 475
{
  setDataND_t *xmsg;

#line 477
  ;

  memcpy(BasicServicesP__tempInputInQ.Data, payload, sizeof(setDataND_t ));
  xmsg = (setDataND_t *)BasicServicesP__tempInputInQ.Data;
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.AM_ID.nxdata, AM_SETDATAND);
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.DataSize.nxdata, sizeof(setDataND_t ));

  if (__nesc_ntoh_uint16(xmsg->versionId.nxdata) != __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata)) {
#line 484
      ;
#line 484
      return;
    }
#line 485
  if (__nesc_ntoh_uint16(xmsg->seq.nxdata) < __nesc_ntoh_uint16(BasicServicesP__NewDataSeq.nxdata) + 1) {
#line 485
      ;
#line 485
      return;
    }
  if (BasicServicesP__inQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 487
    ;
    }
  __nesc_hton_uint16(BasicServicesP__NewDataMoteSource.nxdata, BasicServicesP__RadioAMPacket__source(msg));

  if (__nesc_ntoh_uint16(xmsg->seq.nxdata) == __nesc_ntoh_uint16(BasicServicesP__NewDataSeq.nxdata) + 1) {
      __nesc_hton_uint16(BasicServicesP__tempInputInQ.sendToMote.nxdata, AM_BROADCAST_ADDR);
      if (BasicServicesP__outQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 493
        ;
        }
    }
}

#line 459
static inline void BasicServicesP__recReqProgBlockNet_receive(message_t *msg, void *payload, uint8_t len)
#line 459
{
  reqProgBlock_t *xmsg;

#line 461
  ;

  memcpy(BasicServicesP__tempInputInQ.Data, payload, sizeof(reqProgBlock_t ));
  xmsg = (reqProgBlock_t *)BasicServicesP__tempInputInQ.Data;
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.AM_ID.nxdata, AM_REQPROGBLOCK);
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.DataSize.nxdata, sizeof(reqProgBlock_t ));

  if (BasicServicesP__inQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 468
    ;
    }
}

#line 202
static inline uint32_t BasicServicesP__getRequestTimeout(void )
#line 202
{
#line 202
  return REQUEST_TIMEOUT;
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void BasicServicesP__ProgReqTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
# 422 "BasicServicesP.nc"
static inline void BasicServicesP__recNewProgBlockNet_receive(message_t *msg, void *payload, uint8_t len)
#line 422
{
  newProgBlock_t *xmsg;

#line 424
  ;

  memcpy(BasicServicesP__tempInputInQ.Data, payload, sizeof(newProgBlock_t ));
  xmsg = (newProgBlock_t *)BasicServicesP__tempInputInQ.Data;
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.AM_ID.nxdata, AM_NEWPROGBLOCK);
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.DataSize.nxdata, sizeof(newProgBlock_t ));

  ;
  if (__nesc_ntoh_uint16(xmsg->versionId.nxdata) == __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata)) {
      if (!BasicServicesP__BM__get(__nesc_ntoh_uint16(xmsg->blockId.nxdata))) {
          if (__nesc_ntoh_uint16(xmsg->blockId.nxdata) == __nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata)) {

              if (BasicServicesP__outQ__put(&BasicServicesP__lastNewProgVersion) != SUCCESS) {
#line 436
                ;
                }
            }
          if (BasicServicesP__inQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 439
            ;
            }
          __nesc_hton_uint16(BasicServicesP__ProgMoteSource.nxdata, BasicServicesP__RadioAMPacket__source(msg));

          if (BasicServicesP__outQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 443
            ;
            }
        }
      else 
#line 444
        {
          ;
        }
    }
  else 
#line 447
    {
      if (__nesc_ntoh_uint16(xmsg->versionId.nxdata) > __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata)) {

          BasicServicesP__ProgReqTimer__startOneShot(BasicServicesP__getRequestTimeout());
        }
      else {
#line 452
        ;
        }
    }
}

#line 398
static inline void BasicServicesP__recNewProgVersionNet_receive(message_t *msg, void *payload, uint8_t len)
#line 398
{
  newProgVersion_t *xmsg;

#line 400
  ;

  memcpy(BasicServicesP__tempInputInQ.Data, payload, sizeof(newProgVersion_t ));
  xmsg = (newProgVersion_t *)BasicServicesP__tempInputInQ.Data;
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.AM_ID.nxdata, AM_NEWPROGVERSION);
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.DataSize.nxdata, sizeof(newProgVersion_t ));

  if (__nesc_ntoh_uint16(xmsg->versionId.nxdata) <= __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata) || __nesc_ntoh_uint16(xmsg->versionId.nxdata) == __nesc_ntoh_uint16(BasicServicesP__lastRecNewProgVersion.nxdata)) {
#line 407
      ;
#line 407
      return;
    }
  if (BasicServicesP__inQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 409
    ;
    }
  __nesc_hton_uint16(BasicServicesP__ProgMoteSource.nxdata, BasicServicesP__RadioAMPacket__source(msg));
  __nesc_hton_uint16(BasicServicesP__lastRecNewProgVersion.nxdata, __nesc_ntoh_uint16(xmsg->versionId.nxdata));

  __nesc_hton_uint16(BasicServicesP__tempInputInQ.sendToMote.nxdata, AM_BROADCAST_ADDR);
  memcpy(&BasicServicesP__lastNewProgVersion, &BasicServicesP__tempInputInQ, sizeof(GenericData_t ));
}

#line 521
static inline message_t *BasicServicesP__RadioReceiver__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 521
{
  ;

  switch (id) {
      case AM_NEWPROGVERSION: 
        BasicServicesP__recNewProgVersionNet_receive(msg, payload, len);
      break;
      case AM_NEWPROGBLOCK: 
        BasicServicesP__recNewProgBlockNet_receive(msg, payload, len);
      break;
      case AM_REQPROGBLOCK: 
        BasicServicesP__recReqProgBlockNet_receive(msg, payload, len);
      break;
      case AM_SETDATAND: 
        BasicServicesP__recSetDataNDNet_receive(msg, payload, len);
      break;
      case AM_REQDATA: 
        BasicServicesP__recReqDataNet_receive(msg, payload, len);
      break;
      default: 
        if (id >= AM_CUSTOM_START && id <= AM_CUSTOM_END) {
            if (BasicServicesP__loadingProgramFlag == FALSE) {
                BasicServicesP__recCustomMsgNet_receive(msg, payload, len);
              }
          }
        else 
#line 545
          {
            ;
          }
      break;
    }
  return msg;
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x406f4a28, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = BasicServicesP__RadioReceiver__receive(arg_0x406f4a28, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x407a6518, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x407a6518) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x407a6518, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x407a5688, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x407a5688) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x407a5688, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 51 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x407a5688){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x407a5688) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x407a5688);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 275 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 236 "BasicServicesP.nc"
static inline void BasicServicesP__RadioControl__stopDone(error_t error)
#line 236
{
  ;
}

# 138 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  BasicServicesP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 105 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = Atm328pUsartP__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 48 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = Atm328pUsartP__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 137 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline void HplAtm328pUsartP__Usart__enableDreInterrupt(void )
{
  * (volatile uint8_t *)0xC1 |= 1 << 5;
}

# 41 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static void Atm328pUsartP__HplUsart__enableDreInterrupt(void ){
#line 41
  HplAtm328pUsartP__Usart__enableDreInterrupt();
#line 41
}
#line 41
# 56 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56









inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 529 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 529
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 531
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 668 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 668
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 671
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 699
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 99 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline error_t HplAtm328pUsartP__RxControl__stop(void )
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 4);
  return SUCCESS;
}

# 105 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/StdControl.nc"
inline static error_t Atm328pUsartP__HplRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm328pUsartP__RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 111 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline error_t HplAtm328pUsartP__TxControl__stop(void )
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 3);
  return SUCCESS;
}

# 105 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/StdControl.nc"
inline static error_t Atm328pUsartP__HplTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm328pUsartP__TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 75 "TerraVMC.nc"
static inline void TerraVMC__BSBoot__booted(void )
#line 75
{

  TOS_NODE_ID = 1;

  __nesc_hton_uint16(TerraVMC__MoteID.nxdata, TOS_NODE_ID);
}

# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
inline static void BasicServicesP__BSBoot__booted(void ){
#line 60
  TerraVMC__BSBoot__booted();
#line 60
}
#line 60
# 207 "BasicServicesP.nc"
static inline void BasicServicesP__RadioControl__startDone(error_t error)
#line 207
{
  ;
  __nesc_hton_uint16(BasicServicesP__MoteID.nxdata, TOS_NODE_ID);




  if (BasicServicesP__firstInic) {
      reqProgBlock_t Data;

      BasicServicesP__firstInic = FALSE;

      BasicServicesP__ReqState = RO_NEW_VERSION;
      __nesc_hton_uint8(Data.reqOper.nxdata, RO_NEW_VERSION);
      __nesc_hton_uint16(Data.versionId.nxdata, 0);
      __nesc_hton_uint16(Data.blockId.nxdata, 0);
      __nesc_hton_uint16(BasicServicesP__ProgMoteSource.nxdata, AM_BROADCAST_ADDR);
      BasicServicesP__sendReqProgBlock(&Data);

      BasicServicesP__ProgReqTimer__startOneShot(BasicServicesP__getRequestTimeout());
    }





  BasicServicesP__BSBoot__booted();
}

# 113 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  BasicServicesP__RadioControl__startDone(error);
#line 113
}
#line 113
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
inline static void Atm328pUsartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 93 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline error_t HplAtm328pUsartP__RxControl__start(void )
{
  * (volatile uint8_t *)0xC1 |= 1 << 4;
  return SUCCESS;
}

# 95 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/StdControl.nc"
inline static error_t Atm328pUsartP__HplRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm328pUsartP__RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 105 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline error_t HplAtm328pUsartP__TxControl__start(void )
{
  * (volatile uint8_t *)0xC1 |= 1 << 3;
  return SUCCESS;
}

# 95 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/StdControl.nc"
inline static error_t Atm328pUsartP__HplTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm328pUsartP__TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 51 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/platforms/uno/PlatformUsartConfigC.nc"
static inline atm328p_usart_config_t *PlatformUsartConfigC__Atm328pUsartConfig__getConfig(void )
{
  return &PlatformUsartConfigC__cfg;
}

# 37 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartConfig.nc"
inline static atm328p_usart_config_t *HplAtm328pUsartP__Config__getConfig(void ){
#line 37
  struct __nesc_unnamed4268 *__nesc_result;
#line 37

#line 37
  __nesc_result = PlatformUsartConfigC__Atm328pUsartConfig__getConfig();
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 51 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline error_t HplAtm328pUsartP__Init__init(void )
{
  atm328p_usart_config_t *cfg = HplAtm328pUsartP__Config__getConfig();

#line 54
  if (!cfg) {
    return FAIL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      uint16_t ubrr;
      uint8_t ubrr_div;




      if (cfg->mode == ATM328P_USART_ASYNC && cfg->double_speed) {
        * (volatile uint8_t *)0xC0 = 1 << 1;
        }
      else {
#line 68
        * (volatile uint8_t *)0xC0 = 0;
        }
      * (volatile uint8_t *)0xC1 |= ((cfg->bits & 0x04) >> 2) << 2;

      * (volatile uint8_t *)0xC2 = ((((
      cfg->mode << 6) | (
      cfg->parity << 4)) | (
      cfg->two_stop_bits ? 1 << 3 : 0)) | ((
      cfg->bits & 0x03) << 1)) | (
      cfg->polarity_rising_edge << 0);

      if (cfg->mode == ATM328P_USART_ASYNC) {
        ubrr_div = cfg->double_speed ? 8 : 16;
        }
      else {
#line 82
        ubrr_div = 2;
        }

      ubrr = (uint16_t )((float )(16000000 / ubrr_div) / cfg->baud - 1 + 0.5);

      * (volatile uint16_t *)0xC4 = ubrr & 0x0fff;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t Atm328pUsartP__HplUsartInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm328pUsartP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 61 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/power/HplAtm328pPowerP.nc"
static inline bool HplAtm328pPowerP__HplAtm328pPower__isUsartPowered(void )
#line 61
{
#line 61
  return !(* (volatile uint8_t *)0x64 & (1 << 1));
}

# 41 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/power/HplAtm328pPower.nc"
inline static bool Atm328pUsartP__HplPower__isUsartPowered(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm328pPowerP__HplAtm328pPower__isUsartPowered();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 105 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartP.nc"
static inline error_t Atm328pUsartP__StdControl__start(void )
{
  error_t res;

  if (Atm328pUsartP__HplPower__isUsartPowered()) {
    return SUCCESS;
    }
  Atm328pUsartP__StdControl__stop();

  * (volatile uint8_t *)0x64 &= (uint8_t )~(1 << 1);

  res = Atm328pUsartP__HplUsartInit__init();
  if (res != SUCCESS) {
    return res;
    }
  Atm328pUsartP__HplTxControl__start();
  Atm328pUsartP__HplRxControl__start();

  Atm328pUsartP__McuPowerState__update();

  return SUCCESS;
}

# 95 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = Atm328pUsartP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 559
static inline void SerialP__RunTx__runTask(void )
#line 559
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 576
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 585
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 589
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 598
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 605
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 605
        goInactive = SerialP__offPending;
#line 605
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 607
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 607
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 613
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 613
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 616
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 618
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 625
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 627
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 628
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 632
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 646
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 649
            __nesc_atomic_end(__nesc_atomic); 
#line 649
            return;
          }
        }
    }
#line 652
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 655
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 659
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 661
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 661
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t BasicServicesP__sendMessage__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BasicServicesP__sendMessage);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 1054 "BasicServicesP.nc"
static inline void BasicServicesP__sendNextMsg__runTask(void )
#line 1054
{
  ;
  if (BasicServicesP__sendCounter < MAX_SEND_RETRIES) {
      BasicServicesP__sendMessage__postTask();
    }
  else 
#line 1058
    {
      BasicServicesP__outQ__get(&BasicServicesP__tempOutputOutQ);
      BasicServicesP__sendCounter = 0;
      BasicServicesP__sendMessage__postTask();
    }
}

#line 1007
static inline void BasicServicesP__sendMessage__runTask(void )
#line 1007
{
  BasicServicesP__sendCounter++;
  if (BasicServicesP__outQ__read(&BasicServicesP__tempOutputOutQ) == SUCCESS) {
      ;
      switch (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata)) {










          case AM_NEWPROGVERSION: BasicServicesP__sendRadioN();
#line 1022
          break;
          case AM_NEWPROGBLOCK: BasicServicesP__sendRadioN();
#line 1023
          break;
          case AM_REQPROGBLOCK: BasicServicesP__sendRadioN();
#line 1024
          break;




          default: 
            if (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata) >= AM_CUSTOM_START && __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata) <= AM_CUSTOM_END) {
                BasicServicesP__sendRadioN();
              }
          break;
        }
    }
  else 
#line 1035
    {
      BasicServicesP__outQ__get(&BasicServicesP__tempOutputOutQ);
      ;
    }
}

# 131 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 135
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 126 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Packet.nc"
inline static void * BasicServicesP__RadioPacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
#line 106
inline static uint8_t BasicServicesP__RadioPacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 182 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__requestAck(message_t *msg)
#line 182
{
  return FAIL;
}

# 59 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/PacketAcknowledgements.nc"
inline static error_t BasicServicesP__RadioAck__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 185 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__noAck(message_t *msg)
#line 185
{
  return SUCCESS;
}

# 71 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/PacketAcknowledgements.nc"
inline static error_t BasicServicesP__RadioAck__noAck(message_t * msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__PacketAcknowledgements__noAck(msg);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 27 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/SerialAuxDummyP.nc"
static inline void SerialAuxDummyP__AMAux__setPower(message_t *p_msg, uint8_t power)
#line 27
{
}

# 2 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMAux.nc"
inline static void BasicServicesP__AMAux__setPower(message_t *p_msg, uint8_t power){
#line 2
  SerialAuxDummyP__AMAux__setPower(p_msg, power);
#line 2
}
#line 2
# 538 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 538
{
  bool not_busy = FALSE;

#line 540
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 540
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 542
          EOFF;

          {
#line 542
            __nesc_atomic_end(__nesc_atomic); 
#line 542
            return __nesc_temp;
          }
        }
    }
#line 545
    __nesc_atomic_end(__nesc_atomic); }
#line 544
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 544
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 550
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x407a5688, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x407a5688) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x407a5688, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 111 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 68 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 80 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
inline static error_t BasicServicesP__RadioSender__send(am_id_t arg_0x40610a60, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x40610a60, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 946 "BasicServicesP.nc"
static inline error_t BasicServicesP__RadioSender_send(uint8_t am_id, uint16_t target, message_t *msg, uint8_t len)
#line 946
{
  error_t stat;








  stat = BasicServicesP__RadioSender__send(__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata), __nesc_ntoh_uint16(BasicServicesP__tempOutputOutQ.sendToMote.nxdata), &BasicServicesP__sendBuff, __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.DataSize.nxdata));
#line 976
  return stat;
}

# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t BasicServicesP__inQ__get(void *Data){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__get(Data);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 87 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
inline static bool BasicServicesP__BM__isAllBitSet(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__isAllBitSet();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 1136 "BasicServicesP.nc"
static inline void BasicServicesP__sendNewProgVersion(newProgVersion_t *Data)
#line 1136
{
  ;
  memcpy(& BasicServicesP__tempInputOutQ.Data, Data, sizeof(newProgVersion_t ));
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.AM_ID.nxdata, AM_NEWPROGVERSION);
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.DataSize.nxdata, sizeof(newProgVersion_t ));
  __nesc_hton_uint16(BasicServicesP__tempInputOutQ.sendToMote.nxdata, AM_BROADCAST_ADDR);
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.reqAck.nxdata, 0);
  if (BasicServicesP__outQ__put(&BasicServicesP__tempInputOutQ) != SUCCESS) {
      ;
    }
}

# 1768 "TerraVMC.nc"
static inline void TerraVMC__BSUpload__getEnv(newProgVersion_t *data)
#line 1768
{
  ;
  __nesc_hton_uint16(data->startProg.nxdata, TerraVMC__ProgStart);
  __nesc_hton_uint16(data->endProg.nxdata, TerraVMC__ProgEnd);
  __nesc_hton_uint16(data->nTracks.nxdata, TerraVMC__nTracks);
  __nesc_hton_uint16(data->wClocks.nxdata, TerraVMC__wClocks);
  __nesc_hton_uint16(data->asyncs.nxdata, TerraVMC__asyncs);
  __nesc_hton_uint16(data->wClock0.nxdata, TerraVMC__wClock0);
  __nesc_hton_uint16(data->gate0.nxdata, TerraVMC__gate0);
  __nesc_hton_uint16(data->inEvts.nxdata, TerraVMC__inEvts);
  __nesc_hton_uint16(data->async0.nxdata, TerraVMC__async0);
  ;
}

# 26 "BSUpload.nc"
inline static void BasicServicesP__BSUpload__getEnv(newProgVersion_t *data){
#line 26
  TerraVMC__BSUpload__getEnv(data);
#line 26
}
#line 26
# 656 "BasicServicesP.nc"
static inline void BasicServicesP__procRecReqProgBlock(reqProgBlock_t *Data)
#line 656
{
  newProgVersion_t xVersion;
  newProgBlock_t xBlock;
  uint8_t *mem;
  uint16_t i = 0;

#line 661
  ;
  switch (__nesc_ntoh_uint8(Data->reqOper.nxdata)) {
      case RO_NEW_VERSION: 
        if (__nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata) > __nesc_ntoh_uint16(Data->versionId.nxdata) && __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata) > 0 && BasicServicesP__BM__isAllBitSet()) {
            __nesc_hton_uint16(xVersion.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata));
            __nesc_hton_uint16(xVersion.blockLen.nxdata, __nesc_ntoh_uint16(BasicServicesP__ProgBlockLen.nxdata));
            __nesc_hton_uint16(xVersion.blockStart.nxdata, __nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata));
            BasicServicesP__BSUpload__getEnv(&xVersion);
            BasicServicesP__sendNewProgVersion(&xVersion);
          }
        else 
#line 670
          {
            ;
          }
      break;
      case RO_DATA_FULL: 

        if (__nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata) == __nesc_ntoh_uint16(Data->versionId.nxdata) && __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata) > 0 && BasicServicesP__BM__isAllBitSet()) {
            BasicServicesP__DsmBlockCount = 0;
            BasicServicesP__SendDataFullTimer__startOneShot(DISSEMINATION_TIMEOUT);
          }
        else 
#line 679
          {
            ;
          }
      break;
      case RO_DATA_SINGLE: 
        if (__nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata) == __nesc_ntoh_uint16(Data->versionId.nxdata) && __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata) > 0 && BasicServicesP__BM__get(__nesc_ntoh_uint16(Data->blockId.nxdata))) {
            __nesc_hton_uint16(xBlock.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata));
            __nesc_hton_uint16(xBlock.blockId.nxdata, __nesc_ntoh_uint16(Data->blockId.nxdata));
            mem = BasicServicesP__BSUpload__getSection(__nesc_ntoh_uint16(Data->blockId.nxdata) * BLOCK_SIZE);
            for (i = 0; i < BLOCK_SIZE; i++) __nesc_hton_uint8(xBlock.data[i].nxdata, __nesc_ntoh_uint8((* (nx_uint8_t *)(mem + i)).nxdata));
            BasicServicesP__ReqState = ST_WAIT_PROG_BLK;
            BasicServicesP__sendNewProgBlock(&xBlock);
          }
        else 
#line 691
          {
            ;
          }
      break;
    }
}

# 29 "BSUpload.nc"
inline static void BasicServicesP__BSUpload__start(bool resetFlag){
#line 29
  TerraVMC__BSUpload__start(resetFlag);
#line 29
}
#line 29
# 145 "BasicServicesP.nc"
static inline void BasicServicesP__TViewer(char *cmd, uint16_t p1, uint16_t p2)
#line 145
{
  ;
}

# 59 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVectorC.nc"
static inline uint16_t /*BasicServicesC.Bitmap*/vmBitVectorC__0__getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*BasicServicesC.Bitmap*/vmBitVectorC__0__ELEMENT_SIZE;
}

#line 54
static inline uint16_t /*BasicServicesC.Bitmap*/vmBitVectorC__0__getIndex(uint16_t bitnum)
{
  return bitnum / /*BasicServicesC.Bitmap*/vmBitVectorC__0__ELEMENT_SIZE;
}

#line 90
static inline void /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__set(uint16_t bitnum)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 92
    {
#line 92
      /*BasicServicesC.Bitmap*/vmBitVectorC__0__m_bits[/*BasicServicesC.Bitmap*/vmBitVectorC__0__getIndex(bitnum)] |= /*BasicServicesC.Bitmap*/vmBitVectorC__0__getMask(bitnum);
    }
#line 93
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
inline static void BasicServicesP__BM__set(uint16_t bitnum){
#line 56
  /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__set(bitnum);
#line 56
}
#line 56
# 1819 "TerraVMC.nc"
static inline void TerraVMC__BSUpload__loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[])
#line 1819
{
  memcpy(&TerraVMC__CEU_data[Addr], Data, Size);
  ;
}

# 35 "BSUpload.nc"
inline static void BasicServicesP__BSUpload__loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[]){
#line 35
  TerraVMC__BSUpload__loadSection(Addr, Size, Data);
#line 35
}
#line 35
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void BasicServicesP__ProgReqTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
#line 78
}
#line 78
# 624 "BasicServicesP.nc"
static inline void BasicServicesP__procNewProgBlock(newProgBlock_t *Data)
#line 624
{
  uint8_t lData[BLOCK_SIZE];
  uint16_t i;
  uint16_t Addr = 0;

#line 628
  ;
  BasicServicesP__ProgReqTimer__stop();

  for (i = 0; i < BLOCK_SIZE; i++) lData[i] = (uint8_t )__nesc_ntoh_uint8(Data->data[i].nxdata);

  Addr = __nesc_ntoh_uint16(Data->blockId.nxdata) * BLOCK_SIZE;

  BasicServicesP__BSUpload__loadSection(Addr, (uint8_t )BLOCK_SIZE, &lData[0]);
  BasicServicesP__BM__set((uint16_t )__nesc_ntoh_uint16(Data->blockId.nxdata));

  BasicServicesP__ProgTimeOutCounter = 0;

  if (BasicServicesP__BM__isAllBitSet()) {
      BasicServicesP__loadingProgramFlag = FALSE;

      BasicServicesP__ReqState = ST_IDLE;
      BasicServicesP__TViewer("vmstart", 0, 0);
      BasicServicesP__BSUpload__start(TRUE);
    }
  else 
#line 646
    {

      BasicServicesP__ReqState = ST_WAIT_PROG_BLK;
      BasicServicesP__ProgReqTimer__startOneShot(BasicServicesP__getRequestTimeout());
    }
}

# 126 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVectorC.nc"
static inline void /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__resetRange(uint16_t from, uint16_t to)
{
  uint16_t bitnum;

  memset(/*BasicServicesC.Bitmap*/vmBitVectorC__0__m_bits, 255, sizeof /*BasicServicesC.Bitmap*/vmBitVectorC__0__m_bits);

  for (bitnum = from; bitnum <= to; bitnum++) /* atomic removed: atomic calls only */
#line 132
    {
#line 132
      /*BasicServicesC.Bitmap*/vmBitVectorC__0__m_bits[/*BasicServicesC.Bitmap*/vmBitVectorC__0__getIndex(bitnum)] &= ~/*BasicServicesC.Bitmap*/vmBitVectorC__0__getMask(bitnum);
    }
#line 132
  ;
  ;
}

# 94 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
inline static void BasicServicesP__BM__resetRange(uint16_t from, uint16_t to){
#line 94
  /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__resetRange(from, to);
#line 94
}
#line 94
# 1753 "TerraVMC.nc"
static inline void TerraVMC__BSUpload__setEnv(newProgVersion_t *data)
#line 1753
{
  TerraVMC__ProgStart = (uint16_t )__nesc_ntoh_uint16(data->startProg.nxdata);
  TerraVMC__ProgEnd = (uint16_t )__nesc_ntoh_uint16(data->endProg.nxdata);
  TerraVMC__nTracks = __nesc_ntoh_uint16(data->nTracks.nxdata);
  TerraVMC__wClocks = __nesc_ntoh_uint16(data->wClocks.nxdata);
  TerraVMC__asyncs = __nesc_ntoh_uint16(data->asyncs.nxdata);
  TerraVMC__wClock0 = __nesc_ntoh_uint16(data->wClock0.nxdata);
  TerraVMC__gate0 = __nesc_ntoh_uint16(data->gate0.nxdata);
  TerraVMC__inEvts = __nesc_ntoh_uint16(data->inEvts.nxdata);
  TerraVMC__async0 = __nesc_ntoh_uint16(data->async0.nxdata);

  ;
}

# 23 "BSUpload.nc"
inline static void BasicServicesP__BSUpload__setEnv(newProgVersion_t *data){
#line 23
  TerraVMC__BSUpload__setEnv(data);
#line 23
}
#line 23
# 81 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Queue.nc"
inline static TerraVMC__evtQ__t  TerraVMC__evtQ__dequeue(void ){
#line 81
  struct evtData __nesc_result;
#line 81

#line 81
  __nesc_result = /*TerraVMAppC.evtQ*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 57 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
static inline uint8_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__size(void )
#line 57
{
  return /*TerraVMAppC.evtQ*/QueueC__0__size;
}

# 58 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Queue.nc"
inline static uint8_t TerraVMC__evtQ__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*TerraVMAppC.evtQ*/QueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 1806 "TerraVMC.nc"
static inline void TerraVMC__BSUpload__resetMemory(void )
#line 1806
{
  uint16_t i;
  uint8_t size;

#line 1809
  ;
  TerraVMC__haltedFlag = TRUE;

  for (i = 0; i < (uint16_t )(BLOCK_SIZE * CURRENT_MAX_BLOCKS); i++) __nesc_hton_uint8(TerraVMC__CEU_data[i].nxdata, 0);

  size = TerraVMC__evtQ__size();
  for (i = 0; i < size; i++) TerraVMC__evtQ__dequeue();
}

# 32 "BSUpload.nc"
inline static void BasicServicesP__BSUpload__resetMemory(void ){
#line 32
  TerraVMC__BSUpload__resetMemory();
#line 32
}
#line 32
# 1748 "TerraVMC.nc"
static inline void TerraVMC__BSUpload__stop(void )
#line 1748
{
  ;
  TerraVMC__haltedFlag = TRUE;
}

# 20 "BSUpload.nc"
inline static void BasicServicesP__BSUpload__stop(void ){
#line 20
  TerraVMC__BSUpload__stop();
#line 20
}
#line 20
# 591 "BasicServicesP.nc"
static inline void BasicServicesP__procNewProgVersion(newProgVersion_t *Data)
#line 591
{
  ;

  BasicServicesP__BSUpload__stop();
  BasicServicesP__BSUpload__resetMemory();
  BasicServicesP__TViewer("vmstop", 0, 0);

  __nesc_hton_uint16(BasicServicesP__ProgVersion.nxdata, __nesc_ntoh_uint16(Data->versionId.nxdata));
  __nesc_hton_uint16(BasicServicesP__ProgBlockStart.nxdata, __nesc_ntoh_uint16(Data->blockStart.nxdata));
  __nesc_hton_uint16(BasicServicesP__ProgBlockLen.nxdata, __nesc_ntoh_uint16(Data->blockLen.nxdata));

  BasicServicesP__BSUpload__setEnv(Data);
  ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 605
    BasicServicesP__BM__resetRange(__nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata), __nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata) + __nesc_ntoh_uint16(BasicServicesP__ProgBlockLen.nxdata) - 1);
#line 605
    __nesc_atomic_end(__nesc_atomic); }
  {
    reqProgBlock_t xData;

    BasicServicesP__ProgTimeOutCounter = 0;
    __nesc_hton_uint8(xData.reqOper.nxdata, RO_DATA_FULL);
    BasicServicesP__ReqState = RO_DATA_FULL;
    __nesc_hton_uint16(xData.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata));
    __nesc_hton_uint16(xData.blockId.nxdata, __nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata));
    BasicServicesP__loadingProgramFlag = TRUE;
    BasicServicesP__sendReqProgBlock(&xData);

    BasicServicesP__ProgReqTimer__startOneShot(BasicServicesP__getRequestTimeout());
  }
}

# 60 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static inline error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__read(void *Data)
#line 60
{
  ;

  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qSize <= 0) {
#line 63
    return FAIL;
    }
  memcpy(Data, (void *)&/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qData[/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qHead], sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataType ));
  return SUCCESS;
}

# 11 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t BasicServicesP__inQ__read(void *Data){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__read(Data);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 901 "BasicServicesP.nc"
static inline void BasicServicesP__procInputEvent__runTask(void )
#line 901
{
  {
    ;

    if (BasicServicesP__inQ__read(&BasicServicesP__tempOutputInQ) == SUCCESS) {
        BasicServicesP__inQ__get(&BasicServicesP__tempOutputInQ);
        switch (__nesc_ntoh_uint8(BasicServicesP__tempOutputInQ.AM_ID.nxdata)) {
            case AM_NEWPROGVERSION: BasicServicesP__procNewProgVersion((newProgVersion_t *)& BasicServicesP__tempOutputInQ.Data);
#line 908
            break;
            case AM_NEWPROGBLOCK: BasicServicesP__procNewProgBlock((newProgBlock_t *)& BasicServicesP__tempOutputInQ.Data);
#line 909
            break;
            case AM_REQPROGBLOCK: BasicServicesP__procRecReqProgBlock((reqProgBlock_t *)& BasicServicesP__tempOutputInQ.Data);
#line 910
            break;




            default: ;
#line 915
            break;
          }
        ;
        BasicServicesP__inQ__get(&BasicServicesP__tempOutputInQ);
        BasicServicesP__procInputEvent__postTask();
      }
    else 
#line 920
      {
        BasicServicesP__inQ__get(&BasicServicesP__tempOutputInQ);
        ;
      }
  }
}

# 65 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
static inline /*TerraVMAppC.evtQ*/QueueC__0__queue_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__head(void )
#line 65
{
  return /*TerraVMAppC.evtQ*/QueueC__0__queue[/*TerraVMAppC.evtQ*/QueueC__0__head];
}

#line 53
static inline bool /*TerraVMAppC.evtQ*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*TerraVMAppC.evtQ*/QueueC__0__size == 0;
}

# 542 "TerraVMC.nc"
static inline int TerraVMC__ceu_go_init(int *ret)
{

  if (TerraVMC__haltedFlag) {
#line 545
    return 0;
    }
  (&TerraVMC__CEU_)->p_tracks = (TerraVMC__tceu_trk *)TerraVMC__CEU_data + 0;
  (&TerraVMC__CEU_)->p_mem = TerraVMC__CEU_data + (TerraVMC__nTracks + 1) * sizeof(TerraVMC__tceu_trk );
  TerraVMC__MEM = (&TerraVMC__CEU_)->p_mem;

  TerraVMC__ceu_track_ins(0x01, 0xFF, 0, TerraVMC__ProgStart);
  return TerraVMC__ceu_go(ret);
}

#line 736
static inline void TerraVMC__ceu_boot(void )
{
  TerraVMC__old = (u32 )TerraVMC__BSTimerVM__getNow();
  TerraVMC__ceu_go_init((void *)0);
}

# 700 "BasicServicesP.nc"
static inline void BasicServicesP__ProgReqTimerTask__runTask(void )
#line 700
{
  uint16_t nextBlock = CURRENT_MAX_BLOCKS;
  reqProgBlock_t Data;
  uint32_t timeout = BasicServicesP__getRequestTimeout();

#line 704
  nextBlock = BasicServicesP__getNextEmptyBlock();
  ;
  __nesc_hton_uint16(BasicServicesP__lastRecNewProgVersion.nxdata, 0);
  switch (BasicServicesP__ReqState) {
      case RO_NEW_VERSION: 
        BasicServicesP__ProgTimeOutCounter++;

      if (BasicServicesP__ProgTimeOutCounter >= 3) {
          BasicServicesP__ProgTimeOutCounter = 0;
          __nesc_hton_uint16(BasicServicesP__lastRecNewProgVersion.nxdata, 0);
          timeout = REQUEST_VERY_LONG_TIMEOUT;
        }
      __nesc_hton_uint8(Data.reqOper.nxdata, RO_NEW_VERSION);
      __nesc_hton_uint16(Data.versionId.nxdata, 0);
      __nesc_hton_uint16(Data.blockId.nxdata, __nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata));
      __nesc_hton_uint16(BasicServicesP__ProgMoteSource.nxdata, AM_BROADCAST_ADDR);
      BasicServicesP__sendReqProgBlock(&Data);

      BasicServicesP__ProgReqTimer__startOneShot(timeout);
      break;
      case RO_DATA_FULL: 

        nextBlock = BasicServicesP__getNextEmptyBlock();
      if (nextBlock < __nesc_ntoh_uint16(BasicServicesP__ProgBlockLen.nxdata)) {
          __nesc_hton_uint8(Data.reqOper.nxdata, RO_DATA_FULL);
          BasicServicesP__ReqState = RO_DATA_FULL;
          __nesc_hton_uint16(Data.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata));
          __nesc_hton_uint16(Data.blockId.nxdata, nextBlock);
          BasicServicesP__sendReqProgBlock(&Data);

          BasicServicesP__ProgReqTimer__startOneShot(BasicServicesP__getRequestTimeout());
        }
      else 
#line 735
        {

          if (BasicServicesP__BM__isAllBitSet()) {

              BasicServicesP__ReqState = RO_IDLE;
              BasicServicesP__TViewer("vmstart", 0, 0);
              BasicServicesP__BSUpload__start(TRUE);
            }
        }
      break;
      case RO_DATA_SINGLE: 

        nextBlock = BasicServicesP__getNextEmptyBlock();
      if (nextBlock < CURRENT_MAX_BLOCKS) {
          __nesc_hton_uint8(Data.reqOper.nxdata, RO_DATA_SINGLE);
          BasicServicesP__ReqState = RO_DATA_SINGLE;
          __nesc_hton_uint16(Data.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata));
          __nesc_hton_uint16(Data.blockId.nxdata, nextBlock);
          BasicServicesP__sendReqProgBlock(&Data);

          BasicServicesP__ProgReqTimer__startOneShot(BasicServicesP__getRequestTimeout());
        }
      else 
#line 756
        {

          if (BasicServicesP__BM__isAllBitSet()) {

              BasicServicesP__ReqState = RO_IDLE;
              BasicServicesP__TViewer("vmstart", 0, 0);
              BasicServicesP__BSUpload__start(TRUE);
            }
        }
      break;
    }
}

# 555 "TerraVMC.nc"
static inline int TerraVMC__ceu_go_event(int *ret, int id, uint8_t auxId, void *data)
{
  ;

  if (TerraVMC__haltedFlag) {
#line 559
    return 0;
    }
  (&TerraVMC__CEU_)->ext_data = data;
  (&TerraVMC__CEU_)->stack = 0x01;
  TerraVMC__ceu_trigger(id, auxId);

  (&TerraVMC__CEU_)->wclk_late--;

  return TerraVMC__ceu_go(ret);
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t TerraVMC__procEvent__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(TerraVMC__procEvent);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 288 "TerraVMC.nc"
static inline uint16_t TerraVMC__getEvtCeuId(uint8_t EvtId)
#line 288
{
  uint8_t i = 0;
  uint8_t slotSize;
  uint16_t currSlot = TerraVMC__gate0;

#line 292
  slotSize = __nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC__MEM + currSlot + 1)).nxdata) & 0x80 ? 3 : 2;
  ;

  while (EvtId != __nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC__MEM + currSlot)).nxdata) && i < TerraVMC__inEvts) {
      i++;
      currSlot = currSlot + 1 + (__nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC__MEM + currSlot + 1)).nxdata) & 0x7f) * slotSize + 1;
      slotSize = __nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC__MEM + currSlot + 1)).nxdata) & 0x80 ? 3 : 2;
      ;
    }
  if (EvtId != __nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC__MEM + currSlot)).nxdata)) {
      ;
      return 0;
    }
  return currSlot + 1;
}

#line 1662
static inline void TerraVMC__procEvent__runTask(void )
#line 1662
{
  evtData_t evtData;
  uint16_t ceuId;

#line 1665
  ;
  if (TerraVMC__haltedFlag == TRUE) {
      TerraVMC__evtQ__dequeue();
      return;
    }

  if (TerraVMC__evtQ__size() > 0 && TerraVMC__procFlag == FALSE) {

      ;
      evtData = TerraVMC__evtQ__dequeue();
      ;
      ceuId = TerraVMC__getEvtCeuId(evtData.evtId);
      if (ceuId == 0) {
          ;
          TerraVMC__procEvent__postTask();
        }
      else 
#line 1680
        {
          TerraVMC__ceu_go_event((void *)0, ceuId, evtData.auxId, evtData.data);
        }
    }
  ;
}

# 216 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 22 "/home/branco/gitspace/Terra/TerraVM/src/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void )
#line 22
{
  return SUCCESS;
}

# 55 "/home/branco/gitspace/Terra/TerraVM/src/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RandomMlcgC__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, NoInitC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 40 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/atm328phardware.h"
static __inline void __nesc_enable_interrupt()
{
   __asm volatile ("sei");}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static error_t BasicServicesP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 157 "BasicServicesP.nc"
static inline void BasicServicesP__inicCtlData(void )
#line 157
{
  ;

  if (BasicServicesP__firstInic) {

      __nesc_hton_uint16(BasicServicesP__ProgVersion.nxdata, 0);
      __nesc_hton_uint16(BasicServicesP__NewDataSeq.nxdata, 0);
      __nesc_hton_uint16(BasicServicesP__maxSeenDataSeq.nxdata, 0);
      __nesc_hton_uint16(BasicServicesP__NewDataMoteSource.nxdata, AM_BROADCAST_ADDR);

      __nesc_hton_uint16(BasicServicesP__ProgBlockLen.nxdata, CURRENT_MAX_BLOCKS);
      __nesc_hton_uint16(BasicServicesP__ProgMoteSource.nxdata, 0);
    }
}

# 46 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
inline static uint32_t BasicServicesP__Random__rand32(void ){
#line 46
  unsigned int __nesc_result;
#line 46

#line 46
  __nesc_result = RandomMlcgC__Random__rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 176 "BasicServicesP.nc"
static inline void BasicServicesP__TOSBoot__booted(void )
#line 176
{
  uint32_t rnd = 0;

#line 178
  ;
  BasicServicesP__userRFPowerIdx = 3;




  __nesc_hton_uint16(BasicServicesP__MoteID.nxdata, TOS_NODE_ID);
  rnd = BasicServicesP__Random__rand32() & 0x0f;
  BasicServicesP__reSendDelay = RESEND_DELAY + rnd * 5;

  if (BasicServicesP__firstInic) {
      BasicServicesP__inicCtlData();



      if (BasicServicesP__RadioControl__start() != SUCCESS) {
#line 193
        ;
        }
    }
  else 
    {
      BasicServicesP__BSBoot__booted();
    }
}

# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  BasicServicesP__TOSBoot__booted();
#line 60
}
#line 60
# 123 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/McuSleepC.nc"
static inline mcu_power_t McuSleepC__McuPowerOverride__default__lowestState(void )
{
  return ATM328P_POWER_DOWN;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  enum __nesc_unnamed4247 __nesc_result;
#line 62

#line 62
  __nesc_result = McuSleepC__McuPowerOverride__default__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 86 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/atm328phardware.h"
static __inline mcu_power_t combine_mcu_power_t(mcu_power_t mp1, mcu_power_t mp2)
{
  return mp1 < mp2 ? mp1 : mp2;
}

# 53 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/McuSleepC.nc"
static inline void McuSleepC__update_power_mode(void )
{
  mcu_power_t mp = ATM328P_POWER_DOWN;


  if (!(* (volatile uint8_t *)0x64 & (1 << 5)) || !(* (volatile uint8_t *)0x64 & (1 << 3))) {
    mp = ATM328P_POWER_IDLE;
    }
  else {
#line 61
    if ((!(* (volatile uint8_t *)0x64 & (1 << 1)) || !(* (volatile uint8_t *)0x64 & (1 << 7))) || !(* (volatile uint8_t *)0x64 & (1 << 2))) {
      mp = ATM328P_POWER_IDLE;
      }
    else {
#line 64
      if (!(* (volatile uint8_t *)0x64 & (1 << 0))) {
        mp = ATM328P_POWER_ADC_NOISERED;
        }
      else {
#line 67
        if (!(* (volatile uint8_t *)0x64 & (1 << 6))) {
          mp = ATM328P_POWER_SAVE;
          }
        }
      }
    }
#line 70
  McuSleepC__mode = combine_mcu_power_t(mp, McuSleepC__McuPowerOverride__lowestState());
}

#line 86
static inline void McuSleepC__McuSleep__sleep(void )
{
  uint8_t sreg;
  uint8_t sm;

  if (McuSleepC__dirty) {
    McuSleepC__update_power_mode();
    }
  switch (McuSleepC__mode) 
    {
      case ATM328P_POWER_IDLE: sm = 0;
#line 96
      break;
      case ATM328P_POWER_ADC_NOISERED: sm = 1 << 1;
#line 97
      break;
      case ATM328P_POWER_EXT_STANDBY: sm = ((1 << 1) | (1 << 2)) | (1 << 3);
#line 98
      break;
      case ATM328P_POWER_SAVE: sm = (1 << 1) | (1 << 2);
#line 99
      break;
      case ATM328P_POWER_STANDBY: sm = (1 << 2) | (1 << 3);
#line 100
      break;
      default: 
        case ATM328P_POWER_DOWN: sm = 1 << 2;
#line 102
      break;
    }

  do {
#line 105
      * (volatile uint8_t *)(0x33 + 0x20) = (* (volatile uint8_t *)(0x33 + 0x20) & ~(((1 << 1) | (1 << 2)) | (1 << 3))) | sm;
    }
  while (
#line 105
  0);
  do {
#line 106
      * (volatile uint8_t *)(0x33 + 0x20) |= (uint8_t )(1 << 0);
    }
  while (
#line 106
  0);

  sreg = * (volatile uint8_t *)(0x3F + 0x20);


   __asm volatile ("sei");
   __asm ("sleep" :  :  : "memory");
  do {
#line 113
      * (volatile uint8_t *)(0x33 + 0x20) &= (uint8_t )~(1 << 0);
    }
  while (
#line 113
  0);

  * (volatile uint8_t *)(0x3F + 0x20) = sreg;
}

# 76 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 122 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline void HplAtm328pUsartP__Usart__disableRxcInterrupt(void )
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 7);
}

# 36 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static void Atm328pUsartP__HplUsart__disableRxcInterrupt(void ){
#line 36
  HplAtm328pUsartP__Usart__disableRxcInterrupt();
#line 36
}
#line 36
# 132 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/UartStream.nc"
inline static void Atm328pUsartP__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 397 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/UartStream.nc"
inline static void Atm328pUsartP__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 100 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartP.nc"
static inline void Atm328pUsartP__UartError__default__receiveError(void )
#line 100
{
}

# 35 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/UartError.nc"
inline static void Atm328pUsartP__UartError__receiveError(void ){
#line 35
  Atm328pUsartP__UartError__default__receiveError();
#line 35
}
#line 35
# 182 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline uint8_t HplAtm328pUsartP__Usart__rx(void )
{
  return * (volatile uint8_t *)0xC6;
}

# 52 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static uint8_t Atm328pUsartP__HplUsart__rx(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm328pUsartP__Usart__rx();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 172 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline bool HplAtm328pUsartP__Usart__parityError(void )
{
  return * (volatile uint8_t *)0xC0 & (1 << 2);
}

# 49 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static bool Atm328pUsartP__HplUsart__parityError(void ){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = HplAtm328pUsartP__Usart__parityError();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 162 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline bool HplAtm328pUsartP__Usart__frameError(void )
{
  return * (volatile uint8_t *)0xC0 & (1 << 4);
}

# 47 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static bool Atm328pUsartP__HplUsart__frameError(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = HplAtm328pUsartP__Usart__frameError();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 167 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline bool HplAtm328pUsartP__Usart__dataOverrun(void )
{
  return * (volatile uint8_t *)0xC0 & (1 << 3);
}

# 48 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static bool Atm328pUsartP__HplUsart__dataOverrun(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm328pUsartP__Usart__dataOverrun();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 70 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartP.nc"
static inline bool Atm328pUsartP__receive_with_error_notify(uint8_t *dst)
{
  bool overrun = FALSE;

  if (Atm328pUsartP__HplUsart__dataOverrun()) {
    overrun = TRUE;
    }
  if (Atm328pUsartP__HplUsart__frameError() || Atm328pUsartP__HplUsart__parityError()) 
    {
      Atm328pUsartP__UartError__receiveError();
      return FALSE;
    }

  *dst = Atm328pUsartP__HplUsart__rx();


  if (overrun) {
    Atm328pUsartP__UartError__receiveError();
    }
  return TRUE;
}

#line 307
static inline void Atm328pUsartP__HplUsart__rxDone(void )
{
  /* atomic removed: atomic calls only */
#line 309
  {
    uint8_t byte;

#line 311
    if (!Atm328pUsartP__receive_with_error_notify(&byte)) {
      return;
      }
    if (Atm328pUsartP__byte_receive_enabled) {
      Atm328pUsartP__UartStream__receivedByte(byte);
      }
    else {
#line 316
      if (Atm328pUsartP__rx.buf) {
          Atm328pUsartP__rx.buf[Atm328pUsartP__rx.idx++] = byte;
          if (Atm328pUsartP__rx.idx == Atm328pUsartP__rx.len) 
            {
              uint8_t *buf = Atm328pUsartP__rx.buf;

#line 321
              Atm328pUsartP__rx.buf = 0;
              Atm328pUsartP__HplUsart__disableRxcInterrupt();
              Atm328pUsartP__UartStream__receiveDone(buf, Atm328pUsartP__rx.len, SUCCESS);
            }
        }
      else {
        Atm328pUsartP__HplUsart__disableRxcInterrupt();
        }
      }
  }
}

# 57 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static void HplAtm328pUsartP__Usart__rxDone(void ){
#line 57
  Atm328pUsartP__HplUsart__rxDone();
#line 57
}
#line 57
# 401 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 203 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 57 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/UartStream.nc"
inline static void Atm328pUsartP__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 142 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline void HplAtm328pUsartP__Usart__disableDreInterrupt(void )
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 5);
}

# 42 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static void Atm328pUsartP__HplUsart__disableDreInterrupt(void ){
#line 42
  HplAtm328pUsartP__Usart__disableDreInterrupt();
#line 42
}
#line 42
# 192 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline void HplAtm328pUsartP__Usart__tx(uint8_t data)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xC0 = (* (volatile uint8_t *)0xC0 & HplAtm328pUsartP__UCSR0A_WMASK) | (1 << 6);
    * (volatile uint8_t *)0xC6 = data;
  }
}

# 55 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static void Atm328pUsartP__HplUsart__tx(uint8_t data){
#line 55
  HplAtm328pUsartP__Usart__tx(data);
#line 55
}
#line 55
# 345 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartP.nc"
static inline void Atm328pUsartP__HplUsart__txNowEmpty(void )
{
  /* atomic removed: atomic calls only */
#line 347
  {
    if (Atm328pUsartP__tx.buf && Atm328pUsartP__tx.idx != Atm328pUsartP__tx.len) {
      Atm328pUsartP__HplUsart__tx(Atm328pUsartP__tx.buf[Atm328pUsartP__tx.idx++]);
      }
    else {
        Atm328pUsartP__HplUsart__disableDreInterrupt();
        if (Atm328pUsartP__tx.buf && Atm328pUsartP__tx.idx == Atm328pUsartP__tx.len) 
          {
            uint8_t *buf = Atm328pUsartP__tx.buf;

#line 356
            Atm328pUsartP__tx.buf = 0;
            Atm328pUsartP__UartStream__sendDone(buf, Atm328pUsartP__tx.len, SUCCESS);
          }
      }
  }
}

# 59 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static void HplAtm328pUsartP__Usart__txNowEmpty(void ){
#line 59
  Atm328pUsartP__HplUsart__txNowEmpty();
#line 59
}
#line 59
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t Atm328pUsartP__do_notify_flush__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Atm328pUsartP__do_notify_flush);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 157 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline bool HplAtm328pUsartP__Usart__txEmpty(void )
{
  return * (volatile uint8_t *)0xC0 & (1 << 5);
}

# 46 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static bool Atm328pUsartP__HplUsart__txEmpty(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = HplAtm328pUsartP__Usart__txEmpty();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 132 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
static inline void HplAtm328pUsartP__Usart__disableTxcInterrupt(void )
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 6);
}

# 39 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static void Atm328pUsartP__HplUsart__disableTxcInterrupt(void ){
#line 39
  HplAtm328pUsartP__Usart__disableTxcInterrupt();
#line 39
}
#line 39
# 332 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartP.nc"
static inline void Atm328pUsartP__HplUsart__txDone(void )
{
  /* atomic removed: atomic calls only */
#line 334
  {
    Atm328pUsartP__HplUsart__disableTxcInterrupt();
    if (Atm328pUsartP__notify_flush && Atm328pUsartP__HplUsart__txEmpty()) 
      {
        Atm328pUsartP__notify_flush = FALSE;
        Atm328pUsartP__do_notify_flush__postTask();
      }
  }
}

# 58 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsart.nc"
inline static void HplAtm328pUsartP__Usart__txDone(void ){
#line 58
  Atm328pUsartP__HplUsart__txDone();
#line 58
}
#line 58
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.TimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 43 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pAlarmC.nc"
static inline void /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Isr__fired(void )
{
  /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__HplAlarm__stop();
  /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Alarm__fired();
}

# 35 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmIsr.nc"
inline static void HplAtm328pAlarmIsr0P__InterruptA__fired(void ){
#line 35
  /*Atm328pAlarms0C.Alarm0A*/Atm328pAlarmC__0__Isr__fired();
#line 35
}
#line 35
# 117 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pAlarmC.nc"
static inline void /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Alarm__default__fired(void )
#line 117
{
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Alarm__fired(void ){
#line 78
  /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Alarm__default__fired();
#line 78
}
#line 78
# 48 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmC.nc"
static inline void /*Atm328pAlarms0C.HplAlarm0B*/HplAtm328pAlarmC__1__HplAtm328pAlarm__stop(void )
{
  * (uint8_t *)110U &= ~4;
}

# 36 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarm.nc"
inline static void /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__HplAlarm__stop(void ){
#line 36
  /*Atm328pAlarms0C.HplAlarm0B*/HplAtm328pAlarmC__1__HplAtm328pAlarm__stop();
#line 36
}
#line 36
# 43 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pAlarmC.nc"
static inline void /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Isr__fired(void )
{
  /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__HplAlarm__stop();
  /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Alarm__fired();
}

# 35 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmIsr.nc"
inline static void HplAtm328pAlarmIsr0P__InterruptB__fired(void ){
#line 35
  /*Atm328pAlarms0C.Alarm0B*/Atm328pAlarmC__1__Isr__fired();
#line 35
}
#line 35
# 58 "/home/branco/gitspace/Terra/TerraVM/src/system/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.LocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 177 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
  /*HilTimerMilliC.LocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformCounterC.nc"
static inline void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC__0__m_upper & /*CounterMilli32C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
inline static void /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__overflow(void ){
#line 82
  /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 55 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/Atm328pTimerToCounter.nc"
static inline void /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__overflow(void )
{
  /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Counter__overflow();
}

# 38 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer.nc"
inline static void HplAtm328pTimer0P__Timer__overflow(void ){
#line 38
  /*Atm328pCounterTimer0C.Atm328pTimerToCounter*/Atm328pTimerToCounter__0__Timer__overflow();
#line 38
}
#line 38
# 45 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/atm328phardware.h"
static __inline void __nesc_disable_interrupt()
{
   __asm volatile ("cli");}



static __inline __nesc_atomic_t __nesc_atomic_start()
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 54
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}

static __inline void __nesc_atomic_end(__nesc_atomic_t old_SREG)
{
  * (volatile uint8_t *)(0x3F + 0x20) = old_SREG;
   __asm volatile ("" :  :  : "memory");}

# 63 "/home/branco/gitspace/Terra/TerraVM/src/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x403f2bd8){
#line 75
  switch (arg_0x403f2bd8) {
#line 75
    case TerraVMC__procEvent:
#line 75
      TerraVMC__procEvent__runTask();
#line 75
      break;
#line 75
    case BasicServicesP__ProgReqTimerTask:
#line 75
      BasicServicesP__ProgReqTimerTask__runTask();
#line 75
      break;
#line 75
    case BasicServicesP__procInputEvent:
#line 75
      BasicServicesP__procInputEvent__runTask();
#line 75
      break;
#line 75
    case BasicServicesP__sendMessage:
#line 75
      BasicServicesP__sendMessage__runTask();
#line 75
      break;
#line 75
    case BasicServicesP__sendNextMsg:
#line 75
      BasicServicesP__sendNextMsg__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case Atm328pUsartP__do_notify_flush:
#line 75
      Atm328pUsartP__do_notify_flush__runTask();
#line 75
      break;
#line 75
    case /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady:
#line 75
      /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady__runTask();
#line 75
      break;
#line 75
    case /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady:
#line 75
      /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.TimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case VMCustomP__BCRadio_receive:
#line 75
      VMCustomP__BCRadio_receive__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x403f2bd8);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 1647 "TerraVMC.nc"
static void TerraVMC__VMCustom__queueEvt(uint8_t evtId, uint8_t auxId, void *data)
#line 1647
{
  evtData_t evtData;

#line 1649
  ;


  evtData.evtId = evtId;
  evtData.auxId = auxId;
  evtData.data = data;
  TerraVMC__evtQ__enqueue(evtData);
  if (TerraVMC__procFlag == FALSE) {
#line 1656
    TerraVMC__procEvent__postTask();
    }
}

# 97 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
static error_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__enqueue(/*TerraVMAppC.evtQ*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*TerraVMAppC.evtQ*/QueueC__0__Queue__size() < /*TerraVMAppC.evtQ*/QueueC__0__Queue__maxSize()) {
      ;
      /*TerraVMAppC.evtQ*/QueueC__0__queue[/*TerraVMAppC.evtQ*/QueueC__0__tail] = newVal;
      /*TerraVMAppC.evtQ*/QueueC__0__tail++;
      if (/*TerraVMAppC.evtQ*/QueueC__0__tail == 6) {
#line 102
        /*TerraVMAppC.evtQ*/QueueC__0__tail = 0;
        }
#line 103
      /*TerraVMAppC.evtQ*/QueueC__0__size++;
      /*TerraVMAppC.evtQ*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 170 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 80 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformCounterC.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void )
{
  /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 84 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVectorC.nc"
static bool /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__get(uint16_t bitnum)
{
  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 87
    {
#line 87
      {
        unsigned char __nesc_temp = 
#line 87
        /*BasicServicesC.Bitmap*/vmBitVectorC__0__m_bits[/*BasicServicesC.Bitmap*/vmBitVectorC__0__getIndex(bitnum)] & /*BasicServicesC.Bitmap*/vmBitVectorC__0__getMask(bitnum) ? TRUE : FALSE;

        {
#line 87
          __nesc_atomic_end(__nesc_atomic); 
#line 87
          return __nesc_temp;
        }
      }
    }
#line 90
    __nesc_atomic_end(__nesc_atomic); }
}

# 1152 "BasicServicesP.nc"
static void BasicServicesP__sendNewProgBlock(newProgBlock_t *Data)
#line 1152
{
  ;
  memcpy(& BasicServicesP__tempInputOutQ.Data, Data, sizeof(newProgBlock_t ));
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.AM_ID.nxdata, AM_NEWPROGBLOCK);
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.DataSize.nxdata, sizeof(newProgBlock_t ));
  __nesc_hton_uint16(BasicServicesP__tempInputOutQ.sendToMote.nxdata, AM_BROADCAST_ADDR);
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.reqAck.nxdata, 0);
  if (BasicServicesP__outQ__put(&BasicServicesP__tempInputOutQ) != SUCCESS) {
      ;
    }
}

# 21 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__put(void *Data)
#line 21
{
  ;

  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize >= 10) {
      return FAIL;
    }

  memcpy((void *)&/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qData[/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qTail], Data, sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataType ));
  /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qTail++;
#line 29
  /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qTail = (uint8_t )(/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qTail % 10);
  /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize++;
  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__flagFreeQ == TRUE) {
      /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__flagFreeQ = FALSE;
#line 32
      /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady__postTask();
    }
  return SUCCESS;
}

# 159 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 268 "BasicServicesP.nc"
static void BasicServicesP__BSTimerAsync__startOneShot(uint32_t dt)
#line 268
{
  ;
  if (BasicServicesP__TimerAsync__isRunning()) {
#line 270
    BasicServicesP__TimerAsync__stop();
    }
#line 271
  BasicServicesP__TimerAsync__startOneShot(dt);
}

# 390 "TerraVMC.nc"
static void TerraVMC__ceu_track_ins(u8 stack, u8 tree, int chk, TerraVMC__tceu_nlbl lbl)
{
  ;
  {
#line 393
    int i;

#line 394
    if (chk) {
        for (i = 1; i <= (&TerraVMC__CEU_)->tracks_n; i++) {
            if (lbl == ((&TerraVMC__CEU_)->p_tracks + i)->lbl) {
                return;
              }
          }
      }
  }

  {
    int i;

    TerraVMC__tceu_trk trk = { 
    stack, 
    tree, 
    lbl };



    for (i = ++ (&TerraVMC__CEU_)->tracks_n; 
    i > 1 && TerraVMC__ceu_track_cmp(&trk, (&TerraVMC__CEU_)->p_tracks + i / 2); 
    i /= 2) {

        memcpy((&TerraVMC__CEU_)->p_tracks + i, (&TerraVMC__CEU_)->p_tracks + i / 2, sizeof(TerraVMC__tceu_trk ));
      }


    * (TerraVMC__tceu_trk *)((&TerraVMC__CEU_)->p_tracks + i) = trk;
  }
}

#line 376
static int TerraVMC__ceu_track_cmp(TerraVMC__tceu_trk *trk1, TerraVMC__tceu_trk *trk2)
#line 376
{
  ;

  if (trk1->stack != trk2->stack) {
      if (trk1->stack == (&TerraVMC__CEU_)->stack) {
        return 1;
        }
#line 382
      if (trk2->stack == (&TerraVMC__CEU_)->stack) {
        return 0;
        }
#line 384
      return trk1->stack > trk2->stack;
    }
  return trk1->tree > trk2->tree;
}

#line 683
static int TerraVMC__ceu_go(int *ret)
{

  TerraVMC__tceu_trk trk;
  TerraVMC__tceu_nlbl _lbl_;

  ;

  TerraVMC__procFlag = TRUE;
  (&TerraVMC__CEU_)->stack = 0x01;
  while (TerraVMC__ceu_track_rem(&trk, 1)) 
    {
      if (trk.stack != (&TerraVMC__CEU_)->stack) {
          (&TerraVMC__CEU_)->stack = trk.stack;
        }
      if (trk.lbl == TerraVMC__Inactive) {
        continue;
        }
      _lbl_ = trk.lbl;

      TerraVMC__execTrail(_lbl_);
    }

  TerraVMC__procFlag = FALSE;
  TerraVMC__procEvent__postTask();

  return 0;
}

#line 427
static int TerraVMC__ceu_track_rem(TerraVMC__tceu_trk *trk, u8 N)
{
  ;
  if ((&TerraVMC__CEU_)->tracks_n == 0) {
    return 0;
    }
  {
#line 433
    int i;
#line 433
    int cur;
    TerraVMC__tceu_trk *last;

    if (trk) {
      memcpy(trk, (&TerraVMC__CEU_)->p_tracks + N, sizeof(TerraVMC__tceu_trk ));
      }
    last = (&TerraVMC__CEU_)->p_tracks + (&TerraVMC__CEU_)->tracks_n--;

    for (i = N; i * 2 <= (&TerraVMC__CEU_)->tracks_n; i = cur) 
      {
        cur = i * 2;
        if (cur != (&TerraVMC__CEU_)->tracks_n && 
        TerraVMC__ceu_track_cmp((&TerraVMC__CEU_)->p_tracks + (cur + 1), (&TerraVMC__CEU_)->p_tracks + cur)) {
          cur++;
          }
        if (TerraVMC__ceu_track_cmp((&TerraVMC__CEU_)->p_tracks + cur, last)) {
          memcpy((&TerraVMC__CEU_)->p_tracks + i, (&TerraVMC__CEU_)->p_tracks + cur, sizeof(TerraVMC__tceu_trk ));
          }
        else {
#line 451
          break;
          }
      }
#line 453
    memcpy((&TerraVMC__CEU_)->p_tracks + i, last, sizeof(TerraVMC__tceu_trk ));
    return 1;
  }
}

#line 87
static uint8_t TerraVMC__getOpCode(uint8_t *Opcode, uint8_t *Modifier)
#line 87
{
  uint8_t i;

#line 89
  *Opcode = (uint8_t )__nesc_ntoh_uint8(TerraVMC__CEU_data[TerraVMC__PC].nxdata);
  *Modifier = (uint8_t )__nesc_ntoh_uint8(TerraVMC__CEU_data[TerraVMC__PC].nxdata);
  ;
  TerraVMC__PC++;
  for (i = 0; i < 6; i++) {
      if (*Opcode >= IS_RangeMask[i][0] && *Opcode <= IS_RangeMask[i][1]) {
          *Modifier = (uint8_t )(*Opcode & IS_RangeMask[i][2]);
          *Opcode = (uint8_t )(*Opcode & ~IS_RangeMask[i][2]);
          break;
        }
    }
  return *Opcode;
}

#line 220
static uint32_t TerraVMC__pop(void )
#line 220
{
  TerraVMC__currStack = TerraVMC__currStack + 4;
  return * (uint32_t *)(TerraVMC__CEU_data + TerraVMC__currStack - 4);
}

#line 193
static void TerraVMC__push(uint32_t value)
#line 193
{
  TerraVMC__currStack = TerraVMC__currStack - 4;
  ;
  if (TerraVMC__currStack > TerraVMC__ProgEnd) {
    * (uint32_t *)(TerraVMC__CEU_data + TerraVMC__currStack) = value;
    }
  else 
#line 198
    {
      TerraVMC__evtError(E_STKOVF);

      ;
      TerraVMC__haltedFlag = TRUE;
      TerraVMC__VMCustom__reset();
    }
}

#line 120
static void TerraVMC__evtError(uint8_t ecode)
#line 120
{
  evtData_t evtData;

#line 122
  ;

  __nesc_hton_uint8(TerraVMC__ExtDataSysError.nxdata, ecode);
  evtData.evtId = I_ERROR_ID;
  evtData.auxId = ecode;
  evtData.data = &TerraVMC__ExtDataSysError;
  TerraVMC__evtQ__enqueue(evtData);
  evtData.evtId = I_ERROR;
  evtData.auxId = 0;
  TerraVMC__evtQ__enqueue(evtData);
  if (TerraVMC__procFlag == FALSE) {
#line 132
    TerraVMC__procEvent__postTask();
    }
#line 133
  TerraVMC__TViewer("error", ecode, 0);
}

#line 224
static float TerraVMC__popf(void )
#line 224
{
  TerraVMC__currStack = TerraVMC__currStack + 4;
  return * (float *)(TerraVMC__CEU_data + TerraVMC__currStack - 4);
}

#line 206
static void TerraVMC__pushf(float value)
#line 206
{
  TerraVMC__currStack = TerraVMC__currStack - 4;
  ;
  if (TerraVMC__currStack > TerraVMC__ProgEnd) {
    * (float *)(TerraVMC__CEU_data + TerraVMC__currStack) = value;
    }
  else 
#line 211
    {
      TerraVMC__evtError(E_STKOVF);

      ;
      TerraVMC__haltedFlag = TRUE;
      TerraVMC__VMCustom__reset();
    }
}

# 69 "/home/branco/gitspace/Terra/TerraVM/src/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 229 "TerraVMC.nc"
static uint32_t TerraVMC__getMVal(uint16_t Maddr, uint8_t type)
#line 229
{
  switch (type) {
      case U8: return (uint32_t )__nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC__MEM + Maddr)).nxdata);
      case U16: return (uint32_t )__nesc_ntoh_uint16((* (nx_uint16_t *)(TerraVMC__MEM + Maddr)).nxdata);
      case U32: return (uint32_t )__nesc_ntoh_uint32((* (nx_uint32_t *)(TerraVMC__MEM + Maddr)).nxdata);
      case S8: return (uint32_t )__nesc_ntoh_int8((* (nx_int8_t *)(TerraVMC__MEM + Maddr)).nxdata);
      case S16: return (uint32_t )__nesc_ntoh_int16((* (nx_int16_t *)(TerraVMC__MEM + Maddr)).nxdata);
      case S32: return (uint32_t )__nesc_ntoh_int32((* (nx_int32_t *)(TerraVMC__MEM + Maddr)).nxdata);
    }
  ;
  return 0;
}

# 148 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustomP.nc"
static void VMCustomP__VM__procOutEvt(uint8_t id, uint32_t value)
#line 148
{
  ;
  switch (id) {

      case O_SEND: VMCustomP__proc_send(id, value);
#line 152
      break;
      case O_SEND_ACK: VMCustomP__proc_send_ack(id, value);
#line 153
      break;
      case O_CUSTOM_A: VMCustomP__proc_req_custom_a(id, value);
#line 154
      break;
      case O_CUSTOM: VMCustomP__proc_req_custom(id, value);
#line 155
      break;
    }
}

#line 39
static void VMCustomP__proc_send_x(uint16_t id, uint16_t addr, uint8_t ack)
#line 39
{
  usrMsg_t *usrMsg;
  uint8_t reqRetryAck;

#line 42
  usrMsg = (usrMsg_t *)VMCustomP__VM__getRealAddr(addr);
  ;

  reqRetryAck = ack ? 1 << REQ_ACK_BIT : 0;
  VMCustomP__BSRadio__send(AM_USRMSG, __nesc_ntoh_uint16(usrMsg->target.nxdata), usrMsg, sizeof(usrMsg_t ), reqRetryAck);
}

# 174 "TerraVMC.nc"
static uint8_t TerraVMC__getBits(uint8_t data, uint8_t stBit, uint8_t endBit)
#line 174
{
  uint8_t ret = 0;
  uint8_t pos;

#line 177
  for (pos = stBit; pos <= endBit; pos++) ret += (data & (1 << pos)) == 0 ? 0 : 1 << (pos - stBit);
  return ret;
}

#line 145
static uint16_t TerraVMC__getPar16(uint8_t p_len)
#line 145
{
  uint16_t temp = 0;
#line 146
  uint16_t temp2;
  uint8_t idx;

#line 148
  for (idx = 0; idx < p_len; idx++) {

      if (idx < sizeof(uint16_t )) {
          temp2 = (uint8_t )__nesc_ntoh_uint8(TerraVMC__CEU_data[TerraVMC__PC].nxdata);
          temp = temp + (temp2 << (p_len - 1 - idx) * 8);
        }
      TerraVMC__PC++;
    }
  ;
  return temp;
}

#line 517
static void TerraVMC__ceu_wclock_enable(int gte, s32 us, TerraVMC__tceu_nlbl lbl)
#line 517
{
  TerraVMC__tceu_wclock *tmr = (TerraVMC__tceu_wclock *)(TerraVMC__MEM + TerraVMC__wClock0 + gte * sizeof(TerraVMC__tceu_wclock ));
  s32 dt = us - (&TerraVMC__CEU_)->wclk_late;

  dt = dt < 0 ? 0 : dt;

  ;

  tmr->togo = dt;
  __nesc_hton_uint16((* (nx_uint16_t *)& tmr->lbl).nxdata, lbl);

  if (TerraVMC__ceu_wclock_lt(tmr)) {
      TerraVMC__ceu_out_wclock(dt);
    }
}

#line 507
static int TerraVMC__ceu_wclock_lt(TerraVMC__tceu_wclock *tmr)
#line 507
{
  ;

  if ((! (&TerraVMC__CEU_)->wclk_cur || (! (&TerraVMC__CEU_)->wclk_cur || (&TerraVMC__CEU_)->wclk_cur->togo == 0)) || (! (&TerraVMC__CEU_)->wclk_cur || tmr->togo < (&TerraVMC__CEU_)->wclk_cur->togo)) {
      (&TerraVMC__CEU_)->wclk_cur = tmr;
      return 1;
    }
  return 0;
}

# 252 "BasicServicesP.nc"
static void BasicServicesP__BSTimerVM__startOneShot(uint32_t dt)
#line 252
{
  ;
  if (BasicServicesP__TimerVM__isRunning()) {
#line 254
    BasicServicesP__TimerVM__stop();
    }
#line 255
  BasicServicesP__TimerVM__startOneShot(dt);
}

# 183 "TerraVMC.nc"
static uint32_t TerraVMC__unit2val(uint32_t val, uint8_t unit)
#line 183
{
  switch (unit) {
      case 0: return (uint32_t )val;
      case 1: return (uint32_t )(val * 1000L);
      case 2: return (uint32_t )(val * 60L * 1000L);
      case 3: return (uint32_t )(val * 60L * 60L * 1000L);
    }
  return val;
}

#line 159
static uint32_t TerraVMC__getPar32(uint8_t p_len)
#line 159
{
  uint32_t temp = 0L;
#line 160
  uint32_t temp2;
  uint8_t idx;

#line 162
  for (idx = 0; idx < p_len; idx++) {

      if (idx < sizeof(uint32_t )) {
          temp2 = (uint8_t )__nesc_ntoh_uint8(TerraVMC__CEU_data[TerraVMC__PC].nxdata);
          temp = temp + (temp2 << (p_len - 1 - idx) * 8);
        }
      TerraVMC__PC++;
    }
  ;
  return temp;
}

#line 245
static void TerraVMC__setMVal(uint32_t buffer, uint16_t Maddr, uint8_t fromTp, uint8_t toTp)
#line 245
{
  if (fromTp == F32) {
      float value = * (float *)&buffer;

#line 248
      switch (toTp) {
          case U8: __nesc_hton_uint8((* (nx_uint8_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint8_t )value);
#line 249
          return;
          case U16: __nesc_hton_uint16((* (nx_uint16_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint16_t )value);
#line 250
          return;
          case U32: __nesc_hton_uint32((* (nx_uint32_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint32_t )value);
#line 251
          return;
          case F32: __nesc_hton_afloat((* (nx_float *)(TerraVMC__MEM + Maddr)).nxdata, (float )value);
          case S8: __nesc_hton_int8((* (nx_int8_t *)(TerraVMC__MEM + Maddr)).nxdata, (int8_t )value);
#line 253
          return;
          case S16: __nesc_hton_int16((* (nx_int16_t *)(TerraVMC__MEM + Maddr)).nxdata, (int16_t )value);
#line 254
          return;
          case S32: __nesc_hton_int32((* (nx_int32_t *)(TerraVMC__MEM + Maddr)).nxdata, (int32_t )value);
#line 255
          return;
        }
    }
  else 
#line 257
    {
      if (fromTp <= F32) {
          uint32_t value = * (uint32_t *)&buffer;

#line 260
          switch (toTp) {
              case U8: __nesc_hton_uint8((* (nx_uint8_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint8_t )value);
#line 261
              return;
              case U16: __nesc_hton_uint16((* (nx_uint16_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint16_t )value);
#line 262
              return;
              case U32: __nesc_hton_uint32((* (nx_uint32_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint32_t )value);
#line 263
              return;
              case F32: __nesc_hton_afloat((* (nx_float *)(TerraVMC__MEM + Maddr)).nxdata, (float )value);
              case S8: __nesc_hton_int8((* (nx_int8_t *)(TerraVMC__MEM + Maddr)).nxdata, (int8_t )value);
#line 265
              return;
              case S16: __nesc_hton_int16((* (nx_int16_t *)(TerraVMC__MEM + Maddr)).nxdata, (int16_t )value);
#line 266
              return;
              case S32: __nesc_hton_int32((* (nx_int32_t *)(TerraVMC__MEM + Maddr)).nxdata, (int32_t )value);
#line 267
              return;
            }
        }
      else 
#line 269
        {
          int32_t value = * (int32_t *)&buffer;

#line 271
          switch (toTp) {
              case U8: __nesc_hton_uint8((* (nx_uint8_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint8_t )value);
#line 272
              return;
              case U16: __nesc_hton_uint16((* (nx_uint16_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint16_t )value);
#line 273
              return;
              case U32: __nesc_hton_uint32((* (nx_uint32_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint32_t )value);
#line 274
              return;
              case F32: __nesc_hton_afloat((* (nx_float *)(TerraVMC__MEM + Maddr)).nxdata, (float )value);
              case S8: __nesc_hton_int8((* (nx_int8_t *)(TerraVMC__MEM + Maddr)).nxdata, (int8_t )value);
#line 276
              return;
              case S16: __nesc_hton_int16((* (nx_int16_t *)(TerraVMC__MEM + Maddr)).nxdata, (int16_t )value);
#line 277
              return;
              case S32: __nesc_hton_int32((* (nx_int32_t *)(TerraVMC__MEM + Maddr)).nxdata, (int32_t )value);
#line 278
              return;
            }
        }
    }
  ;
}

#line 477
static void TerraVMC__ceu_trigger(TerraVMC__tceu_noff off, uint8_t auxId)
{
  int i;
  uint8_t slotSize;
#line 480
  uint8_t evtId;
#line 480
  uint8_t slotAuxId;
  int n = * (char *)((&TerraVMC__CEU_)->p_mem + off) & 0x7f;

#line 482
  evtId = * (char *)((&TerraVMC__CEU_)->p_mem + off - 1);
  slotSize = * (char *)((&TerraVMC__CEU_)->p_mem + off) & 0x80 ? 3 : 2;
  ;
  for (i = 0; i < n; i++) {

      if (slotSize == 2) {
          TerraVMC__ceu_spawn((TerraVMC__tceu_nlbl *)((&TerraVMC__CEU_)->p_mem + off + 1 + i * slotSize));
        }
      else 
#line 489
        {
          slotAuxId = * (char *)((&TerraVMC__CEU_)->p_mem + off + 1 + i * slotSize);
          ;
          if (slotAuxId == auxId) {
              TerraVMC__ceu_spawn((TerraVMC__tceu_nlbl *)((&TerraVMC__CEU_)->p_mem + off + 2 + i * slotSize));
            }
        }
    }
}

#line 468
static void TerraVMC__ceu_spawn(TerraVMC__tceu_nlbl *lbl)
{

  if (__nesc_ntoh_uint16((* (nx_uint16_t *)lbl).nxdata) != TerraVMC__Inactive) {
      TerraVMC__ceu_track_ins((&TerraVMC__CEU_)->stack, 0xFF, 0, __nesc_ntoh_uint16((* (nx_uint16_t *)lbl).nxdata));
      __nesc_hton_uint16((* (nx_uint16_t *)lbl).nxdata, TerraVMC__Inactive);
    }
}

# 147 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type )now << 4, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type )remaining << 4);
}

# 60 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__read(void *Data)
#line 60
{
  ;

  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize <= 0) {
#line 63
    return FAIL;
    }
  memcpy(Data, (void *)&/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qData[/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qHead], sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataType ));
  return SUCCESS;
}

#line 37
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__get(void *Data)
#line 37
{
  ;

  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize <= 0) {
#line 40
      /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__flagFreeQ = TRUE;
#line 40
      return FAIL;
    }
  memcpy(Data, (void *)&/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qData[/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qHead], sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataType ));
  /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qHead++;
#line 43
  /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qHead = (uint8_t )(/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qHead % 10);
  /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize--;
  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize <= 0) {
#line 45
    /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__flagFreeQ = TRUE;
    }
#line 46
  return SUCCESS;
}

# 206 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/VMCustomP.nc"
static void VMCustomP__BSRadio__sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked)
#line 206
{
  ;
  if (am_id == AM_USRMSG) {
      __nesc_hton_uint8(VMCustomP__ExtDataWasAcked.nxdata, (uint8_t )wasAcked);
      VMCustomP__VM__queueEvt(I_SEND_DONE_ACK_ID, __nesc_ntoh_uint8(((usrMsg_t *)dataMsg)->type.nxdata), &VMCustomP__ExtDataWasAcked);
      VMCustomP__VM__queueEvt(I_SEND_DONE_ACK, 0, &VMCustomP__ExtDataWasAcked);
    }
  else 
#line 212
    {
      ;
    }
}

#line 196
static void VMCustomP__BSRadio__sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error)
#line 196
{
  ;
  if (am_id == AM_USRMSG) {
      __nesc_hton_uint8(VMCustomP__ExtDataSendDoneError.nxdata, (uint8_t )error);
      VMCustomP__VM__queueEvt(I_SEND_DONE_ID, __nesc_ntoh_uint8(((usrMsg_t *)dataMsg)->type.nxdata), &VMCustomP__ExtDataSendDoneError);
      VMCustomP__VM__queueEvt(I_SEND_DONE, 0, &VMCustomP__ExtDataSendDoneError);
    }
  else 
#line 202
    {
      ;
    }
}

# 21 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__put(void *Data)
#line 21
{
  ;

  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qSize >= 5) {
      return FAIL;
    }

  memcpy((void *)&/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qData[/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qTail], Data, sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataType ));
  /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qTail++;
#line 29
  /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qTail = (uint8_t )(/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qTail % 5);
  /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qSize++;
  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__flagFreeQ == TRUE) {
      /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__flagFreeQ = FALSE;
#line 32
      /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady__postTask();
    }
  return SUCCESS;
}

# 153 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialActiveMessageP.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(message_t *amsg)
#line 153
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 155
  return __nesc_ntoh_uint16(header->src.nxdata);
}

# 147 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMPacket.nc"
static am_id_t BasicServicesP__RadioAMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 128 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartP.nc"
static error_t Atm328pUsartP__StdControl__stop(void )
{
  if (!Atm328pUsartP__HplPower__isUsartPowered()) {
    return SUCCESS;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 133
    {
      if (Atm328pUsartP__tx.buf) 
        {
          Atm328pUsartP__UartStream__sendDone(Atm328pUsartP__tx.buf, Atm328pUsartP__tx.len, FAIL);
          Atm328pUsartP__tx.buf = 0;
        }
      if (Atm328pUsartP__rx.buf) 
        {
          Atm328pUsartP__UartStream__receiveDone(Atm328pUsartP__rx.buf, Atm328pUsartP__rx.len, FAIL);
          Atm328pUsartP__rx.buf = 0;
        }




      Atm328pUsartP__HplUsart__disableDreInterrupt();
      Atm328pUsartP__HplUsart__disableTxcInterrupt();
      Atm328pUsartP__HplUsart__disableRxcInterrupt();

      Atm328pUsartP__HplRxControl__stop();
      Atm328pUsartP__HplTxControl__stop();

      * (volatile uint8_t *)0x64 |= (uint8_t )(1 << 1);
      Atm328pUsartP__McuPowerState__update();

      {
        unsigned char __nesc_temp = 
#line 158
        SUCCESS;

        {
#line 158
          __nesc_atomic_end(__nesc_atomic); 
#line 158
          return __nesc_temp;
        }
      }
    }
#line 161
    __nesc_atomic_end(__nesc_atomic); }
}

# 118 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/HdlcTranslateC.nc"
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  /* atomic removed: atomic calls only */
#line 120
  {
    if (HdlcTranslateC__state.sendEscape) {
        HdlcTranslateC__state.sendEscape = 0;
        HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
        HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
      }
    else {
        HdlcTranslateC__SerialFrameComm__putDone();
      }
  }
}

# 164 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/Atm328pUsartP.nc"
static error_t Atm328pUsartP__UartStream__send(uint8_t *buf, uint16_t len)
{
  do {
#line 166
      if (!Atm328pUsartP__HplPower__isUsartPowered()) {
#line 166
        return EOFF;
        }
    }
  while (
#line 166
  0);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    {
      if (Atm328pUsartP__tx.buf) 
        {
          unsigned char __nesc_temp = 
#line 169
          FAIL;

          {
#line 169
            __nesc_atomic_end(__nesc_atomic); 
#line 169
            return __nesc_temp;
          }
        }
#line 171
      Atm328pUsartP__tx.buf = buf;
      Atm328pUsartP__tx.len = len;
      Atm328pUsartP__tx.idx = 0;

      Atm328pUsartP__HplUsart__enableDreInterrupt();
    }
#line 176
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 106 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 91 "/home/branco/gitspace/Terra/TerraVM/src/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b)
#line 91
{
  crc = (uint8_t )(crc >> 8) | (crc << 8);
  crc ^= b;
  crc ^= (uint8_t )(crc & 0xff) >> 4;
  crc ^= crc << 12;
  crc ^= (crc & 0xff) << 5;
  return crc;
}

# 98 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 518 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 518
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 519
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 525
    __nesc_atomic_end(__nesc_atomic); }
}

# 1168 "BasicServicesP.nc"
static void BasicServicesP__sendReqProgBlock(reqProgBlock_t *Data)
#line 1168
{
  ;
  memcpy(& BasicServicesP__tempInputOutQ.Data, Data, sizeof(reqProgBlock_t ));
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.AM_ID.nxdata, AM_REQPROGBLOCK);
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.DataSize.nxdata, sizeof(reqProgBlock_t ));
  __nesc_hton_uint16(BasicServicesP__tempInputOutQ.sendToMote.nxdata, __nesc_ntoh_uint16(BasicServicesP__ProgMoteSource.nxdata));
  __nesc_hton_uint8(BasicServicesP__tempInputOutQ.reqAck.nxdata, 0);
  if (BasicServicesP__outQ__put(&BasicServicesP__tempInputOutQ) != SUCCESS) {
      ;
    }
}

# 357 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 979 "BasicServicesP.nc"
static void BasicServicesP__sendRadioN(void )
#line 979
{
  error_t err;

#line 981
  ;
  memcpy(BasicServicesP__RadioPacket__getPayload(&BasicServicesP__sendBuff, BasicServicesP__RadioPacket__maxPayloadLength()), & BasicServicesP__tempOutputOutQ.Data, __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.DataSize.nxdata));




  if ((__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.reqAck.nxdata) & (1 << REQ_ACK_BIT)) > 0) {
      if (BasicServicesP__RadioAck__requestAck(&BasicServicesP__sendBuff) != SUCCESS) {
#line 988
        ;
        }
    }
  else 
#line 989
    {
      if (BasicServicesP__RadioAck__noAck(&BasicServicesP__sendBuff) != SUCCESS) {
#line 990
        ;
        }
    }
  if (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.RFPower.nxdata) > 0) {
#line 993
    BasicServicesP__AMAux__setPower(&BasicServicesP__sendBuff, __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.RFPower.nxdata));
    }
#line 994
  err = BasicServicesP__RadioSender_send(__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata), __nesc_ntoh_uint16(BasicServicesP__tempOutputOutQ.sendToMote.nxdata), &BasicServicesP__sendBuff, __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.DataSize.nxdata));
  if (err != SUCCESS) {
      ;
      BasicServicesP__sendTimer__startOneShot(BasicServicesP__reSendDelay);
    }
  else 
#line 998
    {
      BasicServicesP__TViewer("radio", __nesc_ntoh_uint16(BasicServicesP__tempOutputOutQ.sendToMote.nxdata), 0);
    }
}

# 37 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__get(void *Data)
#line 37
{
  ;

  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qSize <= 0) {
#line 40
      /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__flagFreeQ = TRUE;
#line 40
      return FAIL;
    }
  memcpy(Data, (void *)&/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qData[/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qHead], sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataType ));
  /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qHead++;
#line 43
  /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qHead = (uint8_t )(/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qHead % 5);
  /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qSize--;
  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qSize <= 0) {
#line 45
    /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__flagFreeQ = TRUE;
    }
#line 46
  return SUCCESS;
}

# 85 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
static /*TerraVMAppC.evtQ*/QueueC__0__queue_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*TerraVMAppC.evtQ*/QueueC__0__queue_t t = /*TerraVMAppC.evtQ*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*TerraVMAppC.evtQ*/QueueC__0__Queue__empty()) {
      /*TerraVMAppC.evtQ*/QueueC__0__head++;
      if (/*TerraVMAppC.evtQ*/QueueC__0__head == 6) {
#line 90
        /*TerraVMAppC.evtQ*/QueueC__0__head = 0;
        }
#line 91
      /*TerraVMAppC.evtQ*/QueueC__0__size--;
      /*TerraVMAppC.evtQ*/QueueC__0__printQueue();
    }
  return t;
}

# 118 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVectorC.nc"
static bool /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__isAllBitSet(void )
{
  uint16_t elnum;

#line 121
  for (elnum = 0; elnum < /*BasicServicesC.Bitmap*/vmBitVectorC__0__ARRAY_SIZE; elnum++) 
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 122
      {
#line 122
        if (/*BasicServicesC.Bitmap*/vmBitVectorC__0__m_bits[elnum] != 0xff) {
            unsigned char __nesc_temp = 
#line 122
            FALSE;

            {
#line 122
              __nesc_atomic_end(__nesc_atomic); 
#line 122
              return __nesc_temp;
            }
          }
      }
#line 125
      __nesc_atomic_end(__nesc_atomic); }
#line 123
  return TRUE;
}

# 1784 "TerraVMC.nc"
static void TerraVMC__BSUpload__start(bool resetFlag)
#line 1784
{
  uint8_t i;
#line 1785
  uint8_t size;

#line 1786
  __nesc_hton_uint16(TerraVMC__MoteID.nxdata, TOS_NODE_ID);
  ;
  if (resetFlag == TRUE) {

      size = TerraVMC__evtQ__size();
      for (i = 0; i < size; i++) TerraVMC__evtQ__dequeue();
    }
  TerraVMC__haltedFlag = FALSE;


  TerraVMC__VMCustom__reset();
  TerraVMC__TViewer("error", 0, 0);

  TerraVMC__ceu_boot();
}

# 288 "BasicServicesP.nc"
static uint16_t BasicServicesP__getNextEmptyBlock(void )
#line 288
{
  uint16_t i;

#line 290
  for (i = 0; i < CURRENT_MAX_BLOCKS; i++) {
      if (!BasicServicesP__BM__get(i)) {
#line 291
        return i;
        }
    }
#line 293
  return CURRENT_MAX_BLOCKS;
}

# 201 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
__attribute((signal))   void __vector_18(void )
{
  HplAtm328pUsartP__Usart__rxDone();
}

# 412 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 296 "/home/branco/gitspace/Terra/TerraVM/src/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 206 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/usart/HplAtm328pUsartP.nc"
__attribute((signal))   void __vector_19(void )
{
  HplAtm328pUsartP__Usart__txNowEmpty();
}

__attribute((signal))   void __vector_20(void )
{
  HplAtm328pUsartP__Usart__txDone();
}

# 40 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pAlarmIsr0P.nc"
__attribute((signal))   void __vector_14(void )
{
  HplAtm328pAlarmIsr0P__InterruptA__fired();
}

__attribute((signal))   void __vector_15(void )
{
  HplAtm328pAlarmIsr0P__InterruptB__fired();
}

# 46 "/home/branco/gitspace/Terra/TerraVM/src/platforms/InoUno/tos_uno/chips/atm328p/timer/HplAtm328pTimer0P.nc"
__attribute((signal))   void __vector_16(void )
{
  HplAtm328pTimer0P__Timer__overflow();
}

