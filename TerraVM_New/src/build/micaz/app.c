#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.1.2/include/stddef.h" 3
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
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
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
# 77 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;






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
# 116 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern int memcmp(const void *arg_0x40321728, const void *arg_0x403218c0, size_t arg_0x40321a58) __attribute((__pure__)) ;
extern void *memcpy(void *arg_0x40324010, const void *arg_0x403241a8, size_t arg_0x40324340);



extern void *memset(void *arg_0x40327350, int arg_0x403274a8, size_t arg_0x40327640);
# 71 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
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


typedef int (*__compar_fn_t)(const void *arg_0x40339730, const void *arg_0x403398c8);
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
# 239 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 234
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 211 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.1.2/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 88 "/opt/tinyos-2.1.2/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 108
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 118
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;

static __inline float __nesc_ntoh_afloat(const void * source)  ;





static __inline float __nesc_hton_afloat(void * target, float value)  ;
# 43 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "/home/branco/gitspace/Terra/TerraVM/src/system/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4260 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4261 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4262 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 52 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4263 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4264 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4265 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4266 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4267 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4268 {

  uint8_t flat;
  struct __nesc_unnamed4269 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4270 {

  uint8_t flat;
  struct __nesc_unnamed4271 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4278 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4279 {

  uint8_t flat;
  struct __nesc_unnamed4280 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4281 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.1.2/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4290 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4291 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4292 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4293 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4294 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4295 {
  PLATFORM_MHZ = 8
};
# 62 "/opt/tinyos-2.1.2/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4296 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4297 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};


enum __nesc_unnamed4298 {
  PLATFORM_BAUDRATE = 57600L
};
# 6 "VMData.h"
enum __nesc_unnamed4299 {

  MSG_BUFF_SIZE = 28, 
  BLOCK_SIZE = 24, 
  SET_DATA_SIZE = 18, 
  SEND_DATA_SIZE = 16, 


  CURRENT_MAX_BLOCKS = 88
};
# 4 "VMError.h"
enum __nesc_unnamed4300 {


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

enum __nesc_unnamed4301 {



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
enum __nesc_unnamed4302 {



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
# 39 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4303 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 29 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4304 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/home/branco/gitspace/Terra/TerraVM/src/system/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4305 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4306 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/home/branco/gitspace/Terra/TerraVM/src/system/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4307 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4308 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4309 {
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
# 60 "/opt/tinyos-2.1.2/tos/platforms/micaz/platform_message.h"
#line 57
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 62
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 66
typedef union message_metadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/home/branco/gitspace/Terra/TerraVM/src/system/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[29];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 40 "/opt/tinyos-2.1.2/tos/types/IeeeEui64.h"
enum __nesc_unnamed4310 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/opt/tinyos-2.1.2/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4311 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4312 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4313 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4314 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 43 "/opt/tinyos-2.1.2/tos/types/Leds.h"
enum __nesc_unnamed4315 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 41 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4316 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 58
#line 49
typedef struct __nesc_unnamed4317 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 59
typedef union __nesc_unnamed4318 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 67
typedef struct __nesc_unnamed4319 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 74
typedef union __nesc_unnamed4320 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/tinyos-2.1.2/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 43 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;





#line 45
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  timesync_radio_t timestamp;
} __attribute__((packed)) timesync_footer_t;
# 14 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/usrMsg.h"
enum __nesc_unnamed4321 {
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
# 14 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustom.h"
enum __nesc_unnamed4322 {



  O_LEDS = 5, 
  O_LED0 = 6, 
  O_LED1 = 7, 
  O_LED2 = 8, 
  O_TEMP = 9, 
  O_PHOTO = 10, 
  O_VOLTS = 11, 
  O_PORT_A = 12, 
  O_PORT_B = 13, 
  O_CFG_PORT_A = 14, 
  O_CFG_PORT_B = 15, 
  O_REQ_PORT_A = 16, 
  O_REQ_PORT_B = 17, 
  O_CFG_INT_A = 18, 
  O_CFG_INT_B = 19, 
  O_CUSTOM_A = 20, 
  O_REQ_MIC = 21, 
  O_BEEP = 22, 
  O_CUSTOM = 23, 

  O_SEND = 40, 
  O_SEND_ACK = 41, 




  I_TEMP = 5, 
  I_PHOTO = 6, 
  I_VOLTS = 7, 
  I_PORT_A = 8, 
  I_PORT_B = 9, 
  I_INT_A = 10, 
  I_INT_B = 11, 
  I_CUSTOM_A_ID = 12, 
  I_CUSTOM_A = 13, 
  I_MIC = 14, 
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
  F_FFT_ALLOC = 14, 
  F_FFT = 15, 
  F_SETUP_MIC = 16, 
  F_RFPOWER = 17, 


  TID_SENSOR_DONE = 0 << 5, 
  TID_TIMER_TRIGGER = 1 << 5, 
  TID_MSG_DONE = 2 << 5, 
  TID_MSG_REC = 3 << 5, 


  SENSOR_COUNT = 10, 
  SID_TEMP = 1, 
  SID_PHOTO = 2, 
  SID_LEDS = 3, 
  SID_VOLT = 4, 
  SID_IN1 = 5, 
  SID_IN2 = 6, 
  SID_INT1 = 7, 
  SID_INT2 = 8, 
  SID_MIC = 9
};






#line 99
typedef nx_struct qData {
  nx_uint8_t id;
  nx_uint8_t data[SEND_DATA_SIZE];
  nx_uint8_t len;
} __attribute__((packed)) qData_t;
# 5 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.h"
enum __nesc_unnamed4323 {

  SENSOR_CTL_BIT = 6, 
  REQ_SOURCE1 = 0, 
  REQ_SOURCE2 = 1, 
  REQ_SOURCE3 = 2, 
  REQ_SOURCE4 = 3, 


  AID_LEDS = 1, 
  AID_LED0 = 2, 
  AID_LED1 = 3, 
  AID_LED2 = 4, 
  AID_LED0_TOGGLE = 5, 
  AID_LED1_TOGGLE = 6, 
  AID_LED2_TOGGLE = 7, 
  AID_OUT1 = 8, 
  AID_OUT2 = 9, 
  AID_PIN1 = 10, 
  AID_PIN2 = 11, 
  AID_INT1 = 12, 
  AID_INT2 = 13, 
  AID_SOUNDER = 14
};
typedef evtData_t TerraVMC__evtQ__t;
typedef TMilli BasicServicesP__SendDataFullTimer__precision_tag;
typedef TMilli BasicServicesP__TimerAsync__precision_tag;
typedef TMilli BasicServicesP__ProgReqTimer__precision_tag;
typedef TMilli BasicServicesP__TimerVM__precision_tag;
typedef TMilli BasicServicesP__sendTimer__precision_tag;
enum CC2420ActiveMessageC____nesc_unnamed4324 {
  CC2420ActiveMessageC__CC2420_AM_SEND_ID = 0U
};
typedef T32khz CC2420ControlP__StartupTimer__precision_tag;
typedef uint32_t CC2420ControlP__StartupTimer__size_type;
typedef uint16_t CC2420ControlP__ReadRssi__val_t;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef uint8_t HplAtm128Timer0AsyncP__Timer__timer_size;
typedef uint16_t HplAtm128Timer1P__CompareA__size_type;
typedef uint16_t HplAtm128Timer1P__Capture__size_type;
typedef uint16_t HplAtm128Timer1P__CompareB__size_type;
typedef uint16_t HplAtm128Timer1P__CompareC__size_type;
typedef uint16_t HplAtm128Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16*/AlarmOne16C__0____nesc_unnamed4325 {
  AlarmOne16C__0__COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TOne /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type;
typedef uint16_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC__0____nesc_unnamed4326 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1____nesc_unnamed4327 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC__2____nesc_unnamed4328 {
  CC2420SpiC__2__CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420TransmitP__PacketTimeStamp__size_type;
typedef T32khz CC2420TransmitP__BackoffTimer__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffTimer__size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC__3____nesc_unnamed4329 {
  CC2420SpiC__3__CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420ReceiveP__PacketTimeStamp__size_type;
typedef T32khz CC2420PacketP__PacketTimeStamp32khz__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStamp32khz__size_type;
typedef T32khz CC2420PacketP__LocalTime32khz__precision_tag;
typedef TMilli CC2420PacketP__LocalTimeMilli__precision_tag;
typedef TMilli CC2420PacketP__PacketTimeStampMilli__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStampMilli__size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum HilTimerMilliC____nesc_unnamed4330 {
  HilTimerMilliC__TIMER_COUNT = 9U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__4____nesc_unnamed4331 {
  CC2420SpiC__4__CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum CC2420TinyosNetworkC____nesc_unnamed4332 {
  CC2420TinyosNetworkC__TINYOS_N_NETWORKS = 1U
};
typedef GenericData_t /*BasicServicesC.inQueue*/dataQueueC__0__dataType;
typedef /*BasicServicesC.inQueue*/dataQueueC__0__dataType /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataType;
typedef GenericData_t /*BasicServicesC.outQueue*/dataQueueC__1__dataType;
typedef /*BasicServicesC.outQueue*/dataQueueC__1__dataType /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataType;
typedef uint16_t SensActP__S_VOLT__val_t;
typedef uint16_t SensActP__S_TEMP__val_t;
typedef uint16_t SensActP__S_PHOTO__val_t;
typedef uint16_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Read__val_t;
typedef uint16_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__ActualRead__val_t;
typedef TMilli /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Timer__precision_tag;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t;
enum /*TempImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__0____nesc_unnamed4333 {
  AdcReadNowClientC__0__ID = 0U, AdcReadNowClientC__0__HAL_ID = 0U
};
typedef uint16_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__width_t;
typedef /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__width_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__val_t;
typedef /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__width_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Service__val_t;
typedef uint16_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Read__val_t;
typedef uint16_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__ActualRead__val_t;
typedef TMilli /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Timer__precision_tag;
enum /*PhotoImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__1____nesc_unnamed4334 {
  AdcReadNowClientC__1__ID = 1U, AdcReadNowClientC__1__HAL_ID = 1U
};
typedef uint16_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__width_t;
typedef /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__width_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__val_t;
typedef /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__width_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Service__val_t;
enum /*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0____nesc_unnamed4335 {
  AdcReadClientC__0__ID = 2U, AdcReadClientC__0__HAL_ID = 2U
};
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
static error_t MotePlatformP__PlatformInit__init(void );
# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 46
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void );
static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeInput(void );
static bool /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__isInput(void );

static bool /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__isOutput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__get(void );


static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeInput(void );
static bool /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__isInput(void );

static bool /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__isOutput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__get(void );


static void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void );
static void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__set(void );
static void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__clr(void );

static bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
uint8_t arg_0x403f4c40);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
uint8_t arg_0x403f4c40);
# 57 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void BasicServicesP__ProgReqTimerTask__runTask(void );
# 9 "BSRadio.nc"
static error_t BasicServicesP__BSRadio__send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck);




static void BasicServicesP__BSRadio__setRFPower(uint8_t powerIdx);
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP__SendDataFullTimer__fired(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void BasicServicesP__sendNextMsg__runTask(void );
# 110 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
static void BasicServicesP__RadioSender__sendDone(
# 27 "BasicServicesP.nc"
am_id_t arg_0x40722a60, 
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
am_id_t arg_0x40711010, 
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
# 104 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static error_t CC2420CsmaP__SplitControl__start(void );
# 81 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 73 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP__CC2420Transmit__sendDone(message_t * p_msg, error_t error);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t CC2420CsmaP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
# 76 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420CsmaP__CC2420Power__startVRegDone(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420CsmaP__Resource__granted(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void CC2420CsmaP__sendDone_task__runTask(void );
#line 75
static void CC2420CsmaP__stopDone_task__runTask(void );
#line 75
static void CC2420CsmaP__startDone_task__runTask(void );
# 93 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 117
static bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );
#line 112
static bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );
#line 66
static ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );
#line 54
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 77
static uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void CC2420ControlP__StartupTimer__fired(void );
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__default__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void CC2420ControlP__syncDone__runTask(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
#line 102
static void CC2420ControlP__SyncResource__granted(void );
# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void CC2420ControlP__sync__runTask(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 88
static error_t CC2420ControlP__Resource__request(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420ControlP__RssiResource__granted(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t control);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP__Timer__timer_size HplAtm128Timer0AsyncP__Timer__get(void );
# 50 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 46
static Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );
# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__reset(void );
#line 54
static void HplAtm128Timer1P__CompareA__set(HplAtm128Timer1P__CompareA__size_type t);










static void HplAtm128Timer1P__CompareA__start(void );


static void HplAtm128Timer1P__CompareA__stop(void );
# 88 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__setEdge(bool up);
#line 47
static HplAtm128Timer1P__Capture__size_type HplAtm128Timer1P__Capture__get(void );
#line 64
static void HplAtm128Timer1P__Capture__reset(void );


static void HplAtm128Timer1P__Capture__start(void );


static void HplAtm128Timer1P__Capture__stop(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__default__fired(void );
#line 58
static void HplAtm128Timer1P__CompareC__default__fired(void );
# 87 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer1P__Timer__test(void );
#line 61
static HplAtm128Timer1P__Timer__timer_size HplAtm128Timer1P__Timer__get(void );
#line 104
static void HplAtm128Timer1P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm128Timer1P__Timer__set(HplAtm128Timer1P__Timer__timer_size t);










static void HplAtm128Timer1P__Timer__start(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 103 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 64 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
# 109 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);
#line 66
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t NoInitC__Init__init(void );
# 54 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void );
#line 66
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void );
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__size_type t);
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void );
#line 54
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__disable(void );
#line 70
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__edge(bool low_to_high);
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__disable(void );
#line 70
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__edge(bool low_to_high);
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );
#line 48
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );
#line 48
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void );
#line 51
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void );
#line 70
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high);
#line 46
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
#line 48
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t HplCC2420InterruptsP__CCA__disable(void );
#line 53
static error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void HplCC2420InterruptsP__CCATask__runTask(void );
# 82 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6b38, 
# 62 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6b38, 
# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6b38, 
# 82 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6b38, 
# 51 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6b38, 
# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 47 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x40ac55b0, 
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 48 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac5d58, 
# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 48 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac5d58, 
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 45 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6108);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 45 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6108);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 45 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6108);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 45 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6108);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 45 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6108);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 49 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac3540);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 56 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
uint8_t arg_0x40b10668);
# 66 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
uint8_t arg_0x40b10668, 
# 66 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
uint8_t arg_0x40b10668);
# 45 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
uint8_t arg_0x40b10668, 
# 45 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP__State__forceState(
# 67 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
uint8_t arg_0x40b10668, 
# 51 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
uint8_t reqState);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 70 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
static error_t Atm128SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void Atm128SpiP__ResourceArbiter__granted(
# 99 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40b19068);
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 109 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__release(
# 95 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40b1b398);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__immediateRequest(
# 95 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40b1b398);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__request(
# 95 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40b1b398);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__default__granted(
# 95 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40b1b398);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool Atm128SpiP__Resource__isOwner(
# 95 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40b1b398);
# 89 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 83
static void HplAtm128SpiP__SPI__initMaster(void );
#line 122
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 113
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 97
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 141
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 131
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);




static bool HplAtm128SpiP__SPI__isInterruptPending(void );
#line 125
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 103
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 116
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 128
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bbf030);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bbf030);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bbfc60);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bbfc60);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bc15d8);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bc15d8);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bc15d8);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bc15d8);
# 90 "/opt/tinyos-2.1.2/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t HplCC2420SpiP__Resource__release(void );
#line 97
static error_t HplCC2420SpiP__Resource__immediateRequest(void );
#line 88
static error_t HplCC2420SpiP__Resource__request(void );
#line 128
static bool HplCC2420SpiP__Resource__isOwner(void );
#line 102
static void HplCC2420SpiP__SubResource__granted(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );





static void LedsP__Leds__led0Toggle(void );




static void LedsP__Leds__led1On(void );










static void LedsP__Leds__led1Toggle(void );
#line 100
static void LedsP__Leds__led2Toggle(void );
#line 117
static uint8_t LedsP__Leds__get(void );
#line 77
static void LedsP__Leds__led1Off(void );
#line 94
static void LedsP__Leds__led2Off(void );
#line 134
static void LedsP__Leds__set(uint8_t val);
#line 56
static void LedsP__Leds__led0On(void );
#line 89
static void LedsP__Leds__led2On(void );
# 55 "/opt/tinyos-2.1.2/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 48 "/opt/tinyos-2.1.2/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void );
# 66 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void CC2420TransmitP__BackoffTimer__fired(void );
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
# 51 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
# 24 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420TransmitP__SpiResource__granted(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP__StdControl__start(void );









static error_t CC2420TransmitP__StdControl__stop(void );
# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP__CC2420Config__syncDone(error_t error);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void CC2420ReceiveP__receiveDone_task__runTask(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP__StdControl__start(void );









static error_t CC2420ReceiveP__StdControl__stop(void );
# 56 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420PacketP__CC2420Packet__setPower(message_t *p_msg, uint8_t power);
#line 77
static void CC2420PacketP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg);
# 70 "/opt/tinyos-2.1.2/tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(
#line 66
message_t * msg);
#line 78
static void CC2420PacketP__PacketTimeStamp32khz__set(
#line 73
message_t * msg, 




CC2420PacketP__PacketTimeStamp32khz__size_type value);
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420PacketP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420PacketP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 59 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/PacketAcknowledgements.nc"
static error_t CC2420PacketP__Acks__requestAck(
#line 53
message_t * msg);
#line 71
static error_t CC2420PacketP__Acks__noAck(
#line 65
message_t * msg);
#line 85
static bool CC2420PacketP__Acks__wasAcked(
#line 80
message_t * msg);
# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 109 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 64 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x40df3708);
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x40df3708);
# 92 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x40df3708);
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x40df3708, 
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x40df3708);
# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void UniqueSendP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
#line 75
static error_t UniqueSendP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t UniqueSendP__Send__maxPayloadLength(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t UniqueSendP__Init__init(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t UniqueReceiveP__Init__init(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void CC2420TinyosNetworkP__grantTask__runTask(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__ActiveSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

CC2420TinyosNetworkP__ActiveSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 112
static uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__BareReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__release(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40e75628);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__immediateRequest(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40e75628);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__request(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40e75628);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__default__granted(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40e75628);
# 125 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static 
#line 123
void * 

CC2420TinyosNetworkP__BareSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 100
static void CC2420TinyosNetworkP__BareSend__default__sendDone(
#line 96
message_t * msg, 



error_t error);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void CC2420ActiveMessageP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);
# 95 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__default__requestCca(
# 54 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40eee148, 
# 95 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(
# 54 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40eee148, 
# 81 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(
# 54 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40eee148, 
# 88 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40eefa98, 
# 59 "/opt/tinyos-2.1.2/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 95 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__SubBackoff__requestCca(message_t * msg);
#line 81
static void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 126 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Packet.nc"
static 
#line 123
void * 


CC2420ActiveMessageP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );
# 80 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
static error_t CC2420ActiveMessageP__AMSend__send(
# 48 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ef1010, 
# 80 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__Snoop__default__receive(
# 50 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ef0088, 
# 71 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 88 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMPacket.nc"
static am_addr_t CC2420ActiveMessageP__AMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t CC2420ActiveMessageP__AMPacket__address(void );









static am_addr_t CC2420ActiveMessageP__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t CC2420ActiveMessageP__AMPacket__type(
#line 143
message_t * amsg);
#line 136
static bool CC2420ActiveMessageP__AMPacket__isForMe(
#line 133
message_t * amsg);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void );
# 2 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMAux.nc"
static void AMAuxC__AMAux__setPower(message_t *p_msg, uint8_t power);
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
# 19 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
static void VMCustomP__SA__Ready(uint8_t reqSource, uint8_t codeEvt_id);
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void SensActP__S_VOLT__readDone(error_t result, SensActP__S_VOLT__val_t val);
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void SensActP__A_INT2__fired(void );
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void SensActP__S_TEMP__readDone(error_t result, SensActP__S_TEMP__val_t val);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SensActP__sigInt1__runTask(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void SensActP__A_INT1__fired(void );
# 16 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
static void SensActP__SA__reqSensor(uint8_t reqSource, uint8_t id);








static void SensActP__SA__setActuator(uint8_t id, uint16_t val);

static void *SensActP__SA__getDatap(uint8_t id);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SensActP__sigInt2__runTask(void );
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void SensActP__S_PHOTO__readDone(error_t result, SensActP__S_PHOTO__val_t val);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41075690);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );








static bool /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__isOwner(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x4103cbd0);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x4103cbd0);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 113 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error);
# 62 "/opt/tinyos-2.1.2/tos/lib/power/PowerDownCleanup.nc"
static void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask(void );
# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start(void );









static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop(void );
# 104 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__start(void );
#line 130
static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__stop(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__granted(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__readDoneTask__runTask(void );
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Read__read(
# 40 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
uint8_t arg_0x4109f1c8);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__stopDone__runTask(void );
# 66 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__ActualRead__readDone(error_t result, /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__ActualRead__val_t val);
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Timer__fired(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t Atm128AdcP__Init__init(void );
# 119 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 156 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 95 "/opt/tinyos-2.1.2/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP__AsyncStdControl__start(void );









static error_t Atm128AdcP__AsyncStdControl__stop(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );
#line 82
static void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );
#line 58
static void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 150
static bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
#line 86
static void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );








static void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 69
static void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
#line 64
static Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );










static uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__Init__init(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue(void );
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41075690);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x4103cbd0);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x4103cbd0);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x4103cbd0);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__isOwner(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x4103cbd0);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
# 62 "/opt/tinyos-2.1.2/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t AdcP__Read__read(
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x410ebbd8);
# 58 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
static error_t AdcP__ReadNow__read(
# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x41137b88);
# 66 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x41137b88, 
# 66 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x411340c8);
# 25 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getChannel(
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x411340c8);
# 39 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x411340c8);
# 81 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void AdcP__acquiredData__runTask(void );
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(
# 24 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115da28);
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(
# 24 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115da28, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(
# 26 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115cac8, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t val);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(
# 27 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115b990);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(
# 27 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115b990);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(
# 27 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115b990);
# 20 "/opt/tinyos-2.1.2/tos/platforms/mica/MicaBusAdc.nc"
static uint8_t MicaBusP__Adc1__getChannel(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__1__Atm128Interrupt__fired(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__1__Interrupt__default__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__2__Atm128Interrupt__fired(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__2__Interrupt__default__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__3__Atm128Interrupt__fired(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__3__Interrupt__default__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__4__Atm128Interrupt__fired(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__4__Interrupt__default__fired(void );
# 32 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t PhotoTempConfigP__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t PhotoTempConfigP__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t PhotoTempConfigP__Atm128AdcConfig__getPrescaler(void );
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__read(
# 24 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115da28);
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__default__readDone(
# 24 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115da28, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__val_t val);
#line 63
static void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Service__readDone(
# 26 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115cac8, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Service__val_t val);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Resource__granted(
# 27 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115b990);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__Init__init(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEmpty(void );








static bool /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__dequeue(void );
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41075690);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release(void );








static bool /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__isOwner(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Resource__release(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x4103cbd0);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Resource__request(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x4103cbd0);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__grantedTask__runTask(void );
# 113 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__startDone(error_t error);
#line 138
static void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__stopDone(error_t error);
# 62 "/opt/tinyos-2.1.2/tos/lib/power/PowerDownCleanup.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__PowerDownCleanup__default__cleanup(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopTask__runTask(void );
# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__requested(void );
#line 46
static void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__granted(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__startTask__runTask(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__default__start(void );









static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__default__stop(void );
# 104 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__start(void );
#line 130
static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__stop(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__granted(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__readDoneTask__runTask(void );
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Read__read(
# 40 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
uint8_t arg_0x4109f1c8);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__stopDone__runTask(void );
# 66 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__ActualRead__readDone(error_t result, /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__ActualRead__val_t val);
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Timer__fired(void );
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__read(
# 24 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115da28);
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__default__readDone(
# 24 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115da28, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__val_t val);
#line 63
static void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Service__readDone(
# 26 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115cac8, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Service__val_t val);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Resource__granted(
# 27 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115b990);
# 32 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t VoltageP__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t VoltageP__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t VoltageP__Atm128AdcConfig__getPrescaler(void );
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
enum TerraVMC____nesc_unnamed4336 {
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








static uint8_t TerraVMC__getOpCode(uint8_t *Opcode, uint8_t *Modifier);
#line 100
static inline uint16_t TerraVMC__getLblAddr(uint16_t lbl);









static inline void TerraVMC__TViewer(char *cmd, uint16_t p1, uint16_t p2);






static void TerraVMC__evtError(uint8_t ecode);
#line 136
static inline uint8_t TerraVMC__getPar8(uint8_t p_len);





static uint16_t TerraVMC__getPar16(uint8_t p_len);
#line 156
static uint32_t TerraVMC__getPar32(uint8_t p_len);
#line 171
static uint8_t TerraVMC__getBits(uint8_t data, uint8_t stBit, uint8_t endBit);





static inline uint8_t TerraVMC__getBitsPow(uint8_t data, uint8_t stBit, uint8_t endBit);


static uint32_t TerraVMC__unit2val(uint32_t val, uint8_t unit);









static void TerraVMC__push(uint32_t value);
#line 203
static void TerraVMC__pushf(float value);
#line 217
static uint32_t TerraVMC__pop(void );



static float TerraVMC__popf(void );




static uint32_t TerraVMC__getMVal(uint16_t Maddr, uint8_t type);
#line 238
static inline float TerraVMC__getMValf(uint16_t Maddr);



static void TerraVMC__setMVal(uint32_t buffer, uint16_t Maddr, uint8_t fromTp, uint8_t toTp);
#line 285
static inline uint16_t TerraVMC__getEvtCeuId(uint8_t EvtId);
#line 322
typedef u16 TerraVMC__tceu_noff;
typedef u16 TerraVMC__tceu_nlbl;




#line 325
typedef struct TerraVMC____nesc_unnamed4337 {
  s32 togo;
  TerraVMC__tceu_nlbl lbl;
} TerraVMC__tceu_wclock;





#line 330
typedef struct TerraVMC____nesc_unnamed4338 {
  u8 stack;
  u8 tree;
  TerraVMC__tceu_nlbl lbl;
} TerraVMC__tceu_trk;

enum TerraVMC____nesc_unnamed4339 {
  TerraVMC__Inactive = 0, 
  TerraVMC__Init = 1
};


static int TerraVMC__ceu_go(int *ret);
#line 355
#line 345
typedef struct TerraVMC____nesc_unnamed4340 {
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
#line 387
static void TerraVMC__ceu_track_ins(u8 stack, u8 tree, int chk, TerraVMC__tceu_nlbl lbl);
#line 424
static int TerraVMC__ceu_track_rem(TerraVMC__tceu_trk *trk, u8 N);
#line 454
static inline void TerraVMC__ceu_track_clr(TerraVMC__tceu_nlbl l1, TerraVMC__tceu_nlbl l2);










static void TerraVMC__ceu_spawn(TerraVMC__tceu_nlbl *lbl);








static void TerraVMC__ceu_trigger(TerraVMC__tceu_noff off, uint8_t auxId);
#line 504
static int TerraVMC__ceu_wclock_lt(TerraVMC__tceu_wclock *tmr);









static void TerraVMC__ceu_wclock_enable(int gte, s32 us, TerraVMC__tceu_nlbl lbl);
#line 531
static inline void TerraVMC__ceu_async_enable(int gte, TerraVMC__tceu_nlbl lbl);







static inline int TerraVMC__ceu_go_init(int *ret);
#line 552
static inline int TerraVMC__ceu_go_event(int *ret, int id, uint8_t auxId, void *data);
#line 568
static inline int TerraVMC__ceu_go_async(int *ret, int *pending);
#line 604
static inline int TerraVMC__ceu_go_wclock(int *ret, s32 dt, s32 *nxt);
#line 661
static inline void TerraVMC__execTrail(uint16_t lbl);
#line 680
static int TerraVMC__ceu_go(int *ret);
#line 733
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








static inline void TerraVMC__f_neg_f(uint8_t Modifier);






static inline void TerraVMC__f_sub_f(uint8_t Modifier);







static inline void TerraVMC__f_add_f(uint8_t Modifier);







static inline void TerraVMC__f_mult_f(uint8_t Modifier);







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
#line 1055
static inline void TerraVMC__f_clken_v(uint8_t Modifier);
#line 1075
static inline void TerraVMC__f_clken_c(uint8_t Modifier);
#line 1093
static inline void TerraVMC__f_set_v(uint8_t Modifier);
#line 1115
static inline void TerraVMC__f_setarr_vc(uint8_t Modifier);
#line 1149
static inline void TerraVMC__f_setarr_vv(uint8_t Modifier);
#line 1190
static inline void TerraVMC__f_poparr_v(uint8_t Modifier);
#line 1224
static inline void TerraVMC__f_pusharr_v(uint8_t Modifier);
#line 1252
static inline void TerraVMC__f_getextdt_e(uint8_t Modifier);










static inline void TerraVMC__f_trg(uint8_t Modifier);









static inline void TerraVMC__f_exec(uint8_t Modifier);









static inline void TerraVMC__f_chkret(uint8_t Modifier);









static inline void TerraVMC__f_push_c(uint8_t Modifier);








static inline void TerraVMC__f_cast(uint8_t Modifier);
#line 1316
static inline void TerraVMC__f_memclr(uint8_t Modifier);
#line 1329
static inline void TerraVMC__f_ifelse(uint8_t Modifier);
#line 1341
static inline void TerraVMC__f_asen(uint8_t Modifier);
#line 1353
static inline void TerraVMC__f_tkclr(uint8_t Modifier);
#line 1365
static inline void TerraVMC__f_outevt_c(uint8_t Modifier);










static inline void TerraVMC__f_getextdt_v(uint8_t Modifier);
#line 1388
static inline void TerraVMC__f_inc(uint8_t Modifier);








static inline void TerraVMC__f_dec(uint8_t Modifier);









static inline void TerraVMC__f_set_e(uint8_t Modifier);
#line 1424
static inline void TerraVMC__f_deref(uint8_t Modifier);
#line 1441
static inline void TerraVMC__f_memcpy(uint8_t Modifier);
#line 1454
static inline void TerraVMC__f_tkins_z(uint8_t Modifier);
#line 1467
static inline void TerraVMC__f_tkins_max(uint8_t Modifier);










static inline void TerraVMC__f_push_v(uint8_t Modifier);
#line 1494
static inline void TerraVMC__f_pop(uint8_t Modifier);
#line 1512
static inline void TerraVMC__f_popx(uint8_t Modifier);




static inline void TerraVMC__f_outevt_v(uint8_t Modifier);
#line 1529
static inline void TerraVMC__f_set_c(uint8_t Modifier);
#line 1550
static inline void TerraVMC__Decoder(uint8_t Opcode, uint8_t Modifier);
#line 1644
static void TerraVMC__VMCustom__queueEvt(uint8_t evtId, uint8_t auxId, void *data);
#line 1659
static inline void TerraVMC__procEvent__runTask(void );
#line 1684
static inline int32_t TerraVMC__VMCustom__getMVal(uint16_t Maddr, uint8_t tp);






static inline void *TerraVMC__VMCustom__getRealAddr(uint16_t Maddr);





static inline uint32_t TerraVMC__VMCustom__pop(void );


static inline void TerraVMC__VMCustom__push(uint32_t value);







static inline uint32_t TerraVMC__VMCustom__getTime(void );



static inline void TerraVMC__BSTimerVM__fired(void );









static inline bool TerraVMC__hasAsync(void );










static inline void TerraVMC__BSTimerAsync__fired(void );
#line 1745
static inline void TerraVMC__BSUpload__stop(void );




static inline void TerraVMC__BSUpload__setEnv(newProgVersion_t *data);
#line 1765
static inline void TerraVMC__BSUpload__getEnv(newProgVersion_t *data);
#line 1781
static void TerraVMC__BSUpload__start(bool resetFlag);
#line 1799
static inline uint8_t *TerraVMC__BSUpload__getSection(uint16_t Addr);



static inline void TerraVMC__BSUpload__resetMemory(void );
#line 1816
static inline void TerraVMC__BSUpload__loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[]);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/opt/tinyos-2.1.2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 49 "/opt/tinyos-2.1.2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );
static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );
static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeInput(void );
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__isInput(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__isOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeInput(void );
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__isInput(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeOutput(void );
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__isOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void );
# 33 "/opt/tinyos-2.1.2/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4341 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 103
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
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
uint8_t arg_0x403f4c40);
# 76 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/home/branco/gitspace/Terra/TerraVM/src/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4342 {

  SchedulerBasicP__NUM_TASKS = 35U, 
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
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 66 "/opt/tinyos-2.1.2/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 105
static inline void McuSleepC__McuSleep__sleep(void );
#line 120
static inline void McuSleepC__McuPowerState__update(void );
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
am_id_t arg_0x40722a60, 
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
enum BasicServicesP____nesc_unnamed4343 {
#line 141
  BasicServicesP__ProgReqTimerTask = 1U
};
#line 141
typedef int BasicServicesP____nesc_sillytask_ProgReqTimerTask[BasicServicesP__ProgReqTimerTask];
#line 902
enum BasicServicesP____nesc_unnamed4344 {
#line 902
  BasicServicesP__procInputEvent = 2U
};
#line 902
typedef int BasicServicesP____nesc_sillytask_procInputEvent[BasicServicesP__procInputEvent];
#line 1008
enum BasicServicesP____nesc_unnamed4345 {
#line 1008
  BasicServicesP__sendMessage = 3U
};
#line 1008
typedef int BasicServicesP____nesc_sillytask_sendMessage[BasicServicesP__sendMessage];
#line 1055
enum BasicServicesP____nesc_unnamed4346 {
#line 1055
  BasicServicesP__sendNextMsg = 4U
};
#line 1055
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
#line 203
static inline uint32_t BasicServicesP__getRequestTimeout(void );




static inline void BasicServicesP__RadioControl__startDone(error_t error);
#line 237
static inline void BasicServicesP__RadioControl__stopDone(error_t error);



static inline void BasicServicesP__BSRadio__setRFPower(uint8_t powerIdx);










static inline uint32_t BasicServicesP__BSTimerVM__getNow(void );
static void BasicServicesP__BSTimerVM__startOneShot(uint32_t dt);






static inline void BasicServicesP__TimerVM__fired(void );








static void BasicServicesP__BSTimerAsync__startOneShot(uint32_t dt);




static inline bool BasicServicesP__BSTimerAsync__isRunning(void );

static inline void BasicServicesP__TimerAsync__fired(void );
#line 289
static uint16_t BasicServicesP__getNextEmptyBlock(void );
#line 399
static inline void BasicServicesP__recNewProgVersionNet_receive(message_t *msg, void *payload, uint8_t len);
#line 423
static inline void BasicServicesP__recNewProgBlockNet_receive(message_t *msg, void *payload, uint8_t len);
#line 460
static inline void BasicServicesP__recReqProgBlockNet_receive(message_t *msg, void *payload, uint8_t len);
#line 476
static inline void BasicServicesP__recSetDataNDNet_receive(message_t *msg, void *payload, uint8_t len);
#line 499
static inline void BasicServicesP__recCustomMsgNet_receive(message_t *msg, void *payload, uint8_t len);









static inline void BasicServicesP__recReqDataNet_receive(message_t *msg, void *payload, uint8_t len);
#line 522
static inline message_t *BasicServicesP__RadioReceiver__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 592
static inline void BasicServicesP__procNewProgVersion(newProgVersion_t *Data);
#line 625
static inline void BasicServicesP__procNewProgBlock(newProgBlock_t *Data);
#line 657
static inline void BasicServicesP__procRecReqProgBlock(reqProgBlock_t *Data);
#line 701
static inline void BasicServicesP__ProgReqTimerTask__runTask(void );
#line 770
static inline void BasicServicesP__ProgReqTimer__fired(void );




static inline void BasicServicesP__SendDataFullTimer__fired(void );
#line 902
static inline void BasicServicesP__procInputEvent__runTask(void );
#line 931
static inline void BasicServicesP__inQ__dataReady(void );
#line 947
static inline error_t BasicServicesP__RadioSender_send(uint8_t am_id, uint16_t target, message_t *msg, uint8_t len);
#line 980
static void BasicServicesP__sendRadioN(void );
#line 1008
static inline void BasicServicesP__sendMessage__runTask(void );
#line 1045
static inline void BasicServicesP__outQ__dataReady(void );









static inline void BasicServicesP__sendNextMsg__runTask(void );









static inline void BasicServicesP__sendTimer__fired(void );
#line 1077
static void BasicServicesP__RadioSender__sendDone(am_id_t id, message_t *msg, error_t error);
#line 1137
static inline void BasicServicesP__sendNewProgVersion(newProgVersion_t *Data);
#line 1153
static void BasicServicesP__sendNewProgBlock(newProgBlock_t *Data);
#line 1169
static void BasicServicesP__sendReqProgBlock(reqProgBlock_t *Data);
#line 1217
static inline error_t BasicServicesP__BSRadio__send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck);
# 113 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static void CC2420CsmaP__SplitControl__startDone(error_t error);
#line 138
static void CC2420CsmaP__SplitControl__stopDone(error_t error);
# 95 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg);
#line 81
static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg);
#line 66
static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime);
# 51 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca);
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void CC2420CsmaP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
static uint16_t CC2420CsmaP__Random__rand16(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP__SubControl__start(void );









static error_t CC2420CsmaP__SubControl__stop(void );
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg);
# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420CsmaP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420CsmaP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420CsmaP__CC2420Power__stopVReg(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420CsmaP__Resource__release(void );
#line 88
static error_t CC2420CsmaP__Resource__request(void );
# 66 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState);





static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP__sendDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__stopDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__startDone_task__postTask(void );
# 74 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP____nesc_unnamed4347 {
#line 74
  CC2420CsmaP__startDone_task = 5U
};
#line 74
typedef int CC2420CsmaP____nesc_sillytask_startDone_task[CC2420CsmaP__startDone_task];
enum CC2420CsmaP____nesc_unnamed4348 {
#line 75
  CC2420CsmaP__stopDone_task = 6U
};
#line 75
typedef int CC2420CsmaP____nesc_sillytask_stopDone_task[CC2420CsmaP__stopDone_task];
enum CC2420CsmaP____nesc_unnamed4349 {
#line 76
  CC2420CsmaP__sendDone_task = 7U
};
#line 76
typedef int CC2420CsmaP____nesc_sillytask_sendDone_task[CC2420CsmaP__sendDone_task];
#line 58
enum CC2420CsmaP____nesc_unnamed4350 {
  CC2420CsmaP__S_STOPPED, 
  CC2420CsmaP__S_STARTING, 
  CC2420CsmaP__S_STARTED, 
  CC2420CsmaP__S_STOPPING, 
  CC2420CsmaP__S_TRANSMITTING
};

message_t * CC2420CsmaP__m_msg;

error_t CC2420CsmaP__sendErr = SUCCESS;


bool CC2420CsmaP__ccaOn;






static inline void CC2420CsmaP__shutdown(void );


static inline error_t CC2420CsmaP__SplitControl__start(void );
#line 122
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len);
#line 173
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
#line 205
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP__CC2420Power__startVRegDone(void );



static inline void CC2420CsmaP__Resource__granted(void );



static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void );




static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg);






static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg);
#line 244
static inline void CC2420CsmaP__sendDone_task__runTask(void );
#line 257
static inline void CC2420CsmaP__startDone_task__runTask(void );







static inline void CC2420CsmaP__stopDone_task__runTask(void );









static inline void CC2420CsmaP__shutdown(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
# 48 "/opt/tinyos-2.1.2/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void );
# 66 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt);
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 40
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t CC2420ControlP__syncDone__postTask(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 50 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void );




static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 40
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );




static void CC2420ControlP__VREN__makeOutput(void );
#line 40
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 88
static error_t CC2420ControlP__SpiResource__request(void );
#line 120
static error_t CC2420ControlP__SyncResource__release(void );
#line 88
static error_t CC2420ControlP__SyncResource__request(void );
# 76 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 53
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__RssiResource__release(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 125 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP____nesc_unnamed4351 {
#line 125
  CC2420ControlP__sync = 8U
};
#line 125
typedef int CC2420ControlP____nesc_sillytask_sync[CC2420ControlP__sync];
enum CC2420ControlP____nesc_unnamed4352 {
#line 126
  CC2420ControlP__syncDone = 9U
};
#line 126
typedef int CC2420ControlP____nesc_sillytask_syncDone[CC2420ControlP__syncDone];
#line 90
#line 84
typedef enum CC2420ControlP____nesc_unnamed4353 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;

uint8_t CC2420ControlP__m_tx_power;

uint16_t CC2420ControlP__m_pan;

uint16_t CC2420ControlP__m_short_addr;

ieee_eui64_t CC2420ControlP__m_ext_addr;

bool CC2420ControlP__m_sync_busy;


bool CC2420ControlP__autoAckEnabled;


bool CC2420ControlP__hwAutoAckDefault;


bool CC2420ControlP__addressRecognition;


bool CC2420ControlP__hwAddressRecognition;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );
static inline void CC2420ControlP__writeTxctrl(void );





static inline error_t CC2420ControlP__Init__init(void );
#line 188
static inline error_t CC2420ControlP__Resource__request(void );







static inline error_t CC2420ControlP__Resource__release(void );







static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 216
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 268
static inline error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 298
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );



static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );







static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
#line 323
static inline error_t CC2420ControlP__CC2420Config__sync(void );
#line 355
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 382
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );






static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );









static inline void CC2420ControlP__SyncResource__granted(void );
#line 413
static inline void CC2420ControlP__SpiResource__granted(void );




static inline void CC2420ControlP__RssiResource__granted(void );
#line 431
static inline void CC2420ControlP__StartupTimer__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 465
static inline void CC2420ControlP__sync__runTask(void );



static inline void CC2420ControlP__syncDone__runTask(void );









static void CC2420ControlP__writeFsctrl(void );
#line 496
static void CC2420ControlP__writeMdmctrl0(void );
#line 515
static void CC2420ControlP__writeId(void );
#line 533
static inline void CC2420ControlP__writeTxctrl(void );
#line 545
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data);
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer__overflow(void );
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void );
#line 85
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x);
#line 103
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 131
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void );


static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void );
#line 164
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
#line 187
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 207
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__fired(void );
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t);
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__fired(void );
#line 58
static void HplAtm128Timer1P__CompareC__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer1P__Timer__overflow(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void );


static inline void HplAtm128Timer1P__Timer__set(uint16_t t);








static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x);
#line 131
static inline void HplAtm128Timer1P__Capture__setEdge(bool up);



static inline void HplAtm128Timer1P__Capture__reset(void );
static inline void HplAtm128Timer1P__CompareA__reset(void );



static inline void HplAtm128Timer1P__Timer__start(void );
static inline void HplAtm128Timer1P__Capture__start(void );
static inline void HplAtm128Timer1P__CompareA__start(void );




static inline void HplAtm128Timer1P__Capture__stop(void );
static inline void HplAtm128Timer1P__CompareA__stop(void );




static inline bool HplAtm128Timer1P__Timer__test(void );
#line 192
static inline void HplAtm128Timer1P__CompareA__set(uint16_t t);




static inline uint16_t HplAtm128Timer1P__Capture__get(void );






void __vector_12(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareB__default__fired(void );
void __vector_13(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareC__default__fired(void );
void __vector_24(void ) __attribute((interrupt))   ;



void __vector_11(void ) __attribute((interrupt))   ;



void __vector_14(void ) __attribute((interrupt))   ;
# 104 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void );
# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void );
#line 54
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t);










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void );


static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void );
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void );
# 74 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );








static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt);
#line 119
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );






static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 87 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 61
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 50 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 64 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC__0____nesc_unnamed4354 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void );
# 77 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0____nesc_unnamed4355 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type ) - 1 - 0, 
  TransformAlarmC__0__MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 102
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 22 "/home/branco/gitspace/Terra/TerraVM/src/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(uint16_t time);
# 88 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(bool up);
#line 64
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop(void );
# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(uint8_t mode);









static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(uint16_t time);
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void );
#line 51
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void );
#line 70
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high);
#line 46
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired(void );
# 15 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(bool rising);
#line 29
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void );




static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void HplAtm128InterruptSigP__IntSig6__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig1__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig4__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig7__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig2__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig5__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig0__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig3__fired(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void ) __attribute((signal))   ;




void __vector_2(void ) __attribute((signal))   ;




void __vector_3(void ) __attribute((signal))   ;




void __vector_4(void ) __attribute((signal))   ;




void __vector_5(void ) __attribute((signal))   ;




void __vector_6(void ) __attribute((signal))   ;




void __vector_7(void ) __attribute((signal))   ;




void __vector_8(void ) __attribute((signal))   ;
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void );
# 52 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__disable(void );



static __inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__edge(bool low_to_high);
#line 70
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void );
# 52 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__disable(void );



static __inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__edge(bool low_to_high);
#line 70
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void );
# 50 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void );



static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high);
#line 70
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );
# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static bool HplCC2420InterruptsP__CC_CCA__get(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void HplCC2420InterruptsP__CCA__fired(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t HplCC2420InterruptsP__CCATask__postTask(void );
# 69 "/opt/tinyos-2.1.2/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
enum HplCC2420InterruptsP____nesc_unnamed4356 {
#line 69
  HplCC2420InterruptsP__CCATask = 10U
};
#line 69
typedef int HplCC2420InterruptsP____nesc_sillytask_CCATask[HplCC2420InterruptsP__CCATask];
#line 56
uint8_t HplCC2420InterruptsP__ccaWaitForState;

uint8_t HplCC2420InterruptsP__ccaLastState;

bool HplCC2420InterruptsP__ccaCheckDisabled = FALSE;








static inline void HplCC2420InterruptsP__CCATask__runTask(void );
#line 89
static inline error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void );
#line 105
static inline error_t HplCC2420InterruptsP__CCA__disable(void );
# 70 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6b38, 
# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6b38, 
# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 97
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420SpiP__SpiResource__request(void );
#line 128
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 102
static void CC2420SpiP__Resource__granted(
# 45 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40ac6108);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 88 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4357 {
#line 88
  CC2420SpiP__grant = 11U
};
#line 88
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 63
enum CC2420SpiP____nesc_unnamed4358 {
  CC2420SpiP__RESOURCE_COUNT = 5U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4359 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 126
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 178
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
#line 358
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
uint8_t StateImplP__state[4U];

enum StateImplP____nesc_unnamed4360 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static bool StateImplP__State__isState(uint8_t id, uint8_t myState);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t Atm128SpiP__zeroTask__postTask(void );
# 82 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__release(
# 99 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40b19068);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__immediateRequest(
# 99 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40b19068);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__request(
# 99 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40b19068);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool Atm128SpiP__ResourceArbiter__isOwner(
# 99 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40b19068);
# 89 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 83
static void Atm128SpiP__Spi__initMaster(void );
#line 113
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 97
static uint8_t Atm128SpiP__Spi__read(void );
#line 141
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 131
static void Atm128SpiP__Spi__setClock(uint8_t speed);




static bool Atm128SpiP__Spi__isInterruptPending(void );
#line 125
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 103
static void Atm128SpiP__Spi__write(uint8_t data);
#line 116
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 128
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__granted(
# 95 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40b1b398);
# 90 "/opt/tinyos-2.1.2/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP__ArbiterInfo__inUse(void );
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 296 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4361 {
#line 296
  Atm128SpiP__zeroTask = 12U
};
#line 296
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 105
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4362 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};
#line 126
enum Atm128SpiP____nesc_unnamed4363 {
  Atm128SpiP__PLATFORM_MHZ = 8
};


static void Atm128SpiP__startSpi(void );
#line 167
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 251
static error_t Atm128SpiP__sendNextPart(void );
#line 296
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 330
static error_t Atm128SpiP__SpiPacket__send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen);
#line 354
static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 394
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id);







static inline error_t Atm128SpiP__Resource__request(uint8_t id);








static inline error_t Atm128SpiP__Resource__release(uint8_t id);









static inline bool Atm128SpiP__Resource__isOwner(uint8_t id);



static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id);



static inline void Atm128SpiP__Resource__default__granted(uint8_t id);
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
#line 46
static void HplAtm128SpiP__SS__makeOutput(void );
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 109 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 96 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 112
static inline void HplAtm128SpiP__SPI__sleep(void );


static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_17(void ) __attribute((signal))   ;




static inline bool HplAtm128SpiP__SPI__isInterruptPending(void );







static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 147
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 173
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 186
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 200
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 217
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 230
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 49 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1____nesc_unnamed4364 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bbf030);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bbf030);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bbfc60);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bbfc60);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40bc15d8);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4365 {
#line 69
  SimpleArbiterP__0__grantedTask = 13U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4366 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4367 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 84
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 124
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
#line 148
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
#line 167
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplCC2420SpiP__SS__makeOutput(void );
#line 40
static void HplCC2420SpiP__SS__set(void );
static void HplCC2420SpiP__SS__clr(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void HplCC2420SpiP__Resource__granted(void );
#line 120
static error_t HplCC2420SpiP__SubResource__release(void );
#line 97
static error_t HplCC2420SpiP__SubResource__immediateRequest(void );
#line 88
static error_t HplCC2420SpiP__SubResource__request(void );
#line 128
static bool HplCC2420SpiP__SubResource__isOwner(void );
# 51 "/opt/tinyos-2.1.2/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__request(void );




static inline error_t HplCC2420SpiP__Resource__immediateRequest(void );










static inline void HplCC2420SpiP__SubResource__granted(void );







static inline error_t HplCC2420SpiP__Resource__release(void );







static inline bool HplCC2420SpiP__Resource__isOwner(void );
# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );
static bool LedsP__Led0__get(void );


static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );
static void LedsP__Led1__toggle(void );
static bool LedsP__Led1__get(void );


static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );
static void LedsP__Led2__toggle(void );
static bool LedsP__Led2__get(void );


static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );




static inline void LedsP__Leds__led0Toggle(void );




static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );




static inline void LedsP__Leds__led1Toggle(void );




static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );




static inline void LedsP__Leds__led2Toggle(void );




static inline uint8_t LedsP__Leds__get(void );
#line 136
static inline void LedsP__Leds__set(uint8_t val);
# 62 "/opt/tinyos-2.1.2/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 93
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 106
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 42 "/opt/tinyos-2.1.2/tos/platforms/micaz/LocalIeeeEui64C.nc"
static ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void );
# 81 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg);
# 70 "/opt/tinyos-2.1.2/tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420TransmitP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420TransmitP__PacketTimeStamp__size_type value);
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
# 54 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
#line 66
static void CC2420TransmitP__CaptureSFD__disable(void );
#line 53
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 109 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void );
#line 66
static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt);






static void CC2420TransmitP__BackoffTimer__stop(void );
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length);
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data);
# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
# 73 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error);
# 31 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 40
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP__SpiResource__release(void );
#line 97
static error_t CC2420TransmitP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420TransmitP__SpiResource__request(void );
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CCA__makeInput(void );
#line 43
static bool CC2420TransmitP__CCA__get(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__SFD__makeInput(void );
#line 43
static bool CC2420TransmitP__SFD__get(void );
# 82 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 99 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 89
typedef enum CC2420TransmitP____nesc_unnamed4368 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_SAMPLE_CCA, 
  CC2420TransmitP__S_BEGIN_TRANSMIT, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT, 
  CC2420TransmitP__S_CANCEL
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4369 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320
};
#line 120
message_t * CC2420TransmitP__m_msg;

bool CC2420TransmitP__m_cca;

uint8_t CC2420TransmitP__m_tx_power;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


int8_t CC2420TransmitP__totalCcaChecks;


uint16_t CC2420TransmitP__myInitialBackoff;


uint16_t CC2420TransmitP__myCongestionBackoff;



static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);

static void CC2420TransmitP__loadTXFIFO(void );
static void CC2420TransmitP__attemptSend(void );
static void CC2420TransmitP__congestionBackoff(void );
static error_t CC2420TransmitP__acquireSpiResource(void );
static inline error_t CC2420TransmitP__releaseSpiResource(void );
static void CC2420TransmitP__signalDone(error_t err);



static inline error_t CC2420TransmitP__Init__init(void );







static inline error_t CC2420TransmitP__StdControl__start(void );










static inline error_t CC2420TransmitP__StdControl__stop(void );
#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
#line 243
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);







static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time);
#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
#line 377
static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
#line 389
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg);
#line 416
static inline void CC2420TransmitP__SpiResource__granted(void );
#line 454
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 486
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP__BackoffTimer__fired(void );
#line 547
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);
#line 743
static void CC2420TransmitP__attemptSend(void );
#line 788
static void CC2420TransmitP__congestionBackoff(void );






static error_t CC2420TransmitP__acquireSpiResource(void );







static inline error_t CC2420TransmitP__releaseSpiResource(void );
#line 825
static void CC2420TransmitP__loadTXFIFO(void );
#line 850
static void CC2420TransmitP__signalDone(error_t err);
# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
# 93 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void );
#line 117
static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void );
#line 112
static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void );
#line 66
static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
# 70 "/opt/tinyos-2.1.2/tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420ReceiveP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420ReceiveP__PacketTimeStamp__size_type value);
# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFOP__get(void );
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SACK__strobe(void );
# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 97
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 128
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
#line 54
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 148 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP____nesc_unnamed4370 {
#line 148
  CC2420ReceiveP__receiveDone_task = 14U
};
#line 148
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
#line 89
#line 81
typedef enum CC2420ReceiveP____nesc_unnamed4371 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_DEC, 
  CC2420ReceiveP__S_RX_DEC_WAIT, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4372 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP__SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;





uint8_t CC2420ReceiveP__m_missed_packets;



bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;

message_t * CC2420ReceiveP__m_p_rx_buf;

message_t CC2420ReceiveP__m_rx_buf;
#line 137
CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;



static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );
static inline bool CC2420ReceiveP__passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP__Init__init(void );





static inline error_t CC2420ReceiveP__StdControl__start(void );
#line 171
static inline error_t CC2420ReceiveP__StdControl__stop(void );
#line 186
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);








static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 212
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 513
static inline void CC2420ReceiveP__SpiResource__granted(void );
#line 530
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 668
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 709
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error);






static void CC2420ReceiveP__beginReceive(void );
#line 733
static void CC2420ReceiveP__flush(void );
#line 759
static void CC2420ReceiveP__receive(void );









static void CC2420ReceiveP__waitForNextPacket(void );
#line 813
static void CC2420ReceiveP__reset_state(void );










static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg);
# 65 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline error_t CC2420PacketP__Acks__requestAck(message_t *p_msg);




static inline error_t CC2420PacketP__Acks__noAck(message_t *p_msg);




static inline bool CC2420PacketP__Acks__wasAcked(message_t *p_msg);





static inline int CC2420PacketP__getAddressLength(int type);








static uint8_t * CC2420PacketP__getNetwork(message_t * msg);










static inline void CC2420PacketP__CC2420Packet__setPower(message_t *p_msg, uint8_t power);
#line 119
static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg);








static inline void CC2420PacketP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId);








static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);
#line 152
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg);
#line 171
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg);





static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value);
#line 210
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg);








static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg);
# 58 "/home/branco/gitspace/Terra/TerraVM/src/system/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4373 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4374 {
#line 74
  AlarmToTimerC__0__fired = 15U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x40df3708);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4375 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 16U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4376 {

  VirtualizeTimerC__0__NUM_TIMERS = 9, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4377 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 189
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/home/branco/gitspace/Terra/TerraVM/src/system/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 52 "/home/branco/gitspace/Terra/TerraVM/src/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t UniqueSendP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t UniqueSendP__SubSend__maxPayloadLength(void );
#line 100
static void UniqueSendP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
static uint16_t UniqueSendP__Random__rand16(void );
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void );
#line 45
static error_t UniqueSendP__State__requestState(uint8_t reqState);
# 54 "/opt/tinyos-2.1.2/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP__localSendId;

enum UniqueSendP____nesc_unnamed4378 {
  UniqueSendP__S_IDLE, 
  UniqueSendP__S_SENDING
};


static inline error_t UniqueSendP__Init__init(void );
#line 75
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len);
#line 95
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void );








static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/opt/tinyos-2.1.2/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP____nesc_unnamed4379 {
  uint16_t source;
  uint8_t dsn;
} UniqueReceiveP__receivedMessages[4];

uint8_t UniqueReceiveP__writeIndex = 0;


uint8_t UniqueReceiveP__recycleSourceElement;

enum UniqueReceiveP____nesc_unnamed4380 {
  UniqueReceiveP__INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP__Init__init(void );









static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
static inline uint16_t UniqueReceiveP__getSourceKey(message_t  *msg);


static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);
#line 112
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 138
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
#line 165
static inline uint16_t UniqueReceiveP__getSourceKey(message_t * msg);
#line 192
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t CC2420TinyosNetworkP__grantTask__postTask(void );
# 77 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t * p_msg);
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__ActiveSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id);
#line 53
static bool CC2420TinyosNetworkP__Queue__isEmpty(void );
#line 70
static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void );
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__BareReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__granted(
# 46 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40e75628);
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__BareSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__ActiveReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 180 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
enum CC2420TinyosNetworkP____nesc_unnamed4381 {
#line 180
  CC2420TinyosNetworkP__grantTask = 17U
};
#line 180
typedef int CC2420TinyosNetworkP____nesc_sillytask_grantTask[CC2420TinyosNetworkP__grantTask];
#line 68
enum CC2420TinyosNetworkP____nesc_unnamed4382 {
  CC2420TinyosNetworkP__OWNER_NONE = 0xff, 
  CC2420TinyosNetworkP__TINYOS_N_NETWORKS = 1U
};




#line 73
enum CC2420TinyosNetworkP____nesc_unnamed4383 {
  CC2420TinyosNetworkP__CLIENT_AM, 
  CC2420TinyosNetworkP__CLIENT_BARE
} CC2420TinyosNetworkP__m_busy_client;

uint8_t CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
#line 78
uint8_t CC2420TinyosNetworkP__next_owner;

static error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len);









static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );



static inline void *CC2420TinyosNetworkP__ActiveSend__getPayload(message_t *msg, uint8_t len);
#line 138
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len);









static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error);








static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 180
static inline void CC2420TinyosNetworkP__grantTask__runTask(void );
#line 199
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id);
#line 215
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id);
#line 229
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id);
#line 241
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len);


static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error);








static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client);
# 49 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
enum /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0____nesc_unnamed4384 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[1];
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );




static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t CC2420ActiveMessageP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

CC2420ActiveMessageP__SubSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 112
static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void );
# 77 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void );
# 95 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__requestCca(
# 54 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40eee148, 
# 95 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(
# 54 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40eee148, 
# 81 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(
# 54 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40eee148, 
# 88 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__aboutToSend(
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40eefa98, 
# 59 "/opt/tinyos-2.1.2/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
static void CC2420ActiveMessageP__AMSend__sendDone(
# 48 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ef1010, 
# 103 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__Snoop__receive(
# 50 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ef0088, 
# 71 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void );
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg);
# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__Receive__receive(
# 49 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ef19d0, 
# 71 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420ActiveMessageP__RadioResource__release(void );
#line 97
static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void );
#line 88
static error_t CC2420ActiveMessageP__RadioResource__request(void );
# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
uint16_t CC2420ActiveMessageP__pending_length;
message_t * CC2420ActiveMessageP__pending_message = (void *)0;

static void CC2420ActiveMessageP__RadioResource__granted(void );
#line 87
static inline error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 135
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void );



static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg);




static am_addr_t CC2420ActiveMessageP__AMPacket__source(message_t *amsg);
#line 159
static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg);




static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg);
#line 202
static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );



static inline void *CC2420ActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len);





static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result);






static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 235
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);





static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg);




static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg);



static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg);
#line 283
static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);







static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);

static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg);
# 56 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void AMAuxC__RadioAux__setPower(message_t *p_msg, uint8_t power);
# 21 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/AMAuxC.nc"
uint8_t AMAuxC__RFPowerTab[8] = { 3, 7, 11, 15, 19, 23, 27, 31 };










static inline void AMAuxC__AMAux__setPower(message_t *p_msg, uint8_t power);
# 44 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVectorC.nc"
typedef uint8_t /*BasicServicesC.Bitmap*/vmBitVectorC__0__int_type;

enum /*BasicServicesC.Bitmap*/vmBitVectorC__0____nesc_unnamed4385 {

  vmBitVectorC__0__ELEMENT_SIZE = 8 * sizeof(/*BasicServicesC.Bitmap*/vmBitVectorC__0__int_type ), 
  vmBitVectorC__0__ARRAY_SIZE = (88 + /*BasicServicesC.Bitmap*/vmBitVectorC__0__ELEMENT_SIZE - 1) / /*BasicServicesC.Bitmap*/vmBitVectorC__0__ELEMENT_SIZE
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
enum /*BasicServicesC.inQueue.dQueue*/dataQueueP__0____nesc_unnamed4386 {
#line 16
  dataQueueP__0__dataReady = 18U
};
#line 16
typedef int /*BasicServicesC.inQueue.dQueue*/dataQueueP__0____nesc_sillytask_dataReady[/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady];
#line 9
bool /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__flagFreeQ = TRUE;


/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataType /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qData[5UL];
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
enum /*BasicServicesC.outQueue.dQueue*/dataQueueP__1____nesc_unnamed4387 {
#line 16
  dataQueueP__1__dataReady = 19U
};
#line 16
typedef int /*BasicServicesC.outQueue.dQueue*/dataQueueP__1____nesc_sillytask_dataReady[/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady];
#line 9
bool /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__flagFreeQ = TRUE;


/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataType /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qData[10UL];
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




static void VMCustomP__BSRadio__setRFPower(uint8_t powerIdx);
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
static uint16_t VMCustomP__Random__rand16(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t VMCustomP__BCRadio_receive__postTask(void );
# 16 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
static void VMCustomP__SA__reqSensor(uint8_t reqSource, uint8_t id);








static void VMCustomP__SA__setActuator(uint8_t id, uint16_t val);

static void *VMCustomP__SA__getDatap(uint8_t id);
# 315 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
enum VMCustomP____nesc_unnamed4388 {
#line 315
  VMCustomP__BCRadio_receive = 20U
};
#line 315
typedef int VMCustomP____nesc_sillytask_BCRadio_receive[VMCustomP__BCRadio_receive];
#line 26
nx_uint8_t VMCustomP__ExtDataCustomA;
usrMsg_t VMCustomP__ExtDataRadioReceived;
nx_uint8_t VMCustomP__ExtDataSendDoneError;
nx_uint8_t VMCustomP__ExtDataWasAcked;



uint8_t VMCustomP__MIC_flag;
nx_uint16_t *VMCustomP__MIC_buf;
uint16_t VMCustomP__MIC_count;
uint32_t VMCustomP__MIC_usPeriod;
uint8_t VMCustomP__MIC_gain;





static inline void VMCustomP__proc_leds(uint16_t id, uint32_t value);



static inline void VMCustomP__proc_led0(uint16_t id, uint32_t value);






static inline void VMCustomP__proc_led1(uint16_t id, uint32_t value);






static inline void VMCustomP__proc_led2(uint16_t id, uint32_t value);






static inline void VMCustomP__proc_req_temp(uint16_t id, uint32_t value);



static inline void VMCustomP__proc_req_photo(uint16_t id, uint32_t value);



static inline void VMCustomP__proc_req_volts(uint16_t id, uint32_t value);




static void VMCustomP__proc_send_x(uint16_t id, uint16_t addr, uint8_t ack);









static inline void VMCustomP__proc_send(uint16_t id, uint32_t addr);


static inline void VMCustomP__proc_send_ack(uint16_t id, uint32_t addr);




static inline void VMCustomP__proc_set_port_a(uint16_t id, uint32_t value);



static inline void VMCustomP__proc_set_port_b(uint16_t id, uint32_t value);



static inline void VMCustomP__proc_cfg_port_a(uint16_t id, uint32_t value);



static inline void VMCustomP__proc_cfg_port_b(uint16_t id, uint32_t value);



static inline void VMCustomP__proc_req_port_a(uint16_t id, uint32_t value);



static inline void VMCustomP__proc_req_port_b(uint16_t id, uint32_t value);



static inline void VMCustomP__proc_cfg_int_a(uint16_t id, uint32_t value);



static inline void VMCustomP__proc_cfg_int_b(uint16_t id, uint32_t value);



static inline void VMCustomP__proc_req_custom_a(uint16_t id, uint32_t value);









static inline void VMCustomP__proc_req_custom(uint16_t id, uint32_t value);







static inline void VMCustomP__proc_req_mic(uint16_t id, uint32_t value);
#line 161
static inline void VMCustomP__proc_beep(uint16_t id, uint32_t value);







static inline void VMCustomP__func_getNodeId(uint16_t id);






static inline void VMCustomP__func_random(uint16_t id);






static inline void VMCustomP__func_getMem(uint16_t id);







static inline void VMCustomP__func_getTime(uint16_t id);
#line 234
static inline void VMCustomP__func_setupMic(uint16_t id);
#line 248
static inline void VMCustomP__func_RFPower(uint16_t id);
#line 262
static void VMCustomP__VM__procOutEvt(uint8_t id, uint32_t value);
#line 291
static inline void VMCustomP__VM__callFunction(uint8_t id);
#line 310
static inline void VMCustomP__VM__reset(void );




static inline void VMCustomP__BCRadio_receive__runTask(void );




static inline void VMCustomP__BSRadio__receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len);









static void VMCustomP__BSRadio__sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error);









static void VMCustomP__BSRadio__sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked);










static inline uint8_t VMCustomP__wd2ceuSensorId(uint8_t wdId);
#line 364
static void VMCustomP__SA__Ready(uint8_t reqSource, uint8_t codeEvt_id);
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t SensActP__S_VOLT__read(void );
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void SensActP__A_INT2__disable(void );
#line 70
static void SensActP__A_INT2__edge(bool low_to_high);
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void SensActP__A_PIN1__makeInput(void );
static bool SensActP__A_PIN1__isInput(void );

static bool SensActP__A_PIN1__isOutput(void );
#line 43
static bool SensActP__A_PIN1__get(void );


static void SensActP__A_PIN1__makeOutput(void );
#line 40
static void SensActP__A_PIN1__set(void );
static void SensActP__A_PIN1__clr(void );
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t SensActP__S_TEMP__read(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t SensActP__sigInt1__postTask(void );
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void SensActP__A_INT1__disable(void );
#line 70
static void SensActP__A_INT1__edge(bool low_to_high);
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void SensActP__A_PIN2__makeInput(void );
static bool SensActP__A_PIN2__isInput(void );

static bool SensActP__A_PIN2__isOutput(void );
#line 43
static bool SensActP__A_PIN2__get(void );


static void SensActP__A_PIN2__makeOutput(void );
#line 40
static void SensActP__A_PIN2__set(void );
static void SensActP__A_PIN2__clr(void );
# 19 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
static void SensActP__SA__Ready(uint8_t reqSource, uint8_t codeEvt_id);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void SensActP__A_LEDS__led0Off(void );





static void SensActP__A_LEDS__led0Toggle(void );




static void SensActP__A_LEDS__led1On(void );










static void SensActP__A_LEDS__led1Toggle(void );
#line 100
static void SensActP__A_LEDS__led2Toggle(void );
#line 117
static uint8_t SensActP__A_LEDS__get(void );
#line 77
static void SensActP__A_LEDS__led1Off(void );
#line 94
static void SensActP__A_LEDS__led2Off(void );
#line 134
static void SensActP__A_LEDS__set(uint8_t val);
#line 56
static void SensActP__A_LEDS__led0On(void );
#line 89
static void SensActP__A_LEDS__led2On(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t SensActP__sigInt2__postTask(void );
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t SensActP__S_PHOTO__read(void );
# 248 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
enum SensActP____nesc_unnamed4389 {
#line 248
  SensActP__sigInt1 = 21U
};
#line 248
typedef int SensActP____nesc_sillytask_sigInt1[SensActP__sigInt1];
enum SensActP____nesc_unnamed4390 {
#line 249
  SensActP__sigInt2 = 22U
};
#line 249
typedef int SensActP____nesc_sillytask_sigInt2[SensActP__sigInt2];
#line 49
nx_uint16_t SensActP__dTemp;
#line 49
nx_uint16_t SensActP__dPhoto;
#line 49
nx_uint16_t SensActP__dLeds;
#line 49
nx_uint16_t SensActP__dVolt;
#line 49
nx_uint16_t SensActP__dIn1;
#line 49
nx_uint16_t SensActP__dIn2;
#line 49
nx_uint16_t SensActP__dPin1;
#line 49
nx_uint16_t SensActP__dPin2;
uint8_t SensActP__sensorsReqs[SENSOR_COUNT + 4];
bool SensActP__initFlag = FALSE;

static inline void SensActP__TViewer(char *cmd, uint16_t p1, uint16_t p2);



static bool SensActP__getSReq(uint8_t reqSource, uint8_t sensorId);










static void SensActP__insertSReq(uint8_t reqSource, uint8_t sensorId);
#line 87
static bool SensActP__getPinX(int sid);










static void SensActP__setPinX(int aid, bool val);
#line 124
static void SensActP__SA__reqSensor(uint8_t reqSource, uint8_t id);
#line 141
static inline void SensActP__enableEdge_A_INT1(bool low_to_high);










static inline void SensActP__enableEdge_A_INT2(bool low_to_high);
#line 168
static void SensActP__SA__setActuator(uint8_t id, uint16_t val);
#line 199
static inline void *SensActP__SA__getDatap(uint8_t id);
#line 221
static inline void SensActP__S_TEMP__readDone(error_t result, uint16_t val);







static inline void SensActP__S_PHOTO__readDone(error_t result, uint16_t val);







static inline void SensActP__S_VOLT__readDone(error_t result, uint16_t val);










static inline void SensActP__sigInt1__runTask(void );
static inline void SensActP__sigInt2__runTask(void );
static inline void SensActP__A_INT1__fired(void );
static inline void SensActP__A_INT2__fired(void );
# 49 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
enum /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4391 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41075690);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x4103cbd0);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
enum /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4392 {
#line 75
  ArbiterP__0__grantedTask = 23U
};
#line 75
typedef int /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4393 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4394 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4395 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__resId = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 111
static inline error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 184
static inline bool /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__isOwner(void );





static inline void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 204
static inline void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 104 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start(void );
#line 130
static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stop(void );
# 62 "/opt/tinyos-2.1.2/tos/lib/power/PowerDownCleanup.nc"
static void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopTask__postTask(void );
# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release(void );








static bool /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__startTask__postTask(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start(void );









static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__stop(void );
# 73 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
enum /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0____nesc_unnamed4396 {
#line 73
  PowerManagerP__0__startTask = 24U
};
#line 73
typedef int /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0____nesc_sillytask_startTask[/*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__startTask];




enum /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0____nesc_unnamed4397 {
#line 78
  PowerManagerP__0__stopTask = 25U
};
#line 78
typedef int /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0____nesc_sillytask_stopTask[/*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopTask];
#line 70
bool /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopping = FALSE;
bool /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__requested = FALSE;

static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask(void );




static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask(void );





static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start(void );







static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error);




static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error);










static inline error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop(void );







static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 113 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__startDone(error_t error);
#line 138
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__stopDone(error_t error);
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__makeInput(void );

static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__makeOutput(void );
#line 40
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__set(void );
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__clr(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__release(void );
#line 88
static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__request(void );
#line 128
static bool /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__isOwner(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__readDoneTask__postTask(void );
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Read__readDone(
# 40 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
uint8_t arg_0x4109f1c8, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Read__val_t val);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__stopDone__postTask(void );
# 58 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__ActualRead__read(void );
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Timer__startOneShot(uint32_t dt);
# 77 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
enum /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0____nesc_unnamed4398 {
#line 77
  SharedAnalogDeviceP__0__stopDone = 26U
};
#line 77
typedef int /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0____nesc_sillytask_stopDone[/*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__stopDone];
#line 108
enum /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0____nesc_unnamed4399 {
#line 108
  SharedAnalogDeviceP__0__readDoneTask = 27U
};
#line 108
typedef int /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0____nesc_sillytask_readDoneTask[/*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__readDoneTask];
#line 50
bool /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__started = FALSE;
bool /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__busy = FALSE;
uint8_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__client_id;
error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__read_result;
uint16_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__read_val;

static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__start(void );










static inline void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__granted(void );





static inline void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Timer__fired(void );



static inline void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__stopDone__runTask(void );





static inline error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__stop(void );
#line 95
static inline error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Read__read(uint8_t id);
#line 108
static inline void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__readDoneTask__runTask(void );




static inline void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__ActualRead__readDone(error_t result, uint16_t val);
# 119 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 81 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void );
#line 82
static void Atm128AdcP__HplAtm128Adc__enableAdc(void );
#line 58
static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 150
static bool Atm128AdcP__HplAtm128Adc__cancel(void );
#line 86
static void Atm128AdcP__HplAtm128Adc__disableAdc(void );








static void Atm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 69
static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void );
# 102 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 98
struct Atm128AdcP____nesc_unnamed4400 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP__f;
#line 102
#line 98
struct Atm128AdcP____nesc_unnamed4400 



Atm128AdcP__nextF;

static inline error_t Atm128AdcP__Init__init(void );
#line 124
static inline error_t Atm128AdcP__AsyncStdControl__start(void );




static inline error_t Atm128AdcP__AsyncStdControl__stop(void );









static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
#line 204
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 228
static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 262
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 156 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
static void HplAtm128AdcP__McuPowerState__update(void );
# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );


static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );


static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );



static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x);
#line 78
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );



static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );




static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 108
void __vector_21(void ) __attribute((signal))   ;








static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
# 49 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1____nesc_unnamed4401 {
  RoundRobinResourceQueueC__1__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__1__SIZE = 3U ? (3U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__Init__init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41075690);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__granted(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x4103cbd0);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4402 {
#line 75
  ArbiterP__1__grantedTask = 28U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4403 {
#line 67
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4404 {
#line 68
  ArbiterP__1__default_owner_id = 3U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4405 {
#line 69
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId;



static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(uint8_t id);
#line 111
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(uint8_t id);
#line 133
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 177
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
#line 202
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "/opt/tinyos-2.1.2/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 69 "/opt/tinyos-2.1.2/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x410ebbd8, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x41137b88, 
# 66 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x411340c8);
# 25 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getChannel(
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x411340c8);
# 39 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getPrescaler(
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x411340c8);
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t AdcP__acquiredData__postTask(void );
# 103 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
enum AdcP____nesc_unnamed4406 {
#line 103
  AdcP__acquiredData = 29U
};
#line 103
typedef int AdcP____nesc_sillytask_acquiredData[AdcP__acquiredData];
#line 57
enum AdcP____nesc_unnamed4407 {
  AdcP__IDLE, 
  AdcP__ACQUIRE_DATA, 
  AdcP__ACQUIRE_DATA_NOW
};




uint8_t AdcP__state;
uint8_t AdcP__client;
uint16_t AdcP__val;

static inline uint8_t AdcP__channel(void );



static inline uint8_t AdcP__refVoltage(void );



static inline uint8_t AdcP__prescaler(void );



static void AdcP__sample(void );



static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient);








static inline error_t AdcP__Read__read(uint8_t c);



static inline error_t AdcP__ReadNow__read(uint8_t c);



static inline void AdcP__acquiredData__runTask(void );




static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
#line 137
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c);




static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d);
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(
# 24 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115da28, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 55
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(
# 26 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115cac8);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(
# 27 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115b990);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(
# 27 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115b990);



static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);




static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client);


static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);
# 30 "/opt/tinyos-2.1.2/tos/platforms/mica/MicaBusP.nc"
static inline uint8_t MicaBusP__Adc1__getChannel(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__1__Interrupt__fired(void );
# 38 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__1__Atm128Interrupt__fired(void );



static inline void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__1__Interrupt__default__fired(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__2__Interrupt__fired(void );
# 38 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__2__Atm128Interrupt__fired(void );



static inline void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__2__Interrupt__default__fired(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__3__Interrupt__fired(void );
# 38 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__3__Atm128Interrupt__fired(void );



static inline void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__3__Interrupt__default__fired(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__4__Interrupt__fired(void );
# 38 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__4__Atm128Interrupt__fired(void );



static inline void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__4__Interrupt__default__fired(void );
# 20 "/opt/tinyos-2.1.2/tos/platforms/mica/MicaBusAdc.nc"
static uint8_t PhotoTempConfigP__PhotoTempAdc__getChannel(void );
# 21 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/PhotoTempConfigP.nc"
static inline uint8_t PhotoTempConfigP__Atm128AdcConfig__getChannel(void );



static inline uint8_t PhotoTempConfigP__Atm128AdcConfig__getRefVoltage(void );



static inline uint8_t PhotoTempConfigP__Atm128AdcConfig__getPrescaler(void );
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__readDone(
# 24 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115da28, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__val_t val);
#line 55
static error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Service__read(
# 26 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115cac8);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Resource__release(
# 27 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115b990);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Resource__request(
# 27 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115b990);



static inline error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__read(uint8_t client);



static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Resource__granted(uint8_t client);



static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Service__readDone(uint8_t client, error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__width_t data);








static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__default__readDone(uint8_t client, error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__width_t data);
# 49 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
enum /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2____nesc_unnamed4408 {
  RoundRobinResourceQueueC__2__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__2__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__resQ[/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__SIZE];
uint8_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__last = 0;

static inline void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__clearEntry(uint8_t id);



static inline error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__Init__init(void );




static inline bool /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEmpty(void );








static bool /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41075690);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x41073a58);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__requested(void );
#line 46
static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__granted(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Resource__granted(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x4103cbd0);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
enum /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2____nesc_unnamed4409 {
#line 75
  ArbiterP__2__grantedTask = 30U
};
#line 75
typedef int /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2____nesc_sillytask_grantedTask[/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__grantedTask];
#line 67
enum /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2____nesc_unnamed4410 {
#line 67
  ArbiterP__2__RES_CONTROLLED, ArbiterP__2__RES_GRANTING, ArbiterP__2__RES_IMM_GRANTING, ArbiterP__2__RES_BUSY
};
#line 68
enum /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2____nesc_unnamed4411 {
#line 68
  ArbiterP__2__default_owner_id = 1U
};
#line 69
enum /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2____nesc_unnamed4412 {
#line 69
  ArbiterP__2__NO_RES = 0xFF
};
uint8_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_CONTROLLED;
uint8_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__resId = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__default_owner_id;
uint8_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__reqResId;



static inline error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Resource__request(uint8_t id);
#line 111
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Resource__release(uint8_t id);
#line 133
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release(void );
#line 184
static inline bool /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__isOwner(void );





static inline void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__grantedTask__runTask(void );
#line 204
static inline void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(uint8_t id);

static inline void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(uint8_t id);
# 104 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__start(void );
#line 130
static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__stop(void );
# 62 "/opt/tinyos-2.1.2/tos/lib/power/PowerDownCleanup.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__PowerDownCleanup__cleanup(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopTask__postTask(void );
# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__release(void );








static bool /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__isOwner(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__startTask__postTask(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__start(void );









static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__stop(void );
# 73 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
enum /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1____nesc_unnamed4413 {
#line 73
  PowerManagerP__1__startTask = 31U
};
#line 73
typedef int /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1____nesc_sillytask_startTask[/*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__startTask];




enum /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1____nesc_unnamed4414 {
#line 78
  PowerManagerP__1__stopTask = 32U
};
#line 78
typedef int /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1____nesc_sillytask_stopTask[/*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopTask];
#line 70
bool /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopping = FALSE;
bool /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__requested = FALSE;

static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__startTask__runTask(void );




static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopTask__runTask(void );





static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__requested(void );









static inline error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__default__start(void );







static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__startDone(error_t error);




static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__granted(void );




static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__stopDone(error_t error);










static inline error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__default__stop(void );







static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__PowerDownCleanup__default__cleanup(void );
# 113 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__startDone(error_t error);
#line 138
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__stopDone(error_t error);
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__makeInput(void );

static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__makeOutput(void );
#line 40
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__set(void );
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__clr(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__release(void );
#line 88
static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__request(void );
#line 128
static bool /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__isOwner(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__readDoneTask__postTask(void );
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Read__readDone(
# 40 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
uint8_t arg_0x4109f1c8, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Read__val_t val);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__stopDone__postTask(void );
# 58 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__ActualRead__read(void );
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Timer__startOneShot(uint32_t dt);
# 77 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
enum /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1____nesc_unnamed4415 {
#line 77
  SharedAnalogDeviceP__1__stopDone = 33U
};
#line 77
typedef int /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1____nesc_sillytask_stopDone[/*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__stopDone];
#line 108
enum /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1____nesc_unnamed4416 {
#line 108
  SharedAnalogDeviceP__1__readDoneTask = 34U
};
#line 108
typedef int /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1____nesc_sillytask_readDoneTask[/*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__readDoneTask];
#line 50
bool /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__started = FALSE;
bool /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__busy = FALSE;
uint8_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__client_id;
error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__read_result;
uint16_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__read_val;

static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__start(void );










static inline void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__granted(void );





static inline void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Timer__fired(void );



static inline void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__stopDone__runTask(void );





static inline error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__stop(void );
#line 95
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Read__read(uint8_t id);
#line 108
static inline void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__readDoneTask__runTask(void );




static inline void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__ActualRead__readDone(error_t result, uint16_t val);
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__readDone(
# 24 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115da28, 
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__val_t val);
#line 55
static error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Service__read(
# 26 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115cac8);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Resource__release(
# 27 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115b990);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Resource__request(
# 27 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4115b990);



static inline error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__read(uint8_t client);



static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Resource__granted(uint8_t client);



static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Service__readDone(uint8_t client, error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__width_t data);








static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__default__readDone(uint8_t client, error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__width_t data);
# 44 "/opt/tinyos-2.1.2/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP__Atm128AdcConfig__getChannel(void );





static inline uint8_t VoltageP__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t VoltageP__Atm128AdcConfig__getPrescaler(void );
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
# 92 "/opt/tinyos-2.1.2/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 92
{
   __asm volatile ("cli");}

#line 109
#line 108
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 112
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 118
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

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
# 69 "/home/branco/gitspace/Terra/TerraVM/src/system/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 90 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 90
{
#line 90
  union __nesc_unnamed4417 {
#line 90
    Atm128TimerCtrlCapture_t f;
#line 90
    uint16_t t;
  } 
#line 90
  c = { .f = x };

#line 90
  return c.t;
}





static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x)
#line 97
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P__TimerCtrlCapture2int(x);
}

#line 80
static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void )
#line 80
{
  return * (Atm128TimerCtrlCapture_t * )& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 70
static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s)
#line 70
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P__TimerCtrl__getCtrlCapture();

#line 72
  x.bits.cs = s;
  HplAtm128Timer1P__TimerCtrl__setCtrlCapture(x);
}

# 104 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm128Timer1P__Timer__setScale(scale);
#line 104
}
#line 104
# 140 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__start(void )
#line 140
{
#line 140
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 78 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm128Timer1P__Timer__start();
#line 78
}
#line 78
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__set(uint16_t t)
#line 61
{
#line 61
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 67 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm128Timer1P__Timer__set(t);
#line 67
}
#line 67
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(4);
  }
  return SUCCESS;
}

# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x)
#line 60
{
#line 60
  union __nesc_unnamed4418 {
#line 60
    Atm128Adcsra_t f;
#line 60
    uint8_t t;
  } 
#line 60
  c = { .f = x };

#line 60
  return c.t;
}




static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x)
#line 66
{
  * (volatile uint8_t *)(0x06 + 0x20) = HplAtm128AdcP__Adcsra2int(x);
}

# 69 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra){
#line 69
  HplAtm128AdcP__HplAtm128Adc__setAdcsra(adcsra);
#line 69
}
#line 69
# 104 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__Init__init(void )
#line 104
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adfr = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Atm128AdcP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 49 "/opt/tinyos-2.1.2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 49
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 41 "/opt/tinyos-2.1.2/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/tinyos-2.1.2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
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
# 104 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 94 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__default__start(void )
#line 94
{
  return SUCCESS;
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 112 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__stopDone(error_t error)
#line 112
{
  if (/*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__requested == TRUE) {
      /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__start();
      /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 117
    {
      /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__requested = FALSE;
      /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopping = FALSE;
    }
#line 120
    __nesc_atomic_end(__nesc_atomic); }
}

# 138 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__stopDone(error_t error){
#line 138
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__stopDone(error);
#line 138
}
#line 138
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(/*PhotoImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__1__HAL_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 77 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__stopDone__runTask(void )
#line 77
{
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__release();
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__started = FALSE;
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__stopDone(SUCCESS);
}

# 66 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__clearEntry(uint8_t id)
#line 57
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__last + 1; ; i++) {
        if (i == 3U) {
          i = 0;
          }
#line 85
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
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

# 218 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x41073a58){
#line 65
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x41073a58);
#line 65
}
#line 65
# 120 "/opt/tinyos-2.1.2/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 120
{
}

# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 82 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void )
#line 82
{
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 7);
  HplAtm128AdcP__McuPowerState__update();
}

# 86 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableAdc(void ){
#line 86
  HplAtm128AdcP__HplAtm128Adc__disableAdc();
#line 86
}
#line 86
# 129 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__stop(void )
#line 129
{
  /* atomic removed: atomic calls only */
#line 130
  Atm128AdcP__HplAtm128Adc__disableAdc();

  return SUCCESS;
}

# 105 "/opt/tinyos-2.1.2/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = Atm128AdcP__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 84 "/opt/tinyos-2.1.2/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 84
{
}

# 62 "/opt/tinyos-2.1.2/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 79 "/opt/tinyos-2.1.2/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 79
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(/*PhotoImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__1__HAL_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 204 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(uint8_t arg_0x41075690){
#line 53
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(arg_0x41075690);
#line 53
}
#line 53
# 97 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 133 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__default_owner_id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 78 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void )
#line 78
{
  * (volatile uint8_t *)(0x06 + 0x20) |= 1 << 7;
  HplAtm128AdcP__McuPowerState__update();
}

# 82 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__enableAdc(void ){
#line 82
  HplAtm128AdcP__HplAtm128Adc__enableAdc();
#line 82
}
#line 82
# 124 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__start(void )
#line 124
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 125
    Atm128AdcP__HplAtm128Adc__enableAdc();
#line 125
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = Atm128AdcP__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 69 "/opt/tinyos-2.1.2/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 19 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
inline static void SensActP__SA__Ready(uint8_t reqSource, uint8_t codeEvt_id){
#line 19
  VMCustomP__SA__Ready(reqSource, codeEvt_id);
#line 19
}
#line 19
# 229 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP__S_PHOTO__readDone(error_t result, uint16_t val)
#line 229
{
  uint8_t source;

#line 231
  ;
  __nesc_hton_uint16(SensActP__dPhoto.nxdata, val);
  for (source = 0; source < 4; source++) 
    if (SensActP__getSReq(source, SID_PHOTO) == TRUE) {
#line 234
      SensActP__SA__Ready(source, TID_SENSOR_DONE | SID_PHOTO);
      }
}

# 48 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__default__readDone(uint8_t client, error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__readDone(uint8_t arg_0x4115da28, error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__val_t val){
#line 63
  switch (arg_0x4115da28) {
#line 63
    case 0U:
#line 63
      SensActP__S_PHOTO__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__default__readDone(arg_0x4115da28, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 107 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__granted(void )
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopping = TRUE;
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopTask__postTask();
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__granted(void ){
#line 46
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 218 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(uint8_t arg_0x41073a58){
#line 65
    /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(arg_0x41073a58);
#line 65
}
#line 65
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__clearEntry(uint8_t id)
#line 57
{
  /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 85
        if (/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEnqueued(i)) {
            /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__clearEntry(i);
            /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 66 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__resQ; i++) 
      if (/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static bool /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state == /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_BUSY && /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__resId == id) {
          if (/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Queue__isEmpty() == FALSE) {
              /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__reqResId = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Queue__dequeue();
              /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__resId = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__NO_RES;
              /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_GRANTING;
              /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__grantedTask__postTask();
              /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(id);
            }
          else {
              /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__resId = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__default_owner_id;
              /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_CONTROLLED;
              /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(id);
              /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Resource__release(uint8_t arg_0x4115b990){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Resource__release(arg_0x4115b990);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 39 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Service__readDone(uint8_t client, error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__width_t data)
#line 39
{
  /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Resource__release(client);
  /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__readDone(client, result, data);
}

# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Read__readDone(uint8_t arg_0x4109f1c8, error_t result, /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Read__val_t val){
#line 63
  /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Service__readDone(arg_0x4109f1c8, result, val);
#line 63
}
#line 63
# 108 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__readDoneTask__runTask(void )
#line 108
{
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__busy = FALSE;
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Read__readDone(/*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__client_id, /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__read_result, /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__read_val);
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

# 351 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline uint8_t VMCustomP__wd2ceuSensorId(uint8_t wdId)
#line 351
{
  switch (wdId & 0x01f) {
      case SID_TEMP: return I_TEMP;
      case SID_PHOTO: return I_PHOTO;
      case SID_VOLT: return I_VOLTS;
      case SID_IN1: return I_PORT_A;
      case SID_IN2: return I_PORT_B;
      case SID_INT1: return I_INT_A;
      case SID_INT2: return I_INT_B;
      case SID_MIC: return I_MIC;
    }
  return 0;
}

# 199 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void *SensActP__SA__getDatap(uint8_t id)
#line 199
{
  ;
  switch (id) {
      case SID_TEMP: return &SensActP__dTemp;
      case SID_PHOTO: return &SensActP__dPhoto;
      case SID_LEDS: return &SensActP__dLeds;
      case SID_VOLT: return &SensActP__dVolt;


      case SID_IN1: __nesc_hton_uint16(SensActP__dPin1.nxdata, SensActP__getPinX(SID_IN1) == TRUE ? 1 : 0);
#line 208
      return &SensActP__dPin1;
      case SID_IN2: __nesc_hton_uint16(SensActP__dPin2.nxdata, SensActP__getPinX(SID_IN2) == TRUE ? 1 : 0);
#line 209
      return &SensActP__dPin2;
    }






  return &SensActP__dTemp;
}

# 27 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
inline static void *VMCustomP__SA__getDatap(uint8_t id){
#line 27
  void *__nesc_result;
#line 27

#line 27
  __nesc_result = SensActP__SA__getDatap(id);
#line 27

#line 27
  return __nesc_result;
#line 27
}
#line 27
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__isInput(void )
#line 60
{
#line 60
  return !((* (volatile uint8_t * )52U & (1 << 4)) != 0);
}

# 45 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool SensActP__A_PIN1__isInput(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__isInput();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )51U & (1 << 4)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool SensActP__A_PIN1__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__isInput(void )
#line 60
{
#line 60
  return !((* (volatile uint8_t * )52U & (1 << 5)) != 0);
}

# 45 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool SensActP__A_PIN2__isInput(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__isInput();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )51U & (1 << 5)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool SensActP__A_PIN2__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 73 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__startTask__runTask(void )
#line 73
{
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__start();
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__start();
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__stopDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__stopDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )34U &= ~(1 << 5);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeInput();
#line 44
}
#line 44
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )35U &= ~(1 << 5);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__clr();
#line 41
}
#line 41
# 83 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__stop(void )
#line 83
{
  if (/*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__started == TRUE) {
      /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__clr();
      /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__makeInput();
      /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__stopDone__postTask();
      return SUCCESS;
    }
  else {
#line 90
    if (/*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__busy == TRUE) {
      return EBUSY;
      }
    }
#line 92
  return FAIL;
}

# 130 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 123 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__default__stop(void )
#line 123
{
  return SUCCESS;
}

# 105 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__default__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 131 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__PowerDownCleanup__default__cleanup(void )
#line 131
{
}

# 62 "/opt/tinyos-2.1.2/tos/lib/power/PowerDownCleanup.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__PowerDownCleanup__cleanup(void ){
#line 62
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 78 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopTask__runTask(void )
#line 78
{
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__PowerDownCleanup__cleanup();
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__StdControl__stop();
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__stop();
}

# 86 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient)
#line 86
{

  AdcP__state = newState;
  AdcP__client = newClient;
  AdcP__sample();

  return SUCCESS;
}





static inline error_t AdcP__ReadNow__read(uint8_t c)
#line 99
{
  return AdcP__startGet(AdcP__ACQUIRE_DATA_NOW, c);
}

# 58 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__ActualRead__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = AdcP__ReadNow__read(/*PhotoImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__1__ID);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static bool /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__isOwner(/*PhotoImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__1__HAL_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 95 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Read__read(uint8_t id)
#line 95
{
  error_t error;

#line 97
  if (/*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__isOwner() && /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__busy == FALSE) {
      error = /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__ActualRead__read();
      if (error == SUCCESS) {
          /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__busy = TRUE;
          /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__client_id = id;
        }
      return error;
    }
  return FAIL;
}

# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Service__read(uint8_t arg_0x4115cac8){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Read__read(arg_0x4115cac8);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Resource__granted(uint8_t client)
#line 35
{
  /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Service__read(client);
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Resource__granted(uint8_t arg_0x4103cbd0){
#line 102
  /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Resource__granted(arg_0x4103cbd0);
#line 102
}
#line 102
# 216 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__configure(uint8_t arg_0x41073a58){
#line 59
    /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(arg_0x41073a58);
#line 59
}
#line 59
# 190 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__resId = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__reqResId;
      /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceConfigure__configure(/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__resId);
  /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Resource__granted(/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__resId);
}

# 103 "/opt/tinyos-2.1.2/tos/platforms/mica/MeasureClockC.nc"
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void )
#line 103
{

  if (MeasureClockC__cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 107
  if (MeasureClockC__cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 109
  if (MeasureClockC__cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 111
  if (MeasureClockC__cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 113
  if (MeasureClockC__cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 115
  if (MeasureClockC__cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 117
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = MeasureClockC__Atm128Calibrate__adcPrescaler();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x)
#line 59
{
#line 59
  union __nesc_unnamed4419 {
#line 59
    Atm128Admux_t f;
#line 59
    uint8_t t;
  } 
#line 59
  c = { .f = x };

#line 59
  return c.t;
}


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x)
#line 63
{
  * (volatile uint8_t *)(0x07 + 0x20) = HplAtm128AdcP__Admux2int(x);
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux){
#line 58
  HplAtm128AdcP__HplAtm128Adc__setAdmux(admux);
#line 58
}
#line 58
# 139 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 139
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void )
#line 49
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)(0x07 + 0x20);
}

# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void ){
#line 53
  struct __nesc_unnamed4251 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__getAdmux();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 204 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 204
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsr;

  admux = Atm128AdcP__HplAtm128Adc__getAdmux();
  Atm128AdcP__f.precise = Atm128AdcP__isPrecise(admux, channel, refVoltage);
  Atm128AdcP__f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;
  admux.mux = channel;
  Atm128AdcP__HplAtm128Adc__setAdmux(admux);

  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adfr = Atm128AdcP__f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP__Atm128Calibrate__adcPrescaler();
    }
#line 224
  adcsr.adps = prescaler;
  Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
}

static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 229
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP__f.multiple = FALSE;
      Atm128AdcP__getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 235
        Atm128AdcP__f.precise;

        {
#line 235
          __nesc_atomic_end(__nesc_atomic); 
#line 235
          return __nesc_temp;
        }
      }
    }
#line 238
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = Atm128AdcP__Atm128AdcSingle__getData(channel, refVoltage, leftJustify, prescaler);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 30 "/opt/tinyos-2.1.2/tos/platforms/mica/MicaBusP.nc"
static inline uint8_t MicaBusP__Adc1__getChannel(void )
#line 30
{
#line 30
  return 1;
}

# 20 "/opt/tinyos-2.1.2/tos/platforms/mica/MicaBusAdc.nc"
inline static uint8_t PhotoTempConfigP__PhotoTempAdc__getChannel(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = MicaBusP__Adc1__getChannel();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 21 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/PhotoTempConfigP.nc"
static inline uint8_t PhotoTempConfigP__Atm128AdcConfig__getChannel(void )
#line 21
{
  return PhotoTempConfigP__PhotoTempAdc__getChannel();
}

# 44 "/opt/tinyos-2.1.2/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP__Atm128AdcConfig__getChannel(void )
{

  return ATM128_ADC_SNGL_1_23;
}

# 137 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getChannel(uint8_t arg_0x411340c8){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  switch (arg_0x411340c8) {
#line 25
    case /*TempImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__0__ID:
#line 25
      __nesc_result = PhotoTempConfigP__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*PhotoImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__1__ID:
#line 25
      __nesc_result = PhotoTempConfigP__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0__ID:
#line 25
      __nesc_result = VoltageP__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      __nesc_result = AdcP__Atm128AdcConfig__default__getChannel(arg_0x411340c8);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__channel(void )
#line 70
{
  return AdcP__Atm128AdcConfig__getChannel(AdcP__client);
}

# 25 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/PhotoTempConfigP.nc"
static inline uint8_t PhotoTempConfigP__Atm128AdcConfig__getRefVoltage(void )
#line 25
{
  return ATM128_ADC_VREF_OFF;
}

# 50 "/opt/tinyos-2.1.2/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_OFF;
}

# 141 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(uint8_t arg_0x411340c8){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  switch (arg_0x411340c8) {
#line 32
    case /*TempImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__0__ID:
#line 32
      __nesc_result = PhotoTempConfigP__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*PhotoImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__1__ID:
#line 32
      __nesc_result = PhotoTempConfigP__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0__ID:
#line 32
      __nesc_result = VoltageP__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      __nesc_result = AdcP__Atm128AdcConfig__default__getRefVoltage(arg_0x411340c8);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 74 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__refVoltage(void )
#line 74
{
  return AdcP__Atm128AdcConfig__getRefVoltage(AdcP__client);
}

# 29 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/PhotoTempConfigP.nc"
static inline uint8_t PhotoTempConfigP__Atm128AdcConfig__getPrescaler(void )
#line 29
{
  return ATM128_ADC_PRESCALE;
}

# 55 "/opt/tinyos-2.1.2/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE;
}

# 145 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getPrescaler(uint8_t arg_0x411340c8){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x411340c8) {
#line 39
    case /*TempImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__0__ID:
#line 39
      __nesc_result = PhotoTempConfigP__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*PhotoImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__1__ID:
#line 39
      __nesc_result = PhotoTempConfigP__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0__ID:
#line 39
      __nesc_result = VoltageP__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = AdcP__Atm128AdcConfig__default__getPrescaler(arg_0x411340c8);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 78 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__prescaler(void )
#line 78
{
  return AdcP__Atm128AdcConfig__getPrescaler(AdcP__client);
}

# 237 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP__S_VOLT__readDone(error_t result, uint16_t val)
#line 237
{
  uint8_t source;

#line 239
  ;
  __nesc_hton_uint16(SensActP__dVolt.nxdata, val);

  for (source = 0; source < 4; source++) 
    if (SensActP__getSReq(source, SID_VOLT) == TRUE) {
#line 243
      SensActP__SA__Ready(source, TID_SENSOR_DONE | SID_VOLT);
      }
}

# 48 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(uint8_t arg_0x4115da28, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val){
#line 63
  switch (arg_0x4115da28) {
#line 63
    case /*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0__ID:
#line 63
      SensActP__S_VOLT__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(arg_0x4115da28, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 47 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(uint8_t arg_0x4115b990){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x4115b990) {
#line 120
    case /*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(/*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0__HAL_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(arg_0x4115b990);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 39 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(client, result, data);
}

# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x410ebbd8, error_t result, AdcP__Read__val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(arg_0x410ebbd8, result, val);
#line 63
}
#line 63
# 103 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__acquiredData__runTask(void )
#line 103
{
  AdcP__state = AdcP__IDLE;
  AdcP__Read__readDone(AdcP__client, SUCCESS, AdcP__val);
}

# 222 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 109 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(7U, dt);
#line 73
}
#line 73
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )53U |= 1 << 0;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )52U |= 1 << 0;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeOutput();
#line 46
}
#line 46
# 67 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__granted(void )
#line 67
{
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__makeOutput();
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__set();
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Timer__startOneShot(10);
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(8U, dt);
#line 73
}
#line 73
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )35U |= 1 << 5;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )34U |= 1 << 5;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeOutput();
#line 46
}
#line 46
# 67 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__granted(void )
#line 67
{
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__makeOutput();
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__EnablePin__set();
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Timer__startOneShot(10);
}

# 95 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static inline error_t AdcP__Read__read(uint8_t c)
#line 95
{
  return AdcP__startGet(AdcP__ACQUIRE_DATA, c);
}

# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(uint8_t arg_0x4115cac8){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP__Read__read(arg_0x4115cac8);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(client);
}

# 202 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0x4103cbd0){
#line 102
  switch (arg_0x4103cbd0) {
#line 102
    case /*TempImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__0__HAL_ID:
#line 102
      /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__granted();
#line 102
      break;
#line 102
    case /*PhotoImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__1__HAL_ID:
#line 102
      /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__granted();
#line 102
      break;
#line 102
    case /*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0__ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(arg_0x4103cbd0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x41073a58){
#line 59
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0x41073a58);
#line 59
}
#line 59
# 190 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId);
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void )
#line 103
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4274 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 104 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 94 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start(void )
#line 94
{
  return SUCCESS;
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 112 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error)
#line 112
{
  if (/*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__requested == TRUE) {
      /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start();
      /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 117
    {
      /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__requested = FALSE;
      /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopping = FALSE;
    }
#line 120
    __nesc_atomic_end(__nesc_atomic); }
}

# 138 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__stopDone(error_t error){
#line 138
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error);
#line 138
}
#line 138
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(/*TempImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__0__HAL_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 77 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__stopDone__runTask(void )
#line 77
{
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__release();
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__started = FALSE;
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__stopDone(SUCCESS);
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(/*TempImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__0__HAL_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 221 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP__S_TEMP__readDone(error_t result, uint16_t val)
#line 221
{
  uint8_t source;

#line 223
  ;
  __nesc_hton_uint16(SensActP__dTemp.nxdata, val);
  for (source = 0; source < 4; source++) 
    if (SensActP__getSReq(source, SID_TEMP) == TRUE) {
#line 226
      SensActP__SA__Ready(source, TID_SENSOR_DONE | SID_TEMP);
      }
}

# 48 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__default__readDone(uint8_t client, error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__readDone(uint8_t arg_0x4115da28, error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__val_t val){
#line 63
  switch (arg_0x4115da28) {
#line 63
    case 0U:
#line 63
      SensActP__S_TEMP__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__default__readDone(arg_0x4115da28, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 107 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopping = TRUE;
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopTask__postTask();
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 218 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x41073a58){
#line 65
    /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x41073a58);
#line 65
}
#line 65
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 85
        if (/*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 66 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static bool /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state == /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__reqResId = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__resId = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__resId = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Resource__release(uint8_t arg_0x4115b990){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(arg_0x4115b990);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 39 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Service__readDone(uint8_t client, error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__width_t data)
#line 39
{
  /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Resource__release(client);
  /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__readDone(client, result, data);
}

# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Read__readDone(uint8_t arg_0x4109f1c8, error_t result, /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Read__val_t val){
#line 63
  /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Service__readDone(arg_0x4109f1c8, result, val);
#line 63
}
#line 63
# 108 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__readDoneTask__runTask(void )
#line 108
{
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__busy = FALSE;
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Read__readDone(/*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__client_id, /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__read_result, /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__read_val);
}

# 73 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask(void )
#line 73
{
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start();
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start();
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__stopDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__stopDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )52U &= ~(1 << 0);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeInput();
#line 44
}
#line 44
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )53U &= ~(1 << 0);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__clr();
#line 41
}
#line 41
# 83 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__stop(void )
#line 83
{
  if (/*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__started == TRUE) {
      /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__clr();
      /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__EnablePin__makeInput();
      /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__stopDone__postTask();
      return SUCCESS;
    }
  else {
#line 90
    if (/*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__busy == TRUE) {
      return EBUSY;
      }
    }
#line 92
  return FAIL;
}

# 130 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 123 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop(void )
#line 123
{
  return SUCCESS;
}

# 105 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 131 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 131
{
}

# 62 "/opt/tinyos-2.1.2/tos/lib/power/PowerDownCleanup.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 78 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask(void )
#line 78
{
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup();
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__StdControl__stop();
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stop();
}

# 58 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__ActualRead__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = AdcP__ReadNow__read(/*TempImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__0__ID);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static bool /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__isOwner(/*TempImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__0__HAL_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 95 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Read__read(uint8_t id)
#line 95
{
  error_t error;

#line 97
  if (/*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__isOwner() && /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__busy == FALSE) {
      error = /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__ActualRead__read();
      if (error == SUCCESS) {
          /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__busy = TRUE;
          /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__client_id = id;
        }
      return error;
    }
  return FAIL;
}

# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Service__read(uint8_t arg_0x4115cac8){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Read__read(arg_0x4115cac8);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Resource__granted(uint8_t client)
#line 35
{
  /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Service__read(client);
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x4103cbd0){
#line 102
  /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Resource__granted(arg_0x4103cbd0);
#line 102
}
#line 102
# 216 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x41073a58){
#line 59
    /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x41073a58);
#line 59
}
#line 59
# 190 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__resId = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__reqResId;
      /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__resId);
  /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__resId);
}

# 249 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP__sigInt2__runTask(void )
#line 249
{
#line 249
  SensActP__SA__Ready(0, (uint8_t )(TID_SENSOR_DONE | SID_INT2));
}

#line 248
static inline void SensActP__sigInt1__runTask(void )
#line 248
{
#line 248
  SensActP__SA__Ready(0, (uint8_t )(TID_SENSOR_DONE | SID_INT1));
}

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
# 315 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__BCRadio_receive__runTask(void )
#line 315
{
  VMCustomP__VM__queueEvt(I_RECEIVE_ID, __nesc_ntoh_uint8(VMCustomP__ExtDataRadioReceived.type.nxdata), &VMCustomP__ExtDataRadioReceived);
  VMCustomP__VM__queueEvt(I_RECEIVE, 0, &VMCustomP__ExtDataRadioReceived);
}

# 1045 "BasicServicesP.nc"
static inline void BasicServicesP__outQ__dataReady(void )
#line 1045
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
# 931 "BasicServicesP.nc"
static inline void BasicServicesP__inQ__dataReady(void )
#line 931
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

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t CC2420TinyosNetworkP__grantTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TinyosNetworkP__grantTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 229 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id)
#line 229
{
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      CC2420TinyosNetworkP__grantTask__postTask();
    }
  CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
  return SUCCESS;
}

#line 253
static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client)
#line 253
{
  CC2420TinyosNetworkP__Resource__release(client);
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void CC2420TinyosNetworkP__Resource__granted(uint8_t arg_0x40e75628){
#line 102
  switch (arg_0x40e75628) {
#line 102
    case CC2420ActiveMessageC__CC2420_AM_SEND_ID:
#line 102
      CC2420ActiveMessageP__RadioResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420TinyosNetworkP__Resource__default__granted(arg_0x40e75628);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 68 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    {
      if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
          uint8_t id = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead;

#line 72
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead];
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
            }
#line 75
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
          {
            unsigned char __nesc_temp = 
#line 76
            id;

            {
#line 76
              __nesc_atomic_end(__nesc_atomic); 
#line 76
              return __nesc_temp;
            }
          }
        }
#line 78
      {
        unsigned char __nesc_temp = 
#line 78
        /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

        {
#line 78
          __nesc_atomic_end(__nesc_atomic); 
#line 78
          return __nesc_temp;
        }
      }
    }
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
#line 53
inline static bool CC2420TinyosNetworkP__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 180 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__grantTask__runTask(void )
#line 180
{


  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && !CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__Queue__dequeue();

          if (CC2420TinyosNetworkP__resource_owner != CC2420TinyosNetworkP__OWNER_NONE) {
              CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
            }
        }
    }
  else 
#line 191
    {
      if (CC2420TinyosNetworkP__next_owner != CC2420TinyosNetworkP__resource_owner) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__next_owner;
          CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
        }
    }
}

# 128 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId)
#line 128
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    *CC2420PacketP__getNetwork(p_msg) = networkId;
#line 131
    __nesc_atomic_end(__nesc_atomic); }
}

# 77 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId){
#line 77
  CC2420PacketP__CC2420Packet__setNetwork(p_msg, networkId);
#line 77
}
#line 77
# 81 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline int CC2420PacketP__getAddressLength(int type)
#line 81
{
  switch (type) {
      case IEEE154_ADDR_SHORT: return 2;
      case IEEE154_ADDR_EXT: return 8;
      case IEEE154_ADDR_NONE: return 0;
      default: return -100;
    }
}

# 297 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

#line 347
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

#line 286
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

#line 327
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

#line 322
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 547 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca)
#line 547
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 548
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 550
            ECANCEL;

            {
#line 550
              __nesc_atomic_end(__nesc_atomic); 
#line 550
              return __nesc_temp;
            }
          }
        }
#line 553
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 554
            FAIL;

            {
#line 554
              __nesc_atomic_end(__nesc_atomic); 
#line 554
              return __nesc_temp;
            }
          }
        }


      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_cca = cca;
      CC2420TransmitP__m_msg = p_msg;
      CC2420TransmitP__totalCcaChecks = 0;
    }
#line 564
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
      CC2420TransmitP__loadTXFIFO();
    }

  return SUCCESS;
}

#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca)
#line 192
{
  return CC2420TransmitP__send(p_msg, useCca);
}

# 51 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TransmitP__Send__send(p_msg, useCca);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 292 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 301 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg)
#line 302
{
}

# 95 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCca(am_id_t arg_0x40eee148, message_t * msg){
#line 95
    CC2420ActiveMessageP__RadioBackoff__default__requestCca(arg_0x40eee148, msg);
#line 95
}
#line 95
# 250 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg)
#line 250
{

  CC2420ActiveMessageP__RadioBackoff__requestCca(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 95 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg){
#line 95
  CC2420ActiveMessageP__SubBackoff__requestCca(msg);
#line 95
}
#line 95
# 111 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP__state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
inline static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(1U, reqState);
#line 51
}
#line 51
#line 66
inline static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP__State__isState(1U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 152 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg)
#line 152
{
  return (cc2420_metadata_t *)msg->metadata;
}

# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 137 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg)
#line 137
{
  return (cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 122 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len)
#line 122
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 124
  cc2420_header_t *header = CC2420CsmaP__CC2420PacketBody__getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP__CC2420PacketBody__getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    {
      if (!CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 129
            FAIL;

            {
#line 129
              __nesc_atomic_end(__nesc_atomic); 
#line 129
              return __nesc_temp;
            }
          }
        }
#line 132
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_TRANSMITTING);
      CC2420CsmaP__m_msg = p_msg;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }








  (__nesc_temp42 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (((1 << IEEE154_FCF_ACK_REQ) | (
  0x3 << IEEE154_FCF_SRC_ADDR_MODE)) | (
  0x3 << IEEE154_FCF_DEST_ADDR_MODE))));

  (__nesc_temp43 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN))));

  __nesc_hton_int8(metadata->ack.nxdata, FALSE);
  __nesc_hton_uint8(metadata->rssi.nxdata, 0);
  __nesc_hton_uint8(metadata->lqi.nxdata, 0);

  __nesc_hton_uint32(metadata->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP__ccaOn = TRUE;
  CC2420CsmaP__RadioBackoff__requestCca(CC2420CsmaP__m_msg);

  CC2420CsmaP__CC2420Transmit__send(CC2420CsmaP__m_msg, CC2420CsmaP__ccaOn);
  return SUCCESS;
}

# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static error_t UniqueSendP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420CsmaP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 45 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
inline static error_t UniqueSendP__State__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(2U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 75 "/opt/tinyos-2.1.2/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP__State__requestState(UniqueSendP__S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP__CC2420PacketBody__getHeader(msg)->dsn.nxdata, UniqueSendP__localSendId++);

      if ((error = UniqueSendP__SubSend__send(msg, len)) != SUCCESS) {
          UniqueSendP__State__toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = UniqueSendP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 45 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static bool Atm128SpiP__ResourceArbiter__isOwner(uint8_t arg_0x40b19068){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(arg_0x40b19068);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 421 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline bool Atm128SpiP__Resource__isOwner(uint8_t id)
#line 421
{
  return Atm128SpiP__ResourceArbiter__isOwner(id);
}

# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static bool HplCC2420SpiP__SubResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = Atm128SpiP__Resource__isOwner(0U);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 83 "/opt/tinyos-2.1.2/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline bool HplCC2420SpiP__Resource__isOwner(void )
{
  return HplCC2420SpiP__SubResource__isOwner();
}

# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = HplCC2420SpiP__Resource__isOwner();
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )56U &= ~(1 << 0);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 0;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 171 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x40bbfc60){
#line 59
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x40bbfc60);
#line 59
}
#line 59
# 169 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 169
{
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x40bbf030){
#line 61
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x40bbf030);
#line 61
}
#line 61
# 84 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 86
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      FAIL;

#line 93
      return __nesc_temp;
    }
  }
}

# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__immediateRequest(uint8_t arg_0x40b19068){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(arg_0x40b19068);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 394 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id)
#line 394
{
  error_t result = Atm128SpiP__ResourceArbiter__immediateRequest(id);

#line 396
  if (result == SUCCESS) {
      Atm128SpiP__startSpi();
    }
  return result;
}

# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = Atm128SpiP__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 56 "/opt/tinyos-2.1.2/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__immediateRequest(void )
{
  error_t error = HplCC2420SpiP__SubResource__immediateRequest();

#line 59
  if (error == SUCCESS) 
    {
      HplCC2420SpiP__SS__makeOutput();
      HplCC2420SpiP__SS__clr();
    }
  return error;
}

# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplCC2420SpiP__Resource__immediateRequest();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 173 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 173
{
  if (isMaster) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 4);
    }
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 1;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 46
}
#line 46
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 44
}
#line 44
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 46
}
#line 46
# 96 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 96
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SS__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 83 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 83
  HplAtm128SpiP__SPI__initMaster();
#line 83
}
#line 83
# 186 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 186
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    }
}

# 125 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 125
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 125
}
#line 125
# 200 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 200
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    }
}

# 128 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 128
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 128
}
#line 128
# 230 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 230
{
  if (on) {
      * (volatile uint8_t *)(0x0E + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x0E + 0x20) &= ~(1 << 0);
    }
}

# 141 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 141
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 141
}
#line 141
# 217 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 217
{
  v &= (1 << 1) | (1 << 0);
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~((1 << 1) | (1 << 0))) | v;
}

# 131 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 131
  HplAtm128SpiP__SPI__setClock(speed);
#line 131
}
#line 131
# 118 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP__state[id] = StateImplP__S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 64 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 88
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 89
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 167 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x40bbf030){
#line 53
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x40bbf030);
#line 53
}
#line 53
# 71 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 73
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
        {
          unsigned char __nesc_temp = 
#line 78
          SUCCESS;

#line 78
          return __nesc_temp;
        }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

#line 80
      return __nesc_temp;
    }
  }
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__request(uint8_t arg_0x40b19068){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(arg_0x40b19068);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 90 "/opt/tinyos-2.1.2/tos/interfaces/ArbiterInfo.nc"
inline static bool Atm128SpiP__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 402 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__request(uint8_t id)
#line 402
{
  /* atomic removed: atomic calls only */
#line 403
  {
    if (!Atm128SpiP__ArbiterInfo__inUse()) {
        Atm128SpiP__startSpi();
      }
  }
  return Atm128SpiP__ResourceArbiter__request(id);
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = Atm128SpiP__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 51 "/opt/tinyos-2.1.2/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__request(void )
{
  return HplCC2420SpiP__SubResource__request();
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = HplCC2420SpiP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 116 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 116
{
#line 116
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 103 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 103
  HplAtm128SpiP__SPI__write(data);
#line 103
}
#line 103
# 124 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline bool HplAtm128SpiP__SPI__isInterruptPending(void )
#line 124
{
  return (* (volatile uint8_t *)(0x0E + 0x20) & (1 << 7)) != 0;
}

# 136 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static bool Atm128SpiP__Spi__isInterruptPending(void ){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = HplAtm128SpiP__SPI__isInterruptPending();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 70 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = Atm128SpiP__SpiPacket__send(txBuf, rxBuf, len);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = Atm128SpiP__SpiByte__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 126 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 214 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 82 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t Atm128SpiP__zeroTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Atm128SpiP__zeroTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 303 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 303
{
#line 303
  return __nesc_ntoh_uint8(source);
}

# 75 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP__Acks__wasAcked(message_t *p_msg)
#line 75
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(p_msg)->ack.nxdata);
}

# 85 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/PacketAcknowledgements.nc"
inline static bool BasicServicesP__RadioAck__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = CC2420PacketP__Acks__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 11 "BSRadio.nc"
inline static void BasicServicesP__BSRadio__sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked){
#line 11
  VMCustomP__BSRadio__sendDoneAck(am_id, msg, dataMsg, error, wasAcked);
#line 11
}
#line 11
#line 10
inline static void BasicServicesP__BSRadio__sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error){
#line 10
  VMCustomP__BSRadio__sendDone(am_id, msg, dataMsg, error);
#line 10
}
#line 10
# 103 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

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

#line 604
static inline int TerraVMC__ceu_go_wclock(int *ret, s32 dt, s32 *nxt)
{
  int i;
  s32 min_togo = 0x7FFFFFFF;
  TerraVMC__tceu_wclock *CLK0 = (TerraVMC__tceu_wclock *)((&TerraVMC__CEU_)->p_mem + TerraVMC__wClock0);

  (&TerraVMC__CEU_)->stack = 0x01;

  if (! (&TerraVMC__CEU_)->wclk_cur) {
      if (nxt) {
#line 613
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

#line 630
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
#line 638
        {
          tmr->togo -= dt;
          if (tmr->togo < 0) {
              tmr->togo = 0L;
              TerraVMC__ceu_spawn(& tmr->lbl);
            }
          else {
#line 644
            TerraVMC__ceu_wclock_lt(tmr);
            }
        }
    }


  {
#line 650
    int s = TerraVMC__ceu_go(ret);

#line 651
    if (nxt) {
      *nxt = (&TerraVMC__CEU_)->wclk_cur ? (&TerraVMC__CEU_)->wclk_cur->togo : 0x7FFFFFFF;
      }
#line 653
    (&TerraVMC__CEU_)->wclk_late = 0;
    TerraVMC__ceu_out_wclock((&TerraVMC__CEU_)->wclk_cur ? (&TerraVMC__CEU_)->wclk_cur->togo : 0x7FFFFFFF);

    return s;
  }
}

# 189 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static uint32_t BasicServicesP__TimerVM__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(1U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 252 "BasicServicesP.nc"
static inline uint32_t BasicServicesP__BSTimerVM__getNow(void )
#line 252
{
#line 252
  return BasicServicesP__TimerVM__getNow();
}

# 16 "BSTimer.nc"
inline static uint32_t TerraVMC__BSTimerVM__getNow(void ){
#line 16
  unsigned long __nesc_result;
#line 16

#line 16
  __nesc_result = BasicServicesP__BSTimerVM__getNow();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 1712 "TerraVMC.nc"
static inline void TerraVMC__BSTimerVM__fired(void )
{
  u32 now = (u32 )TerraVMC__BSTimerVM__getNow();
  s32 dt = now - TerraVMC__old;

#line 1716
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
# 260 "BasicServicesP.nc"
static inline void BasicServicesP__TimerVM__fired(void )
#line 260
{
  BasicServicesP__BSTimerVM__fired();
}

# 568 "TerraVMC.nc"
static inline int TerraVMC__ceu_go_async(int *ret, int *pending)
{
  int i;
#line 570
  int s = 0;
  TerraVMC__tceu_nlbl *ASY0 = (TerraVMC__tceu_nlbl *)((&TerraVMC__CEU_)->p_mem + TerraVMC__async0);

#line 572
  ;


  for (i = 0; i < TerraVMC__asyncs; i++) {
      int idx = ((&TerraVMC__CEU_)->async_cur + i) % TerraVMC__asyncs;

#line 577
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
# 1722 "TerraVMC.nc"
static inline bool TerraVMC__hasAsync(void )
#line 1722
{
  uint8_t i;
  TerraVMC__tceu_nlbl *ASY0 = (TerraVMC__tceu_nlbl *)((&TerraVMC__CEU_)->p_mem + TerraVMC__async0);

#line 1725
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
#line 1736
    TerraVMC__BSTimerAsync__startOneShot(2);
    }
#line 1737
  TerraVMC__ceu_go_async((void *)0, (void *)0);
}

# 19 "BSTimer.nc"
inline static void BasicServicesP__BSTimerAsync__fired(void ){
#line 19
  TerraVMC__BSTimerAsync__fired();
#line 19
}
#line 19
# 276 "BasicServicesP.nc"
static inline void BasicServicesP__TimerAsync__fired(void )
#line 276
{
#line 276
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
# 1065 "BasicServicesP.nc"
static inline void BasicServicesP__sendTimer__fired(void )
#line 1065
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
# 770 "BasicServicesP.nc"
static inline void BasicServicesP__ProgReqTimer__fired(void )
#line 770
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

# 1799 "TerraVMC.nc"
static inline uint8_t *TerraVMC__BSUpload__getSection(uint16_t Addr)
#line 1799
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
# 775 "BasicServicesP.nc"
static inline void BasicServicesP__SendDataFullTimer__fired(void )
#line 775
{
  newProgBlock_t xBlock;

#line 777
  ;

  if (BasicServicesP__BM__get(BasicServicesP__DsmBlockCount + __nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata))) {
      uint8_t *mem;
      uint16_t i;

#line 782
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
#line 792
    {
      BasicServicesP__ReqState = ST_IDLE;
    }
}

# 133 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__resId == /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state == /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state == /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__resId = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__reqResId;
                /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 184 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline bool /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__isOwner(void )
#line 184
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 185
    {
      unsigned char __nesc_temp = 
#line 185
      /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state == /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED
       || (/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__resId == /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id
       && (/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state == /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING || /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state == /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING));

      {
#line 185
        __nesc_atomic_end(__nesc_atomic); 
#line 185
        return __nesc_temp;
      }
    }
#line 187
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static bool /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__isOwner();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 102 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error)
#line 102
{
  if (/*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner()) {
    /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release();
    }
}

# 113 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__startDone(error_t error){
#line 113
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error);
#line 113
}
#line 113
# 73 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Timer__fired(void )
#line 73
{
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__startDone(SUCCESS);
}

# 133 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__resId == /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__default_owner_id) {
          if (/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state == /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_GRANTING) {
              /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state == /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_IMM_GRANTING) {
                /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__resId = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__reqResId;
                /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 184 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline bool /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__isOwner(void )
#line 184
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 185
    {
      unsigned char __nesc_temp = 
#line 185
      /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state == /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_CONTROLLED
       || (/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__resId == /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__default_owner_id
       && (/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state == /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_GRANTING || /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state == /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_IMM_GRANTING));

      {
#line 185
        __nesc_atomic_end(__nesc_atomic); 
#line 185
        return __nesc_temp;
      }
    }
#line 187
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static bool /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__isOwner(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__isOwner();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 102 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__startDone(error_t error)
#line 102
{
  if (/*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__isOwner()) {
    /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__release();
    }
}

# 113 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__startDone(error_t error){
#line 113
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__SplitControl__startDone(error);
#line 113
}
#line 113
# 73 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Timer__fired(void )
#line 73
{
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__startDone(SUCCESS);
}

# 204 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x40df3708){
#line 83
  switch (arg_0x40df3708) {
#line 83
    case 1U:
#line 83
      BasicServicesP__TimerVM__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      BasicServicesP__TimerAsync__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      BasicServicesP__sendTimer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      BasicServicesP__ProgReqTimer__fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      BasicServicesP__SendDataFullTimer__fired();
#line 83
      break;
#line 83
    case 7U:
#line 83
      /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__Timer__fired();
#line 83
      break;
#line 83
    case 8U:
#line 83
      /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__Timer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x40df3708);
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
# 164 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void BasicServicesP__TimerAsync__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
#line 73
inline static void BasicServicesP__TimerAsync__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 177 "TerraVMC.nc"
static inline uint8_t TerraVMC__getBitsPow(uint8_t data, uint8_t stBit, uint8_t endBit)
#line 177
{
#line 177
  return 1 << TerraVMC__getBits(data, stBit, endBit);
}

#line 1529
static inline void TerraVMC__f_set_c(uint8_t Modifier)
#line 1529
{
  uint8_t v1_len;
#line 1530
  uint8_t p1_1len;
#line 1530
  uint8_t p2_len;
#line 1530
  uint8_t tp1;
  uint16_t Maddr;
  uint32_t Const;

#line 1533
  tp1 = TerraVMC__getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  p1_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  p2_len = (uint8_t )(TerraVMC__getBits(Modifier, 4, 5) + 1);
  Maddr = TerraVMC__getPar16(p1_1len);
  Const = TerraVMC__getPar32(p2_len);
  ;
  if (tp1 == F32) {
      float buffer = * (float *)&Const;

#line 1542
      TerraVMC__setMVal(* (uint32_t *)&buffer, Maddr, F32, tp1);
    }
  else 
#line 1543
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
# 136 "TerraVMC.nc"
static inline uint8_t TerraVMC__getPar8(uint8_t p_len)
#line 136
{
  uint8_t temp = (uint8_t )__nesc_ntoh_uint8(TerraVMC__CEU_data[TerraVMC__PC].nxdata);

#line 138
  TerraVMC__PC++;
  ;
  return temp;
}

#line 1517
static inline void TerraVMC__f_outevt_v(uint8_t Modifier)
#line 1517
{
  uint8_t v2_len;
#line 1518
  uint8_t tp2;
#line 1518
  uint8_t p2_1len;
#line 1518
  uint8_t Cevt;
  uint16_t Maddr;

#line 1520
  p2_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  tp2 = TerraVMC__getBits(Modifier, 0, 2);
  v2_len = tp2 == F32 ? 4 : 1 << (tp2 & 0x3);
  Cevt = TerraVMC__getPar8(1);
  Maddr = TerraVMC__getPar16(p2_1len);
  ;
  TerraVMC__VMCustom__procOutEvt(Cevt, Maddr);
}

#line 1494
static inline void TerraVMC__f_pop(uint8_t Modifier)
#line 1494
{
  uint8_t v1_len;
#line 1495
  uint8_t tp1;
#line 1495
  uint8_t p1_1len;
  uint16_t Maddr;

#line 1497
  p1_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  tp1 = TerraVMC__getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  Maddr = TerraVMC__getPar16(p1_1len);
  if (tp1 == F32) {
      float Value = TerraVMC__popf();

#line 1503
      ;
      TerraVMC__setMVal(* (uint32_t *)&Value, Maddr, F32, tp1);
    }
  else 
#line 1505
    {
      int32_t Value = TerraVMC__pop();

#line 1507
      ;
      TerraVMC__setMVal(Value, Maddr, S32, tp1);
    }
}

# 152 "/opt/tinyos-2.1.2/tos/chips/atm128/atm128hardware.h"
static __inline  float __nesc_ntoh_afloat(const void * source)
#line 152
{
  float f;

#line 154
  memcpy(&f, source, sizeof(float ));
  return f;
}

# 238 "TerraVMC.nc"
static inline float TerraVMC__getMValf(uint16_t Maddr)
#line 238
{
  return (float )__nesc_ntoh_afloat((* (nx_float *)(TerraVMC__MEM + Maddr)).nxdata);
}

#line 1478
static inline void TerraVMC__f_push_v(uint8_t Modifier)
#line 1478
{
  uint8_t v1_len;
#line 1479
  uint8_t tp1;
#line 1479
  uint8_t p1_1len;
  uint16_t Maddr;

#line 1481
  p1_1len = TerraVMC__getBitsPow(Modifier, 3, 3);
  tp1 = TerraVMC__getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  Maddr = TerraVMC__getPar16(p1_1len);
  if (tp1 == F32) {
      ;
      TerraVMC__pushf(TerraVMC__getMValf(Maddr));
    }
  else 
#line 1488
    {
      ;
      TerraVMC__push(TerraVMC__getMVal(Maddr, tp1));
    }
}

#line 1467
static inline void TerraVMC__f_tkins_max(uint8_t Modifier)
#line 1467
{
  uint8_t stack;
#line 1468
  uint8_t p1_1len;
  uint16_t lbl;

#line 1470
  stack = (uint8_t )((&TerraVMC__CEU_)->stack + TerraVMC__getBits(Modifier, 1, 2));
  p1_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  lbl = TerraVMC__getPar16(p1_1len);
  ;
  ;
  TerraVMC__ceu_track_ins(stack, 255, 0, lbl);
}

#line 1441
static inline void TerraVMC__f_memcpy(uint8_t Modifier)
#line 1441
{
  uint8_t p1_1len;
#line 1442
  uint8_t p2_1len;
#line 1442
  uint8_t p3_1len;
  uint16_t size;
#line 1443
  uint16_t MaddrFrom;
#line 1443
  uint16_t MaddrTo;

#line 1444
  p1_1len = TerraVMC__getBitsPow(Modifier, 2, 2);
  p2_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p3_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  size = TerraVMC__getPar16(p1_1len);
  MaddrFrom = TerraVMC__getPar16(p2_1len);
  MaddrTo = TerraVMC__getPar16(p3_1len);
  ;
  memcpy((void *)(TerraVMC__MEM + MaddrTo), (void *)(TerraVMC__MEM + MaddrFrom), size);
}

#line 1424
static inline void TerraVMC__f_deref(uint8_t Modifier)
#line 1424
{
  uint16_t MAddr;
  uint8_t type;

#line 1427
  type = TerraVMC__getBits(Modifier, 0, 2);
  MAddr = (uint16_t )TerraVMC__pop();
  ;
  switch (type) {
      case U8: ;
#line 1431
      TerraVMC__push((uint8_t )TerraVMC__getMVal(MAddr, type));
#line 1431
      break;
      case U16: ;
#line 1432
      TerraVMC__push((uint16_t )TerraVMC__getMVal(MAddr, type));
#line 1432
      break;
      case U32: ;
#line 1433
      TerraVMC__push((uint32_t )TerraVMC__getMVal(MAddr, type));
#line 1433
      break;
      case F32: ;
#line 1434
      TerraVMC__pushf(TerraVMC__getMValf(MAddr));
#line 1434
      break;
      case S8: ;
#line 1435
      TerraVMC__push((int8_t )TerraVMC__getMVal(MAddr, type));
#line 1435
      break;
      case S16: ;
#line 1436
      TerraVMC__push((int16_t )TerraVMC__getMVal(MAddr, type));
#line 1436
      break;
      case S32: ;
#line 1437
      TerraVMC__push((int32_t )TerraVMC__getMVal(MAddr, type));
#line 1437
      break;
    }
}

#line 1407
static inline void TerraVMC__f_set_e(uint8_t Modifier)
#line 1407
{
  uint8_t v1_len;
#line 1408
  uint8_t tp1;
  uint16_t Maddr1;

#line 1410
  tp1 = TerraVMC__getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  Maddr1 = (uint16_t )TerraVMC__pop();
  if (tp1 == F32) {
      float Value = TerraVMC__popf();

#line 1415
      TerraVMC__setMVal(* (uint32_t *)&Value, Maddr1, F32, tp1);
      ;
    }
  else 
#line 1417
    {
      uint32_t Value = TerraVMC__pop();

#line 1419
      TerraVMC__setMVal(Value, Maddr1, S32, tp1);
      ;
    }
}

#line 1397
static inline void TerraVMC__f_dec(uint8_t Modifier)
#line 1397
{
  uint8_t v1_len;
#line 1398
  uint8_t tp1;
  uint16_t Maddr;

#line 1400
  tp1 = TerraVMC__getBits(Modifier, 0, 1);
  v1_len = 1 << tp1;
  Maddr = (uint16_t )TerraVMC__pop();
  ;
  TerraVMC__setMVal(TerraVMC__getMVal(Maddr, tp1) - 1, Maddr, tp1, tp1);
}

#line 1388
static inline void TerraVMC__f_inc(uint8_t Modifier)
#line 1388
{
  uint8_t v1_len;
#line 1389
  uint8_t tp1;
  uint16_t Maddr;

#line 1391
  tp1 = TerraVMC__getBits(Modifier, 0, 1);
  v1_len = 1 << tp1;
  Maddr = (uint16_t )TerraVMC__pop();
  ;
  TerraVMC__setMVal(TerraVMC__getMVal(Maddr, tp1) + 1, Maddr, tp1, tp1);
}

#line 1376
static inline void TerraVMC__f_getextdt_v(uint8_t Modifier)
#line 1376
{
  uint8_t p1_1len;
#line 1377
  uint8_t p2_1len;
  uint16_t Maddr;
#line 1378
  uint16_t size;

#line 1379
  p1_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Maddr = TerraVMC__getPar16(p1_1len);
  size = TerraVMC__getPar16(p2_1len);
  ;
  ;
  memcpy(TerraVMC__MEM + Maddr, (&TerraVMC__CEU_)->ext_data, size);
}

#line 1365
static inline void TerraVMC__f_outevt_c(uint8_t Modifier)
#line 1365
{
  uint8_t Clen;
  uint8_t Cevt;
  uint32_t Const;

#line 1369
  Clen = (uint8_t )(TerraVMC__getBits(Modifier, 0, 1) + 1);
  Cevt = TerraVMC__getPar8(1);
  Const = TerraVMC__getPar32(Clen);
  ;
  TerraVMC__VMCustom__procOutEvt(Cevt, Const);
}

#line 454
static inline void TerraVMC__ceu_track_clr(TerraVMC__tceu_nlbl l1, TerraVMC__tceu_nlbl l2)
#line 454
{
  int i;

#line 456
  for (i = 1; i <= (&TerraVMC__CEU_)->tracks_n; i++) {
      TerraVMC__tceu_trk *trk = (&TerraVMC__CEU_)->p_tracks + i;

#line 458
      if (trk->lbl >= l1 && trk->lbl <= l2) {
          TerraVMC__ceu_track_rem((void *)0, i);
          i--;
        }
    }
}

#line 1353
static inline void TerraVMC__f_tkclr(uint8_t Modifier)
#line 1353
{
  uint8_t p1_1len;
#line 1354
  uint8_t p2_1len;
  uint16_t lbl1;
#line 1355
  uint16_t lbl2;

#line 1356
  p1_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  lbl1 = TerraVMC__getPar16(p1_1len);
  lbl2 = TerraVMC__getPar16(p2_1len);
  ;
  ;
  TerraVMC__ceu_track_clr(lbl1, lbl2);
}

# 169 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static bool BasicServicesP__TimerAsync__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(2U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 274 "BasicServicesP.nc"
static inline bool BasicServicesP__BSTimerAsync__isRunning(void )
#line 274
{
#line 274
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
# 531 "TerraVMC.nc"
static inline void TerraVMC__ceu_async_enable(int gte, TerraVMC__tceu_nlbl lbl)
#line 531
{
  ((TerraVMC__tceu_nlbl *)((&TerraVMC__CEU_)->p_mem + TerraVMC__async0))[gte] = lbl;
  if (!TerraVMC__BSTimerAsync__isRunning()) {
    TerraVMC__BSTimerAsync__startOneShot(2);
    }
}

#line 1341
static inline void TerraVMC__f_asen(uint8_t Modifier)
#line 1341
{
  uint8_t p1_1len;
#line 1342
  uint8_t p2_1len;
  uint16_t gate;
#line 1343
  uint16_t lbl;

#line 1344
  p1_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  gate = TerraVMC__getPar16(p1_1len);
  lbl = TerraVMC__getPar16(p2_1len);
  ;
  ;
  TerraVMC__ceu_async_enable(gate, lbl);
}

#line 100
static inline uint16_t TerraVMC__getLblAddr(uint16_t lbl)
#line 100
{
  ;
  return lbl;
}

#line 1329
static inline void TerraVMC__f_ifelse(uint8_t Modifier)
#line 1329
{
  uint8_t p1_1len;
#line 1330
  uint8_t p2_1len;
  uint16_t lbl1;
#line 1331
  uint16_t lbl2;

#line 1332
  p1_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  lbl1 = TerraVMC__getPar16(p1_1len);
  lbl2 = TerraVMC__getPar16(p2_1len);
  ;
  ;
  if (TerraVMC__pop()) {
#line 1338
    TerraVMC__PC = TerraVMC__getLblAddr(lbl1);
    }
  else {
#line 1338
    TerraVMC__PC = TerraVMC__getLblAddr(lbl2);
    }
}

#line 1316
static inline void TerraVMC__f_memclr(uint8_t Modifier)
#line 1316
{
  uint8_t p1_1len;
#line 1317
  uint8_t p2_1len;
  uint16_t Maddr;
#line 1318
  uint16_t size;

#line 1319
  p1_1len = TerraVMC__getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Maddr = TerraVMC__getPar16(p1_1len);
  size = TerraVMC__getPar16(p2_1len);
  ;
  ;

  {
#line 1326
    int x;

#line 1326
    for (x = 0; x < size; x++) * (uint8_t *)(TerraVMC__MEM + Maddr + x) = 0;
  }
}

#line 1302
static inline void TerraVMC__f_cast(uint8_t Modifier)
#line 1302
{
  uint32_t stacki;
  float stackf;
  uint8_t mode;

#line 1306
  mode = TerraVMC__getBits(Modifier, 0, 1);
  ;
  switch (mode) {
      case U32_F: stacki = TerraVMC__pop();
#line 1309
      ;
#line 1309
      TerraVMC__pushf((f32 )* (u32 *)&stacki);
#line 1309
      break;
      case S32_F: stacki = TerraVMC__pop();
#line 1310
      ;
#line 1310
      TerraVMC__pushf((f32 )* (s32 *)&stacki);
#line 1310
      break;
      case F_U32: stackf = TerraVMC__popf();
#line 1311
      ;
#line 1311
      TerraVMC__push((u32 )* (f32 *)&stackf);
#line 1311
      break;
      case F_S32: stackf = TerraVMC__popf();
#line 1312
      ;
#line 1312
      TerraVMC__push((u32 )* (f32 *)&stackf);
#line 1312
      break;
    }
}

#line 1293
static inline void TerraVMC__f_push_c(uint8_t Modifier)
#line 1293
{
  uint8_t p1_len;
  uint32_t Const;

#line 1296
  p1_len = (uint8_t )(TerraVMC__getBits(Modifier, 0, 1) + 1);
  Const = TerraVMC__getPar32(p1_len);
  ;
  TerraVMC__push(Const);
}

#line 1454
static inline void TerraVMC__f_tkins_z(uint8_t Modifier)
#line 1454
{
  uint8_t tree;
#line 1455
  uint8_t chk;
#line 1455
  uint8_t p2_1len;
#line 1455
  uint8_t par1;
  uint16_t lbl;

#line 1457
  p2_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  par1 = TerraVMC__getPar8(1);
  chk = TerraVMC__getBits(par1, 7, 7);
  tree = TerraVMC__getBits(par1, 0, 6);
  lbl = TerraVMC__getPar16(p2_1len);
  ;
  ;
  TerraVMC__ceu_track_ins(0, tree, chk, lbl);
}

#line 1283
static inline void TerraVMC__f_chkret(uint8_t Modifier)
#line 1283
{
  uint8_t p1_1len;
  uint16_t Maddr;

#line 1286
  p1_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Maddr = TerraVMC__getPar16(p1_1len);
  ;
  ;
  if (* (uint8_t *)(TerraVMC__MEM + Maddr) > 0) {
#line 1290
    TerraVMC__PC = TerraVMC__PC + 1;
    }
}

#line 1273
static inline void TerraVMC__f_exec(uint8_t Modifier)
#line 1273
{
  uint8_t p1_1len;
  uint16_t Const;

#line 1276
  p1_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Const = TerraVMC__getPar16(p1_1len);
  ;
  ;
  TerraVMC__PC = TerraVMC__getLblAddr(Const);
}

#line 1263
static inline void TerraVMC__f_trg(uint8_t Modifier)
#line 1263
{
  uint8_t p1_1len;
  uint16_t gtAddr;

#line 1266
  p1_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  gtAddr = TerraVMC__getPar16(p1_1len);
  ;
  ;
  TerraVMC__ceu_trigger(gtAddr, 0);
}

#line 1252
static inline void TerraVMC__f_getextdt_e(uint8_t Modifier)
#line 1252
{
  uint8_t p1_1len;
  uint16_t Maddr;
#line 1254
  uint16_t len;

#line 1255
  p1_1len = TerraVMC__getBitsPow(Modifier, 0, 0);
  Maddr = (uint16_t )TerraVMC__pop();
  len = TerraVMC__getPar16(p1_1len);
  ;
  ;
  memcpy(TerraVMC__MEM + Maddr, (&TerraVMC__CEU_)->ext_data, len);
}

#line 1224
static inline void TerraVMC__f_pusharr_v(uint8_t Modifier)
#line 1224
{
  uint8_t v1_len;
#line 1225
  uint8_t p1_1len;
#line 1225
  uint8_t v2_len;
#line 1225
  uint8_t p2_1len;
#line 1225
  uint8_t p3_1len;
#line 1225
  uint8_t Aux;
#line 1225
  uint8_t tp1;
#line 1225
  uint8_t tp2;
  uint16_t Maddr;
#line 1226
  uint16_t Vidx;
#line 1226
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
#line 1244
    {
      ;

      TerraVMC__push(Maddr + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len);
    }
}

#line 1190
static inline void TerraVMC__f_poparr_v(uint8_t Modifier)
#line 1190
{
  uint8_t v1_len;
#line 1191
  uint8_t p1_1len;
#line 1191
  uint8_t v2_len;
#line 1191
  uint8_t p2_1len;
#line 1191
  uint8_t p3_1len;
#line 1191
  uint8_t Aux;
#line 1191
  uint8_t tp1;
#line 1191
  uint8_t tp2;
  uint16_t Maddr;
#line 1192
  uint16_t Vidx;
#line 1192
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
#line 1209
    {
      if (tp1 == F32) {
          float v2 = TerraVMC__popf();

#line 1212
          ;

          TerraVMC__setMVal(* (uint32_t *)&v2, Maddr + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, F32, tp1);
        }
      else 
#line 1215
        {
          int32_t v2 = TerraVMC__pop();

#line 1217
          ;

          TerraVMC__setMVal(v2, Maddr + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, S32, tp1);
        }
    }
}

#line 1149
static inline void TerraVMC__f_setarr_vv(uint8_t Modifier)
#line 1149
{
  uint8_t v1_len;
#line 1150
  uint8_t p1_1len;
#line 1150
  uint8_t p2_1len;
#line 1150
  uint8_t v2_len;
#line 1150
  uint8_t p3_1len;
#line 1150
  uint8_t p4_1len;
#line 1150
  uint8_t v4_len;
#line 1150
  uint8_t Aux;
#line 1150
  uint8_t tp1;
#line 1150
  uint8_t tp2;
#line 1150
  uint8_t tp4;
  uint16_t Maddr1;
#line 1151
  uint16_t Vidx;
#line 1151
  uint16_t Max;
#line 1151
  uint16_t Maddr2;

#line 1152
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
#line 1177
    {
      if (tp4 == F32) {
          float buffer = TerraVMC__getMValf(Maddr2);

#line 1180
          TerraVMC__setMVal(* (uint32_t *)&buffer, Maddr1 + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, tp4, tp1);
        }
      else 
#line 1181
        {
          uint32_t buffer = TerraVMC__getMVal(Maddr2, tp4);

#line 1183
          TerraVMC__setMVal(buffer, Maddr1 + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, tp4, tp1);
        }
    }
}

#line 1115
static inline void TerraVMC__f_setarr_vc(uint8_t Modifier)
#line 1115
{
  uint8_t v1_len;
#line 1116
  uint8_t p1_1len;
#line 1116
  uint8_t p2_1len;
#line 1116
  uint8_t v2_len;
#line 1116
  uint8_t p3_1len;
#line 1116
  uint8_t p4_len;
#line 1116
  uint8_t Aux;
#line 1116
  uint8_t tp1;
#line 1116
  uint8_t tp2;
  uint16_t Maddr;
#line 1117
  uint16_t Vidx;
#line 1117
  uint16_t Max;
  uint32_t Const;

#line 1119
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
#line 1139
    {
      if (tp1 == F32) {
          float buffer = (float )Const;

#line 1142
          TerraVMC__setMVal(* (uint32_t *)&buffer, Maddr + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, tp2, tp1);
        }
      else 
#line 1143
        {
          TerraVMC__setMVal(Const, Maddr + TerraVMC__getMVal(Vidx, tp2) % Max * v1_len, tp2, tp1);
        }
    }
}

#line 1093
static inline void TerraVMC__f_set_v(uint8_t Modifier)
#line 1093
{
  uint8_t p1_1len;
#line 1094
  uint8_t p2_1len;
  uint8_t tp1;
#line 1095
  uint8_t tp2;
  uint16_t Maddr1;
#line 1096
  uint16_t Maddr2;

#line 1097
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

#line 1109
      TerraVMC__setMVal(* (uint32_t *)&buffer, Maddr1, tp2, tp1);
    }
  else 
#line 1110
    {
      uint32_t buffer = TerraVMC__getMVal(Maddr2, tp2);

#line 1112
      TerraVMC__setMVal(buffer, Maddr1, tp2, tp1);
    }
}

#line 1075
static inline void TerraVMC__f_clken_c(uint8_t Modifier)
#line 1075
{
  uint8_t p1_1len;
#line 1076
  uint8_t p2_len;
#line 1076
  uint8_t p3_1len;
  uint16_t gate;
#line 1077
  uint16_t lbl;
  uint32_t Ctime;

#line 1079
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

#line 1055
static inline void TerraVMC__f_clken_v(uint8_t Modifier)
#line 1055
{
  uint8_t p1_1len;
#line 1056
  uint8_t p2_1len;
#line 1056
  uint8_t p3_1len;
#line 1056
  uint8_t unit;
#line 1056
  uint8_t timeTp;
  uint16_t gate;
#line 1057
  uint16_t lbl;
#line 1057
  uint16_t VtimeAddr;
  uint32_t Time = 0;

#line 1059
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

#line 1039
static inline void TerraVMC__f_clken_e(uint8_t Modifier)
#line 1039
{
  uint8_t p1_1len;
#line 1040
  uint8_t p2_1len;
#line 1040
  uint8_t unit;
  uint16_t gate;
#line 1041
  uint16_t lbl;
  uint32_t Time = 0;

#line 1043
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

#line 1032
static inline void TerraVMC__f_outevt_z(uint8_t Modifier)
#line 1032
{
  uint8_t Cevt;

#line 1034
  Cevt = TerraVMC__getPar8(1);
  ;
  TerraVMC__VMCustom__procOutEvt(Cevt, 0);
}

#line 1022
static inline void TerraVMC__f_outevt_e(uint8_t Modifier)
#line 1022
{
  uint8_t Cevt;
  uint32_t value;

#line 1025
  value = TerraVMC__pop();
  Cevt = TerraVMC__getPar8(1);
  ;
  ;
  TerraVMC__VMCustom__procOutEvt(Cevt, value);
}

#line 1700
static inline void TerraVMC__VMCustom__push(uint32_t value)
#line 1700
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
# 241 "BasicServicesP.nc"
static inline void BasicServicesP__BSRadio__setRFPower(uint8_t powerIdx)
#line 241
{
  ;
  if (powerIdx < 8) {
      BasicServicesP__userRFPowerIdx = powerIdx;
    }
}

# 14 "BSRadio.nc"
inline static void VMCustomP__BSRadio__setRFPower(uint8_t powerIdx){
#line 14
  BasicServicesP__BSRadio__setRFPower(powerIdx);
#line 14
}
#line 14
# 1697 "TerraVMC.nc"
static inline uint32_t TerraVMC__VMCustom__pop(void )
#line 1697
{
  return TerraVMC__pop();
}

# 16 "VMCustom.nc"
inline static uint32_t VMCustomP__VM__pop(void ){
#line 16
  unsigned long __nesc_result;
#line 16

#line 16
  __nesc_result = TerraVMC__VMCustom__pop();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 248 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__func_RFPower(uint16_t id)
#line 248
{
  uint8_t powerIdx;

#line 250
  powerIdx = (uint8_t )VMCustomP__VM__pop();
  VMCustomP__BSRadio__setRFPower(powerIdx);
  VMCustomP__VM__push(SUCCESS);
}

# 1691 "TerraVMC.nc"
static inline void *TerraVMC__VMCustom__getRealAddr(uint16_t Maddr)
#line 1691
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
# 234 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__func_setupMic(uint16_t id)
#line 234
{
  error_t stat;
  uint16_t bufAddr;

#line 237
  VMCustomP__MIC_gain = (uint8_t )VMCustomP__VM__pop();
  VMCustomP__MIC_usPeriod = (uint32_t )VMCustomP__VM__pop();
  VMCustomP__MIC_count = (uint16_t )VMCustomP__VM__pop();
  bufAddr = (uint16_t )VMCustomP__VM__pop();
  VMCustomP__MIC_buf = (nx_uint16_t *)VMCustomP__VM__getRealAddr(bufAddr);
  VMCustomP__MIC_flag = TRUE;
  stat = SUCCESS;
  VMCustomP__VM__push(stat);
}

# 1708 "TerraVMC.nc"
static inline uint32_t TerraVMC__VMCustom__getTime(void )
#line 1708
{
  return TerraVMC__BSTimerVM__getNow();
}

# 24 "VMCustom.nc"
inline static uint32_t VMCustomP__VM__getTime(void ){
#line 24
  unsigned long __nesc_result;
#line 24

#line 24
  __nesc_result = TerraVMC__VMCustom__getTime();
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 191 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__func_getTime(uint16_t id)
#line 191
{
  uint32_t val;

#line 193
  val = VMCustomP__VM__getTime();
  ;
  VMCustomP__VM__push(val);
}

# 1684 "TerraVMC.nc"
static inline int32_t TerraVMC__VMCustom__getMVal(uint16_t Maddr, uint8_t tp)
#line 1684
{
  return TerraVMC__getMVal(Maddr, tp);
}

# 19 "VMCustom.nc"
inline static int32_t VMCustomP__VM__getMVal(uint16_t Maddr, uint8_t tp){
#line 19
  long __nesc_result;
#line 19

#line 19
  __nesc_result = TerraVMC__VMCustom__getMVal(Maddr, tp);
#line 19

#line 19
  return __nesc_result;
#line 19
}
#line 19
# 183 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__func_getMem(uint16_t id)
#line 183
{
  uint8_t val;
  uint16_t Maddr;

#line 186
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
# 176 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__func_random(uint16_t id)
#line 176
{
  uint16_t stat;

  stat = VMCustomP__Random__rand16();
  ;
  VMCustomP__VM__push(stat);
}

#line 169
static inline void VMCustomP__func_getNodeId(uint16_t id)
#line 169
{
  uint16_t stat;

  stat = TOS_NODE_ID;
  ;
  VMCustomP__VM__push(stat);
}

#line 291
static inline void VMCustomP__VM__callFunction(uint8_t id)
#line 291
{
  ;
  switch (id) {
      case F_GETNODEID: VMCustomP__func_getNodeId(id);
#line 294
      break;
      case F_RANDOM: VMCustomP__func_random(id);
#line 295
      break;
      case F_GETMEM: VMCustomP__func_getMem(id);
#line 296
      break;
      case F_GETTIME: VMCustomP__func_getTime(id);
#line 297
      break;






      case F_SETUP_MIC: VMCustomP__func_setupMic(id);
#line 304
      break;
      case F_RFPOWER: VMCustomP__func_RFPower(id);
#line 305
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
# 1014 "TerraVMC.nc"
static inline void TerraVMC__f_func(uint8_t Modifier)
#line 1014
{
  uint8_t fID;

#line 1016
  fID = TerraVMC__getPar8(1);
  ;
  ;
  TerraVMC__VMCustom__callFunction(fID);
}

#line 1005
static inline void TerraVMC__f_lt_f(uint8_t Modifier)
#line 1005
{
  float v1;
#line 1006
  float v2;

#line 1007
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 < v2);
}

#line 997
static inline void TerraVMC__f_gt_f(uint8_t Modifier)
#line 997
{
  float v1;
#line 998
  float v2;

#line 999
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 > v2);
}

#line 989
static inline void TerraVMC__f_lte_f(uint8_t Modifier)
#line 989
{
  float v1;
#line 990
  float v2;

#line 991
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 <= v2);
}

#line 981
static inline void TerraVMC__f_gte_f(uint8_t Modifier)
#line 981
{
  float v1;
#line 982
  float v2;

#line 983
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 >= v2);
}

#line 973
static inline void TerraVMC__f_neq_f(uint8_t Modifier)
#line 973
{
  float v1;
#line 974
  float v2;

#line 975
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 != v2);
}

#line 964
static inline void TerraVMC__f_eq_f(uint8_t Modifier)
#line 964
{
  float v1;
#line 965
  float v2;

#line 966
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 == v2);
}

#line 955
static inline void TerraVMC__f_div_f(uint8_t Modifier)
#line 955
{
  float v1;
#line 956
  float v2;

#line 957
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 / v2);
}

#line 947
static inline void TerraVMC__f_mult_f(uint8_t Modifier)
#line 947
{
  float v1;
#line 948
  float v2;

#line 949
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 * v2);
}

#line 939
static inline void TerraVMC__f_add_f(uint8_t Modifier)
#line 939
{
  float v1;
#line 940
  float v2;

#line 941
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 + v2);
}

#line 931
static inline void TerraVMC__f_sub_f(uint8_t Modifier)
#line 931
{
  float v1;
#line 932
  float v2;

#line 933
  v1 = TerraVMC__popf();
  v2 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(v1 - v2);
}

#line 924
static inline void TerraVMC__f_neg_f(uint8_t Modifier)
#line 924
{
  float v1;

#line 926
  v1 = TerraVMC__popf();
  ;
  ;
  TerraVMC__pushf(-1 * v1);
}

#line 1512
static inline void TerraVMC__f_popx(uint8_t Modifier)
#line 1512
{
  TerraVMC__pop();
  ;
}

#line 915
static inline void TerraVMC__f_land(uint8_t Modifier)
#line 915
{
  int32_t v1;
#line 916
  int32_t v2;

#line 917
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 && v2);
}

#line 907
static inline void TerraVMC__f_lor(uint8_t Modifier)
#line 907
{
  int32_t v1;
#line 908
  int32_t v2;

#line 909
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 || v2);
}

#line 899
static inline void TerraVMC__f_lt(uint8_t Modifier)
#line 899
{
  int32_t v1;
#line 900
  int32_t v2;

#line 901
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 < v2);
}

#line 891
static inline void TerraVMC__f_gt(uint8_t Modifier)
#line 891
{
  int32_t v1;
#line 892
  int32_t v2;

#line 893
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 > v2);
}

#line 883
static inline void TerraVMC__f_lte(uint8_t Modifier)
#line 883
{
  int32_t v1;
#line 884
  int32_t v2;

#line 885
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 <= v2);
}

#line 875
static inline void TerraVMC__f_gte(uint8_t Modifier)
#line 875
{
  int32_t v1;
#line 876
  int32_t v2;

#line 877
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 >= v2);
}

#line 867
static inline void TerraVMC__f_neq(uint8_t Modifier)
#line 867
{
  int32_t v1;
#line 868
  int32_t v2;

#line 869
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 != v2);
}

#line 858
static inline void TerraVMC__f_eq(uint8_t Modifier)
#line 858
{
  int32_t v1;
#line 859
  int32_t v2;

#line 860
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 == v2);
}

#line 850
static inline void TerraVMC__f_bxor(uint8_t Modifier)
#line 850
{
  int32_t v1;
#line 851
  int32_t v2;

#line 852
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 ^ v2);
}

#line 842
static inline void TerraVMC__f_rshft(uint8_t Modifier)
#line 842
{
  int32_t v1;
#line 843
  int32_t v2;

#line 844
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 >> v2);
}

#line 834
static inline void TerraVMC__f_lshft(uint8_t Modifier)
#line 834
{
  int32_t v1;
#line 835
  int32_t v2;

#line 836
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 << v2);
}

#line 826
static inline void TerraVMC__f_band(uint8_t Modifier)
#line 826
{
  int32_t v1;
#line 827
  int32_t v2;

#line 828
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 & v2);
}

#line 818
static inline void TerraVMC__f_bor(uint8_t Modifier)
#line 818
{
  int32_t v1;
#line 819
  int32_t v2;

#line 820
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 | v2);
}

#line 808
static inline void TerraVMC__f_div(uint8_t Modifier)
#line 808
{
  int32_t v1;
#line 809
  int32_t v2;

#line 810
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v2 == 0 ? 0 : v1 / v2);
  if (v2 == 0) {
#line 815
    TerraVMC__evtError(E_DIVZERO);
    }
}

#line 799
static inline void TerraVMC__f_mult(uint8_t Modifier)
#line 799
{
  int32_t v1;
#line 800
  int32_t v2;

#line 801
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 * v2);
}

#line 789
static inline void TerraVMC__f_mod(uint8_t Modifier)
#line 789
{
  int32_t v1;
#line 790
  int32_t v2;

#line 791
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v2 == 0 ? 0 : v1 % v2);
  if (v2 == 0) {
#line 796
    TerraVMC__evtError(E_DIVZERO);
    }
}

#line 780
static inline void TerraVMC__f_add(uint8_t Modifier)
#line 780
{
  int32_t v1;
#line 781
  int32_t v2;

#line 782
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 + v2);
}

#line 771
static inline void TerraVMC__f_sub(uint8_t Modifier)
#line 771
{
  int32_t v1;
#line 772
  int32_t v2;

#line 773
  v1 = TerraVMC__pop();
  v2 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(v1 - v2);
}

#line 764
static inline void TerraVMC__f_neg(uint8_t Modifier)
#line 764
{
  int32_t v1;

#line 766
  v1 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(-1 * v1);
}

#line 757
static inline void TerraVMC__f_lnot(uint8_t Modifier)
#line 757
{
  int32_t v1;

#line 759
  v1 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(!v1);
}

#line 750
static inline void TerraVMC__f_bnot(uint8_t Modifier)
#line 750
{
  int32_t v1;

#line 752
  v1 = TerraVMC__pop();
  ;
  ;
  TerraVMC__push(~v1);
}

#line 745
static inline void TerraVMC__f_end(uint8_t Modifier)
#line 745
{
  ;
  ;
}

#line 743
static inline void TerraVMC__f_nop(uint8_t Modifier)
#line 743
{
#line 743
  ;
}

#line 1550
static inline void TerraVMC__Decoder(uint8_t Opcode, uint8_t Modifier)
#line 1550
{


  ;
  switch (Opcode) {
      case op_nop: TerraVMC__f_nop(Modifier);
#line 1555
      break;
      case op_end: TerraVMC__f_end(Modifier);
#line 1556
      break;
      case op_bnot: TerraVMC__f_bnot(Modifier);
#line 1557
      break;
      case op_lnot: TerraVMC__f_lnot(Modifier);
#line 1558
      break;
      case op_neg: TerraVMC__f_neg(Modifier);
#line 1559
      break;
      case op_sub: TerraVMC__f_sub(Modifier);
#line 1560
      break;
      case op_add: TerraVMC__f_add(Modifier);
#line 1561
      break;
      case op_mod: TerraVMC__f_mod(Modifier);
#line 1562
      break;
      case op_mult: TerraVMC__f_mult(Modifier);
#line 1563
      break;
      case op_div: TerraVMC__f_div(Modifier);
#line 1564
      break;
      case op_bor: TerraVMC__f_bor(Modifier);
#line 1565
      break;
      case op_band: TerraVMC__f_band(Modifier);
#line 1566
      break;
      case op_lshft: TerraVMC__f_lshft(Modifier);
#line 1567
      break;
      case op_rshft: TerraVMC__f_rshft(Modifier);
#line 1568
      break;
      case op_bxor: TerraVMC__f_bxor(Modifier);
#line 1569
      break;
      case op_eq: TerraVMC__f_eq(Modifier);
#line 1570
      break;
      case op_neq: TerraVMC__f_neq(Modifier);
#line 1571
      break;
      case op_gte: TerraVMC__f_gte(Modifier);
#line 1572
      break;
      case op_lte: TerraVMC__f_lte(Modifier);
#line 1573
      break;
      case op_gt: TerraVMC__f_gt(Modifier);
#line 1574
      break;
      case op_lt: TerraVMC__f_lt(Modifier);
#line 1575
      break;
      case op_lor: TerraVMC__f_lor(Modifier);
#line 1576
      break;
      case op_land: TerraVMC__f_land(Modifier);
#line 1577
      break;
      case op_popx: TerraVMC__f_popx(Modifier);
#line 1578
      break;


      case op_neg_f: TerraVMC__f_neg_f(Modifier);
#line 1581
      break;
      case op_sub_f: TerraVMC__f_sub_f(Modifier);
#line 1582
      break;
      case op_add_f: TerraVMC__f_add_f(Modifier);
#line 1583
      break;
      case op_mult_f: TerraVMC__f_mult_f(Modifier);
#line 1584
      break;
      case op_div_f: TerraVMC__f_div_f(Modifier);
#line 1585
      break;
      case op_eq_f: TerraVMC__f_eq_f(Modifier);
#line 1586
      break;
      case op_neq_f: TerraVMC__f_neq_f(Modifier);
#line 1587
      break;
      case op_gte_f: TerraVMC__f_gte_f(Modifier);
#line 1588
      break;
      case op_lte_f: TerraVMC__f_lte_f(Modifier);
#line 1589
      break;
      case op_gt_f: TerraVMC__f_gt_f(Modifier);
#line 1590
      break;
      case op_lt_f: TerraVMC__f_lt_f(Modifier);
#line 1591
      break;
      case op_func: TerraVMC__f_func(Modifier);
#line 1592
      break;
      case op_outEvt_e: TerraVMC__f_outevt_e(Modifier);
#line 1593
      break;
      case op_outevt_z: TerraVMC__f_outevt_z(Modifier);
#line 1594
      break;
      case op_clken_e: TerraVMC__f_clken_e(Modifier);
#line 1595
      break;
      case op_clken_v: TerraVMC__f_clken_v(Modifier);
#line 1596
      break;
      case op_clken_c: TerraVMC__f_clken_c(Modifier);
#line 1597
      break;
      case op_set_v: TerraVMC__f_set_v(Modifier);
#line 1598
      break;
      case op_setarr_vc: TerraVMC__f_setarr_vc(Modifier);
#line 1599
      break;
      case op_setarr_vv: TerraVMC__f_setarr_vv(Modifier);
#line 1600
      break;



      case op_poparr_v: TerraVMC__f_poparr_v(Modifier);
#line 1604
      break;
      case op_pusharr_v: TerraVMC__f_pusharr_v(Modifier);
#line 1605
      break;
      case op_getextdt_e: TerraVMC__f_getextdt_e(Modifier);
#line 1606
      break;
      case op_trg: TerraVMC__f_trg(Modifier);
#line 1607
      break;
      case op_exec: TerraVMC__f_exec(Modifier);
#line 1608
      break;
      case op_chkret: TerraVMC__f_chkret(Modifier);
#line 1609
      break;
      case op_tkins_z: TerraVMC__f_tkins_z(Modifier);
#line 1610
      break;


      case op_push_c: TerraVMC__f_push_c(Modifier);
#line 1613
      break;
      case op_cast: TerraVMC__f_cast(Modifier);
#line 1614
      break;
      case op_memclr: TerraVMC__f_memclr(Modifier);
#line 1615
      break;
      case op_ifelse: TerraVMC__f_ifelse(Modifier);
#line 1616
      break;
      case op_asen: TerraVMC__f_asen(Modifier);
#line 1617
      break;
      case op_tkclr: TerraVMC__f_tkclr(Modifier);
#line 1618
      break;
      case op_outEvt_c: TerraVMC__f_outevt_c(Modifier);
#line 1619
      break;
      case op_getextdt_v: TerraVMC__f_getextdt_v(Modifier);
#line 1620
      break;
      case op_inc: TerraVMC__f_inc(Modifier);
#line 1621
      break;
      case op_dec: TerraVMC__f_dec(Modifier);
#line 1622
      break;
      case op_set_e: TerraVMC__f_set_e(Modifier);
#line 1623
      break;
      case op_deref: TerraVMC__f_deref(Modifier);
#line 1624
      break;
      case op_memcpy: TerraVMC__f_memcpy(Modifier);
#line 1625
      break;

      case op_tkins_max: TerraVMC__f_tkins_max(Modifier);
#line 1627
      break;
      case op_push_v: TerraVMC__f_push_v(Modifier);
#line 1628
      break;
      case op_pop: TerraVMC__f_pop(Modifier);
#line 1629
      break;
      case op_outEvt_v: TerraVMC__f_outevt_v(Modifier);
#line 1630
      break;
      case op_set_c: TerraVMC__f_set_c(Modifier);
#line 1631
      break;
    }
}

#line 661
static inline void TerraVMC__execTrail(uint16_t lbl)
#line 661
{
  uint8_t Opcode;
#line 662
  uint8_t Param1;

#line 663
  ;
  if (TerraVMC__haltedFlag) {
#line 664
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
#line 673
        return;
        }
#line 674
      TerraVMC__Decoder(Opcode, Param1);
      TerraVMC__getOpCode(&Opcode, &Param1);
    }
  ;
}

#line 110
static inline void TerraVMC__TViewer(char *cmd, uint16_t p1, uint16_t p2)
#line 110
{
  ;
}

# 25 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
inline static void VMCustomP__SA__setActuator(uint8_t id, uint16_t val){
#line 25
  SensActP__SA__setActuator(id, val);
#line 25
}
#line 25
# 310 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__VM__reset(void )
#line 310
{

  VMCustomP__SA__setActuator(AID_LEDS, 0);
}

# 15 "VMCustom.nc"
inline static void TerraVMC__VMCustom__reset(void ){
#line 15
  VMCustomP__VM__reset();
#line 15
}
#line 15
# 109 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 109
{
  LedsP__Led2__set();
  ;
#line 111
  ;
}

# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 0);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr();
#line 41
}
#line 41
# 104 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

#line 94
static inline void LedsP__Leds__led1Off(void )
#line 94
{
  LedsP__Led1__set();
  ;
#line 96
  ;
}

# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 1);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr();
#line 41
}
#line 41
# 89 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

#line 79
static inline void LedsP__Leds__led0Off(void )
#line 79
{
  LedsP__Led0__set();
  ;
#line 81
  ;
}

# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 2);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 41
}
#line 41
# 74 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 74
{
  LedsP__Led0__clr();
  ;
#line 76
  ;
}

#line 136
static inline void LedsP__Leds__set(uint8_t val)
#line 136
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 137
    {
      if (val & LEDS_LED0) {
          LedsP__Leds__led0On();
        }
      else {
          LedsP__Leds__led0Off();
        }
      if (val & LEDS_LED1) {
          LedsP__Leds__led1On();
        }
      else {
          LedsP__Leds__led1Off();
        }
      if (val & LEDS_LED2) {
          LedsP__Leds__led2On();
        }
      else {
          LedsP__Leds__led2Off();
        }
    }
#line 156
    __nesc_atomic_end(__nesc_atomic); }
}

# 134 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void SensActP__A_LEDS__set(uint8_t val){
#line 134
  LedsP__Leds__set(val);
#line 134
}
#line 134
# 53 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP__TViewer(char *cmd, uint16_t p1, uint16_t p2)
#line 53
{
  ;
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void SensActP__A_LEDS__led0On(void ){
#line 56
  LedsP__Leds__led0On();
#line 56
}
#line 56





inline static void SensActP__A_LEDS__led0Off(void ){
#line 61
  LedsP__Leds__led0Off();
#line 61
}
#line 61
#line 72
inline static void SensActP__A_LEDS__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72





inline static void SensActP__A_LEDS__led1Off(void ){
#line 77
  LedsP__Leds__led1Off();
#line 77
}
#line 77
#line 89
inline static void SensActP__A_LEDS__led2On(void ){
#line 89
  LedsP__Leds__led2On();
#line 89
}
#line 89





inline static void SensActP__A_LEDS__led2Off(void ){
#line 94
  LedsP__Leds__led2Off();
#line 94
}
#line 94
# 57 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )59U ^= 1 << 2;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle();
#line 42
}
#line 42
# 84 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 84
{
  LedsP__Led0__toggle();
  ;
#line 86
  ;
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void SensActP__A_LEDS__led0Toggle(void ){
#line 67
  LedsP__Leds__led0Toggle();
#line 67
}
#line 67
# 57 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )59U ^= 1 << 1;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle();
#line 42
}
#line 42
# 99 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 99
{
  LedsP__Led1__toggle();
  ;
#line 101
  ;
}

# 83 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void SensActP__A_LEDS__led1Toggle(void ){
#line 83
  LedsP__Leds__led1Toggle();
#line 83
}
#line 83
# 57 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )59U ^= 1 << 0;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle();
#line 42
}
#line 42
# 114 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 114
{
  LedsP__Led2__toggle();
  ;
#line 116
  ;
}

# 100 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void SensActP__A_LEDS__led2Toggle(void ){
#line 100
  LedsP__Leds__led2Toggle();
#line 100
}
#line 100
# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__isOutput(void )
#line 62
{
#line 62
  return (* (volatile uint8_t * )52U & (1 << 4)) != 0;
}

# 47 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool SensActP__A_PIN1__isOutput(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__isOutput();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )53U |= 1 << 4;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void SensActP__A_PIN1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set();
#line 40
}
#line 40
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )53U &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void SensActP__A_PIN1__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr();
#line 41
}
#line 41
# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__isOutput(void )
#line 62
{
#line 62
  return (* (volatile uint8_t * )52U & (1 << 5)) != 0;
}

# 47 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool SensActP__A_PIN2__isOutput(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__isOutput();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )53U |= 1 << 5;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void SensActP__A_PIN2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__set();
#line 40
}
#line 40
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )53U &= ~(1 << 5);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void SensActP__A_PIN2__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__clr();
#line 41
}
#line 41
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )52U |= 1 << 4;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void SensActP__A_PIN1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput();
#line 46
}
#line 46
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )52U &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void SensActP__A_PIN1__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeInput();
#line 44
}
#line 44
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )52U |= 1 << 5;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void SensActP__A_PIN2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeOutput();
#line 46
}
#line 46
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )52U &= ~(1 << 5);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void SensActP__A_PIN2__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeInput();
#line 44
}
#line 44
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__edge(bool low_to_high)
#line 56
{
  * (volatile uint8_t * )106U |= 1 << 1;

  if (low_to_high) {
    * (volatile uint8_t * )106U |= 1 << 0;
    }
  else {
#line 62
    * (volatile uint8_t * )106U &= ~(1 << 0);
    }
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void SensActP__A_INT1__edge(bool low_to_high){
#line 70
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__edge(low_to_high);
#line 70
}
#line 70
# 141 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP__enableEdge_A_INT1(bool low_to_high)
#line 141
{







  SensActP__A_INT1__edge(low_to_high);
}

# 52 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__disable(void )
#line 52
{
#line 52
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 0);
}

# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void SensActP__A_INT1__disable(void ){
#line 51
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__disable();
#line 51
}
#line 51
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__edge(bool low_to_high)
#line 56
{
  * (volatile uint8_t * )106U |= 1 << 3;

  if (low_to_high) {
    * (volatile uint8_t * )106U |= 1 << 2;
    }
  else {
#line 62
    * (volatile uint8_t * )106U &= ~(1 << 2);
    }
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void SensActP__A_INT2__edge(bool low_to_high){
#line 70
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__edge(low_to_high);
#line 70
}
#line 70
# 152 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP__enableEdge_A_INT2(bool low_to_high)
#line 152
{







  SensActP__A_INT2__edge(low_to_high);
}

# 52 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__disable(void )
#line 52
{
#line 52
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 1);
}

# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void SensActP__A_INT2__disable(void ){
#line 51
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__disable();
#line 51
}
#line 51
# 334 "/usr/lib/ncc/nesc_nx.h"
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

# 43 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__proc_leds(uint16_t id, uint32_t value)
#line 43
{
  ;
  VMCustomP__SA__setActuator(AID_LEDS, (uint8_t )(value & 0x07));
}

#line 47
static inline void VMCustomP__proc_led0(uint16_t id, uint32_t value)
#line 47
{
  ;
  if (value > 1) {
    VMCustomP__SA__setActuator(AID_LED0_TOGGLE, (uint8_t )(value & 0x07));
    }
  else {
#line 52
    VMCustomP__SA__setActuator(AID_LED0, (uint8_t )(value & 0x01));
    }
}

#line 54
static inline void VMCustomP__proc_led1(uint16_t id, uint32_t value)
#line 54
{
  ;
  if (value > 1) {
    VMCustomP__SA__setActuator(AID_LED1_TOGGLE, (uint8_t )(value & 0x07));
    }
  else {
#line 59
    VMCustomP__SA__setActuator(AID_LED1, (uint8_t )(value & 0x01));
    }
}

#line 61
static inline void VMCustomP__proc_led2(uint16_t id, uint32_t value)
#line 61
{
  ;
  if (value > 1) {
    VMCustomP__SA__setActuator(AID_LED2_TOGGLE, (uint8_t )(value & 0x07));
    }
  else {
#line 66
    VMCustomP__SA__setActuator(AID_LED2, (uint8_t )(value & 0x01));
    }
}

# 16 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
inline static void VMCustomP__SA__reqSensor(uint8_t reqSource, uint8_t id){
#line 16
  SensActP__SA__reqSensor(reqSource, id);
#line 16
}
#line 16
# 68 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__proc_req_temp(uint16_t id, uint32_t value)
#line 68
{
  ;
  VMCustomP__SA__reqSensor(REQ_SOURCE1, SID_TEMP);
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__startTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__startTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 84 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 84
{
  if (/*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopping == FALSE) {
      /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__startTask__postTask();
    }
  else {
#line 88
    /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__requested = TRUE;
    }
}

# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 97 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x41075690){
#line 53
    /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x41075690);
#line 53
}
#line 53
# 77 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state == /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__state = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
#line 84
        if (/*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Resource__request(uint8_t arg_0x4115b990){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(arg_0x4115b990);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 31 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__read(uint8_t client)
#line 31
{
  return /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Resource__request(client);
}

# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static error_t SensActP__S_TEMP__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__1__Read__read(0U);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__startTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__startTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 84 "/opt/tinyos-2.1.2/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__requested(void )
#line 84
{
  if (/*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopping == FALSE) {
      /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__startTask__postTask();
    }
  else {
#line 88
    /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__requested = TRUE;
    }
}

# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__requested(void ){
#line 73
  /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 97 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEnqueued(id)) {
        /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceRequested__requested(uint8_t arg_0x41075690){
#line 53
    /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceRequested__default__requested(arg_0x41075690);
#line 53
}
#line 53
# 77 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Resource__request(uint8_t id)
#line 77
{
  /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceRequested__requested(/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state == /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_CONTROLLED) {
          /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__state = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__RES_GRANTING;
          /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__reqResId = id;
        }
      else {
#line 84
        if (/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Resource__request(uint8_t arg_0x4115b990){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__Resource__request(arg_0x4115b990);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 31 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__read(uint8_t client)
#line 31
{
  return /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Resource__request(client);
}

# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static error_t SensActP__S_PHOTO__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__2__Read__read(0U);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )57U & (1 << 0)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led2__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )57U & (1 << 1)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led1__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )57U & (1 << 2)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led0__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 119 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline uint8_t LedsP__Leds__get(void )
#line 119
{
  uint8_t rval;

#line 121
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 121
    {
      rval = 0;
      if (!LedsP__Led0__get()) {
          rval |= LEDS_LED0;
        }
      if (!LedsP__Led1__get()) {
          rval |= LEDS_LED1;
        }
      if (!LedsP__Led2__get()) {
          rval |= LEDS_LED2;
        }
    }
#line 132
    __nesc_atomic_end(__nesc_atomic); }
  return rval;
}

# 117 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static uint8_t SensActP__A_LEDS__get(void ){
#line 117
  unsigned char __nesc_result;
#line 117

#line 117
  __nesc_result = LedsP__Leds__get();
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 44 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client)
#line 44
{
  return FAIL;
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(uint8_t arg_0x4115b990){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x4115b990) {
#line 88
    case /*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(/*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0__HAL_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(arg_0x4115b990);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 31 "/opt/tinyos-2.1.2/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client)
#line 31
{
  return /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(client);
}

# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static error_t SensActP__S_VOLT__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SensActC.S_VOLT.AdcReadClientC*/AdcReadClientC__0__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 72 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__proc_req_photo(uint16_t id, uint32_t value)
#line 72
{
  ;
  VMCustomP__SA__reqSensor(REQ_SOURCE1, SID_PHOTO);
}

#line 76
static inline void VMCustomP__proc_req_volts(uint16_t id, uint32_t value)
#line 76
{
  ;
  VMCustomP__SA__reqSensor(REQ_SOURCE1, SID_VOLT);
}











static inline void VMCustomP__proc_send(uint16_t id, uint32_t addr)
#line 91
{
  VMCustomP__proc_send_x(id, (uint16_t )addr, FALSE);
}

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
# 1217 "BasicServicesP.nc"
static inline error_t BasicServicesP__BSRadio__send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck)
#line 1217
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
# 94 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__proc_send_ack(uint16_t id, uint32_t addr)
#line 94
{
  VMCustomP__proc_send_x(id, (uint16_t )addr, TRUE);
}


static inline void VMCustomP__proc_set_port_a(uint16_t id, uint32_t value)
#line 99
{
  ;
  VMCustomP__SA__setActuator(AID_OUT1, (uint8_t )(value & 0x01));
}

#line 103
static inline void VMCustomP__proc_set_port_b(uint16_t id, uint32_t value)
#line 103
{
  ;
  VMCustomP__SA__setActuator(AID_OUT2, (uint8_t )(value & 0x01));
}

#line 107
static inline void VMCustomP__proc_cfg_port_a(uint16_t id, uint32_t value)
#line 107
{
  ;
  VMCustomP__SA__setActuator(AID_PIN1, (uint8_t )(value & 0x01));
}

#line 111
static inline void VMCustomP__proc_cfg_port_b(uint16_t id, uint32_t value)
#line 111
{
  ;
  VMCustomP__SA__setActuator(AID_PIN2, (uint8_t )(value & 0x01));
}

#line 115
static inline void VMCustomP__proc_req_port_a(uint16_t id, uint32_t value)
#line 115
{
  ;
  VMCustomP__SA__reqSensor(REQ_SOURCE1, SID_IN1);
}

#line 119
static inline void VMCustomP__proc_req_port_b(uint16_t id, uint32_t value)
#line 119
{
  ;
  VMCustomP__SA__reqSensor(REQ_SOURCE1, SID_IN2);
}

#line 123
static inline void VMCustomP__proc_cfg_int_a(uint16_t id, uint32_t value)
#line 123
{
  ;
  VMCustomP__SA__setActuator(AID_INT1, (uint8_t )value);
}

#line 127
static inline void VMCustomP__proc_cfg_int_b(uint16_t id, uint32_t value)
#line 127
{
  ;
  VMCustomP__SA__setActuator(AID_INT2, (uint8_t )value);
}

#line 131
static inline void VMCustomP__proc_req_custom_a(uint16_t id, uint32_t value)
#line 131
{
  uint8_t auxId;

#line 133
  __nesc_hton_uint8(VMCustomP__ExtDataCustomA.nxdata, (uint8_t )value);
  ;
  auxId = (uint8_t )value;

  VMCustomP__VM__queueEvt(I_CUSTOM_A_ID, auxId, &VMCustomP__ExtDataCustomA);
  VMCustomP__VM__queueEvt(I_CUSTOM_A, 0, &VMCustomP__ExtDataCustomA);
}









static inline void VMCustomP__proc_req_mic(uint16_t id, uint32_t value)
#line 149
{
  ;
}









static inline void VMCustomP__proc_beep(uint16_t id, uint32_t value)
#line 161
{
  ;
  VMCustomP__SA__setActuator(AID_SOUNDER, (uint16_t )value);
}

#line 141
static inline void VMCustomP__proc_req_custom(uint16_t id, uint32_t value)
#line 141
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
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(1U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 78
inline static void BasicServicesP__TimerVM__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
#line 73
inline static void BasicServicesP__TimerVM__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 158 "/opt/tinyos-2.1.2/tos/chips/atm128/atm128hardware.h"
static __inline  float __nesc_hton_afloat(void * target, float value)
#line 158
{
  memcpy(target, &value, sizeof(float ));
  return value;
}

# 334 "/usr/lib/ncc/nesc_nx.h"
static __inline  int16_t __nesc_hton_int16(void * target, int16_t value)
#line 334
{
#line 334
  __nesc_hton_uint16(target, value);
#line 334
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

# 144 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 144
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 54
}
#line 54
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void )
#line 59
{
#line 59
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 215 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 215
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 139 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 226 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/home/branco/gitspace/Terra/TerraVM/src/system/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 138 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len)
#line 138
{

  cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 141
  return hdr;
}

#line 241
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 241
{
  return msg;
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__BareReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__BareReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 283 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 283
{
  return msg;
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP__Snoop__receive(am_id_t arg_0x40ef0088, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = CC2420ActiveMessageP__Snoop__default__receive(arg_0x40ef0088, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
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
# 320 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP__BSRadio__receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len)
#line 320
{
  ;
  if (am_id == AM_USRMSG) {
      memcpy(&VMCustomP__ExtDataRadioReceived, payload, sizeof(usrMsg_t ));
      VMCustomP__BCRadio_receive__postTask();
    }
  else 
#line 325
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
# 147 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMPacket.nc"
inline static am_id_t BasicServicesP__RadioAMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = CC2420ActiveMessageP__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 499 "BasicServicesP.nc"
static inline void BasicServicesP__recCustomMsgNet_receive(message_t *msg, void *payload, uint8_t len)
#line 499
{
  uint8_t am_id = (uint8_t )BasicServicesP__RadioAMPacket__type(msg);

#line 501
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
# 509 "BasicServicesP.nc"
static inline void BasicServicesP__recReqDataNet_receive(message_t *msg, void *payload, uint8_t len)
#line 509
{
  reqData_t *xmsg;

#line 511
  ;

  memcpy(BasicServicesP__tempInputInQ.Data, payload, sizeof(reqData_t ));
  xmsg = (reqData_t *)BasicServicesP__tempInputInQ.Data;
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.AM_ID.nxdata, AM_REQDATA);
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.DataSize.nxdata, sizeof(reqData_t ));

  if (BasicServicesP__inQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 518
    ;
    }
}

# 88 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMPacket.nc"
inline static am_addr_t BasicServicesP__RadioAMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420ActiveMessageP__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 476 "BasicServicesP.nc"
static inline void BasicServicesP__recSetDataNDNet_receive(message_t *msg, void *payload, uint8_t len)
#line 476
{
  setDataND_t *xmsg;

#line 478
  ;

  memcpy(BasicServicesP__tempInputInQ.Data, payload, sizeof(setDataND_t ));
  xmsg = (setDataND_t *)BasicServicesP__tempInputInQ.Data;
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.AM_ID.nxdata, AM_SETDATAND);
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.DataSize.nxdata, sizeof(setDataND_t ));

  if (__nesc_ntoh_uint16(xmsg->versionId.nxdata) != __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata)) {
#line 485
      ;
#line 485
      return;
    }
#line 486
  if (__nesc_ntoh_uint16(xmsg->seq.nxdata) < __nesc_ntoh_uint16(BasicServicesP__NewDataSeq.nxdata) + 1) {
#line 486
      ;
#line 486
      return;
    }
  if (BasicServicesP__inQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 488
    ;
    }
  __nesc_hton_uint16(BasicServicesP__NewDataMoteSource.nxdata, BasicServicesP__RadioAMPacket__source(msg));

  if (__nesc_ntoh_uint16(xmsg->seq.nxdata) == __nesc_ntoh_uint16(BasicServicesP__NewDataSeq.nxdata) + 1) {
      __nesc_hton_uint16(BasicServicesP__tempInputInQ.sendToMote.nxdata, AM_BROADCAST_ADDR);
      if (BasicServicesP__outQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 494
        ;
        }
    }
}

#line 460
static inline void BasicServicesP__recReqProgBlockNet_receive(message_t *msg, void *payload, uint8_t len)
#line 460
{
  reqProgBlock_t *xmsg;

#line 462
  ;

  memcpy(BasicServicesP__tempInputInQ.Data, payload, sizeof(reqProgBlock_t ));
  xmsg = (reqProgBlock_t *)BasicServicesP__tempInputInQ.Data;
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.AM_ID.nxdata, AM_REQPROGBLOCK);
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.DataSize.nxdata, sizeof(reqProgBlock_t ));

  if (BasicServicesP__inQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 469
    ;
    }
}

#line 203
static inline uint32_t BasicServicesP__getRequestTimeout(void )
#line 203
{
#line 203
  return REQUEST_TIMEOUT;
}

#line 423
static inline void BasicServicesP__recNewProgBlockNet_receive(message_t *msg, void *payload, uint8_t len)
#line 423
{
  newProgBlock_t *xmsg;

#line 425
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
#line 437
                ;
                }
            }
          if (BasicServicesP__inQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 440
            ;
            }
          __nesc_hton_uint16(BasicServicesP__ProgMoteSource.nxdata, BasicServicesP__RadioAMPacket__source(msg));

          if (BasicServicesP__outQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 444
            ;
            }
        }
      else 
#line 445
        {
          ;
        }
    }
  else 
#line 448
    {
      if (__nesc_ntoh_uint16(xmsg->versionId.nxdata) > __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata)) {

          BasicServicesP__ProgReqTimer__startOneShot(BasicServicesP__getRequestTimeout());
        }
      else {
#line 453
        ;
        }
    }
}

#line 399
static inline void BasicServicesP__recNewProgVersionNet_receive(message_t *msg, void *payload, uint8_t len)
#line 399
{
  newProgVersion_t *xmsg;

#line 401
  ;

  memcpy(BasicServicesP__tempInputInQ.Data, payload, sizeof(newProgVersion_t ));
  xmsg = (newProgVersion_t *)BasicServicesP__tempInputInQ.Data;
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.AM_ID.nxdata, AM_NEWPROGVERSION);
  __nesc_hton_uint8(BasicServicesP__tempInputInQ.DataSize.nxdata, sizeof(newProgVersion_t ));

  if (__nesc_ntoh_uint16(xmsg->versionId.nxdata) <= __nesc_ntoh_uint16(BasicServicesP__ProgVersion.nxdata) || __nesc_ntoh_uint16(xmsg->versionId.nxdata) == __nesc_ntoh_uint16(BasicServicesP__lastRecNewProgVersion.nxdata)) {
#line 408
      ;
#line 408
      return;
    }
  if (BasicServicesP__inQ__put(&BasicServicesP__tempInputInQ) != SUCCESS) {
#line 410
    ;
    }
  __nesc_hton_uint16(BasicServicesP__ProgMoteSource.nxdata, BasicServicesP__RadioAMPacket__source(msg));
  __nesc_hton_uint16(BasicServicesP__lastRecNewProgVersion.nxdata, __nesc_ntoh_uint16(xmsg->versionId.nxdata));

  __nesc_hton_uint16(BasicServicesP__tempInputInQ.sendToMote.nxdata, AM_BROADCAST_ADDR);
  memcpy(&BasicServicesP__lastNewProgVersion, &BasicServicesP__tempInputInQ, sizeof(GenericData_t ));
}

#line 522
static inline message_t *BasicServicesP__RadioReceiver__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 522
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
#line 546
          {
            ;
          }
      break;
    }
  return msg;
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP__Receive__receive(am_id_t arg_0x40ef19d0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = BasicServicesP__RadioReceiver__receive(arg_0x40ef19d0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 72 "/opt/tinyos-2.1.2/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 72
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 135 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void )
#line 135
{
  return CC2420ActiveMessageP__ActiveMessageAddress__amAddress();
}

#line 159
static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg)
#line 159
{
  return CC2420ActiveMessageP__AMPacket__destination(amsg) == CC2420ActiveMessageP__AMPacket__address() || 
  CC2420ActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

#line 219
static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 219
{

  if (CC2420ActiveMessageP__AMPacket__isForMe(msg)) {
      return CC2420ActiveMessageP__Receive__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
  else {
      return CC2420ActiveMessageP__Snoop__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__ActiveReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ActiveMessageP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 119 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg)
#line 119
{



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      unsigned char __nesc_temp = 
#line 124
      *CC2420PacketP__getNetwork(p_msg);

      {
#line 124
        __nesc_atomic_end(__nesc_atomic); 
#line 124
        return __nesc_temp;
      }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }
}

# 75 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t * p_msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420PacketP__CC2420Packet__getNetwork(p_msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 157 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 157
{
  uint8_t network = CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg);

  if (! __nesc_ntoh_int8(CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(msg)->crc.nxdata)) {
      return msg;
    }

  if (network == 0x3f) {
      return CC2420TinyosNetworkP__ActiveReceive__receive(msg, payload, len);
    }
  else 
#line 166
    {
      return CC2420TinyosNetworkP__BareReceive__receive(msg, 
      CC2420TinyosNetworkP__BareSend__getPayload(msg, len), 
      len + sizeof(cc2420_header_t ));
    }
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 138 "/opt/tinyos-2.1.2/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn)
#line 138
{
  uint8_t element = UniqueReceiveP__recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
    {
      if (element == UniqueReceiveP__INVALID_ELEMENT || UniqueReceiveP__writeIndex == element) {

          element = UniqueReceiveP__writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP__receivedMessages[element].source = msgSource;
      UniqueReceiveP__receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP__writeIndex++;
          UniqueReceiveP__writeIndex %= 4;
        }
    }
#line 155
    __nesc_atomic_end(__nesc_atomic); }
}

#line 192
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 192
{
  return msg;
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__DuplicateReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__DuplicateReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 112 "/opt/tinyos-2.1.2/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 112
{
  int i;

#line 114
  UniqueReceiveP__recycleSourceElement = UniqueReceiveP__INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP__receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP__receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 121
                    TRUE;

                    {
#line 121
                      __nesc_atomic_end(__nesc_atomic); 
#line 121
                      return __nesc_temp;
                    }
                  }
                }
#line 124
              UniqueReceiveP__recycleSourceElement = i;
            }
        }
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 165 "/opt/tinyos-2.1.2/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline uint16_t UniqueReceiveP__getSourceKey(message_t * msg)
#line 165
{
  cc2420_header_t *hdr = UniqueReceiveP__CC2420PacketBody__getHeader(msg);
  int s_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3;
  int d_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3;
  int s_offset = 2;
#line 169
  int s_len = 2;
  uint16_t key = 0;
  uint8_t *current = (uint8_t *)& hdr->dest;
  int i;

  if (s_mode == IEEE154_ADDR_EXT) {
      s_len = 8;
    }
  if (d_mode == IEEE154_ADDR_EXT) {
      s_offset = 8;
    }

  current += s_offset;

  for (i = 0; i < s_len; i++) {
      key += current[i];
    }
  return key;
}

#line 86
static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
#line 87
{

  uint16_t msgSource = UniqueReceiveP__getSourceKey(msg);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->dsn.nxdata);

  if (UniqueReceiveP__hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP__DuplicateReceive__receive(msg, payload, len);
    }
  else 
#line 94
    {
      UniqueReceiveP__insert(msgSource, msgDsn);
      return UniqueReceiveP__Receive__receive(msg, payload, len);
    }
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 298 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void )
#line 298
{
  return CC2420ControlP__m_ext_addr;
}

# 66 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void ){
#line 66
  struct ieee_eui64 __nesc_result;
#line 66

#line 66
  __nesc_result = CC2420ControlP__CC2420Config__getExtAddr();
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66





inline static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void ){
#line 71
  unsigned short __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Config__getShortAddr();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 355 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void )
#line 355
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 356
    {
      unsigned char __nesc_temp = 
#line 356
      CC2420ControlP__addressRecognition;

      {
#line 356
        __nesc_atomic_end(__nesc_atomic); 
#line 356
        return __nesc_temp;
      }
    }
#line 358
    __nesc_atomic_end(__nesc_atomic); }
}

# 93 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void ){
#line 93
  unsigned char __nesc_result;
#line 93

#line 93
  __nesc_result = CC2420ControlP__CC2420Config__isAddressRecognitionEnabled();
#line 93

#line 93
  return __nesc_result;
#line 93
}
#line 93
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 824 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg)
#line 824
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(msg);
  int mode = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 3;
  ieee_eui64_t *ext_addr;

  if (!CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled()) {
      return TRUE;
    }

  if (mode == IEEE154_ADDR_SHORT) {
      return __nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
       || __nesc_ntoh_leuint16(header->dest.nxdata) == IEEE154_BROADCAST_ADDR;
    }
  else {
#line 836
    if (mode == IEEE154_ADDR_EXT) {
        ieee_eui64_t local_addr = CC2420ReceiveP__CC2420Config__getExtAddr();

#line 838
        ext_addr = (ieee_eui64_t * )& header->dest;
        return memcmp(ext_addr->data, local_addr.data, IEEE_EUI64_LENGTH) == 0;
      }
    else 
#line 840
      {

        return FALSE;
      }
    }
}

# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 676 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
#line 676
{
  cc2420_metadata_t *metadata = CC2420ReceiveP__CC2420PacketBody__getMetadata(CC2420ReceiveP__m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.nxdata);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.nxdata, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.nxdata, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.nxdata, buf[length - 1]);

  if (CC2420ReceiveP__passesAddressCheck(CC2420ReceiveP__m_p_rx_buf) && length >= CC2420_SIZE) {
#line 701
      CC2420ReceiveP__m_p_rx_buf = CC2420ReceiveP__Receive__receive(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 704
    CC2420ReceiveP__receivingPacket = FALSE;
#line 704
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
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
# 95 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP__release = FALSE;
}

# 31 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
#line 31
  CC2420SpiP__ChipSpiResource__abortRelease();
#line 31
}
#line 31
# 377 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 377
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

# 24 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 112 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 112
{
}

# 89 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 89
  HplAtm128SpiP__SPI__sleep();
#line 89
}
#line 89
#line 116
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 116
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 116
}
#line 116
# 167 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
#line 167
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 169
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
}

# 173 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x40bbfc60){
#line 65
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x40bbfc60);
#line 65
}
#line 65
# 68 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 97 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

  /* atomic removed: atomic calls only */
#line 99
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
        if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          }
        else {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
          }
        released = TRUE;
      }
  }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__release(uint8_t arg_0x40b19068){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(arg_0x40b19068);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 411 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__release(uint8_t id)
#line 411
{
  error_t error = Atm128SpiP__ResourceArbiter__release(id);

  /* atomic removed: atomic calls only */
#line 413
  {
    if (!Atm128SpiP__ArbiterInfo__inUse()) {
        Atm128SpiP__stopSpi();
      }
  }
  return error;
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = Atm128SpiP__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )56U |= 1 << 0;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 75 "/opt/tinyos-2.1.2/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__release(void )
{
  if (HplCC2420SpiP__SubResource__isOwner()) {
    HplCC2420SpiP__SS__set();
    }
  return HplCC2420SpiP__SubResource__release();
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = HplCC2420SpiP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 178 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP__m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
#line 97
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 88
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 184 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 184
{
  CC2420SpiP__grant__postTask();
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void HplCC2420SpiP__Resource__granted(void ){
#line 102
  CC2420SpiP__SpiResource__granted();
#line 102
}
#line 102
# 67 "/opt/tinyos-2.1.2/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline void HplCC2420SpiP__SubResource__granted(void )
{
  HplCC2420SpiP__SS__makeOutput();
  HplCC2420SpiP__SS__clr();

  HplCC2420SpiP__Resource__granted();
}

# 429 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Resource__default__granted(uint8_t id)
#line 429
{
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void Atm128SpiP__Resource__granted(uint8_t arg_0x40b1b398){
#line 102
  switch (arg_0x40b1b398) {
#line 102
    case 0U:
#line 102
      HplCC2420SpiP__SubResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      Atm128SpiP__Resource__default__granted(arg_0x40b1b398);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 425 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id)
#line 425
{
  Atm128SpiP__Resource__granted(id);
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x40bc15d8){
#line 102
  Atm128SpiP__ResourceArbiter__granted(arg_0x40bc15d8);
#line 102
}
#line 102
# 155 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}

# 82 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 296 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 296
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 301
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 310
    __nesc_atomic_end(__nesc_atomic); }
}

# 486 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 487
{
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 148 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__stop(void )
#line 148
{
#line 148
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 4);
}

# 68 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void ){
#line 68
  HplAtm128Timer1P__CompareA__stop();
#line 68
}
#line 68
# 74 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void )
#line 74
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 389 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg)
#line 389
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP__m_msg) {
      ack_header = CC2420TransmitP__CC2420PacketBody__getHeader(ack_msg);
      msg_header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);

      if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.nxdata) == __nesc_ntoh_leuint8(ack_header->dsn.nxdata)) {
          CC2420TransmitP__BackoffTimer__stop();

          msg_metadata = CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.nxdata);

          __nesc_hton_int8(msg_metadata->ack.nxdata, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.nxdata, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.nxdata, ack_buf[length] & 0x7f);
          CC2420TransmitP__signalDone(SUCCESS);
        }
    }
}

# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP__CC2420Receive__receive(type, message);
#line 63
}
#line 63
# 70 "/opt/tinyos-2.1.2/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70
# 177 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, value);
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__set(message_t * msg, CC2420ReceiveP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )33U & (1 << 6)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )54U & (1 << 7)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 209 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

# 62 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SACK__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SACK);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 382 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void )
#line 382
{
  /* atomic removed: atomic calls only */
#line 383
  {
    unsigned char __nesc_temp = 
#line 383
    CC2420ControlP__hwAutoAckDefault;

#line 383
    return __nesc_temp;
  }
}

# 112 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420ControlP__CC2420Config__isHwAutoAckDefault();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 389 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void )
#line 389
{
  /* atomic removed: atomic calls only */
#line 390
  {
    unsigned char __nesc_temp = 
#line 390
    CC2420ControlP__autoAckEnabled;

#line 390
    return __nesc_temp;
  }
}

# 117 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void ){
#line 117
  unsigned char __nesc_result;
#line 117

#line 117
  __nesc_result = CC2420ControlP__CC2420Config__isAutoAckEnabled();
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 530 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 531
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

#line 535
  CC2420ReceiveP__rxFrameLength = buf[0];

  switch (CC2420ReceiveP__m_state) {

      case CC2420ReceiveP__S_RX_LENGTH: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;



      if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) 



        {

          CC2420ReceiveP__flush();
        }
      else {
          if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {
              CC2420ReceiveP__m_bytes_left -= CC2420ReceiveP__rxFrameLength + 1;
            }

          if (CC2420ReceiveP__rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP__rxFrameLength > 0) {
                  if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP__receivingPacket = FALSE;
                  CC2420ReceiveP__CSN__set();
                  CC2420ReceiveP__SpiResource__release();
                  CC2420ReceiveP__waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP__flush();
            }
        }
      break;

      case CC2420ReceiveP__S_RX_FCF: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;










      if (CC2420ReceiveP__CC2420Config__isAutoAckEnabled() && !CC2420ReceiveP__CC2420Config__isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
#line 597
          header->fcf.nxdata) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.nxdata) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__SACK__strobe();
              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__RXFIFO__beginRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
              CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
              return;
            }
        }

      CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
      CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP__S_RX_PAYLOAD: 

        CC2420ReceiveP__CSN__set();
      if (!CC2420ReceiveP__m_missed_packets) {

          CC2420ReceiveP__SpiResource__release();
        }




      if ((((
#line 626
      CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get())
       || !CC2420ReceiveP__m_timestamp_size)
       || CC2420ReceiveP__rxFrameLength <= 10) {
          CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
        }
      else {
          if (CC2420ReceiveP__m_timestamp_size == 1) {
            CC2420ReceiveP__PacketTimeStamp__set(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
            }
#line 634
          CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
          CC2420ReceiveP__m_timestamp_size--;

          if (CC2420ReceiveP__m_timestamp_size > 0) {
              CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
              CC2420ReceiveP__m_timestamp_head = 0;
              CC2420ReceiveP__m_timestamp_size = 0;
            }
        }



      if (buf[CC2420ReceiveP__rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 648
          CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP__receiveDone_task__postTask();
              return;
            }
        }

      CC2420ReceiveP__waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP__receivingPacket = FALSE;
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__SpiResource__release();
      break;
    }
}

# 370 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x40ac6b38, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x40ac6b38) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x40ac6b38, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 102 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 102
{
  return CC2420SpiP__attemptRelease();
}

# 39 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 64 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
}

#line 157
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 66 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 293 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg)
#line 294
{
}

# 81 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(am_id_t arg_0x40eee148, message_t * msg){
#line 81
    CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(arg_0x40eee148, msg);
#line 81
}
#line 81
# 241 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 241
{
  CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 81 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
inline static uint16_t CC2420CsmaP__Random__rand16(void ){
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
# 243 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime)
#line 243
{
  CC2420TransmitP__myInitialBackoff = backoffTime + 1;
}

# 60 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420TransmitP__RadioBackoff__setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 223 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 223
{
  CC2420CsmaP__SubBackoff__setInitialBackoff(CC2420CsmaP__Random__rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestInitialBackoff(msg);
}

# 81 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 803 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__releaseSpiResource(void )
#line 803
{
  CC2420TransmitP__SpiResource__release();
  return SUCCESS;
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__sendDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__sendDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 205 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err)
#line 205
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 206
    CC2420CsmaP__sendErr = err;
#line 206
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP__sendDone_task__postTask();
}

# 73 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error){
#line 73
  CC2420CsmaP__CC2420Transmit__sendDone(p_msg, error);
#line 73
}
#line 73
# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 454 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 455
{

  CC2420TransmitP__CSN__set();
  if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 459
      {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CSN__set();
      }
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
    }
  else {
#line 468
    if (!CC2420TransmitP__m_cca) {
        /* atomic removed: atomic calls only */
#line 469
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP__attemptSend();
      }
    else {
        CC2420TransmitP__releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 476
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_SAMPLE_CCA;
        }

        CC2420TransmitP__RadioBackoff__requestInitialBackoff(CC2420TransmitP__m_msg);
        CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myInitialBackoff);
      }
    }
}

# 668 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 668
{
}

# 373 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x40ac6b38, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x40ac6b38) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x40ac6b38, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 297 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg)
#line 298
{
}

# 88 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(am_id_t arg_0x40eee148, message_t * msg){
#line 88
    CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(arg_0x40eee148, msg);
#line 88
}
#line 88
# 246 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 246
{
  CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 88 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 251 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime)
#line 251
{
  CC2420TransmitP__myCongestionBackoff = backoffTime + 1;
}

# 66 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420TransmitP__RadioBackoff__setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 230 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 230
{
  CC2420CsmaP__SubBackoff__setCongestionBackoff(CC2420CsmaP__Random__rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestCongestionBackoff(msg);
}

# 88 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void )
#line 58
{
#line 58
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 50 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 64 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
inline static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4274 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 153 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline bool HplAtm128Timer1P__Timer__test(void )
#line 153
{
  return HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag().bits.tov1;
}

# 87 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplAtm128Timer1P__Timer__test();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 71 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
inline static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 142 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__start(void )
#line 142
{
#line 142
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 4;
}

# 65 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void ){
#line 65
  HplAtm128Timer1P__CompareA__start();
#line 65
}
#line 65
# 136 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__reset(void )
#line 136
{
#line 136
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 4;
}

# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void ){
#line 62
  HplAtm128Timer1P__CompareA__reset();
#line 62
}
#line 62
# 192 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__set(uint16_t t)
#line 192
{
#line 192
  * (volatile uint16_t *)(0x2A + 0x20) = t;
}

# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t){
#line 54
  HplAtm128Timer1P__CompareA__set(t);
#line 54
}
#line 54
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 83 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt)
#line 83
{
  /* atomic removed: atomic calls only */






  {
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size now;
#line 92
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size elapsed;
#line 92
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size expires;

    ;


    now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 102
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(expires - 1);
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start();
  }
}

# 103 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 533 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__writeTxctrl(void )
#line 533
{
  /* atomic removed: atomic calls only */
#line 534
  {
    CC2420ControlP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
    3 << CC2420_TXCTRL_PA_CURRENT)) | (
    1 << CC2420_TXCTRL_RESERVED)) | ((
    15 & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
  }
}

# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t HplCC2420InterruptsP__CCATask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HplCC2420InterruptsP__CCATask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )48U & (1 << 6)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool HplCC2420InterruptsP__CC_CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 89 "/opt/tinyos-2.1.2/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void )
#line 89
{
  /* atomic removed: atomic calls only */
#line 90
  HplCC2420InterruptsP__ccaWaitForState = TRUE;
  /* atomic removed: atomic calls only */
#line 91
  HplCC2420InterruptsP__ccaCheckDisabled = FALSE;
  HplCC2420InterruptsP__ccaLastState = HplCC2420InterruptsP__CC_CCA__get();
  HplCC2420InterruptsP__CCATask__postTask();
  return SUCCESS;
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplCC2420InterruptsP__CCA__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 224 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 224
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 225
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 227
            FAIL;

            {
#line 227
              __nesc_atomic_end(__nesc_atomic); 
#line 227
              return __nesc_temp;
            }
          }
        }
#line 230
      CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
      CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP__InterruptCCA__enableRisingEdge();
      CC2420ControlP__SXOSCON__strobe();

      CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP__writeFsctrl();
      CC2420ControlP__writeMdmctrl0();

      CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));

      CC2420ControlP__writeTxctrl();
    }
#line 252
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startOscillator(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 214 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__Resource__granted(void )
#line 214
{
  CC2420CsmaP__CC2420Power__startOscillator();
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 102
  CC2420CsmaP__Resource__granted();
#line 102
}
#line 102
# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 413 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 413
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__Resource__granted();
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP__syncDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ControlP__syncDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 399 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SyncResource__granted(void )
#line 399
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRFOFF__strobe();
  CC2420ControlP__writeFsctrl();
  CC2420ControlP__writeMdmctrl0();
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRXON__strobe();
  CC2420ControlP__CSN__set();
  CC2420ControlP__SyncResource__release();
  CC2420ControlP__syncDone__postTask();
}

#line 545
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data)
#line 545
{
}

# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val){
#line 63
  CC2420ControlP__ReadRssi__default__readDone(result, val);
#line 63
}
#line 63
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__RssiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 287 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 418 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__RssiResource__granted(void )
#line 418
{
  uint16_t data = 0;

#line 420
  CC2420ControlP__CSN__clr();
  CC2420ControlP__RSSI__read(&data);
  CC2420ControlP__CSN__set();

  CC2420ControlP__RssiResource__release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP__ReadRssi__readDone(SUCCESS, data);
}

# 416 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__SpiResource__granted(void )
#line 416
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 419
    {
      cur_state = CC2420TransmitP__m_state;
    }
#line 421
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP__S_LOAD: 
        CC2420TransmitP__loadTXFIFO();
      break;

      case CC2420TransmitP__S_BEGIN_TRANSMIT: 
        CC2420TransmitP__attemptSend();
      break;

      case CC2420TransmitP__S_CANCEL: 
        CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 437
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
        }
#line 439
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP__releaseSpiResource();
      break;
    }
}

# 513 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 513
{







  CC2420ReceiveP__receive();
}

# 367 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 367
{
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x40ac6108){
#line 102
  switch (arg_0x40ac6108) {
#line 102
    case /*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 102
      CC2420ControlP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID:
#line 102
      CC2420ControlP__SyncResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID:
#line 102
      CC2420ControlP__RssiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID:
#line 102
      CC2420TransmitP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID:
#line 102
      CC2420ReceiveP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420SpiP__Resource__default__granted(arg_0x40ac6108);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 358 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP__m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_IEEEADR, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__startDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__startDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 218 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void )
#line 218
{
  CC2420CsmaP__startDone_task__postTask();
}

# 76 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 76
  CC2420CsmaP__CC2420Power__startOscillatorDone();
#line 76
}
#line 76
# 105 "/opt/tinyos-2.1.2/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP__CCA__disable(void )
#line 105
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    HplCC2420InterruptsP__ccaCheckDisabled = TRUE;
#line 106
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplCC2420InterruptsP__CCA__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 441 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 441
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void HplCC2420InterruptsP__CCA__fired(void ){
#line 68
  CC2420ControlP__InterruptCCA__fired();
#line 68
}
#line 68
# 69 "/opt/tinyos-2.1.2/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline void HplCC2420InterruptsP__CCATask__runTask(void )
#line 69
{
  uint8_t CCAState;

#line 71
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 71
    {
      if (HplCC2420InterruptsP__ccaCheckDisabled) {
          {
#line 73
            __nesc_atomic_end(__nesc_atomic); 
#line 73
            return;
          }
        }
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }

  CCAState = HplCC2420InterruptsP__CC_CCA__get();
  if (HplCC2420InterruptsP__ccaLastState != HplCC2420InterruptsP__ccaWaitForState && CCAState == HplCC2420InterruptsP__ccaWaitForState) {
      HplCC2420InterruptsP__CCA__fired();
    }



  HplCC2420InterruptsP__ccaLastState = CCAState;
  HplCC2420InterruptsP__CCATask__postTask();
}

# 235 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error)
#line 235
{
}

# 709 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error)
#line 709
{
}

# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
#line 55
  CC2420ReceiveP__CC2420Config__syncDone(error);
#line 55
  CC2420ActiveMessageP__CC2420Config__syncDone(error);
#line 55
}
#line 55
# 469 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__syncDone__runTask(void )
#line 469
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 470
    CC2420ControlP__m_sync_busy = FALSE;
#line 470
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 323 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Config__sync(void )
#line 323
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      if (CC2420ControlP__m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 326
            FAIL;

            {
#line 326
              __nesc_atomic_end(__nesc_atomic); 
#line 326
              return __nesc_temp;
            }
          }
        }
#line 329
      CC2420ControlP__m_sync_busy = TRUE;
      if (CC2420ControlP__m_state == CC2420ControlP__S_XOSC_STARTED) {
          CC2420ControlP__SyncResource__request();
        }
      else 
#line 332
        {
          CC2420ControlP__syncDone__postTask();
        }
    }
#line 335
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 465
static inline void CC2420ControlP__sync__runTask(void )
#line 465
{
  CC2420ControlP__CC2420Config__sync();
}

# 244 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error)
#line 244
{
}

# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__BareSend__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__BareSend__default__sendDone(msg, error);
#line 100
}
#line 100
# 110 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
inline static void CC2420ActiveMessageP__AMSend__sendDone(am_id_t arg_0x40ef1010, message_t * msg, error_t error){
#line 110
  BasicServicesP__RadioSender__sendDone(arg_0x40ef1010, msg, error);
#line 110
}
#line 110
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420TinyosNetworkP__Resource__release(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 212 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result)
#line 212
{
  CC2420ActiveMessageP__RadioResource__release();
  CC2420ActiveMessageP__AMSend__sendDone(CC2420ActiveMessageP__AMPacket__type(msg), msg, result);
}

# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__ActiveSend__sendDone(message_t * msg, error_t error){
#line 100
  CC2420ActiveMessageP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 148 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error)
#line 148
{
  if (CC2420TinyosNetworkP__m_busy_client == CC2420TinyosNetworkP__CLIENT_AM) {
      CC2420TinyosNetworkP__ActiveSend__sendDone(msg, error);
    }
  else 
#line 151
    {
      CC2420TinyosNetworkP__BareSend__sendDone(msg, error);
    }
}

# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static void UniqueSendP__Send__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 104 "/opt/tinyos-2.1.2/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP__State__toIdle();
  UniqueSendP__Send__sendDone(msg, error);
}

# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static void CC2420CsmaP__Send__sendDone(message_t * msg, error_t error){
#line 100
  UniqueSendP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__stopDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__stopDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 6;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set();
#line 40
}
#line 40
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 5);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr();
#line 41
}
#line 41
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 6);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr();
#line 41
}
#line 41
# 216 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void )
#line 216
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__stopVReg(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420ControlP__CC2420Power__stopVReg();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 52 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void )
#line 52
{
#line 52
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 6);
}

# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void ){
#line 51
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable();
#line 51
}
#line 51
# 33 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void )
#line 33
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
  return SUCCESS;
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 171 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__stop(void )
#line 171
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__InterruptFIFOP__disable();
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 147 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__stop(void )
#line 147
{
#line 147
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 5);
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop(void ){
#line 70
  HplAtm128Timer1P__Capture__stop();
#line 70
}
#line 70
# 67 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void )
#line 67
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop();
}

# 66 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
#line 66
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable();
#line 66
}
#line 66
# 179 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__stop(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffTimer__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__SpiResource__release();
      CC2420TransmitP__CSN__set();
    }
#line 186
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 105 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420TransmitP__StdControl__stop();
#line 105
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__stop());
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 275 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__shutdown(void )
#line 275
{
  CC2420CsmaP__SubControl__stop();
  CC2420CsmaP__CC2420Power__stopVReg();
  CC2420CsmaP__stopDone_task__postTask();
}

#line 244
static inline void CC2420CsmaP__sendDone_task__runTask(void )
#line 244
{
  error_t packetErr;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    packetErr = CC2420CsmaP__sendErr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
      CC2420CsmaP__shutdown();
    }
  else {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
    }

  CC2420CsmaP__Send__sendDone(CC2420CsmaP__m_msg, packetErr);
}

# 237 "BasicServicesP.nc"
static inline void BasicServicesP__RadioControl__stopDone(error_t error)
#line 237
{
  ;
}

# 138 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__stopDone(error_t error){
#line 138
  BasicServicesP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 265 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__stopDone_task__runTask(void )
#line 265
{
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPED);
  CC2420CsmaP__SplitControl__stopDone(SUCCESS);
}

# 75 "TerraVMC.nc"
static inline void TerraVMC__BSBoot__booted(void )
#line 75
{
  __nesc_hton_uint16(TerraVMC__MoteID.nxdata, TOS_NODE_ID);
}

# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
inline static void BasicServicesP__BSBoot__booted(void ){
#line 60
  TerraVMC__BSBoot__booted();
#line 60
}
#line 60
# 208 "BasicServicesP.nc"
static inline void BasicServicesP__RadioControl__startDone(error_t error)
#line 208
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
inline static void CC2420CsmaP__SplitControl__startDone(error_t error){
#line 113
  BasicServicesP__RadioControl__startDone(error);
#line 113
}
#line 113
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 196 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__release(void )
#line 196
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 197
    {
      CC2420ControlP__CSN__set();
      {
        unsigned char __nesc_temp = 
#line 199
        CC2420ControlP__SpiResource__release();

        {
#line 199
          __nesc_atomic_end(__nesc_atomic); 
#line 199
          return __nesc_temp;
        }
      }
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420ControlP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 268 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 268
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 271
            FAIL;

            {
#line 271
              __nesc_atomic_end(__nesc_atomic); 
#line 271
              return __nesc_temp;
            }
          }
        }
#line 273
      CC2420ControlP__SRXON__strobe();
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__rxOn(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void )
#line 51
{
#line 51
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 6;
}

# 46 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void ){
#line 46
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high)
#line 56
{
  * (volatile uint8_t * )90U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t * )90U |= 1 << 4;
    }
  else {
#line 62
    * (volatile uint8_t * )90U &= ~(1 << 4);
    }
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high){
#line 70
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(low_to_high);
#line 70
}
#line 70
# 50 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void )
#line 50
{
#line 50
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 6;
}

# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void ){
#line 56
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear();
#line 56
}
#line 56
# 15 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(bool rising)
#line 15
{
  /* atomic removed: atomic calls only */
#line 16
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void )
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(FALSE);
}

# 54 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 157 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__start(void )
#line 157
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__receivingPacket = FALSE;




      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 59
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(TRUE);
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 168 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__start(void )
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
      CC2420TransmitP__abortSpiRelease = FALSE;
      CC2420TransmitP__m_tx_power = 0;
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420TransmitP__StdControl__start();
#line 95
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 257 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__startDone_task__runTask(void )
#line 257
{
  CC2420CsmaP__SubControl__start();
  CC2420CsmaP__CC2420Power__rxOn();
  CC2420CsmaP__Resource__release();
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
  CC2420CsmaP__SplitControl__startDone(SUCCESS);
}

# 135 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__reset(void )
#line 135
{
#line 135
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 5;
}

# 64 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset(void ){
#line 64
  HplAtm128Timer1P__Capture__reset();
#line 64
}
#line 64
# 131 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__setEdge(bool up)
#line 131
{
#line 131
  if (up) {
#line 131
    * (volatile uint8_t *)(0x2E + 0x20) |= 1 << 6;
    }
  else {
#line 131
    * (volatile uint8_t *)(0x2E + 0x20) &= ~(1 << 6);
    }
}

# 88 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(bool up){
#line 88
  HplAtm128Timer1P__Capture__setEdge(up);
#line 88
}
#line 88
# 141 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__start(void )
#line 141
{
#line 141
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 5;
}

# 67 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start(void ){
#line 67
  HplAtm128Timer1P__Capture__start();
#line 67
}
#line 67
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
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
# 1055 "BasicServicesP.nc"
static inline void BasicServicesP__sendNextMsg__runTask(void )
#line 1055
{
  ;
  if (BasicServicesP__sendCounter < MAX_SEND_RETRIES) {
      BasicServicesP__sendMessage__postTask();
    }
  else 
#line 1059
    {
      BasicServicesP__outQ__get(&BasicServicesP__tempOutputOutQ);
      BasicServicesP__sendCounter = 0;
      BasicServicesP__sendMessage__postTask();
    }
}

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
# 1008 "BasicServicesP.nc"
static inline void BasicServicesP__sendMessage__runTask(void )
#line 1008
{
  BasicServicesP__sendCounter++;
  if (BasicServicesP__outQ__read(&BasicServicesP__tempOutputOutQ) == SUCCESS) {
      ;
      switch (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata)) {










          case AM_NEWPROGVERSION: BasicServicesP__sendRadioN();
#line 1023
          break;
          case AM_NEWPROGBLOCK: BasicServicesP__sendRadioN();
#line 1024
          break;
          case AM_REQPROGBLOCK: BasicServicesP__sendRadioN();
#line 1025
          break;




          default: 
            if (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata) >= AM_CUSTOM_START && __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata) <= AM_CUSTOM_END) {
                BasicServicesP__sendRadioN();
              }
          break;
        }
    }
  else 
#line 1036
    {
      BasicServicesP__outQ__get(&BasicServicesP__tempOutputOutQ);
      ;
    }
}

# 173 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void )
#line 173
{
  return 29;
}

# 112 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static uint8_t UniqueSendP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420CsmaP__Send__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 95 "/opt/tinyos-2.1.2/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void )
#line 95
{
  return UniqueSendP__SubSend__maxPayloadLength();
}

# 112 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = UniqueSendP__Send__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 90 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void )
#line 90
{
  return CC2420TinyosNetworkP__SubSend__maxPayloadLength();
}

static inline void *CC2420TinyosNetworkP__ActiveSend__getPayload(message_t *msg, uint8_t len)
#line 94
{
  if (len <= CC2420TinyosNetworkP__ActiveSend__maxPayloadLength()) {
      return msg->data;
    }
  else 
#line 97
    {
      return (void *)0;
    }
}

# 125 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static void * CC2420ActiveMessageP__SubSend__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__getPayload(msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 206 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void *CC2420ActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len)
#line 206
{
  return CC2420ActiveMessageP__SubSend__getPayload(msg, len);
}

# 126 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Packet.nc"
inline static void * BasicServicesP__RadioPacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = CC2420ActiveMessageP__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 112 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 202 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void )
#line 202
{
  return CC2420ActiveMessageP__SubSend__maxPayloadLength();
}

# 106 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Packet.nc"
inline static uint8_t BasicServicesP__RadioPacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = CC2420ActiveMessageP__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 65 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline error_t CC2420PacketP__Acks__requestAck(message_t *p_msg)
#line 65
{
  unsigned char *__nesc_temp46;

#line 66
  (__nesc_temp46 = CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp46, __nesc_ntoh_leuint16(__nesc_temp46) | (1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

# 59 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/PacketAcknowledgements.nc"
inline static error_t BasicServicesP__RadioAck__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = CC2420PacketP__Acks__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 70 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline error_t CC2420PacketP__Acks__noAck(message_t *p_msg)
#line 70
{
  unsigned char *__nesc_temp47;

#line 71
  (__nesc_temp47 = CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp47, __nesc_ntoh_leuint16(__nesc_temp47) & ~(1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

# 71 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/PacketAcknowledgements.nc"
inline static error_t BasicServicesP__RadioAck__noAck(message_t * msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420PacketP__Acks__noAck(msg);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 101 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__CC2420Packet__setPower(message_t *p_msg, uint8_t power)
#line 101
{
  if (power > 31) {
    power = 31;
    }
#line 104
  __nesc_hton_uint8(CC2420PacketP__CC2420PacketBody__getMetadata(p_msg)->tx_power.nxdata, power);
}

# 56 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static void AMAuxC__RadioAux__setPower(message_t *p_msg, uint8_t power){
#line 56
  CC2420PacketP__CC2420Packet__setPower(p_msg, power);
#line 56
}
#line 56
# 32 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/AMAuxC.nc"
static inline void AMAuxC__AMAux__setPower(message_t *p_msg, uint8_t power)
#line 32
{



  AMAuxC__RadioAux__setPower(p_msg, AMAuxC__RFPowerTab[power % 8]);
}

# 2 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMAux.nc"
inline static void BasicServicesP__AMAux__setPower(message_t *p_msg, uint8_t power){
#line 2
  AMAuxC__AMAux__setPower(p_msg, power);
#line 2
}
#line 2
# 64 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY || /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 83
    {
      if (!/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = id;
            }
          else {
#line 88
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail] = id;
            }
#line 89
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = id;
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        EBUSY;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 199 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id)
#line 199
{

  CC2420TinyosNetworkP__grantTask__postTask();

  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      return CC2420TinyosNetworkP__Queue__enqueue(id);
    }
  else 
#line 205
    {
      if (id == CC2420TinyosNetworkP__resource_owner) {
          return EALREADY;
        }
      else 
#line 208
        {
          CC2420TinyosNetworkP__next_owner = id;
          return SUCCESS;
        }
    }
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420TinyosNetworkP__Resource__request(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static error_t CC2420ActiveMessageP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 291 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 291
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/SendNotifier.nc"
inline static void CC2420ActiveMessageP__SendNotifier__aboutToSend(am_id_t arg_0x40eefa98, am_addr_t dest, message_t * msg){
#line 59
    CC2420ActiveMessageP__SendNotifier__default__aboutToSend(arg_0x40eefa98, dest, msg);
#line 59
}
#line 59
# 215 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id)
#line 215
{
  if (CC2420TinyosNetworkP__resource_owner == id) {
#line 216
    return EALREADY;
    }
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = id;
          return SUCCESS;
        }
      return FAIL;
    }
  else 
#line 224
    {
      CC2420TinyosNetworkP__resource_owner = id;
      return SUCCESS;
    }
}

# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420TinyosNetworkP__Resource__immediateRequest(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 310 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void )
#line 310
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 311
    {
      unsigned short __nesc_temp = 
#line 311
      CC2420ControlP__m_pan;

      {
#line 311
        __nesc_atomic_end(__nesc_atomic); 
#line 311
        return __nesc_temp;
      }
    }
#line 313
    __nesc_atomic_end(__nesc_atomic); }
}

# 77 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void ){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = CC2420ControlP__CC2420Config__getPanAddr();
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 42 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 87 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 89
{
  unsigned char *__nesc_temp48;
#line 90
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg);

  if (len > CC2420ActiveMessageP__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_leuint8(header->type.nxdata, id);
  __nesc_hton_leuint16(header->dest.nxdata, addr);
  __nesc_hton_leuint16(header->destpan.nxdata, CC2420ActiveMessageP__CC2420Config__getPanAddr());
  __nesc_hton_leuint16(header->src.nxdata, CC2420ActiveMessageP__AMPacket__address());
  (__nesc_temp48 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp48, __nesc_ntoh_leuint16(__nesc_temp48) | (((1 << IEEE154_FCF_INTRAPAN) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));
  __nesc_hton_leuint8(header->length.nxdata, len + CC2420_SIZE);

  if (CC2420ActiveMessageP__RadioResource__immediateRequest() == SUCCESS) {
      error_t rc;

#line 107
      CC2420ActiveMessageP__SendNotifier__aboutToSend(id, addr, msg);

      rc = CC2420ActiveMessageP__SubSend__send(msg, len);
      if (rc != SUCCESS) {
          CC2420ActiveMessageP__RadioResource__release();
        }

      return rc;
    }
  else 
#line 115
    {
      CC2420ActiveMessageP__pending_length = len;
      CC2420ActiveMessageP__pending_message = msg;
      return CC2420ActiveMessageP__RadioResource__request();
    }
}

# 80 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMSend.nc"
inline static error_t BasicServicesP__RadioSender__send(am_id_t arg_0x40722a60, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = CC2420ActiveMessageP__AMSend__send(arg_0x40722a60, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 947 "BasicServicesP.nc"
static inline error_t BasicServicesP__RadioSender_send(uint8_t am_id, uint16_t target, message_t *msg, uint8_t len)
#line 947
{
  error_t stat;








  stat = BasicServicesP__RadioSender__send(__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata), __nesc_ntoh_uint16(BasicServicesP__tempOutputOutQ.sendToMote.nxdata), &BasicServicesP__sendBuff, __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.DataSize.nxdata));
#line 977
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
# 1137 "BasicServicesP.nc"
static inline void BasicServicesP__sendNewProgVersion(newProgVersion_t *Data)
#line 1137
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

# 1765 "TerraVMC.nc"
static inline void TerraVMC__BSUpload__getEnv(newProgVersion_t *data)
#line 1765
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
# 657 "BasicServicesP.nc"
static inline void BasicServicesP__procRecReqProgBlock(reqProgBlock_t *Data)
#line 657
{
  newProgVersion_t xVersion;
  newProgBlock_t xBlock;
  uint8_t *mem;
  uint16_t i = 0;

#line 662
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
#line 671
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
#line 680
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
#line 692
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
# 1816 "TerraVMC.nc"
static inline void TerraVMC__BSUpload__loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[])
#line 1816
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
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(4U);
#line 78
}
#line 78
# 625 "BasicServicesP.nc"
static inline void BasicServicesP__procNewProgBlock(newProgBlock_t *Data)
#line 625
{
  uint8_t lData[BLOCK_SIZE];
  uint16_t i;
  uint16_t Addr = 0;

#line 629
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
#line 647
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
# 1750 "TerraVMC.nc"
static inline void TerraVMC__BSUpload__setEnv(newProgVersion_t *data)
#line 1750
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
# 1803 "TerraVMC.nc"
static inline void TerraVMC__BSUpload__resetMemory(void )
#line 1803
{
  uint16_t i;
  uint8_t size;

#line 1806
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
# 1745 "TerraVMC.nc"
static inline void TerraVMC__BSUpload__stop(void )
#line 1745
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
# 592 "BasicServicesP.nc"
static inline void BasicServicesP__procNewProgVersion(newProgVersion_t *Data)
#line 592
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
#line 606
    BasicServicesP__BM__resetRange(__nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata), __nesc_ntoh_uint16(BasicServicesP__ProgBlockStart.nxdata) + __nesc_ntoh_uint16(BasicServicesP__ProgBlockLen.nxdata) - 1);
#line 606
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
# 902 "BasicServicesP.nc"
static inline void BasicServicesP__procInputEvent__runTask(void )
#line 902
{
  {
    ;

    if (BasicServicesP__inQ__read(&BasicServicesP__tempOutputInQ) == SUCCESS) {
        BasicServicesP__inQ__get(&BasicServicesP__tempOutputInQ);
        switch (__nesc_ntoh_uint8(BasicServicesP__tempOutputInQ.AM_ID.nxdata)) {
            case AM_NEWPROGVERSION: BasicServicesP__procNewProgVersion((newProgVersion_t *)& BasicServicesP__tempOutputInQ.Data);
#line 909
            break;
            case AM_NEWPROGBLOCK: BasicServicesP__procNewProgBlock((newProgBlock_t *)& BasicServicesP__tempOutputInQ.Data);
#line 910
            break;
            case AM_REQPROGBLOCK: BasicServicesP__procRecReqProgBlock((reqProgBlock_t *)& BasicServicesP__tempOutputInQ.Data);
#line 911
            break;




            default: ;
#line 916
            break;
          }
        ;
        BasicServicesP__inQ__get(&BasicServicesP__tempOutputInQ);
        BasicServicesP__procInputEvent__postTask();
      }
    else 
#line 921
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

# 539 "TerraVMC.nc"
static inline int TerraVMC__ceu_go_init(int *ret)
{

  if (TerraVMC__haltedFlag) {
#line 542
    return 0;
    }
  (&TerraVMC__CEU_)->p_tracks = (TerraVMC__tceu_trk *)TerraVMC__CEU_data + 0;
  (&TerraVMC__CEU_)->p_mem = TerraVMC__CEU_data + (TerraVMC__nTracks + 1) * sizeof(TerraVMC__tceu_trk );
  TerraVMC__MEM = (&TerraVMC__CEU_)->p_mem;

  TerraVMC__ceu_track_ins(0x01, 0xFF, 0, TerraVMC__ProgStart);
  return TerraVMC__ceu_go(ret);
}

#line 733
static inline void TerraVMC__ceu_boot(void )
{
  TerraVMC__old = (u32 )TerraVMC__BSTimerVM__getNow();
  TerraVMC__ceu_go_init((void *)0);
}

# 701 "BasicServicesP.nc"
static inline void BasicServicesP__ProgReqTimerTask__runTask(void )
#line 701
{
  uint16_t nextBlock = CURRENT_MAX_BLOCKS;
  reqProgBlock_t Data;
  uint32_t timeout = BasicServicesP__getRequestTimeout();

#line 705
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
#line 736
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
#line 757
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

# 552 "TerraVMC.nc"
static inline int TerraVMC__ceu_go_event(int *ret, int id, uint8_t auxId, void *data)
{
  ;

  if (TerraVMC__haltedFlag) {
#line 556
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
# 285 "TerraVMC.nc"
static inline uint16_t TerraVMC__getEvtCeuId(uint8_t EvtId)
#line 285
{
  uint8_t i = 0;
  uint8_t slotSize;
  uint16_t currSlot = TerraVMC__gate0;

#line 289
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

#line 1659
static inline void TerraVMC__procEvent__runTask(void )
#line 1659
{
  evtData_t evtData;
  uint16_t ceuId;

#line 1662
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
#line 1677
        {
          TerraVMC__ceu_go_event((void *)0, ceuId, evtData.auxId, evtData.data);
        }
    }
  ;
}

# 48 "/opt/tinyos-2.1.2/tos/interfaces/LocalIeeeEui64.nc"
inline static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void ){
#line 48
  struct ieee_eui64 __nesc_result;
#line 48

#line 48
  __nesc_result = LocalIeeeEui64C__LocalIeeeEui64__getId();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 93 "/opt/tinyos-2.1.2/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 93
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 95
  myGroup = ActiveMessageAddressC__group;
  return myGroup;
}

# 55 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
#line 50
inline static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 5;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 6;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput();
#line 46
}
#line 46
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 129 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 129
{
  int i;
#line 130
  int t;

#line 131
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();

  CC2420ControlP__m_short_addr = CC2420ControlP__ActiveMessageAddress__amAddress();
  CC2420ControlP__m_ext_addr = CC2420ControlP__LocalIeeeEui64__getId();
  CC2420ControlP__m_pan = CC2420ControlP__ActiveMessageAddress__amGroup();
  CC2420ControlP__m_tx_power = 15;
  CC2420ControlP__m_channel = 26;

  CC2420ControlP__m_ext_addr = CC2420ControlP__LocalIeeeEui64__getId();
  for (i = 0; i < 4; i++) {
      t = CC2420ControlP__m_ext_addr.data[i];
      CC2420ControlP__m_ext_addr.data[i] = CC2420ControlP__m_ext_addr.data[7 - i];
      CC2420ControlP__m_ext_addr.data[7 - i] = t;
    }





  CC2420ControlP__addressRecognition = TRUE;





  CC2420ControlP__hwAddressRecognition = FALSE;






  CC2420ControlP__autoAckEnabled = TRUE;






  CC2420ControlP__hwAutoAckDefault = FALSE;



  return SUCCESS;
}

# 81 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 4U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 22 "/home/branco/gitspace/Terra/TerraVM/src/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void )
#line 22
{
  return SUCCESS;
}

# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )49U &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 44
}
#line 44


inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )49U &= ~(1 << 6);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput();
#line 44
}
#line 44
# 160 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 160
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 151 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 151
{
  CC2420ReceiveP__m_p_rx_buf = &CC2420ReceiveP__m_rx_buf;
  return SUCCESS;
}

# 131 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 65 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm128Timer0AsyncP__Compare__start();
#line 65
}
#line 65
# 85 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x)
#line 85
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 46 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP__TimerCtrl__setControl(control);
#line 46
}
#line 46
# 207 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 207
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
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

# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
inline static uint16_t UniqueSendP__Random__rand16(void ){
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
# 62 "/opt/tinyos-2.1.2/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Init__init(void )
#line 62
{
  UniqueSendP__localSendId = UniqueSendP__Random__rand16();
  return SUCCESS;
}

# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP__Init__init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP__receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP__receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 61 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

#line 61
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__Init__init(void )
#line 61
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ);
  return SUCCESS;
}

#line 61
static inline error_t /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__Init__init(void )
#line 61
{
  memset(/*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__resQ, 0, sizeof /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__resQ);
  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueSendP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NoInitC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 66 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 5;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set();
#line 40
}
#line 40
# 204 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 207
            FAIL;

            {
#line 207
              __nesc_atomic_end(__nesc_atomic); 
#line 207
              return __nesc_temp;
            }
          }
        }
#line 209
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupTimer__start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startVReg(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 45 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
inline static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(1U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__SplitControl__start(void )
#line 81
{
  if (CC2420CsmaP__SplitControlState__requestState(CC2420CsmaP__S_STARTING) == SUCCESS) {
      CC2420CsmaP__CC2420Power__startVReg();
      return SUCCESS;
    }
  else {
#line 86
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
        return EALREADY;
      }
    else {
#line 89
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 93
  return EBUSY;
}

# 104 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/SplitControl.nc"
inline static error_t BasicServicesP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420CsmaP__SplitControl__start();
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
  unsigned long __nesc_result;
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
#line 194
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
# 164 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void )
#line 164
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 179
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128Timer0AsyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/opt/tinyos-2.1.2/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 140 "/opt/tinyos-2.1.2/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 140
{
  return m1 < m2 ? m1 : m2;
}

# 105 "/opt/tinyos-2.1.2/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 105
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 110
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 110
    uint8_t __result;

#line 110
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 112
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x35 + 0x20) &= ~(1 << 5);
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
# 149 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void )
#line 149
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 58 "/home/branco/gitspace/Terra/TerraVM/src/system/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
}
#line 82
# 88 "/opt/tinyos-2.1.2/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 88
{
   __asm volatile ("sei");}

# 141 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 141
{
#line 141
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 230 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 188 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 188
{
  return CC2420ControlP__SpiResource__request();
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420ControlP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 210 "/opt/tinyos-2.1.2/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startVRegDone(void )
#line 210
{
  CC2420CsmaP__Resource__request();
}

# 56 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 56
  CC2420CsmaP__CC2420Power__startVRegDone();
#line 56
}
#line 56
# 431 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__StartupTimer__fired(void )
#line 431
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 498 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__BackoffTimer__fired(void )
#line 498
{
  /* atomic removed: atomic calls only */
#line 499
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SAMPLE_CCA: 


          if (CC2420TransmitP__CCA__get()) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP__congestionBackoff();
            }
        break;

        case CC2420TransmitP__S_BEGIN_TRANSMIT: 
          case CC2420TransmitP__S_CANCEL: 
            if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
                CC2420TransmitP__attemptSend();
              }
        break;

        case CC2420TransmitP__S_ACK_WAIT: 
          CC2420TransmitP__signalDone(SUCCESS);
        break;

        case CC2420TransmitP__S_SFD: 


          CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CaptureSFD__captureRisingEdge();
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  CC2420TransmitP__BackoffTimer__fired();
#line 78
  CC2420ControlP__StartupTimer__fired();
#line 78
}
#line 78
# 162 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt == 0) 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired();
        }
      else 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
        }
    }
#line 174
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void ){
#line 78
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 119 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void )
#line 119
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired();
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareA__fired(void ){
#line 58
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired();
#line 58
}
#line 58
# 207 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareB__default__fired(void )
#line 207
{
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareB__fired(void ){
#line 58
  HplAtm128Timer1P__CompareB__default__fired();
#line 58
}
#line 58
# 211 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareC__default__fired(void )
#line 211
{
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareC__fired(void ){
#line 58
  HplAtm128Timer1P__CompareC__default__fired();
#line 58
}
#line 58
# 70 "/opt/tinyos-2.1.2/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70
# 195 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
#line 195
{
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
#line 55
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
#line 55
}
#line 55
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )48U & (1 << 4)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__SFD__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 186 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
#line 186
{
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % 
      CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

#line 190
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

# 49 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
#line 49
  CC2420ReceiveP__CC2420Receive__sfd(time);
#line 49
}
#line 49
# 63 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void )
#line 63
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(FALSE);
}

# 54 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 219 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(msg)->length.nxdata)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 58 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(message_t * msg){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__get(msg);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 210 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata);
}

# 50 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(message_t * msg){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__isSet(msg);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 78 "/opt/tinyos-2.1.2/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__set(message_t * msg, CC2420TransmitP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 109 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Alarm.nc"
inline static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 259 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time)
{
  uint32_t now = CC2420TransmitP__BackoffTimer__getNow();


  return now - (uint16_t )(now - captured_time);
}

#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 280
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;
#line 281
  uint32_t time32;
  uint8_t sfd_state = 0;

#line 283
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 283
    {
      time32 = CC2420TransmitP__getTime32(time);
      switch (CC2420TransmitP__m_state) {

          case CC2420TransmitP__S_SFD: 
            CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
          CC2420TransmitP__sfdHigh = TRUE;


          CC2420TransmitP__m_receiving = FALSE;
          CC2420TransmitP__CaptureSFD__captureFallingEdge();
          CC2420TransmitP__PacketTimeStamp__set(CC2420TransmitP__m_msg, time32);
          if (CC2420TransmitP__PacketTimeSyncOffset__isSet(CC2420TransmitP__m_msg)) {
              uint8_t absOffset = sizeof(message_header_t ) - sizeof(cc2420_header_t ) + CC2420TransmitP__PacketTimeSyncOffset__get(CC2420TransmitP__m_msg);
              timesync_radio_t *timesync = (timesync_radio_t *)((nx_uint8_t *)CC2420TransmitP__m_msg + absOffset);

              (__nesc_temp44 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
              CC2420TransmitP__CSN__clr();
              CC2420TransmitP__TXFIFO_RAM__write(absOffset, (uint8_t *)timesync, sizeof(timesync_radio_t ));
              CC2420TransmitP__CSN__set();

              (__nesc_temp45 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp45, __nesc_ntoh_uint32(__nesc_temp45) + time32));
            }

          if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {

              CC2420TransmitP__abortSpiRelease = TRUE;
            }
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__BackoffTimer__stop();

          if (CC2420TransmitP__SFD__get()) {
              break;
            }


          case CC2420TransmitP__S_EFD: 
            CC2420TransmitP__sfdHigh = FALSE;
          CC2420TransmitP__CaptureSFD__captureRisingEdge();

          if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_ACK_WAIT_DELAY);
            }
          else 
#line 326
            {
              CC2420TransmitP__signalDone(SUCCESS);
            }

          if (!CC2420TransmitP__SFD__get()) {
              break;
            }


          default: 

            if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
                CC2420TransmitP__sfdHigh = TRUE;
                CC2420TransmitP__CaptureSFD__captureFallingEdge();

                sfd_state = CC2420TransmitP__SFD__get();
                CC2420TransmitP__CC2420Receive__sfd(time32);
                CC2420TransmitP__m_receiving = TRUE;
                CC2420TransmitP__m_prev_time = time;
                if (CC2420TransmitP__SFD__get()) {
                    {
                      __nesc_atomic_end(__nesc_atomic); 
#line 347
                      return;
                    }
                  }
              }


          if (CC2420TransmitP__sfdHigh == TRUE) {
              CC2420TransmitP__sfdHigh = FALSE;
              CC2420TransmitP__CaptureSFD__captureRisingEdge();
              CC2420TransmitP__m_receiving = FALSE;








              if (sfd_state == 0 && time - CC2420TransmitP__m_prev_time < 10) {
                  CC2420TransmitP__CC2420Receive__sfd_dropped();
                  if (CC2420TransmitP__m_msg) {
                    CC2420TransmitP__PacketTimeStamp__clear(CC2420TransmitP__m_msg);
                    }
                }
#line 370
              break;
            }
        }
    }
#line 373
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(uint16_t time){
#line 61
  CC2420TransmitP__CaptureSFD__captured(time);
#line 61
}
#line 61
# 71 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(uint16_t time)
#line 71
{


  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(time);
}

# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t){
#line 60
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(t);
#line 60
}
#line 60
# 197 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Capture__get(void )
#line 197
{
#line 197
  return * (volatile uint16_t *)(0x26 + 0x20);
}

# 126 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void )
#line 126
{
}

# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 177 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 58 "/home/branco/gitspace/Terra/TerraVM/src/system/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
inline static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer1P__Timer__overflow(void ){
#line 70
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow();
#line 70
}
#line 70
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t SensActP__sigInt1__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SensActP__sigInt1);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 250 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP__A_INT1__fired(void )
#line 250
{
#line 250
  SensActP__sigInt1__postTask();
}

# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void ){
#line 75
  SensActP__A_INT1__fired();
#line 75
}
#line 75
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired();
}

# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig0__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired();
#line 48
}
#line 48
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t SensActP__sigInt2__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SensActP__sigInt2);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 251 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP__A_INT2__fired(void )
#line 251
{
#line 251
  SensActP__sigInt2__postTask();
}

# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void ){
#line 75
  SensActP__A_INT2__fired();
#line 75
}
#line 75
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired();
}

# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig1__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void )
#line 72
{
}

# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired();
#line 75
}
#line 75
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired();
}

# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig2__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void )
#line 72
{
}

# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired();
#line 75
}
#line 75
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired();
}

# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig3__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired();
#line 48
}
#line 48
# 42 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__1__Interrupt__default__fired(void )
#line 42
{
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__1__Interrupt__fired(void ){
#line 68
  /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__1__Interrupt__default__fired();
#line 68
}
#line 68
# 38 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__1__Atm128Interrupt__fired(void )
#line 38
{
  /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__1__Interrupt__fired();
}

# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void ){
#line 75
  /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__1__Atm128Interrupt__fired();
#line 75
}
#line 75
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired();
}

# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig4__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired();
#line 48
}
#line 48
# 42 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__2__Interrupt__default__fired(void )
#line 42
{
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__2__Interrupt__fired(void ){
#line 68
  /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__2__Interrupt__default__fired();
#line 68
}
#line 68
# 38 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__2__Atm128Interrupt__fired(void )
#line 38
{
  /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__2__Interrupt__fired();
}

# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void ){
#line 75
  /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__2__Atm128Interrupt__fired();
#line 75
}
#line 75
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired();
}

# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig5__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired();
#line 48
}
#line 48
# 212 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 212
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {

      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
      CC2420ReceiveP__beginReceive();
    }
  else 



    {
      CC2420ReceiveP__m_missed_packets++;
    }
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired(void ){
#line 68
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 68
}
#line 68
# 38 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void )
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired();
}

static inline void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__3__Interrupt__default__fired(void )
#line 42
{
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__3__Interrupt__fired(void ){
#line 68
  /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__3__Interrupt__default__fired();
#line 68
}
#line 68
# 38 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__3__Atm128Interrupt__fired(void )
#line 38
{
  /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__3__Interrupt__fired();
}

# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void ){
#line 75
  /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__3__Atm128Interrupt__fired();
#line 75
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired();
#line 75
}
#line 75
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired();
}

# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig6__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired();
#line 48
}
#line 48
# 42 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__4__Interrupt__default__fired(void )
#line 42
{
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__4__Interrupt__fired(void ){
#line 68
  /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__4__Interrupt__default__fired();
#line 68
}
#line 68
# 38 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__4__Atm128Interrupt__fired(void )
#line 38
{
  /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__4__Interrupt__fired();
}

# 75 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void ){
#line 75
  /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__4__Atm128Interrupt__fired();
#line 75
}
#line 75
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired();
}

# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig7__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired();
#line 48
}
#line 48
# 115 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 115
{
#line 115
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 97 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplAtm128SpiP__SPI__read();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 113
inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 113
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 113
}
#line 113
# 354 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 354
{
  bool again;

  /* atomic removed: atomic calls only */
#line 357
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 379
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 109 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 109
  Atm128SpiP__Spi__dataReady(data);
#line 109
}
#line 109
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void )
#line 55
{
  return * (volatile uint16_t *)(0x04 + 0x20);
}

#line 52
static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void )
#line 52
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)(0x06 + 0x20);
}

#line 117
static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void )
#line 117
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP__HplAtm128Adc__getAdcsra();
#line 121
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 138
      oldSr.adif || oldSr.adsc;

#line 138
      return __nesc_temp;
    }
  }
}

# 150 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP__HplAtm128Adc__cancel(void ){
#line 150
  unsigned char __nesc_result;
#line 150

#line 150
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__cancel();
#line 150

#line 150
  return __nesc_result;
#line 150
}
#line 150
# 262 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 263
{
  return FALSE;
}

# 119 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 119
  unsigned char __nesc_result;
#line 119

#line 119
  __nesc_result = Atm128AdcP__Atm128AdcMultiple__default__dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 119

#line 119
  return __nesc_result;
#line 119
}
#line 119
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__readDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__readDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 113 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline void /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__ActualRead__readDone(error_t result, uint16_t val)
#line 113
{
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__read_result = result;
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__read_val = val;
  /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__readDoneTask__postTask();
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__readDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__readDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 113 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static inline void /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__ActualRead__readDone(error_t result, uint16_t val)
#line 113
{
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__read_result = result;
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__read_val = val;
  /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__readDoneTask__postTask();
}

# 150 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 66 "/opt/tinyos-2.1.2/tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x41137b88, error_t result, AdcP__ReadNow__val_t val){
#line 66
  switch (arg_0x41137b88) {
#line 66
    case /*TempImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__0__ID:
#line 66
      /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__ActualRead__readDone(result, val);
#line 66
      break;
#line 66
    case /*PhotoImplP.SharedAnalogDeviceC.Adc*/AdcReadNowClientC__1__ID:
#line 66
      /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__ActualRead__readDone(result, val);
#line 66
      break;
#line 66
    default:
#line 66
      AdcP__ReadNow__default__readDone(arg_0x41137b88, result, val);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t AdcP__acquiredData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcP__acquiredData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 108 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise)
#line 108
{
  switch (AdcP__state) 
    {
      case AdcP__ACQUIRE_DATA: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__val = data;
            AdcP__acquiredData__postTask();
          }
      break;

      case AdcP__ACQUIRE_DATA_NOW: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__state = AdcP__IDLE;
            AdcP__ReadNow__readDone(AdcP__client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 81 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise){
#line 81
  AdcP__Atm128AdcSingle__dataReady(data, precise);
#line 81
}
#line 81
# 87 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void )
#line 87
{
#line 87
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 3);
}

# 95 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableInterruption(void ){
#line 95
  HplAtm128AdcP__HplAtm128Adc__disableInterruption();
#line 95
}
#line 95
# 144 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data)
#line 144
{
  bool precise;
#line 145
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP__f.channel;
      precise = Atm128AdcP__f.precise;
      multiple = Atm128AdcP__f.multiple;
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP__HplAtm128Adc__disableInterruption();
      Atm128AdcP__Atm128AdcSingle__dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 172
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP__HplAtm128Adc__getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 180
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP__Atm128AdcMultiple__dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP__HplAtm128Adc__setAdmux(admux);

            Atm128AdcP__f = Atm128AdcP__nextF;
            Atm128AdcP__nextF.channel = nextChannel;
            Atm128AdcP__nextF.precise = Atm128AdcP__isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP__HplAtm128Adc__cancel();
          }
#line 200
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 156 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data){
#line 156
  Atm128AdcP__HplAtm128Adc__dataReady(data);
#line 156
}
#line 156
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
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x403f4c40){
#line 75
  switch (arg_0x403f4c40) {
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
    case CC2420CsmaP__startDone_task:
#line 75
      CC2420CsmaP__startDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__stopDone_task:
#line 75
      CC2420CsmaP__stopDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__sendDone_task:
#line 75
      CC2420CsmaP__sendDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__sync:
#line 75
      CC2420ControlP__sync__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__syncDone:
#line 75
      CC2420ControlP__syncDone__runTask();
#line 75
      break;
#line 75
    case HplCC2420InterruptsP__CCATask:
#line 75
      HplCC2420InterruptsP__CCATask__runTask();
#line 75
      break;
#line 75
    case CC2420SpiP__grant:
#line 75
      CC2420SpiP__grant__runTask();
#line 75
      break;
#line 75
    case Atm128SpiP__zeroTask:
#line 75
      Atm128SpiP__zeroTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__receiveDone_task:
#line 75
      CC2420ReceiveP__receiveDone_task__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case CC2420TinyosNetworkP__grantTask:
#line 75
      CC2420TinyosNetworkP__grantTask__runTask();
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
    case VMCustomP__BCRadio_receive:
#line 75
      VMCustomP__BCRadio_receive__runTask();
#line 75
      break;
#line 75
    case SensActP__sigInt1:
#line 75
      SensActP__sigInt1__runTask();
#line 75
      break;
#line 75
    case SensActP__sigInt2:
#line 75
      SensActP__sigInt2__runTask();
#line 75
      break;
#line 75
    case /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*TempImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__startTask:
#line 75
      /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask();
#line 75
      break;
#line 75
    case /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopTask:
#line 75
      /*TempImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask();
#line 75
      break;
#line 75
    case /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__stopDone:
#line 75
      /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__stopDone__runTask();
#line 75
      break;
#line 75
    case /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__readDoneTask:
#line 75
      /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__readDoneTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask:
#line 75
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case AdcP__acquiredData:
#line 75
      AdcP__acquiredData__runTask();
#line 75
      break;
#line 75
    case /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__grantedTask:
#line 75
      /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Arbiter*/ArbiterP__2__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__startTask:
#line 75
      /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__startTask__runTask();
#line 75
      break;
#line 75
    case /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopTask:
#line 75
      /*PhotoImplP.SharedAnalogDeviceC.PowerManager.PowerManager*/PowerManagerP__1__stopTask__runTask();
#line 75
      break;
#line 75
    case /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__stopDone:
#line 75
      /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__stopDone__runTask();
#line 75
      break;
#line 75
    case /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__readDoneTask:
#line 75
      /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__readDoneTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x403f4c40);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 111 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__NO_RES;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__default_owner_id;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 75 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ[id / 8] & (1 << id % 8);
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

# 56 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static error_t /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__SplitControl__start(void )
#line 56
{
  error_t error;

#line 58
  if (/*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__started == FALSE) {
      error = /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__AnalogDeviceResource__request();
      if (error == SUCCESS) {
        /*PhotoImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__1__started = TRUE;
        }
#line 62
      return error;
    }
  return FAIL;
}

# 77 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId = id;
        }
      else {
#line 84
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 75 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static bool /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*PhotoImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__2__resQ[id / 8] & (1 << id % 8);
}

# 57 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static bool SensActP__getSReq(uint8_t reqSource, uint8_t sensorId)
#line 57
{
  uint8_t i;

#line 59
  if (SensActP__initFlag == FALSE) {
#line 59
      for (i = 0; i < SENSOR_COUNT + 4; i++) SensActP__sensorsReqs[i] = 0;
#line 59
      SensActP__initFlag = TRUE;
    }
#line 60
  for (i = 0; i < SENSOR_COUNT + 4; i++) 
    if (SensActP__sensorsReqs[i] == sensorId + reqSource * (1 << SENSOR_CTL_BIT)) {
        SensActP__sensorsReqs[i] = 0;
        return TRUE;
      }
  return FALSE;
}

# 364 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static void VMCustomP__SA__Ready(uint8_t reqSource, uint8_t codeEvt_id)
#line 364
{
  ;
  switch (reqSource) {
      case REQ_SOURCE1: VMCustomP__VM__queueEvt(VMCustomP__wd2ceuSensorId(codeEvt_id), 0, VMCustomP__SA__getDatap((uint8_t )(codeEvt_id & 0x1f)));
#line 367
      break;



      default: ;
    }
}

# 1644 "TerraVMC.nc"
static void TerraVMC__VMCustom__queueEvt(uint8_t evtId, uint8_t auxId, void *data)
#line 1644
{
  evtData_t evtData;

#line 1646
  ;


  evtData.evtId = evtId;
  evtData.auxId = auxId;
  evtData.data = data;
  TerraVMC__evtQ__enqueue(evtData);
  if (TerraVMC__procFlag == FALSE) {
#line 1653
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

# 87 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static bool SensActP__getPinX(int sid)
#line 87
{


  if (sid == SID_IN1) {
#line 90
    if (SensActP__A_PIN1__isInput()) {
#line 90
      return SensActP__A_PIN1__get();
      }
    }
#line 91
  if (sid == SID_IN2) {
#line 91
    if (SensActP__A_PIN2__isInput()) {
#line 91
      return SensActP__A_PIN2__get();
      }
    }


  return FALSE;
}

# 177 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__isOwner(uint8_t id)
#line 177
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 178
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId == id && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 179
          TRUE;

          {
#line 179
            __nesc_atomic_end(__nesc_atomic); 
#line 179
            return __nesc_temp;
          }
        }
      else 
#line 180
        {
          unsigned char __nesc_temp = 
#line 180
          FALSE;

          {
#line 180
            __nesc_atomic_end(__nesc_atomic); 
#line 180
            return __nesc_temp;
          }
        }
    }
#line 183
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/AdcP.nc"
static void AdcP__sample(void )
#line 82
{
  AdcP__Atm128AdcSingle__getData(AdcP__channel(), AdcP__refVoltage(), FALSE, AdcP__prescaler());
}

# 144 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 161 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 56 "/opt/tinyos-2.1.2/tos/sensorboards/mda100/SharedAnalogDeviceP.nc"
static error_t /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__SplitControl__start(void )
#line 56
{
  error_t error;

#line 58
  if (/*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__started == FALSE) {
      error = /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__AnalogDeviceResource__request();
      if (error == SUCCESS) {
        /*TempImplP.SharedAnalogDeviceC.AnalogDevice*/SharedAnalogDeviceP__0__started = TRUE;
        }
#line 62
      return error;
    }
  return FAIL;
}

# 75 "/opt/tinyos-2.1.2/tos/system/RoundRobinResourceQueueC.nc"
static bool /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*TempImplP.SharedAnalogDeviceC.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP__sendTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
# 60 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

      {
#line 61
        __nesc_atomic_end(__nesc_atomic); 
#line 61
        return __nesc_temp;
      }
    }
#line 63
    __nesc_atomic_end(__nesc_atomic); }
}

# 74 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void )
#line 74
{
  uint8_t rc;
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(CC2420ActiveMessageP__pending_message);

  CC2420ActiveMessageP__SendNotifier__aboutToSend(__nesc_ntoh_leuint8(header->type.nxdata), __nesc_ntoh_leuint16(header->dest.nxdata), CC2420ActiveMessageP__pending_message);
  rc = CC2420ActiveMessageP__SubSend__send(CC2420ActiveMessageP__pending_message, CC2420ActiveMessageP__pending_length);
  if (rc != SUCCESS) {
      CC2420ActiveMessageP__RadioResource__release();
      CC2420ActiveMessageP__AMSend__sendDone(__nesc_ntoh_leuint8(header->type.nxdata), CC2420ActiveMessageP__pending_message, rc);
    }
}

# 80 "/opt/tinyos-2.1.2/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len)
#line 80
{
  CC2420TinyosNetworkP__CC2420Packet__setNetwork(msg, 0x3f);
  CC2420TinyosNetworkP__m_busy_client = CC2420TinyosNetworkP__CLIENT_AM;
  return CC2420TinyosNetworkP__SubSend__send(msg, len);
}

# 90 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static uint8_t * CC2420PacketP__getNetwork(message_t * msg)
#line 90
{
  cc2420_header_t *hdr = CC2420PacketP__CC2420PacketBody__getHeader(msg);
  int offset;

  offset = CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3) + 
  CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3) + 
  (unsigned short )& ((cc2420_header_t *)0)->dest;

  return (uint8_t *)hdr + offset;
}

# 96 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
          StateImplP__state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

#line 133
static bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP__state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 795 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP__acquireSpiResource(void )
#line 795
{
  error_t error = CC2420TransmitP__SpiResource__immediateRequest();

#line 797
  if (error != SUCCESS) {
      CC2420TransmitP__SpiResource__request();
    }
  return error;
}

# 126 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 148 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id)
#line 148
{
  /* atomic removed: atomic calls only */
#line 149
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 150
        TRUE;

#line 150
        return __nesc_temp;
      }
    else 
#line 151
      {
        unsigned char __nesc_temp = 
#line 151
        FALSE;

#line 151
        return __nesc_temp;
      }
  }
}

# 131 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void )
#line 131
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 133
  {
    Atm128SpiP__Spi__initMaster();
    Atm128SpiP__Spi__enableInterrupt(FALSE);
    Atm128SpiP__Spi__setClockPolarity(FALSE);
    Atm128SpiP__Spi__setClockPhase(FALSE);
    Atm128SpiP__Spi__enableSpi(TRUE);
#line 160
    Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
    Atm128SpiP__Spi__setClock(0);
  }

  Atm128SpiP__McuPowerState__update();
}

# 147 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 147
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

#line 132
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 132
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
}

# 107 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 124 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void )
#line 124
{
  /* atomic removed: atomic calls only */
#line 125
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 127
        FALSE;

#line 127
        return __nesc_temp;
      }
  }
#line 129
  return TRUE;
}

# 825 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__loadTXFIFO(void )
#line 825
{
  cc2420_header_t *header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg)->tx_power.nxdata);

  if (!tx_power) {
      tx_power = 15;
    }

  CC2420TransmitP__CSN__clr();

  if (CC2420TransmitP__m_tx_power != tx_power) {
      CC2420TransmitP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP__m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.nxdata) - 1;

#line 846
    CC2420TransmitP__TXFIFO__write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.nxdata) - 1);
  }
}

# 305 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 175 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 175
{






  Atm128SpiP__Spi__enableSpi(TRUE);
  Atm128SpiP__McuPowerState__update();


  Atm128SpiP__Spi__write(tx);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

#line 330
static error_t Atm128SpiP__SpiPacket__send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen)
#line 332
{
  uint8_t discard;

#line 334
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 334
    {
      Atm128SpiP__len = bufLen;
      Atm128SpiP__txBuffer = writeBuf;
      Atm128SpiP__rxBuffer = readBuf;
      Atm128SpiP__pos = 0;
    }
#line 339
    __nesc_atomic_end(__nesc_atomic); }
  if (bufLen > 0) {
      discard = Atm128SpiP__Spi__read();
      return Atm128SpiP__sendNextPart();
    }
  else {
      Atm128SpiP__zeroTask__postTask();
      return SUCCESS;
    }
}

#line 251
static error_t Atm128SpiP__sendNextPart(void )
#line 251
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 258
    {
      myLen = Atm128SpiP__len;
      tx = Atm128SpiP__txBuffer;
      rx = Atm128SpiP__rxBuffer;
      tmpPos = Atm128SpiP__pos;
      end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
      end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
    }
#line 265
    __nesc_atomic_end(__nesc_atomic); }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 269
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 272
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 282
    {
      if (tx != (void *)0) {
        Atm128SpiP__Spi__write(tx[tmpPos]);
        }
      else {
#line 286
        Atm128SpiP__Spi__write(0);
        }
      Atm128SpiP__pos = tmpPos;
    }
#line 289
    __nesc_atomic_end(__nesc_atomic); }


  return SUCCESS;
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void ){
#line 56
  StateImplP__State__toIdle(2U);
#line 56
}
#line 56
# 1077 "BasicServicesP.nc"
static void BasicServicesP__RadioSender__sendDone(am_id_t id, message_t *msg, error_t error)
#line 1077
{
  bool doneStatus;
#line 1078
  bool reqRetry;
#line 1078
  bool reqAck;

  if (id > AM_RESERVED_END) {
      BasicServicesP__outQ__read(&BasicServicesP__tempOutputOutQ);
      doneStatus = error == SUCCESS;
      reqAck = (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.reqAck.nxdata) & (1 << REQ_ACK_BIT)) > 0;
      reqRetry = (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.reqAck.nxdata) & (1 << REQ_RETRY_BIT)) > 0;
      if (doneStatus && reqAck) {
#line 1085
        doneStatus = (uint8_t )BasicServicesP__RadioAck__wasAcked(msg);
        }
#line 1086
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
#line 1096
                BasicServicesP__BSRadio__sendDone(__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata), msg, BasicServicesP__tempOutputOutQ.Data, error);
                }
            }
        }
      else 
#line 1098
        {
          ;
          if (BasicServicesP__sendCounter < MAX_SEND_RETRIES) {
              ;
              BasicServicesP__sendTimer__startOneShot(BasicServicesP__reSendDelay);
            }
          else 
#line 1103
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
  /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qHead = (uint8_t )(/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qHead % 10UL);
  /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize--;
  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize <= 0) {
#line 45
    /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__flagFreeQ = TRUE;
    }
#line 46
  return SUCCESS;
}

# 340 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static void VMCustomP__BSRadio__sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked)
#line 340
{
  ;
  if (am_id == AM_USRMSG) {
      __nesc_hton_uint8(VMCustomP__ExtDataWasAcked.nxdata, (uint8_t )wasAcked);
      VMCustomP__VM__queueEvt(I_SEND_DONE_ACK_ID, __nesc_ntoh_uint8(((usrMsg_t *)dataMsg)->type.nxdata), &VMCustomP__ExtDataWasAcked);
      VMCustomP__VM__queueEvt(I_SEND_DONE_ACK, 0, &VMCustomP__ExtDataWasAcked);
    }
  else 
#line 346
    {
      ;
    }
}

#line 330
static void VMCustomP__BSRadio__sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error)
#line 330
{
  ;
  if (am_id == AM_USRMSG) {
      __nesc_hton_uint8(VMCustomP__ExtDataSendDoneError.nxdata, (uint8_t )error);
      VMCustomP__VM__queueEvt(I_SEND_DONE_ID, __nesc_ntoh_uint8(((usrMsg_t *)dataMsg)->type.nxdata), &VMCustomP__ExtDataSendDoneError);
      VMCustomP__VM__queueEvt(I_SEND_DONE, 0, &VMCustomP__ExtDataSendDoneError);
    }
  else 
#line 336
    {
      ;
    }
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
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

# 1153 "BasicServicesP.nc"
static void BasicServicesP__sendNewProgBlock(newProgBlock_t *Data)
#line 1153
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

  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize >= 10UL) {
      return FAIL;
    }

  memcpy((void *)&/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qData[/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qTail], Data, sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataType ));
  /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qTail++;
#line 29
  /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qTail = (uint8_t )(/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qTail % 10UL);
  /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize++;
  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__flagFreeQ == TRUE) {
      /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__flagFreeQ = FALSE;
#line 32
      /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady__postTask();
    }
  return SUCCESS;
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP__SendDataFullTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(5U, dt);
#line 73
}
#line 73
# 269 "BasicServicesP.nc"
static void BasicServicesP__BSTimerAsync__startOneShot(uint32_t dt)
#line 269
{
  ;
  if (BasicServicesP__TimerAsync__isRunning()) {
#line 271
    BasicServicesP__TimerAsync__stop();
    }
#line 272
  BasicServicesP__TimerAsync__startOneShot(dt);
}

# 387 "TerraVMC.nc"
static void TerraVMC__ceu_track_ins(u8 stack, u8 tree, int chk, TerraVMC__tceu_nlbl lbl)
{
  ;
  {
#line 390
    int i;

#line 391
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

#line 373
static int TerraVMC__ceu_track_cmp(TerraVMC__tceu_trk *trk1, TerraVMC__tceu_trk *trk2)
#line 373
{
  ;

  if (trk1->stack != trk2->stack) {
      if (trk1->stack == (&TerraVMC__CEU_)->stack) {
        return 1;
        }
#line 379
      if (trk2->stack == (&TerraVMC__CEU_)->stack) {
        return 0;
        }
#line 381
      return trk1->stack > trk2->stack;
    }
  return trk1->tree > trk2->tree;
}

#line 680
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

#line 424
static int TerraVMC__ceu_track_rem(TerraVMC__tceu_trk *trk, u8 N)
{
  ;
  if ((&TerraVMC__CEU_)->tracks_n == 0) {
    return 0;
    }
  {
#line 430
    int i;
#line 430
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
#line 448
          break;
          }
      }
#line 450
    memcpy((&TerraVMC__CEU_)->p_tracks + i, last, sizeof(TerraVMC__tceu_trk ));
    return 1;
  }
}

#line 84
static uint8_t TerraVMC__getOpCode(uint8_t *Opcode, uint8_t *Modifier)
#line 84
{
  uint8_t i;

#line 86
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

#line 217
static uint32_t TerraVMC__pop(void )
#line 217
{
  TerraVMC__currStack = TerraVMC__currStack + 4;
  return * (uint32_t *)(TerraVMC__CEU_data + TerraVMC__currStack - 4);
}

#line 190
static void TerraVMC__push(uint32_t value)
#line 190
{
  TerraVMC__currStack = TerraVMC__currStack - 4;
  ;
  if (TerraVMC__currStack > TerraVMC__ProgEnd) {
    * (uint32_t *)(TerraVMC__CEU_data + TerraVMC__currStack) = value;
    }
  else 
#line 195
    {
      TerraVMC__evtError(E_STKOVF);

      ;
      TerraVMC__haltedFlag = TRUE;
      TerraVMC__VMCustom__reset();
    }
}

#line 117
static void TerraVMC__evtError(uint8_t ecode)
#line 117
{
  evtData_t evtData;

#line 119
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
#line 129
    TerraVMC__procEvent__postTask();
    }
#line 130
  TerraVMC__TViewer("error", ecode, 0);
}

# 168 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static void SensActP__SA__setActuator(uint8_t id, uint16_t val)
#line 168
{
  ;
  switch (id) {
      case AID_LEDS: SensActP__A_LEDS__set((uint8_t )val);
#line 171
      SensActP__TViewer("leds", 3, val);
#line 171
      break;
      case AID_LED0: (val & 0x0001) == 1 ? SensActP__A_LEDS__led0On() : SensActP__A_LEDS__led0Off();
#line 172
      SensActP__TViewer("leds", 0, val & 0x0001);
#line 172
      break;
      case AID_LED1: (val & 0x0001) == 1 ? SensActP__A_LEDS__led1On() : SensActP__A_LEDS__led1Off();
#line 173
      SensActP__TViewer("leds", 1, val & 0x0001);
#line 173
      break;
      case AID_LED2: (val & 0x0001) == 1 ? SensActP__A_LEDS__led2On() : SensActP__A_LEDS__led2Off();
#line 174
      SensActP__TViewer("leds", 2, val & 0x0001);
#line 174
      break;
      case AID_LED0_TOGGLE: SensActP__A_LEDS__led0Toggle();
#line 175
      SensActP__TViewer("leds", 0, 3);
#line 175
      break;
      case AID_LED1_TOGGLE: SensActP__A_LEDS__led1Toggle();
#line 176
      SensActP__TViewer("leds", 1, 3);
#line 176
      break;
      case AID_LED2_TOGGLE: SensActP__A_LEDS__led2Toggle();
#line 177
      SensActP__TViewer("leds", 2, 3);
#line 177
      break;


      case AID_OUT1: SensActP__setPinX(AID_OUT1, val == 0 ? FALSE : TRUE);
#line 180
      break;
      case AID_OUT2: SensActP__setPinX(AID_OUT2, val == 0 ? FALSE : TRUE);
#line 181
      break;
      case AID_PIN1: (val & 0x0001) == 1 ? SensActP__A_PIN1__makeOutput() : SensActP__A_PIN1__makeInput();
#line 182
      break;
      case AID_PIN2: (val & 0x0001) == 1 ? SensActP__A_PIN2__makeOutput() : SensActP__A_PIN2__makeInput();
#line 183
      break;
      case AID_INT1: if (val <= 1) {
#line 184
          val == 0 ? SensActP__enableEdge_A_INT1(TRUE) : SensActP__enableEdge_A_INT1(FALSE);
          }
        else {
#line 184
          if (val > 1) {
#line 184
            SensActP__A_INT1__disable();
            }
          }
#line 184
      break;
      case AID_INT2: if (val <= 1) {
#line 185
          val == 0 ? SensActP__enableEdge_A_INT2(TRUE) : SensActP__enableEdge_A_INT2(FALSE);
          }
        else {
#line 185
          if (val > 1) {
#line 185
            SensActP__A_INT2__disable();
            }
          }
#line 185
      break;
    }
}

#line 98
static void SensActP__setPinX(int aid, bool val)
#line 98
{


  if (aid == AID_OUT1) {
#line 101
    if (SensActP__A_PIN1__isOutput()) {
#line 101
      if (val == TRUE) {
#line 101
        SensActP__A_PIN1__set();
        }
      else {
#line 101
        SensActP__A_PIN1__clr();
        }
      }
    }
#line 102
  if (aid == AID_OUT2) {
#line 102
    if (SensActP__A_PIN2__isOutput()) {
#line 102
      if (val == TRUE) {
#line 102
        SensActP__A_PIN2__set();
        }
      else {
#line 102
        SensActP__A_PIN2__clr();
        }
      }
    }
}

# 221 "TerraVMC.nc"
static float TerraVMC__popf(void )
#line 221
{
  TerraVMC__currStack = TerraVMC__currStack + 4;
  return * (float *)(TerraVMC__CEU_data + TerraVMC__currStack - 4);
}

#line 203
static void TerraVMC__pushf(float value)
#line 203
{
  TerraVMC__currStack = TerraVMC__currStack - 4;
  ;
  if (TerraVMC__currStack > TerraVMC__ProgEnd) {
    * (float *)(TerraVMC__CEU_data + TerraVMC__currStack) = value;
    }
  else 
#line 208
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

# 226 "TerraVMC.nc"
static uint32_t TerraVMC__getMVal(uint16_t Maddr, uint8_t type)
#line 226
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

# 262 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static void VMCustomP__VM__procOutEvt(uint8_t id, uint32_t value)
#line 262
{
  ;
  switch (id) {

      case O_LEDS: VMCustomP__proc_leds(id, value);
#line 266
      break;
      case O_LED0: VMCustomP__proc_led0(id, value);
#line 267
      break;
      case O_LED1: VMCustomP__proc_led1(id, value);
#line 268
      break;
      case O_LED2: VMCustomP__proc_led2(id, value);
#line 269
      break;
      case O_TEMP: VMCustomP__proc_req_temp(id, value);
#line 270
      break;
      case O_PHOTO: VMCustomP__proc_req_photo(id, value);
#line 271
      break;
      case O_VOLTS: VMCustomP__proc_req_volts(id, value);
#line 272
      break;
      case O_SEND: VMCustomP__proc_send(id, value);
#line 273
      break;
      case O_SEND_ACK: VMCustomP__proc_send_ack(id, value);
#line 274
      break;
      case O_PORT_A: VMCustomP__proc_set_port_a(id, value);
#line 275
      break;
      case O_PORT_B: VMCustomP__proc_set_port_b(id, value);
#line 276
      break;
      case O_CFG_PORT_A: VMCustomP__proc_cfg_port_a(id, value);
#line 277
      break;
      case O_CFG_PORT_B: VMCustomP__proc_cfg_port_b(id, value);
#line 278
      break;
      case O_REQ_PORT_A: VMCustomP__proc_req_port_a(id, value);
#line 279
      break;
      case O_REQ_PORT_B: VMCustomP__proc_req_port_b(id, value);
#line 280
      break;
      case O_CFG_INT_A: VMCustomP__proc_cfg_int_a(id, value);
#line 281
      break;
      case O_CFG_INT_B: VMCustomP__proc_cfg_int_b(id, value);
#line 282
      break;
      case O_CUSTOM_A: VMCustomP__proc_req_custom_a(id, value);
#line 283
      break;
      case O_REQ_MIC: VMCustomP__proc_req_mic(id, value);
#line 284
      break;
      case O_BEEP: VMCustomP__proc_beep(id, value);
#line 285
      break;
      case O_CUSTOM: VMCustomP__proc_req_custom(id, value);
#line 286
      break;
    }
}

# 124 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static void SensActP__SA__reqSensor(uint8_t reqSource, uint8_t id)
#line 124
{
  ;

  switch (id) {
      case SID_TEMP: SensActP__S_TEMP__read();
#line 128
      SensActP__insertSReq(reqSource, id);
#line 128
      SensActP__TViewer("sensor", SID_TEMP, 0);
#line 128
      break;
      case SID_PHOTO: SensActP__S_PHOTO__read();
#line 129
      SensActP__insertSReq(reqSource, id);
#line 129
      SensActP__TViewer("sensor", SID_PHOTO, 0);
#line 129
      break;
      case SID_LEDS: __nesc_hton_uint16(SensActP__dLeds.nxdata, SensActP__A_LEDS__get());
#line 130
      SensActP__SA__Ready(reqSource, TID_SENSOR_DONE | SID_LEDS);
#line 130
      break;
      case SID_VOLT: SensActP__S_VOLT__read();
#line 131
      SensActP__insertSReq(reqSource, id);
#line 131
      SensActP__TViewer("sensor", SID_VOLT, 0);
#line 131
      break;
      case SID_IN1: __nesc_hton_uint16(SensActP__dIn1.nxdata, SensActP__getPinX(SID_IN1) == TRUE ? 1 : 0);
#line 132
      SensActP__SA__Ready(reqSource, TID_SENSOR_DONE | SID_IN1);
#line 132
      break;
      case SID_IN2: __nesc_hton_uint16(SensActP__dIn2.nxdata, SensActP__getPinX(SID_IN2) == TRUE ? 1 : 0);
#line 133
      SensActP__SA__Ready(reqSource, TID_SENSOR_DONE | SID_IN2);
#line 133
      break;
    }
}

#line 68
static void SensActP__insertSReq(uint8_t reqSource, uint8_t sensorId)
#line 68
{
  uint8_t i;
  bool foundFlag = FALSE;

#line 71
  if (SensActP__initFlag == FALSE) {
#line 71
      for (i = 0; i < SENSOR_COUNT + 4; i++) SensActP__sensorsReqs[i] = 0;
#line 71
      SensActP__initFlag = TRUE;
    }
#line 72
  for (i = 0; i < SENSOR_COUNT + 4 && foundFlag == FALSE; i++) {
      if (SensActP__sensorsReqs[i] == sensorId + reqSource * (1 << SENSOR_CTL_BIT)) {
          foundFlag = TRUE;
        }
    }
  if (foundFlag == FALSE) {
      for (i = 0; i < SENSOR_COUNT + 4; i++) {
          if (SensActP__sensorsReqs[i] == 0) {
              SensActP__sensorsReqs[i] = (uint8_t )(sensorId + reqSource * (1 << SENSOR_CTL_BIT));
              return;
            }
        }
    }
}

# 81 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static void VMCustomP__proc_send_x(uint16_t id, uint16_t addr, uint8_t ack)
#line 81
{
  usrMsg_t *usrMsg;
  uint8_t reqRetryAck;

#line 84
  usrMsg = (usrMsg_t *)VMCustomP__VM__getRealAddr(addr);
  ;

  reqRetryAck = ack ? 1 << REQ_ACK_BIT : 0;
  VMCustomP__BSRadio__send(AM_USRMSG, __nesc_ntoh_uint16(usrMsg->target.nxdata), usrMsg, sizeof(usrMsg_t ), reqRetryAck);
}

# 171 "TerraVMC.nc"
static uint8_t TerraVMC__getBits(uint8_t data, uint8_t stBit, uint8_t endBit)
#line 171
{
  uint8_t ret = 0;
  uint8_t pos;

#line 174
  for (pos = stBit; pos <= endBit; pos++) ret += (data & (1 << pos)) == 0 ? 0 : 1 << (pos - stBit);
  return ret;
}

#line 142
static uint16_t TerraVMC__getPar16(uint8_t p_len)
#line 142
{
  uint16_t temp = 0;
#line 143
  uint16_t temp2;
  uint8_t idx;

#line 145
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

#line 514
static void TerraVMC__ceu_wclock_enable(int gte, s32 us, TerraVMC__tceu_nlbl lbl)
#line 514
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

#line 504
static int TerraVMC__ceu_wclock_lt(TerraVMC__tceu_wclock *tmr)
#line 504
{
  ;

  if ((! (&TerraVMC__CEU_)->wclk_cur || (! (&TerraVMC__CEU_)->wclk_cur || (&TerraVMC__CEU_)->wclk_cur->togo == 0)) || (! (&TerraVMC__CEU_)->wclk_cur || tmr->togo < (&TerraVMC__CEU_)->wclk_cur->togo)) {
      (&TerraVMC__CEU_)->wclk_cur = tmr;
      return 1;
    }
  return 0;
}

# 253 "BasicServicesP.nc"
static void BasicServicesP__BSTimerVM__startOneShot(uint32_t dt)
#line 253
{
  ;
  if (BasicServicesP__TimerVM__isRunning()) {
#line 255
    BasicServicesP__TimerVM__stop();
    }
#line 256
  BasicServicesP__TimerVM__startOneShot(dt);
}

# 180 "TerraVMC.nc"
static uint32_t TerraVMC__unit2val(uint32_t val, uint8_t unit)
#line 180
{
  switch (unit) {
      case 0: return (uint32_t )val;
      case 1: return (uint32_t )(val * 1000L);
      case 2: return (uint32_t )(val * 60L * 1000L);
      case 3: return (uint32_t )(val * 60L * 60L * 1000L);
    }
  return val;
}

#line 156
static uint32_t TerraVMC__getPar32(uint8_t p_len)
#line 156
{
  uint32_t temp = 0L;
#line 157
  uint32_t temp2;
  uint8_t idx;

#line 159
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

#line 242
static void TerraVMC__setMVal(uint32_t buffer, uint16_t Maddr, uint8_t fromTp, uint8_t toTp)
#line 242
{
  if (fromTp == F32) {
      float value = * (float *)&buffer;

#line 245
      switch (toTp) {
          case U8: __nesc_hton_uint8((* (nx_uint8_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint8_t )value);
#line 246
          return;
          case U16: __nesc_hton_uint16((* (nx_uint16_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint16_t )value);
#line 247
          return;
          case U32: __nesc_hton_uint32((* (nx_uint32_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint32_t )value);
#line 248
          return;
          case F32: __nesc_hton_afloat((* (nx_float *)(TerraVMC__MEM + Maddr)).nxdata, (float )value);
          case S8: __nesc_hton_int8((* (nx_int8_t *)(TerraVMC__MEM + Maddr)).nxdata, (int8_t )value);
#line 250
          return;
          case S16: __nesc_hton_int16((* (nx_int16_t *)(TerraVMC__MEM + Maddr)).nxdata, (int16_t )value);
#line 251
          return;
          case S32: __nesc_hton_int32((* (nx_int32_t *)(TerraVMC__MEM + Maddr)).nxdata, (int32_t )value);
#line 252
          return;
        }
    }
  else 
#line 254
    {
      if (fromTp <= F32) {
          uint32_t value = * (uint32_t *)&buffer;

#line 257
          switch (toTp) {
              case U8: __nesc_hton_uint8((* (nx_uint8_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint8_t )value);
#line 258
              return;
              case U16: __nesc_hton_uint16((* (nx_uint16_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint16_t )value);
#line 259
              return;
              case U32: __nesc_hton_uint32((* (nx_uint32_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint32_t )value);
#line 260
              return;
              case F32: __nesc_hton_afloat((* (nx_float *)(TerraVMC__MEM + Maddr)).nxdata, (float )value);
              case S8: __nesc_hton_int8((* (nx_int8_t *)(TerraVMC__MEM + Maddr)).nxdata, (int8_t )value);
#line 262
              return;
              case S16: __nesc_hton_int16((* (nx_int16_t *)(TerraVMC__MEM + Maddr)).nxdata, (int16_t )value);
#line 263
              return;
              case S32: __nesc_hton_int32((* (nx_int32_t *)(TerraVMC__MEM + Maddr)).nxdata, (int32_t )value);
#line 264
              return;
            }
        }
      else 
#line 266
        {
          int32_t value = * (int32_t *)&buffer;

#line 268
          switch (toTp) {
              case U8: __nesc_hton_uint8((* (nx_uint8_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint8_t )value);
#line 269
              return;
              case U16: __nesc_hton_uint16((* (nx_uint16_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint16_t )value);
#line 270
              return;
              case U32: __nesc_hton_uint32((* (nx_uint32_t *)(TerraVMC__MEM + Maddr)).nxdata, (uint32_t )value);
#line 271
              return;
              case F32: __nesc_hton_afloat((* (nx_float *)(TerraVMC__MEM + Maddr)).nxdata, (float )value);
              case S8: __nesc_hton_int8((* (nx_int8_t *)(TerraVMC__MEM + Maddr)).nxdata, (int8_t )value);
#line 273
              return;
              case S16: __nesc_hton_int16((* (nx_int16_t *)(TerraVMC__MEM + Maddr)).nxdata, (int16_t )value);
#line 274
              return;
              case S32: __nesc_hton_int32((* (nx_int32_t *)(TerraVMC__MEM + Maddr)).nxdata, (int32_t )value);
#line 275
              return;
            }
        }
    }
  ;
}

#line 474
static void TerraVMC__ceu_trigger(TerraVMC__tceu_noff off, uint8_t auxId)
{
  int i;
  uint8_t slotSize;
#line 477
  uint8_t evtId;
#line 477
  uint8_t slotAuxId;
  int n = * (char *)((&TerraVMC__CEU_)->p_mem + off) & 0x7f;

#line 479
  evtId = * (char *)((&TerraVMC__CEU_)->p_mem + off - 1);
  slotSize = * (char *)((&TerraVMC__CEU_)->p_mem + off) & 0x80 ? 3 : 2;
  ;
  for (i = 0; i < n; i++) {

      if (slotSize == 2) {
          TerraVMC__ceu_spawn((TerraVMC__tceu_nlbl *)((&TerraVMC__CEU_)->p_mem + off + 1 + i * slotSize));
        }
      else 
#line 486
        {
          slotAuxId = * (char *)((&TerraVMC__CEU_)->p_mem + off + 1 + i * slotSize);
          ;
          if (slotAuxId == auxId) {
              TerraVMC__ceu_spawn((TerraVMC__tceu_nlbl *)((&TerraVMC__CEU_)->p_mem + off + 2 + i * slotSize));
            }
        }
    }
}

#line 465
static void TerraVMC__ceu_spawn(TerraVMC__tceu_nlbl *lbl)
{

  if (__nesc_ntoh_uint16((* (nx_uint16_t *)lbl).nxdata) != TerraVMC__Inactive) {
      TerraVMC__ceu_track_ins((&TerraVMC__CEU_)->stack, 0xFF, 0, __nesc_ntoh_uint16((* (nx_uint16_t *)lbl).nxdata));
      __nesc_hton_uint16((* (nx_uint16_t *)lbl).nxdata, TerraVMC__Inactive);
    }
}

# 212 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 302 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void )
#line 302
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 303
    {
      unsigned short __nesc_temp = 
#line 303
      CC2420ControlP__m_short_addr;

      {
#line 303
        __nesc_atomic_end(__nesc_atomic); 
#line 303
        return __nesc_temp;
      }
    }
#line 305
    __nesc_atomic_end(__nesc_atomic); }
}

# 139 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg)
#line 139
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 141
  return __nesc_ntoh_leuint16(header->dest.nxdata);
}

# 106 "/opt/tinyos-2.1.2/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 106
{
  am_addr_t myAddr;

#line 108
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    myAddr = ActiveMessageAddressC__addr;
#line 108
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 21 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__put(void *Data)
#line 21
{
  ;

  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qSize >= 5UL) {
      return FAIL;
    }

  memcpy((void *)&/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qData[/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qTail], Data, sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataType ));
  /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qTail++;
#line 29
  /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qTail = (uint8_t )(/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qTail % 5UL);
  /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qSize++;
  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__flagFreeQ == TRUE) {
      /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__flagFreeQ = FALSE;
#line 32
      /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady__postTask();
    }
  return SUCCESS;
}

# 144 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_addr_t CC2420ActiveMessageP__AMPacket__source(message_t *amsg)
#line 144
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 146
  return __nesc_ntoh_leuint16(header->src.nxdata);
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP__ProgReqTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 73
}
#line 73
# 164 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg)
#line 164
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 166
  return __nesc_ntoh_leuint8(header->type.nxdata);
}

# 769 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 769
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 770
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
#line 773
            __nesc_atomic_end(__nesc_atomic); 
#line 773
            return;
          }
        }
      CC2420ReceiveP__receivingPacket = FALSE;
#line 788
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }





          CC2420ReceiveP__beginReceive();
        }
      else 
        {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
#line 807
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP__attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 716 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__beginReceive(void )
#line 716
{
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
  /* atomic removed: atomic calls only */
#line 718
  CC2420ReceiveP__receivingPacket = TRUE;
  if (CC2420ReceiveP__SpiResource__isOwner()) {
      CC2420ReceiveP__receive();
    }
  else {
#line 722
    if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
        CC2420ReceiveP__receive();
      }
    else {
        CC2420ReceiveP__SpiResource__request();
      }
    }
}

#line 759
static void CC2420ReceiveP__receive(void )
#line 759
{
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__RXFIFO__beginRead((uint8_t *)CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf), 1);
}

# 189 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

#line 329
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 733 "/opt/tinyos-2.1.2/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 733
{








  CC2420ReceiveP__reset_state();

  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

#line 813
static void CC2420ReceiveP__reset_state(void )
#line 813
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 815
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

# 318 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP__SpiByte__write(addr);
}

# 171 "/opt/tinyos-2.1.2/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata, FALSE);
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);
}

# 850 "/opt/tinyos-2.1.2/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__signalDone(error_t err)
#line 850
{
  /* atomic removed: atomic calls only */
#line 851
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__abortSpiRelease = FALSE;
  CC2420TransmitP__ChipSpiResource__attemptRelease();
  CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, err);
}

#line 743
static void CC2420TransmitP__attemptSend(void )
#line 743
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 747
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          CC2420TransmitP__SFLUSHTX__strobe();
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__CSN__set();
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
          CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
          {
#line 754
            __nesc_atomic_end(__nesc_atomic); 
#line 754
            return;
          }
        }





      CC2420TransmitP__CSN__clr();
      status = CC2420TransmitP__m_cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP__SNOP__strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP__m_state = congestion ? CC2420TransmitP__S_SAMPLE_CCA : CC2420TransmitP__S_SFD;
      CC2420TransmitP__CSN__set();
    }
#line 773
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP__totalCcaChecks = 0;
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__congestionBackoff();
    }
  else 
#line 779
    {
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
    }
}





static void CC2420TransmitP__congestionBackoff(void )
#line 788
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 789
    {
      CC2420TransmitP__RadioBackoff__requestCongestionBackoff(CC2420TransmitP__m_msg);
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myCongestionBackoff);
    }
#line 792
    __nesc_atomic_end(__nesc_atomic); }
}

# 147 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )remaining << 0);
}

# 80 "/home/branco/gitspace/Terra/TerraVM/src/system/TransformCounterC.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 479 "/opt/tinyos-2.1.2/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP__writeFsctrl(void )
#line 479
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 482
    {
      channel = CC2420ControlP__m_channel;
    }
#line 484
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP__writeMdmctrl0(void )
#line 496
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 497
    {
      CC2420ControlP__MDMCTRL0__write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP__addressRecognition && CC2420ControlP__hwAddressRecognition ? 1 : 0) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 506
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP__writeId(void )
#line 515
{
  nxle_uint16_t id[6];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 518
    {

      memcpy((uint8_t *)id, CC2420ControlP__m_ext_addr.data, 8);
      __nesc_hton_leuint16(id[4].nxdata, CC2420ControlP__m_pan);
      __nesc_hton_leuint16(id[5].nxdata, CC2420ControlP__m_short_addr);
    }
#line 523
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__IEEEADR__write(0, (uint8_t *)&id, 12);
}

# 260 "/opt/tinyos-2.1.2/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(uint8_t mode)
#line 49
{
  /* atomic removed: atomic calls only */
#line 50
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start();
  }
  return SUCCESS;
}

# 1169 "BasicServicesP.nc"
static void BasicServicesP__sendReqProgBlock(reqProgBlock_t *Data)
#line 1169
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

#line 980
static void BasicServicesP__sendRadioN(void )
#line 980
{
  error_t err;

#line 982
  ;
  memcpy(BasicServicesP__RadioPacket__getPayload(&BasicServicesP__sendBuff, BasicServicesP__RadioPacket__maxPayloadLength()), & BasicServicesP__tempOutputOutQ.Data, __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.DataSize.nxdata));




  if ((__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.reqAck.nxdata) & (1 << REQ_ACK_BIT)) > 0) {
      if (BasicServicesP__RadioAck__requestAck(&BasicServicesP__sendBuff) != SUCCESS) {
#line 989
        ;
        }
    }
  else 
#line 990
    {
      if (BasicServicesP__RadioAck__noAck(&BasicServicesP__sendBuff) != SUCCESS) {
#line 991
        ;
        }
    }
  if (__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.RFPower.nxdata) > 0) {
#line 994
    BasicServicesP__AMAux__setPower(&BasicServicesP__sendBuff, __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.RFPower.nxdata));
    }
#line 995
  err = BasicServicesP__RadioSender_send(__nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.AM_ID.nxdata), __nesc_ntoh_uint16(BasicServicesP__tempOutputOutQ.sendToMote.nxdata), &BasicServicesP__sendBuff, __nesc_ntoh_uint8(BasicServicesP__tempOutputOutQ.DataSize.nxdata));
  if (err != SUCCESS) {
      ;
      BasicServicesP__sendTimer__startOneShot(BasicServicesP__reSendDelay);
    }
  else 
#line 999
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
  /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qHead = (uint8_t )(/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qHead % 5UL);
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

# 1781 "TerraVMC.nc"
static void TerraVMC__BSUpload__start(bool resetFlag)
#line 1781
{
  uint8_t i;
#line 1782
  uint8_t size;

#line 1783
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

# 289 "BasicServicesP.nc"
static uint16_t BasicServicesP__getNextEmptyBlock(void )
#line 289
{
  uint16_t i;

#line 291
  for (i = 0; i < CURRENT_MAX_BLOCKS; i++) {
      if (!BasicServicesP__BM__get(i)) {
#line 292
        return i;
        }
    }
#line 294
  return CURRENT_MAX_BLOCKS;
}

# 42 "/opt/tinyos-2.1.2/tos/platforms/micaz/LocalIeeeEui64C.nc"
static ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void )
#line 42
{
  ieee_eui64_t id;

  id.data[0] = 0x00;
  id.data[1] = 0x12;
  id.data[2] = 0x6d;




  id.data[3] = 'L';
  id.data[4] = 'O';

  id.data[5] = 0;
  id.data[6] = TOS_NODE_ID >> 8;
  id.data[7] = TOS_NODE_ID & 0xff;
  return id;
}

# 187 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 187
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_16(void )
#line 193
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Timer__overflow();
}

# 204 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void )
#line 204
{
  HplAtm128Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_13(void )
#line 208
{
  HplAtm128Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_24(void )
#line 212
{
  HplAtm128Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_11(void )
#line 216
{
  HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__get());
}

__attribute((interrupt))   void __vector_14(void )
#line 220
{
  HplAtm128Timer1P__Timer__overflow();
}

# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void )
#line 55
{
  HplAtm128InterruptSigP__IntSig0__fired();
}


__attribute((signal))   void __vector_2(void )
#line 60
{
  HplAtm128InterruptSigP__IntSig1__fired();
}


__attribute((signal))   void __vector_3(void )
#line 65
{
  HplAtm128InterruptSigP__IntSig2__fired();
}


__attribute((signal))   void __vector_4(void )
#line 70
{
  HplAtm128InterruptSigP__IntSig3__fired();
}


__attribute((signal))   void __vector_5(void )
#line 75
{
  HplAtm128InterruptSigP__IntSig4__fired();
}


__attribute((signal))   void __vector_6(void )
#line 80
{
  HplAtm128InterruptSigP__IntSig5__fired();
}


__attribute((signal))   void __vector_7(void )
#line 85
{
  HplAtm128InterruptSigP__IntSig6__fired();
}


__attribute((signal))   void __vector_8(void )
#line 90
{
  HplAtm128InterruptSigP__IntSig7__fired();
}

# 119 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 119
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

# 108 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_21(void )
#line 108
{
  uint16_t data = HplAtm128AdcP__HplAtm128Adc__getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP__HplAtm128Adc__dataReady(data);
}

