#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 212
typedef long unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/x86_64-linux-gnu/ncc/deputy_nodeputy.h"
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
# 36 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;









typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;









typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;








typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#line 119
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#line 134
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 34 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 275
#line 271
typedef struct __nesc_unnamed4242 {

  long int quot;
  long int rem;
} imaxdiv_t;
# 281 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
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
# 46 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, 
size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 66
extern void *memset(void *__s, int __c, size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 39 "/usr/include/xlocale.h" 3
#line 27
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
#line 50
typedef enum __nesc_unnamed4243 {

  P_ALL, 
  P_PID, 
  P_PGID
} idtype_t;
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#line 124
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct __nesc_unnamed4244 {
#line 134
  int __val[2];
} 
#line 134
__fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void *__timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4245 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4246 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 71 "/usr/include/stdlib.h" 3
#line 67
typedef union __nesc_unnamed4247 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 101
#line 97
typedef struct __nesc_unnamed4248 {

  int quot;
  int rem;
} div_t;







#line 105
typedef struct __nesc_unnamed4249 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 117
typedef struct __nesc_unnamed4250 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 157
__extension__ 
#line 194
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 60
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 98
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 75
typedef __time_t time_t;
#line 91
typedef __clockid_t clockid_t;
#line 103
typedef __timer_t timer_t;
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 200
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 27
typedef struct __nesc_unnamed4251 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 75
#line 64
typedef struct __nesc_unnamed4252 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 26 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;


union pthread_attr_t {

  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;









#line 75
typedef struct __pthread_internal_list {

  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#line 127
#line 90
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
  } 
#line 124
  __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;





#line 129
typedef union __nesc_unnamed4254 {

  char __size[4];
  int __align;
} pthread_mutexattr_t;
#line 153
#line 138
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 155
typedef union __nesc_unnamed4257 {

  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 213
#line 173
typedef union __nesc_unnamed4258 {


  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } 
  __data;
#line 211
  char __size[56];
  long int __align;
} pthread_rwlock_t;





#line 215
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 230
typedef union __nesc_unnamed4261 {

  char __size[32];
  long int __align;
} pthread_barrier_t;





#line 236
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 343 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 412
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  __extension__ unsigned long long int __a;
};
#line 543
extern void exit(int __status) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__noreturn__)) ;
#line 742
typedef int (*__compar_fn_t)(const void *arg_0x2b8788c6acf8, const void *arg_0x2b8788c69020);
#line 780
__extension__ 
#line 797
__extension__ 
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
typedef float float_t;
typedef double double_t;
# 326 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
__extension__ 





__extension__ 
#line 326
__extension__ 





__extension__ 
#line 326
__extension__ 





__extension__ 
# 189 "/usr/include/math.h" 3
enum __nesc_unnamed4263 {

  FP_NAN = 

  0, 
  FP_INFINITE = 

  1, 
  FP_ZERO = 

  2, 
  FP_SUBNORMAL = 

  3, 
  FP_NORMAL = 

  4
};
#line 308
#line 301
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 326
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 46 "/usr/include/ctype.h" 3
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 25 "/home/wsn/workspace/TerraVM_New/src/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4266 {
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
# 51 "/home/wsn/workspace/TerraVM_New/src/system/TinyError.h"
enum __nesc_unnamed4267 {
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
# 4 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/hardware.h"
static __inline void __nesc_enable_interrupt();
static __inline void __nesc_disable_interrupt();

typedef uint8_t __nesc_atomic_t;
typedef uint8_t mcu_power_t;

__inline __nesc_atomic_t __nesc_atomic_start(void )  ;



__inline void __nesc_atomic_end(__nesc_atomic_t x)  ;



typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;

static __inline float __nesc_ntoh_afloat(const void * source)  ;





static __inline float __nesc_hton_afloat(void * target, float value)  ;







enum __nesc_unnamed4268 {
  TOS_SLEEP_NONE = 0
};
# 6 "VMData.h"
enum __nesc_unnamed4269 {

  MSG_BUFF_SIZE = 28, 
  BLOCK_SIZE = 24, 
  SET_DATA_SIZE = 18, 
  SEND_DATA_SIZE = 16, 


  CURRENT_MAX_BLOCKS = 240
};
# 4 "VMError.h"
enum __nesc_unnamed4270 {


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

enum __nesc_unnamed4271 {



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
enum __nesc_unnamed4272 {



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
# 6 "/home/wsn/workspace/TerraVM_New/src/system/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4273 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4274 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4275 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4276 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4277 {
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
  nx_uint16_t ackID;
} __attribute__((packed)) serial_header_t;




#line 132
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 137
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 11 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/ackMessage.h"
#line 6
typedef nx_struct ackMessage_t {
  nx_uint16_t ackCode;
  nx_am_addr_t src;
  nx_am_addr_t dest;
  nx_uint16_t ackID;
} __attribute__((packed)) ackMessage_t;
# 23 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/platform_message.h"
#line 21
typedef union message_header {
  serial_header_t serial;
} message_header_t;



#line 25
typedef union message_footer {
  nx_uint8_t dummy;
} message_footer_t;



#line 29
typedef union message_metadata {
  nx_uint8_t dummy;
} message_metadata_t;
# 19 "/home/wsn/workspace/TerraVM_New/src/system/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 41 "/home/wsn/workspace/TerraVM_New/src/system/Timer.h"
typedef struct __nesc_unnamed4278 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4279 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4280 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4281 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 44 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 64
typedef struct _IO_FILE __FILE;
# 94 "/usr/include/wchar.h" 3
#line 82
typedef struct __nesc_unnamed4282 {

  int __count;
  union __nesc_unnamed4283 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 3
#line 21
typedef struct __nesc_unnamed4284 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 26
typedef struct __nesc_unnamed4285 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 144 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 144
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 180
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 245
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 338
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 79 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
#line 110
typedef _G_fpos_t fpos_t;
#line 168
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 362
extern int printf(const char *__restrict __format, ...);
#line 433
extern int sscanf(const char *__restrict __s, 
const char *__restrict __format, ...) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 448
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __asm ("""__isoc99_sscanf") __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 846
extern void perror(const char *__s);
# 255 "/usr/include/unistd.h" 3
typedef __useconds_t useconds_t;
#line 274
typedef __socklen_t socklen_t;
#line 353
extern int close(int __fd);
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum __nesc_unnamed4286 {

  _PC_LINK_MAX, 

  _PC_MAX_CANON, 

  _PC_MAX_INPUT, 

  _PC_NAME_MAX, 

  _PC_PATH_MAX, 

  _PC_PIPE_BUF, 

  _PC_CHOWN_RESTRICTED, 

  _PC_NO_TRUNC, 

  _PC_VDISABLE, 

  _PC_SYNC_IO, 

  _PC_ASYNC_IO, 

  _PC_PRIO_IO, 

  _PC_SOCK_MAXBUF, 

  _PC_FILESIZEBITS, 

  _PC_REC_INCR_XFER_SIZE, 

  _PC_REC_MAX_XFER_SIZE, 

  _PC_REC_MIN_XFER_SIZE, 

  _PC_REC_XFER_ALIGN, 

  _PC_ALLOC_SIZE_MIN, 

  _PC_SYMLINK_MAX, 

  _PC_2_SYMLINKS
};



enum __nesc_unnamed4287 {

  _SC_ARG_MAX, 

  _SC_CHILD_MAX, 

  _SC_CLK_TCK, 

  _SC_NGROUPS_MAX, 

  _SC_OPEN_MAX, 

  _SC_STREAM_MAX, 

  _SC_TZNAME_MAX, 

  _SC_JOB_CONTROL, 

  _SC_SAVED_IDS, 

  _SC_REALTIME_SIGNALS, 

  _SC_PRIORITY_SCHEDULING, 

  _SC_TIMERS, 

  _SC_ASYNCHRONOUS_IO, 

  _SC_PRIORITIZED_IO, 

  _SC_SYNCHRONIZED_IO, 

  _SC_FSYNC, 

  _SC_MAPPED_FILES, 

  _SC_MEMLOCK, 

  _SC_MEMLOCK_RANGE, 

  _SC_MEMORY_PROTECTION, 

  _SC_MESSAGE_PASSING, 

  _SC_SEMAPHORES, 

  _SC_SHARED_MEMORY_OBJECTS, 

  _SC_AIO_LISTIO_MAX, 

  _SC_AIO_MAX, 

  _SC_AIO_PRIO_DELTA_MAX, 

  _SC_DELAYTIMER_MAX, 

  _SC_MQ_OPEN_MAX, 

  _SC_MQ_PRIO_MAX, 

  _SC_VERSION, 

  _SC_PAGESIZE, 


  _SC_RTSIG_MAX, 

  _SC_SEM_NSEMS_MAX, 

  _SC_SEM_VALUE_MAX, 

  _SC_SIGQUEUE_MAX, 

  _SC_TIMER_MAX, 




  _SC_BC_BASE_MAX, 

  _SC_BC_DIM_MAX, 

  _SC_BC_SCALE_MAX, 

  _SC_BC_STRING_MAX, 

  _SC_COLL_WEIGHTS_MAX, 

  _SC_EQUIV_CLASS_MAX, 

  _SC_EXPR_NEST_MAX, 

  _SC_LINE_MAX, 

  _SC_RE_DUP_MAX, 

  _SC_CHARCLASS_NAME_MAX, 


  _SC_2_VERSION, 

  _SC_2_C_BIND, 

  _SC_2_C_DEV, 

  _SC_2_FORT_DEV, 

  _SC_2_FORT_RUN, 

  _SC_2_SW_DEV, 

  _SC_2_LOCALEDEF, 


  _SC_PII, 

  _SC_PII_XTI, 

  _SC_PII_SOCKET, 

  _SC_PII_INTERNET, 

  _SC_PII_OSI, 

  _SC_POLL, 

  _SC_SELECT, 

  _SC_UIO_MAXIOV, 

  _SC_IOV_MAX = _SC_UIO_MAXIOV, 

  _SC_PII_INTERNET_STREAM, 

  _SC_PII_INTERNET_DGRAM, 

  _SC_PII_OSI_COTS, 

  _SC_PII_OSI_CLTS, 

  _SC_PII_OSI_M, 

  _SC_T_IOV_MAX, 



  _SC_THREADS, 

  _SC_THREAD_SAFE_FUNCTIONS, 

  _SC_GETGR_R_SIZE_MAX, 

  _SC_GETPW_R_SIZE_MAX, 

  _SC_LOGIN_NAME_MAX, 

  _SC_TTY_NAME_MAX, 

  _SC_THREAD_DESTRUCTOR_ITERATIONS, 

  _SC_THREAD_KEYS_MAX, 

  _SC_THREAD_STACK_MIN, 

  _SC_THREAD_THREADS_MAX, 

  _SC_THREAD_ATTR_STACKADDR, 

  _SC_THREAD_ATTR_STACKSIZE, 

  _SC_THREAD_PRIORITY_SCHEDULING, 

  _SC_THREAD_PRIO_INHERIT, 

  _SC_THREAD_PRIO_PROTECT, 

  _SC_THREAD_PROCESS_SHARED, 


  _SC_NPROCESSORS_CONF, 

  _SC_NPROCESSORS_ONLN, 

  _SC_PHYS_PAGES, 

  _SC_AVPHYS_PAGES, 

  _SC_ATEXIT_MAX, 

  _SC_PASS_MAX, 


  _SC_XOPEN_VERSION, 

  _SC_XOPEN_XCU_VERSION, 

  _SC_XOPEN_UNIX, 

  _SC_XOPEN_CRYPT, 

  _SC_XOPEN_ENH_I18N, 

  _SC_XOPEN_SHM, 


  _SC_2_CHAR_TERM, 

  _SC_2_C_VERSION, 

  _SC_2_UPE, 


  _SC_XOPEN_XPG2, 

  _SC_XOPEN_XPG3, 

  _SC_XOPEN_XPG4, 


  _SC_CHAR_BIT, 

  _SC_CHAR_MAX, 

  _SC_CHAR_MIN, 

  _SC_INT_MAX, 

  _SC_INT_MIN, 

  _SC_LONG_BIT, 

  _SC_WORD_BIT, 

  _SC_MB_LEN_MAX, 

  _SC_NZERO, 

  _SC_SSIZE_MAX, 

  _SC_SCHAR_MAX, 

  _SC_SCHAR_MIN, 

  _SC_SHRT_MAX, 

  _SC_SHRT_MIN, 

  _SC_UCHAR_MAX, 

  _SC_UINT_MAX, 

  _SC_ULONG_MAX, 

  _SC_USHRT_MAX, 


  _SC_NL_ARGMAX, 

  _SC_NL_LANGMAX, 

  _SC_NL_MSGMAX, 

  _SC_NL_NMAX, 

  _SC_NL_SETMAX, 

  _SC_NL_TEXTMAX, 


  _SC_XBS5_ILP32_OFF32, 

  _SC_XBS5_ILP32_OFFBIG, 

  _SC_XBS5_LP64_OFF64, 

  _SC_XBS5_LPBIG_OFFBIG, 


  _SC_XOPEN_LEGACY, 

  _SC_XOPEN_REALTIME, 

  _SC_XOPEN_REALTIME_THREADS, 


  _SC_ADVISORY_INFO, 

  _SC_BARRIERS, 

  _SC_BASE, 

  _SC_C_LANG_SUPPORT, 

  _SC_C_LANG_SUPPORT_R, 

  _SC_CLOCK_SELECTION, 

  _SC_CPUTIME, 

  _SC_THREAD_CPUTIME, 

  _SC_DEVICE_IO, 

  _SC_DEVICE_SPECIFIC, 

  _SC_DEVICE_SPECIFIC_R, 

  _SC_FD_MGMT, 

  _SC_FIFO, 

  _SC_PIPE, 

  _SC_FILE_ATTRIBUTES, 

  _SC_FILE_LOCKING, 

  _SC_FILE_SYSTEM, 

  _SC_MONOTONIC_CLOCK, 

  _SC_MULTI_PROCESS, 

  _SC_SINGLE_PROCESS, 

  _SC_NETWORKING, 

  _SC_READER_WRITER_LOCKS, 

  _SC_SPIN_LOCKS, 

  _SC_REGEXP, 

  _SC_REGEX_VERSION, 

  _SC_SHELL, 

  _SC_SIGNALS, 

  _SC_SPAWN, 

  _SC_SPORADIC_SERVER, 

  _SC_THREAD_SPORADIC_SERVER, 

  _SC_SYSTEM_DATABASE, 

  _SC_SYSTEM_DATABASE_R, 

  _SC_TIMEOUTS, 

  _SC_TYPED_MEMORY_OBJECTS, 

  _SC_USER_GROUPS, 

  _SC_USER_GROUPS_R, 

  _SC_2_PBS, 

  _SC_2_PBS_ACCOUNTING, 

  _SC_2_PBS_LOCATE, 

  _SC_2_PBS_MESSAGE, 

  _SC_2_PBS_TRACK, 

  _SC_SYMLOOP_MAX, 

  _SC_STREAMS, 

  _SC_2_PBS_CHECKPOINT, 


  _SC_V6_ILP32_OFF32, 

  _SC_V6_ILP32_OFFBIG, 

  _SC_V6_LP64_OFF64, 

  _SC_V6_LPBIG_OFFBIG, 


  _SC_HOST_NAME_MAX, 

  _SC_TRACE, 

  _SC_TRACE_EVENT_FILTER, 

  _SC_TRACE_INHERIT, 

  _SC_TRACE_LOG, 


  _SC_LEVEL1_ICACHE_SIZE, 

  _SC_LEVEL1_ICACHE_ASSOC, 

  _SC_LEVEL1_ICACHE_LINESIZE, 

  _SC_LEVEL1_DCACHE_SIZE, 

  _SC_LEVEL1_DCACHE_ASSOC, 

  _SC_LEVEL1_DCACHE_LINESIZE, 

  _SC_LEVEL2_CACHE_SIZE, 

  _SC_LEVEL2_CACHE_ASSOC, 

  _SC_LEVEL2_CACHE_LINESIZE, 

  _SC_LEVEL3_CACHE_SIZE, 

  _SC_LEVEL3_CACHE_ASSOC, 

  _SC_LEVEL3_CACHE_LINESIZE, 

  _SC_LEVEL4_CACHE_SIZE, 

  _SC_LEVEL4_CACHE_ASSOC, 

  _SC_LEVEL4_CACHE_LINESIZE, 



  _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50, 

  _SC_RAW_SOCKETS, 


  _SC_V7_ILP32_OFF32, 

  _SC_V7_ILP32_OFFBIG, 

  _SC_V7_LP64_OFF64, 

  _SC_V7_LPBIG_OFFBIG, 


  _SC_SS_REPL_MAX, 


  _SC_TRACE_EVENT_NAME_MAX, 

  _SC_TRACE_NAME_MAX, 

  _SC_TRACE_SYS_MAX, 

  _SC_TRACE_USER_EVENT_MAX, 


  _SC_XOPEN_STREAMS, 


  _SC_THREAD_ROBUST_PRIO_INHERIT, 

  _SC_THREAD_ROBUST_PRIO_PROTECT
};



enum __nesc_unnamed4288 {

  _CS_PATH, 


  _CS_V6_WIDTH_RESTRICTED_ENVS, 



  _CS_GNU_LIBC_VERSION, 

  _CS_GNU_LIBPTHREAD_VERSION, 


  _CS_V5_WIDTH_RESTRICTED_ENVS, 



  _CS_V7_WIDTH_RESTRICTED_ENVS, 



  _CS_LFS_CFLAGS = 1000, 

  _CS_LFS_LDFLAGS, 

  _CS_LFS_LIBS, 

  _CS_LFS_LINTFLAGS, 

  _CS_LFS64_CFLAGS, 

  _CS_LFS64_LDFLAGS, 

  _CS_LFS64_LIBS, 

  _CS_LFS64_LINTFLAGS, 


  _CS_XBS5_ILP32_OFF32_CFLAGS = 1100, 

  _CS_XBS5_ILP32_OFF32_LDFLAGS, 

  _CS_XBS5_ILP32_OFF32_LIBS, 

  _CS_XBS5_ILP32_OFF32_LINTFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_CFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_LDFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_LIBS, 

  _CS_XBS5_ILP32_OFFBIG_LINTFLAGS, 

  _CS_XBS5_LP64_OFF64_CFLAGS, 

  _CS_XBS5_LP64_OFF64_LDFLAGS, 

  _CS_XBS5_LP64_OFF64_LIBS, 

  _CS_XBS5_LP64_OFF64_LINTFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_CFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_LDFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_LIBS, 

  _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_POSIX_V6_ILP32_OFF32_CFLAGS, 

  _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, 

  _CS_POSIX_V6_ILP32_OFF32_LIBS, 

  _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LIBS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_CFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_LDFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_LIBS, 

  _CS_POSIX_V6_LP64_OFF64_LINTFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_POSIX_V7_ILP32_OFF32_CFLAGS, 

  _CS_POSIX_V7_ILP32_OFF32_LDFLAGS, 

  _CS_POSIX_V7_ILP32_OFF32_LIBS, 

  _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LIBS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_CFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_LDFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_LIBS, 

  _CS_POSIX_V7_LP64_OFF64_LINTFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LIBS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_V6_ENV, 

  _CS_V7_ENV
};
# 628 "/usr/include/unistd.h" 3
extern __pid_t getpid(void ) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3
struct flock {

  short int l_type;
  short int l_whence;

  __off_t l_start;
  __off_t l_len;




  __pid_t l_pid;
};
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3
struct stat {

  __dev_t st_dev;




  __ino_t st_ino;







  __nlink_t st_nlink;
  __mode_t st_mode;

  __uid_t st_uid;
  __gid_t st_gid;

  int __pad0;

  __dev_t st_rdev;




  __off_t st_size;



  __blksize_t st_blksize;

  __blkcnt_t st_blocks;










  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
#line 106
  __syscall_slong_t __glibc_reserved[3];
};
# 137 "/usr/include/fcntl.h" 3
extern int fcntl(int __fd, int __cmd, ...);
# 40 "/usr/include/signal.h" 3
typedef __sig_atomic_t sig_atomic_t;
# 36 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3
#line 32
typedef union sigval {

  int sival_int;
  void *sival_ptr;
} sigval_t;
#line 58
typedef __clock_t __sigchld_clock_t;
#line 128
#line 62
typedef struct __nesc_unnamed4289 {

  int si_signo;
  int si_errno;

  int si_code;

  union __nesc_unnamed4290 {

    int _pad[128 / sizeof(int ) - 4];


    struct __nesc_unnamed4291 {

      __pid_t si_pid;
      __uid_t si_uid;
    } _kill;


    struct __nesc_unnamed4292 {

      int si_tid;
      int si_overrun;
      sigval_t si_sigval;
    } _timer;


    struct __nesc_unnamed4293 {

      __pid_t si_pid;
      __uid_t si_uid;
      sigval_t si_sigval;
    } _rt;


    struct __nesc_unnamed4294 {

      __pid_t si_pid;
      __uid_t si_uid;
      int si_status;
      __sigchld_clock_t si_utime;
      __sigchld_clock_t si_stime;
    } _sigchld;


    struct __nesc_unnamed4295 {

      void *si_addr;
      short int si_addr_lsb;
    } _sigfault;


    struct __nesc_unnamed4296 {

      long int si_band;
      int si_fd;
    } _sigpoll;


    struct __nesc_unnamed4297 {

      void *_call_addr;
      int _syscall;
      unsigned int _arch;
    } _sigsys;
  } _sifields;
} siginfo_t;
#line 153
enum __nesc_unnamed4298 {

  SI_ASYNCNL = -60, 

  SI_TKILL = -6, 

  SI_SIGIO, 

  SI_ASYNCIO, 

  SI_MESGQ, 

  SI_TIMER, 

  SI_QUEUE, 

  SI_USER, 

  SI_KERNEL = 0x80
};




enum __nesc_unnamed4299 {

  ILL_ILLOPC = 1, 

  ILL_ILLOPN, 

  ILL_ILLADR, 

  ILL_ILLTRP, 

  ILL_PRVOPC, 

  ILL_PRVREG, 

  ILL_COPROC, 

  ILL_BADSTK
};



enum __nesc_unnamed4300 {

  FPE_INTDIV = 1, 

  FPE_INTOVF, 

  FPE_FLTDIV, 

  FPE_FLTOVF, 

  FPE_FLTUND, 

  FPE_FLTRES, 

  FPE_FLTINV, 

  FPE_FLTSUB
};



enum __nesc_unnamed4301 {

  SEGV_MAPERR = 1, 

  SEGV_ACCERR
};



enum __nesc_unnamed4302 {

  BUS_ADRALN = 1, 

  BUS_ADRERR, 

  BUS_OBJERR, 

  BUS_MCEERR_AR, 

  BUS_MCEERR_AO
};



enum __nesc_unnamed4303 {

  TRAP_BRKPT = 1, 

  TRAP_TRACE
};



enum __nesc_unnamed4304 {

  CLD_EXITED = 1, 

  CLD_KILLED, 

  CLD_DUMPED, 

  CLD_TRAPPED, 

  CLD_STOPPED, 

  CLD_CONTINUED
};



enum __nesc_unnamed4305 {

  POLL_IN = 1, 

  POLL_OUT, 

  POLL_MSG, 

  POLL_ERR, 

  POLL_PRI, 

  POLL_HUP
};
#line 327
#line 307
typedef struct sigevent {

  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;

  union __nesc_unnamed4306 {

    int _pad[64 / sizeof(int ) - 4];



    __pid_t _tid;

    struct __nesc_unnamed4307 {

      void (*_function)(sigval_t arg_0x2b87894db398);
      pthread_attr_t *_attribute;
    } _sigev_thread;
  } _sigev_un;
} sigevent_t;






enum __nesc_unnamed4308 {

  SIGEV_SIGNAL = 0, 

  SIGEV_NONE, 

  SIGEV_THREAD, 


  SIGEV_THREAD_ID = 4
};
# 85 "/usr/include/signal.h" 3
typedef void (*__sighandler_t)(int arg_0x2b87894d9e00);
#line 209
typedef __sighandler_t sig_t;





extern int sigemptyset(sigset_t *__set) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 24 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3
struct sigaction {



  union __nesc_unnamed4309 {


    __sighandler_t sa_handler;

    void (*sa_sigaction)(int arg_0x2b87894f0250, siginfo_t *arg_0x2b87894f0550, void *arg_0x2b87894f07f0);
  } 
  __sigaction_handler;







  __sigset_t sa_mask;


  int sa_flags;


  void (*sa_restorer)(void );
};
# 259 "/usr/include/signal.h" 3
extern int sigaction(int __sig, const struct sigaction *__restrict __act, 
struct sigaction *__restrict __oact) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 307
struct sigvec {

  __sighandler_t sv_handler;
  int sv_mask;

  int sv_flags;
};
# 29 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3
struct _fpx_sw_bytes {

  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg {

  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg {

  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg {

  __uint32_t element[4];
};
#line 121
struct _fpstate {


  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext {

  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union  {

    struct _fpstate *fpstate;
    __uint64_t __fpstate_word;
  } ;
  __uint64_t __reserved1[8];
};



struct _xsave_hdr {

  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state {

  __uint32_t ymmh_space[64];
};

struct _xstate {

  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 25 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3
struct sigstack {

  void *ss_sp;
  int ss_onstack;
};



enum __nesc_unnamed4310 {

  SS_ONSTACK = 1, 

  SS_DISABLE
};
#line 54
#line 49
typedef struct sigaltstack {

  void *ss_sp;
  int ss_flags;
  size_t ss_size;
} stack_t;
# 31 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3
__extension__ 
#line 31
typedef long long int greg_t;





typedef greg_t gregset_t[23];
#line 92
struct _libc_fpxreg {

  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg {

  __uint32_t element[4];
};

struct _libc_fpstate {


  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;








#line 124
typedef struct __nesc_unnamed4311 {

  gregset_t gregs;

  fpregset_t fpregs;
  __extension__ unsigned long long __reserved1[8];
} mcontext_t;










#line 133
typedef struct ucontext {

  unsigned long int uc_flags;
  struct ucontext *uc_link;
  stack_t uc_stack;
  mcontext_t uc_mcontext;
  __sigset_t uc_sigmask;
  struct _libc_fpstate __fpregs_mem;
} ucontext_t;
# 43 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3
struct iovec {

  void *iov_base;
  size_t iov_len;
};
# 24 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 3
enum __socket_type {

  SOCK_STREAM = 1, 


  SOCK_DGRAM = 2, 


  SOCK_RAW = 3, 

  SOCK_RDM = 4, 

  SOCK_SEQPACKET = 5, 


  SOCK_DCCP = 6, 

  SOCK_PACKET = 10, 







  SOCK_CLOEXEC = 02000000, 


  SOCK_NONBLOCK = 00004000
};
# 28 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 3
typedef unsigned short int sa_family_t;
# 149 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3
struct sockaddr {

  sa_family_t sa_family;
  char sa_data[14];
};








struct sockaddr_storage {

  sa_family_t ss_family;
  unsigned long int __ss_align;
  char __ss_padding[128 - 2 * sizeof(unsigned long int )];
};



enum __nesc_unnamed4312 {

  MSG_OOB = 0x01, 

  MSG_PEEK = 0x02, 

  MSG_DONTROUTE = 0x04, 






  MSG_CTRUNC = 0x08, 

  MSG_PROXY = 0x10, 

  MSG_TRUNC = 0x20, 

  MSG_DONTWAIT = 0x40, 

  MSG_EOR = 0x80, 

  MSG_WAITALL = 0x100, 

  MSG_FIN = 0x200, 

  MSG_SYN = 0x400, 

  MSG_CONFIRM = 0x800, 

  MSG_RST = 0x1000, 

  MSG_ERRQUEUE = 0x2000, 

  MSG_NOSIGNAL = 0x4000, 

  MSG_MORE = 0x8000, 

  MSG_WAITFORONE = 0x10000, 

  MSG_FASTOPEN = 0x20000000, 


  MSG_CMSG_CLOEXEC = 0x40000000
};







struct msghdr {

  void *msg_name;
  socklen_t msg_namelen;

  struct iovec *msg_iov;
  size_t msg_iovlen;

  void *msg_control;
  size_t msg_controllen;




  int msg_flags;
};


struct cmsghdr {

  size_t cmsg_len;




  int cmsg_level;
  int cmsg_type;

  __extension__ unsigned char __cmsg_data[];
};
#line 272
struct cmsghdr;
#line 299
enum __nesc_unnamed4313 {

  SCM_RIGHTS = 0x01
};
#line 379
struct linger {

  int l_onoff;
  int l_linger;
};
# 43 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3
struct osockaddr {

  unsigned short int sa_family;
  unsigned char sa_data[14];
};




enum __nesc_unnamed4314 {

  SHUT_RD = 0, 

  SHUT_WR, 

  SHUT_RDWR
};
#line 113
extern int socket(int __domain, int __type, int __protocol) __attribute((__leaf__)) __attribute((__nothrow__)) ;









extern int bind(int __fd, const struct sockaddr *__addr, socklen_t __len) 
__attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 163
extern ssize_t sendto(int __fd, const void *__buf, size_t __n, 
int __flags, const struct sockaddr *__addr, 
socklen_t __addr_len);








extern ssize_t recvfrom(int __fd, void *__restrict __buf, size_t __n, 
int __flags, struct sockaddr *__restrict __addr, 
socklen_t *__restrict __addr_len);
#line 226
extern int setsockopt(int __fd, int __level, int __optname, 
const void *__optval, socklen_t __optlen) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 30 "/usr/include/netinet/in.h" 3
typedef uint32_t in_addr_t;
struct in_addr {

  in_addr_t s_addr;
};
# 112 "/usr/include/x86_64-linux-gnu/bits/in.h" 3
struct ip_opts {

  struct in_addr ip_dst;
  char ip_opts[40];
};


struct ip_mreqn {

  struct in_addr imr_multiaddr;
  struct in_addr imr_address;
  int imr_ifindex;
};


struct in_pktinfo {

  int ipi_ifindex;
  struct in_addr ipi_spec_dst;
  struct in_addr ipi_addr;
};
# 40 "/usr/include/netinet/in.h" 3
enum __nesc_unnamed4315 {

  IPPROTO_IP = 0, 

  IPPROTO_ICMP = 1, 

  IPPROTO_IGMP = 2, 

  IPPROTO_IPIP = 4, 

  IPPROTO_TCP = 6, 

  IPPROTO_EGP = 8, 

  IPPROTO_PUP = 12, 

  IPPROTO_UDP = 17, 

  IPPROTO_IDP = 22, 

  IPPROTO_TP = 29, 

  IPPROTO_DCCP = 33, 

  IPPROTO_IPV6 = 41, 

  IPPROTO_RSVP = 46, 

  IPPROTO_GRE = 47, 

  IPPROTO_ESP = 50, 

  IPPROTO_AH = 51, 

  IPPROTO_MTP = 92, 

  IPPROTO_BEETPH = 94, 

  IPPROTO_ENCAP = 98, 

  IPPROTO_PIM = 103, 

  IPPROTO_COMP = 108, 

  IPPROTO_SCTP = 132, 

  IPPROTO_UDPLITE = 136, 

  IPPROTO_RAW = 255, 

  IPPROTO_MAX
};





enum __nesc_unnamed4316 {

  IPPROTO_HOPOPTS = 0, 

  IPPROTO_ROUTING = 43, 

  IPPROTO_FRAGMENT = 44, 

  IPPROTO_ICMPV6 = 58, 

  IPPROTO_NONE = 59, 

  IPPROTO_DSTOPTS = 60, 

  IPPROTO_MH = 135
};




typedef uint16_t in_port_t;


enum __nesc_unnamed4317 {

  IPPORT_ECHO = 7, 
  IPPORT_DISCARD = 9, 
  IPPORT_SYSTAT = 11, 
  IPPORT_DAYTIME = 13, 
  IPPORT_NETSTAT = 15, 
  IPPORT_FTP = 21, 
  IPPORT_TELNET = 23, 
  IPPORT_SMTP = 25, 
  IPPORT_TIMESERVER = 37, 
  IPPORT_NAMESERVER = 42, 
  IPPORT_WHOIS = 43, 
  IPPORT_MTP = 57, 

  IPPORT_TFTP = 69, 
  IPPORT_RJE = 77, 
  IPPORT_FINGER = 79, 
  IPPORT_TTYLINK = 87, 
  IPPORT_SUPDUP = 95, 


  IPPORT_EXECSERVER = 512, 
  IPPORT_LOGINSERVER = 513, 
  IPPORT_CMDSERVER = 514, 
  IPPORT_EFSSERVER = 520, 


  IPPORT_BIFFUDP = 512, 
  IPPORT_WHOSERVER = 513, 
  IPPORT_ROUTESERVER = 520, 


  IPPORT_RESERVED = 1024, 


  IPPORT_USERRESERVED = 5000
};
#line 209
struct in6_addr {

  union __nesc_unnamed4318 {

    uint8_t __u6_addr8[16];

    uint16_t __u6_addr16[8];
    uint32_t __u6_addr32[4];
  } 
  __in6_u;
};







struct in6_addr;
struct in6_addr;








struct sockaddr_in {

  sa_family_t sin_family;
  in_port_t sin_port;
  struct in_addr sin_addr;


  unsigned char sin_zero

  [
#line 244
  sizeof(struct sockaddr ) - 
  sizeof(unsigned short int ) - 
  sizeof(in_port_t ) - 
  sizeof(struct in_addr )];
};



struct sockaddr_in6 {

  sa_family_t sin6_family;
  in_port_t sin6_port;
  uint32_t sin6_flowinfo;
  struct in6_addr sin6_addr;
  uint32_t sin6_scope_id;
};




struct ip_mreq {


  struct in_addr imr_multiaddr;


  struct in_addr imr_interface;
};

struct ip_mreq_source {


  struct in_addr imr_multiaddr;


  struct in_addr imr_interface;


  struct in_addr imr_sourceaddr;
};




struct ipv6_mreq {


  struct in6_addr ipv6mr_multiaddr;


  unsigned int ipv6mr_interface;
};




struct group_req {


  uint32_t gr_interface;


  struct sockaddr_storage gr_group;
};

struct group_source_req {


  uint32_t gsr_interface;


  struct sockaddr_storage gsr_group;


  struct sockaddr_storage gsr_source;
};



struct ip_msfilter {


  struct in_addr imsf_multiaddr;


  struct in_addr imsf_interface;


  uint32_t imsf_fmode;


  uint32_t imsf_numsrc;

  struct in_addr imsf_slist[1];
};





struct group_filter {


  uint32_t gf_interface;


  struct sockaddr_storage gf_group;


  uint32_t gf_fmode;


  uint32_t gf_numsrc;

  struct sockaddr_storage gf_slist[1];
};
#line 379
extern uint16_t htons(uint16_t __hostshort) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
# 34 "/usr/include/arpa/inet.h" 3
extern in_addr_t inet_addr(const char *__cp) __attribute((__leaf__)) __attribute((__nothrow__)) ;






struct in_addr;
# 46 "/usr/include/rpc/netdb.h" 3
struct rpcent {

  char *r_name;
  char **r_aliases;
  int r_number;
};



struct rpcent;
struct rpcent;
struct rpcent;
# 26 "/usr/include/x86_64-linux-gnu/bits/netdb.h" 3
struct netent {

  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};
# 100 "/usr/include/netdb.h" 3
struct hostent {

  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;
};
#line 130
struct hostent;






struct hostent;






struct hostent;










struct hostent;
#line 211
struct netent;






struct netent;





struct netent;
#line 257
struct servent {

  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};
#line 283
struct servent;






struct servent;






struct servent;
#line 326
struct protoent {

  char *p_name;
  char **p_aliases;
  int p_proto;
};
#line 351
struct protoent;





struct protoent;





struct protoent;
#line 567
struct addrinfo {

  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};
#line 671
extern const char *gai_strerror(int __ecode) __attribute((__leaf__)) __attribute((__nothrow__)) ;





extern int getnameinfo(const struct sockaddr *__restrict __sa, 
socklen_t __salen, char *__restrict __host, 
socklen_t __hostlen, char *__restrict __serv, 
socklen_t __servlen, int __flags);
# 29 "/usr/include/ifaddrs.h" 3
struct ifaddrs {

  struct ifaddrs *ifa_next;

  char *ifa_name;
  unsigned int ifa_flags;

  struct sockaddr *ifa_addr;
  struct sockaddr *ifa_netmask;
  union __nesc_unnamed4319 {





    struct sockaddr *ifu_broadaddr;
    struct sockaddr *ifu_dstaddr;
  } ifa_ifu;









  void *ifa_data;
};








extern int getifaddrs(struct ifaddrs **__ifap) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3
extern int *__errno_location(void ) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 91
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
#line 239
struct tm;



struct tm;





struct tm;




struct tm;
# 11 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/setTimer.h"
extern void setSignal(int signum, __sighandler_t handler);
extern void setTimer(int which, const struct itimerval *new_value, struct itimerval *old_value);
# 9 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustom.h"
enum __nesc_unnamed4320 {



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
# 14 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/usrMsg.h"
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
typedef evtData_t TerraVMC__evtQ__t;
typedef TMilli BasicServicesP__SendDataFullTimer__precision_tag;
typedef TMilli BasicServicesP__TimerAsync__precision_tag;
typedef TMilli BasicServicesP__ProgReqTimer__precision_tag;
typedef TMilli BasicServicesP__TimerVM__precision_tag;
typedef TMilli BasicServicesP__sendTimer__precision_tag;
typedef TMilli UDPActiveMessageP__sendDoneTimer__precision_tag;
typedef TMilli UDPActiveMessageP__timerDelay__precision_tag;
enum HilTimerMilliC____nesc_unnamed4322 {
  HilTimerMilliC__TIMER_COUNT = 8U
};
typedef TMilli SingleTimerMilliP__TimerFrom__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef GenericData_t /*BasicServicesC.inQueue*/dataQueueC__0__dataType;
typedef /*BasicServicesC.inQueue*/dataQueueC__0__dataType /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataType;
typedef GenericData_t /*BasicServicesC.outQueue*/dataQueueC__1__dataType;
typedef /*BasicServicesC.outQueue*/dataQueueC__1__dataType /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataType;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef evtData_t /*TerraVMAppC.evtQ*/QueueC__0__queue_t;
typedef /*TerraVMAppC.evtQ*/QueueC__0__queue_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__t;
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
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
# 60 "/home/wsn/workspace/TerraVM_New/src/interfaces/Boot.nc"
static void TerraVMC__BSBoot__booted(void );
# 19 "BSTimer.nc"
static void TerraVMC__BSTimerVM__fired(void );
# 62 "/home/wsn/workspace/TerraVM_New/src/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/home/wsn/workspace/TerraVM_New/src/system/SchedulerBasicP.nc"
uint8_t arg_0x2b8788e902f0);
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/home/wsn/workspace/TerraVM_New/src/system/SchedulerBasicP.nc"
uint8_t arg_0x2b8788e902f0);
# 57 "/home/wsn/workspace/TerraVM_New/src/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/home/wsn/workspace/TerraVM_New/src/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void BasicServicesP__ProgReqTimerTask__runTask(void );
# 9 "BSRadio.nc"
static error_t BasicServicesP__BSRadio__send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck);
# 83 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void BasicServicesP__SendDataFullTimer__fired(void );
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void BasicServicesP__sendNextMsg__runTask(void );
# 110 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMSend.nc"
static void BasicServicesP__RadioSender__sendDone(
# 27 "BasicServicesP.nc"
am_id_t arg_0x2b87891fd590, 
# 103 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 113 "/home/wsn/workspace/TerraVM_New/src/interfaces/SplitControl.nc"
static void BasicServicesP__RadioControl__startDone(error_t error);
# 17 "BSTimer.nc"
static bool BasicServicesP__BSTimerAsync__isRunning(void );
#line 15
static void BasicServicesP__BSTimerAsync__startOneShot(uint32_t dt);
# 78 "/home/wsn/workspace/TerraVM_New/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



BasicServicesP__RadioReceiver__receive(
# 28 "BasicServicesP.nc"
am_id_t arg_0x2b87891e5270, 
# 71 "/home/wsn/workspace/TerraVM_New/src/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 15 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
static void BasicServicesP__outQ__dataReady(void );
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void BasicServicesP__procInputEvent__runTask(void );
# 60 "/home/wsn/workspace/TerraVM_New/src/interfaces/Boot.nc"
static void BasicServicesP__TOSBoot__booted(void );
# 83 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void BasicServicesP__TimerAsync__fired(void );
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void BasicServicesP__sendMessage__runTask(void );
# 83 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void BasicServicesP__ProgReqTimer__fired(void );
#line 83
static void BasicServicesP__TimerVM__fired(void );
# 15 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
static void BasicServicesP__inQ__dataReady(void );
# 83 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void BasicServicesP__sendTimer__fired(void );
# 16 "BSTimer.nc"
static uint32_t BasicServicesP__BSTimerVM__getNow(void );
#line 15
static void BasicServicesP__BSTimerVM__startOneShot(uint32_t dt);
# 104 "/home/wsn/workspace/TerraVM_New/src/interfaces/SplitControl.nc"
static error_t UDPActiveMessageP__SplitControl__start(void );
# 2 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMAux.nc"
static void UDPActiveMessageP__AMAux__setPower(message_t *p_msg, uint8_t power);
# 78 "/home/wsn/workspace/TerraVM_New/src/interfaces/Packet.nc"
static uint8_t UDPActiveMessageP__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


UDPActiveMessageP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t UDPActiveMessageP__Packet__maxPayloadLength(void );
# 80 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMSend.nc"
static error_t UDPActiveMessageP__AMSend__send(
# 7 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
am_id_t arg_0x2b878963c0c8, 
# 80 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void UDPActiveMessageP__receiveTask__runTask(void );
# 83 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void UDPActiveMessageP__sendDoneTimer__fired(void );
# 59 "/home/wsn/workspace/TerraVM_New/src/interfaces/PacketAcknowledgements.nc"
static error_t UDPActiveMessageP__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 71
static error_t UDPActiveMessageP__PacketAcknowledgements__noAck(
#line 65
message_t * msg);
#line 85
static bool UDPActiveMessageP__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void UDPActiveMessageP__send_doneAck__runTask(void );
#line 75
static void UDPActiveMessageP__send_done__runTask(void );
# 88 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMPacket.nc"
static am_addr_t UDPActiveMessageP__AMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t UDPActiveMessageP__AMPacket__address(void );









static am_addr_t UDPActiveMessageP__AMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void UDPActiveMessageP__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 103
static void UDPActiveMessageP__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t UDPActiveMessageP__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void UDPActiveMessageP__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool UDPActiveMessageP__AMPacket__isForMe(
#line 133
message_t * amsg);
#line 187
static void UDPActiveMessageP__AMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);
# 83 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void UDPActiveMessageP__timerDelay__fired(void );
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void UDPActiveMessageP__start_done__runTask(void );
# 62 "/home/wsn/workspace/TerraVM_New/src/interfaces/Init.nc"
static error_t SingleTimerMilliP__SoftwareInit__init(void );
# 136 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static uint32_t SingleTimerMilliP__TimerFrom__getNow(void );
#line 129
static void SingleTimerMilliP__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void SingleTimerMilliP__TimerFrom__stop(void );
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void SingleTimerMilliP__tarefaTimer__runTask(void );
#line 75
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x2b878976f9e0);
# 83 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x2b878976f9e0);
# 92 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x2b878976f9e0);
# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x2b878976f9e0, 
# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x2b878976f9e0);
# 94 "/home/wsn/workspace/TerraVM_New/src/system/vmBitVector.nc"
static void /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__resetRange(uint16_t from, uint16_t to);
#line 50
static bool /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__get(uint16_t bitnum);





static void /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__set(uint16_t bitnum);
#line 87
static bool /*BasicServicesC.Bitmap*/vmBitVectorC__0__BitVector__isAllBitSet(void );
# 9 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__get(void *Data);

static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__read(void *Data);
#line 8
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__put(void *Data);
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady__runTask(void );
# 9 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__get(void *Data);

static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__read(void *Data);
#line 8
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__put(void *Data);
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady__runTask(void );
# 52 "/home/wsn/workspace/TerraVM_New/src/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/home/wsn/workspace/TerraVM_New/src/interfaces/Init.nc"
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
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void VMCustomP__BCRadio_receive__runTask(void );
# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Queue.nc"
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
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t TerraVMC__procEvent__postTask(void );
# 13 "VMCustom.nc"
static void TerraVMC__VMCustom__procOutEvt(uint8_t id, uint32_t value);
static void TerraVMC__VMCustom__callFunction(uint8_t id);
static void TerraVMC__VMCustom__reset(void );
# 17 "BSTimer.nc"
static bool TerraVMC__BSTimerAsync__isRunning(void );
#line 15
static void TerraVMC__BSTimerAsync__startOneShot(uint32_t dt);
# 90 "/home/wsn/workspace/TerraVM_New/src/interfaces/Queue.nc"
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
enum TerraVMC____nesc_unnamed4323 {
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
typedef struct TerraVMC____nesc_unnamed4324 {
  s32 togo;
  TerraVMC__tceu_nlbl lbl;
} TerraVMC__tceu_wclock;





#line 333
typedef struct TerraVMC____nesc_unnamed4325 {
  u8 stack;
  u8 tree;
  TerraVMC__tceu_nlbl lbl;
} TerraVMC__tceu_trk;

enum TerraVMC____nesc_unnamed4326 {
  TerraVMC__Inactive = 0, 
  TerraVMC__Init = 1
};


static int TerraVMC__ceu_go(int *ret);
#line 358
#line 348
typedef struct TerraVMC____nesc_unnamed4327 {
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
# 8 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/home/wsn/workspace/TerraVM_New/src/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/home/wsn/workspace/TerraVM_New/src/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/home/wsn/workspace/TerraVM_New/src/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/home/wsn/workspace/TerraVM_New/src/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/home/wsn/workspace/TerraVM_New/src/system/RealMainP.nc"
int main(void )   ;
# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/home/wsn/workspace/TerraVM_New/src/system/SchedulerBasicP.nc"
uint8_t arg_0x2b8788e902f0);
# 76 "/home/wsn/workspace/TerraVM_New/src/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/home/wsn/workspace/TerraVM_New/src/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4328 {

  SchedulerBasicP__NUM_TASKS = 14U, 
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
# 10 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void );
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t BasicServicesP__ProgReqTimerTask__postTask(void );
# 12 "BSRadio.nc"
static void BasicServicesP__BSRadio__receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len);
#line 11
static void BasicServicesP__BSRadio__sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked);
#line 10
static void BasicServicesP__BSRadio__sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error);
# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void BasicServicesP__SendDataFullTimer__startOneShot(uint32_t dt);
# 88 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMPacket.nc"
static am_addr_t BasicServicesP__RadioAMPacket__source(
#line 84
message_t * amsg);
#line 147
static am_id_t BasicServicesP__RadioAMPacket__type(
#line 143
message_t * amsg);
# 2 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMAux.nc"
static void BasicServicesP__AMAux__setPower(message_t *p_msg, uint8_t power);
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t BasicServicesP__sendNextMsg__postTask(void );
# 80 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMSend.nc"
static error_t BasicServicesP__RadioSender__send(
# 27 "BasicServicesP.nc"
am_id_t arg_0x2b87891fd590, 
# 80 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 104 "/home/wsn/workspace/TerraVM_New/src/interfaces/SplitControl.nc"
static error_t BasicServicesP__RadioControl__start(void );
# 19 "BSTimer.nc"
static void BasicServicesP__BSTimerAsync__fired(void );
# 126 "/home/wsn/workspace/TerraVM_New/src/interfaces/Packet.nc"
static 
#line 123
void * 


BasicServicesP__RadioPacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t BasicServicesP__RadioPacket__maxPayloadLength(void );
# 46 "/home/wsn/workspace/TerraVM_New/src/interfaces/Random.nc"
static uint32_t BasicServicesP__Random__rand32(void );
# 9 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
static error_t BasicServicesP__outQ__get(void *Data);

static error_t BasicServicesP__outQ__read(void *Data);
#line 8
static error_t BasicServicesP__outQ__put(void *Data);
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t BasicServicesP__procInputEvent__postTask(void );
# 92 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static bool BasicServicesP__TimerAsync__isRunning(void );
#line 73
static void BasicServicesP__TimerAsync__startOneShot(uint32_t dt);




static void BasicServicesP__TimerAsync__stop(void );
# 59 "/home/wsn/workspace/TerraVM_New/src/interfaces/PacketAcknowledgements.nc"
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
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
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
# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void BasicServicesP__ProgReqTimer__startOneShot(uint32_t dt);




static void BasicServicesP__ProgReqTimer__stop(void );
# 60 "/home/wsn/workspace/TerraVM_New/src/interfaces/Boot.nc"
static void BasicServicesP__BSBoot__booted(void );
# 136 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static uint32_t BasicServicesP__TimerVM__getNow(void );
#line 92
static bool BasicServicesP__TimerVM__isRunning(void );
#line 73
static void BasicServicesP__TimerVM__startOneShot(uint32_t dt);




static void BasicServicesP__TimerVM__stop(void );
# 9 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
static error_t BasicServicesP__inQ__get(void *Data);

static error_t BasicServicesP__inQ__read(void *Data);
#line 8
static error_t BasicServicesP__inQ__put(void *Data);
# 94 "/home/wsn/workspace/TerraVM_New/src/system/vmBitVector.nc"
static void BasicServicesP__BM__resetRange(uint16_t from, uint16_t to);
#line 50
static bool BasicServicesP__BM__get(uint16_t bitnum);





static void BasicServicesP__BM__set(uint16_t bitnum);
#line 87
static bool BasicServicesP__BM__isAllBitSet(void );
# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void BasicServicesP__sendTimer__startOneShot(uint32_t dt);
# 19 "BSTimer.nc"
static void BasicServicesP__BSTimerVM__fired(void );
# 141 "BasicServicesP.nc"
enum BasicServicesP____nesc_unnamed4329 {
#line 141
  BasicServicesP__ProgReqTimerTask = 1U
};
#line 141
typedef int BasicServicesP____nesc_sillytask_ProgReqTimerTask[BasicServicesP__ProgReqTimerTask];
#line 901
enum BasicServicesP____nesc_unnamed4330 {
#line 901
  BasicServicesP__procInputEvent = 2U
};
#line 901
typedef int BasicServicesP____nesc_sillytask_procInputEvent[BasicServicesP__procInputEvent];
#line 1007
enum BasicServicesP____nesc_unnamed4331 {
#line 1007
  BasicServicesP__sendMessage = 3U
};
#line 1007
typedef int BasicServicesP____nesc_sillytask_sendMessage[BasicServicesP__sendMessage];
#line 1054
enum BasicServicesP____nesc_unnamed4332 {
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
static void BasicServicesP__RadioSender__sendDone(am_id_t id, message_t *msg, error_t error);
#line 1136
static inline void BasicServicesP__sendNewProgVersion(newProgVersion_t *Data);
#line 1152
static void BasicServicesP__sendNewProgBlock(newProgBlock_t *Data);
#line 1168
static void BasicServicesP__sendReqProgBlock(reqProgBlock_t *Data);
#line 1216
static inline error_t BasicServicesP__BSRadio__send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck);
# 113 "/home/wsn/workspace/TerraVM_New/src/interfaces/SplitControl.nc"
static void UDPActiveMessageP__SplitControl__startDone(error_t error);
# 110 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMSend.nc"
static void UDPActiveMessageP__AMSend__sendDone(
# 7 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
am_id_t arg_0x2b878963c0c8, 
# 103 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t UDPActiveMessageP__receiveTask__postTask(void );
# 136 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static uint32_t UDPActiveMessageP__sendDoneTimer__getNow(void );
#line 92
static bool UDPActiveMessageP__sendDoneTimer__isRunning(void );
#line 73
static void UDPActiveMessageP__sendDoneTimer__startOneShot(uint32_t dt);




static void UDPActiveMessageP__sendDoneTimer__stop(void );
# 78 "/home/wsn/workspace/TerraVM_New/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



UDPActiveMessageP__Receive__receive(
# 8 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
am_id_t arg_0x2b878963b220, 
# 71 "/home/wsn/workspace/TerraVM_New/src/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t UDPActiveMessageP__send_doneAck__postTask(void );
#line 67
static error_t UDPActiveMessageP__send_done__postTask(void );
# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void UDPActiveMessageP__timerDelay__startOneShot(uint32_t dt);
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t UDPActiveMessageP__start_done__postTask(void );
# 74 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
enum UDPActiveMessageP____nesc_unnamed4333 {
#line 74
  UDPActiveMessageP__send_doneAck = 5U
};
#line 74
typedef int UDPActiveMessageP____nesc_sillytask_send_doneAck[UDPActiveMessageP__send_doneAck];




enum UDPActiveMessageP____nesc_unnamed4334 {
#line 79
  UDPActiveMessageP__send_done = 6U
};
#line 79
typedef int UDPActiveMessageP____nesc_sillytask_send_done[UDPActiveMessageP__send_done];




enum UDPActiveMessageP____nesc_unnamed4335 {
#line 84
  UDPActiveMessageP__receiveTask = 7U
};
#line 84
typedef int UDPActiveMessageP____nesc_sillytask_receiveTask[UDPActiveMessageP__receiveTask];
#line 154
enum UDPActiveMessageP____nesc_unnamed4336 {
#line 154
  UDPActiveMessageP__start_done = 8U
};
#line 154
typedef int UDPActiveMessageP____nesc_sillytask_start_done[UDPActiveMessageP__start_done];
#line 24
int UDPActiveMessageP__socket_sender;
int UDPActiveMessageP__socket_receiver;

int UDPActiveMessageP__counter = 0;
message_t *UDPActiveMessageP__lastSendMessage;
message_t UDPActiveMessageP__lastReceiveMessage;
struct sockaddr_in UDPActiveMessageP__addrSender;

static inline serial_header_t * UDPActiveMessageP__getHeader(message_t * msg);



static inline uint16_t UDPActiveMessageP__getID_fromIP(void );
#line 74
static inline void UDPActiveMessageP__send_doneAck__runTask(void );




static inline void UDPActiveMessageP__send_done__runTask(void );




static inline void UDPActiveMessageP__receiveTask__runTask(void );



static inline void UDPActiveMessageP__UDP_HandleReceiver(int signum);
#line 141
static inline void UDPActiveMessageP__timerDelay__fired(void );
#line 154
static inline void UDPActiveMessageP__start_done__runTask(void );



static inline error_t UDPActiveMessageP__SplitControl__start(void );
#line 262
static inline void UDPActiveMessageP__sendDoneTimer__fired(void );




static inline error_t UDPActiveMessageP__AMSend__send(am_id_t id, am_addr_t am_addr, message_t *msg, uint8_t len);
#line 311
static inline bool UDPActiveMessageP__AMPacket__isForMe(message_t *amsg);




static inline void UDPActiveMessageP__AMPacket__setSource(message_t *amsg, am_addr_t addr);




static inline void UDPActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t t);




static am_id_t UDPActiveMessageP__AMPacket__type(message_t *amsg);




static am_addr_t UDPActiveMessageP__AMPacket__destination(message_t *amsg);




static inline am_addr_t UDPActiveMessageP__AMPacket__address(void );



static inline void UDPActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr);




static am_addr_t UDPActiveMessageP__AMPacket__source(message_t *amsg);




static inline void UDPActiveMessageP__AMPacket__setGroup(message_t *amsg, am_group_t grp);
#line 368
static uint8_t UDPActiveMessageP__Packet__payloadLength(message_t *msg);




static void *UDPActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len);








static inline uint8_t UDPActiveMessageP__Packet__maxPayloadLength(void );
#line 398
static bool UDPActiveMessageP__PacketAcknowledgements__wasAcked(message_t *msg);




static inline error_t UDPActiveMessageP__PacketAcknowledgements__requestAck(message_t *msg);





static inline error_t UDPActiveMessageP__PacketAcknowledgements__noAck(message_t *msg);
#line 439
static inline void UDPActiveMessageP__AMAux__setPower(message_t *p_msg, uint8_t power);
# 83 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static void SingleTimerMilliP__TimerFrom__fired(void );
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t SingleTimerMilliP__tarefaTimer__postTask(void );
# 18 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/SingleTimerMilliP.nc"
enum SingleTimerMilliP____nesc_unnamed4337 {
#line 18
  SingleTimerMilliP__tarefaTimer = 9U
};
#line 18
typedef int SingleTimerMilliP____nesc_sillytask_tarefaTimer[SingleTimerMilliP__tarefaTimer];
#line 10
bool SingleTimerMilliP__isRunning;
uint32_t SingleTimerMilliP__now;
struct itimerval SingleTimerMilliP__timer = { 0 };


struct timeval SingleTimerMilliP__t_initial = { 0 };
struct timeval SingleTimerMilliP__t_current = { 0 };



static inline void SingleTimerMilliP__tarefaTimer__runTask(void );




static inline void SingleTimerMilliP__sigalrm_handler(int signum);
#line 50
static inline void SingleTimerMilliP__TimerFrom__stop(void );
#line 69
static inline void SingleTimerMilliP__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 82
static uint32_t SingleTimerMilliP__TimerFrom__getNow(void );
#line 113
static inline error_t SingleTimerMilliP__SoftwareInit__init(void );
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x2b878976f9e0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4338 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 10U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4339 {

  VirtualizeTimerC__0__NUM_TIMERS = 8, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4340 {

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
# 44 "/home/wsn/workspace/TerraVM_New/src/system/vmBitVectorC.nc"
typedef uint8_t /*BasicServicesC.Bitmap*/vmBitVectorC__0__int_type;

enum /*BasicServicesC.Bitmap*/vmBitVectorC__0____nesc_unnamed4341 {

  vmBitVectorC__0__ELEMENT_SIZE = 8 * sizeof(/*BasicServicesC.Bitmap*/vmBitVectorC__0__int_type ), 
  vmBitVectorC__0__ARRAY_SIZE = (240 + /*BasicServicesC.Bitmap*/vmBitVectorC__0__ELEMENT_SIZE - 1) / /*BasicServicesC.Bitmap*/vmBitVectorC__0__ELEMENT_SIZE
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
# 15 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
static void /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__dataReady(void );
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady__postTask(void );
# 16 "/home/wsn/workspace/TerraVM_New/src/system/dataQueueP.nc"
enum /*BasicServicesC.inQueue.dQueue*/dataQueueP__0____nesc_unnamed4342 {
#line 16
  dataQueueP__0__dataReady = 11U
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
# 15 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
static void /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__dataReady(void );
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady__postTask(void );
# 16 "/home/wsn/workspace/TerraVM_New/src/system/dataQueueP.nc"
enum /*BasicServicesC.outQueue.dQueue*/dataQueueP__1____nesc_unnamed4343 {
#line 16
  dataQueueP__1__dataReady = 12U
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
# 52 "/home/wsn/workspace/TerraVM_New/src/system/RandomMlcgC.nc"
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
# 52 "/home/wsn/workspace/TerraVM_New/src/interfaces/Random.nc"
static uint16_t VMCustomP__Random__rand16(void );
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static error_t VMCustomP__BCRadio_receive__postTask(void );
# 181 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustomP.nc"
enum VMCustomP____nesc_unnamed4344 {
#line 181
  VMCustomP__BCRadio_receive = 13U
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
# 48 "/home/wsn/workspace/TerraVM_New/src/system/QueueC.nc"
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
# 10 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/hardware.h"
__inline  __nesc_atomic_t __nesc_atomic_start(void )
#line 10
{
  return 0;
}

__inline  void __nesc_atomic_end(__nesc_atomic_t x)
#line 14
{
}

# 124 "/home/wsn/workspace/TerraVM_New/src/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/home/wsn/workspace/TerraVM_New/src/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 8 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 8
{

  return SUCCESS;
}

# 62 "/home/wsn/workspace/TerraVM_New/src/interfaces/Init.nc"
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
# 65 "/home/wsn/workspace/TerraVM_New/src/interfaces/Scheduler.nc"
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
# 281 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
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
# 181 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustomP.nc"
static inline void VMCustomP__BCRadio_receive__runTask(void )
#line 181
{
  VMCustomP__VM__queueEvt(I_RECEIVE_ID, __nesc_ntoh_uint8(VMCustomP__ExtDataRadioReceived.type.nxdata), &VMCustomP__ExtDataRadioReceived);
  VMCustomP__VM__queueEvt(I_RECEIVE, 0, &VMCustomP__ExtDataRadioReceived);
}

# 90 "/home/wsn/workspace/TerraVM_New/src/interfaces/Queue.nc"
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
# 61 "/home/wsn/workspace/TerraVM_New/src/system/QueueC.nc"
static inline uint8_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 6;
}





static inline void /*TerraVMAppC.evtQ*/QueueC__0__printQueue(void )
#line 69
{
}

# 97 "/home/wsn/workspace/TerraVM_New/src/system/SchedulerBasicP.nc"
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

# 136 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = SingleTimerMilliP__TimerFrom__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void BasicServicesP__sendTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
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

# 15 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
inline static void /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__dataReady(void ){
#line 15
  BasicServicesP__outQ__dataReady();
#line 15
}
#line 15
# 16 "/home/wsn/workspace/TerraVM_New/src/system/dataQueueP.nc"
static inline void /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataReady__runTask(void )
#line 16
{
  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP__1__qSize > 0) {
    /*BasicServicesC.outQueue.dQueue*/dataQueueP__1__dataQueue__dataReady();
    }
}

# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
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

# 15 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
inline static void /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__dataReady(void ){
#line 15
  BasicServicesP__inQ__dataReady();
#line 15
}
#line 15
# 16 "/home/wsn/workspace/TerraVM_New/src/system/dataQueueP.nc"
static inline void /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataReady__runTask(void )
#line 16
{
  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP__0__qSize > 0) {
    /*BasicServicesC.inQueue.dQueue*/dataQueueP__0__dataQueue__dataReady();
    }
}

# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
inline static error_t SingleTimerMilliP__tarefaTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SingleTimerMilliP__tarefaTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 25 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/SingleTimerMilliP.nc"
static inline void SingleTimerMilliP__sigalrm_handler(int signum)
{
  uint32_t currentTime;

  currentTime = SingleTimerMilliP__TimerFrom__getNow();
  if (currentTime > 0) {


    if (SingleTimerMilliP__isRunning) {
#line 33
      SingleTimerMilliP__tarefaTimer__postTask();
      }
    }
}

#line 69
static inline void SingleTimerMilliP__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt)
#line 69
{
  uint32_t t1;

#line 71
  SingleTimerMilliP__isRunning = TRUE;

  t1 = t0 + dt - SingleTimerMilliP__TimerFrom__getNow();

  SingleTimerMilliP__timer.it_value.tv_sec = t1 / 1000;
  SingleTimerMilliP__timer.it_value.tv_usec = t1 % 1000 * 1000;

  setSignal(14, &SingleTimerMilliP__sigalrm_handler);
  setTimer(ITIMER_REAL, &SingleTimerMilliP__timer, (void *)0);
}

# 129 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  SingleTimerMilliP__TimerFrom__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 50 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/SingleTimerMilliP.nc"
static inline void SingleTimerMilliP__TimerFrom__stop(void )
#line 50
{








  SingleTimerMilliP__isRunning = FALSE;
}

# 78 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  SingleTimerMilliP__TimerFrom__stop();
#line 78
}
#line 78
# 100 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
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

# 315 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 32 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline serial_header_t * UDPActiveMessageP__getHeader(message_t * msg)
#line 32
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned long )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

# 110 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMSend.nc"
inline static void UDPActiveMessageP__AMSend__sendDone(am_id_t arg_0x2b878963c0c8, message_t * msg, error_t error){
#line 110
  BasicServicesP__RadioSender__sendDone(arg_0x2b878963c0c8, msg, error);
#line 110
}
#line 110
# 262 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP__sendDoneTimer__fired(void )
#line 262
{
  __nesc_hton_uint16(UDPActiveMessageP__getHeader(UDPActiveMessageP__lastSendMessage)->ackID.nxdata, FALSE);
  UDPActiveMessageP__AMSend__sendDone(__nesc_ntoh_uint8(UDPActiveMessageP__getHeader(UDPActiveMessageP__lastSendMessage)->type.nxdata), UDPActiveMessageP__lastSendMessage, SUCCESS);
}

# 310 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 141 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP__timerDelay__fired(void )
#line 141
{
  ackMessage_t ackMsg;

  __nesc_hton_uint16(ackMsg.ackCode.nxdata, 0xFFFE);
  __nesc_hton_uint16(ackMsg.src.nxdata, TOS_NODE_ID);
  __nesc_hton_uint16(ackMsg.dest.nxdata, __nesc_ntoh_uint16(UDPActiveMessageP__getHeader(&UDPActiveMessageP__lastReceiveMessage)->src.nxdata));
  __nesc_hton_uint16(ackMsg.ackID.nxdata, __nesc_ntoh_uint16(UDPActiveMessageP__getHeader(&UDPActiveMessageP__lastReceiveMessage)->ackID.nxdata));

  sendto(UDPActiveMessageP__socket_sender, &ackMsg, sizeof(message_t ), 0, (struct sockaddr *)&UDPActiveMessageP__addrSender, sizeof(struct sockaddr_in ));
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

# 189 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static uint32_t BasicServicesP__TimerVM__getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(2U);
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

# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
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

# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
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

# 286 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void BasicServicesP__SendDataFullTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(6U, dt);
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
# 50 "/home/wsn/workspace/TerraVM_New/src/system/vmBitVector.nc"
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

# 204 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2b878976f9e0){
#line 83
  switch (arg_0x2b878976f9e0) {
#line 83
    case 0U:
#line 83
      UDPActiveMessageP__sendDoneTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      UDPActiveMessageP__timerDelay__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      BasicServicesP__TimerVM__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      BasicServicesP__TimerAsync__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      BasicServicesP__sendTimer__fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      BasicServicesP__ProgReqTimer__fired();
#line 83
      break;
#line 83
    case 6U:
#line 83
      BasicServicesP__SendDataFullTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2b878976f9e0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
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
# 164 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void BasicServicesP__TimerAsync__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
#line 78
}
#line 78
#line 73
inline static void BasicServicesP__TimerAsync__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
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

# 20 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/hardware.h"
static __inline  float __nesc_ntoh_afloat(const void * source)
#line 20
{
  float f;

#line 22
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

# 169 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static bool BasicServicesP__TimerAsync__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(3U);
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
# 99 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustomP.nc"
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
# 91 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustomP.nc"
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

# 89 "/home/wsn/workspace/TerraVM_New/src/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/home/wsn/workspace/TerraVM_New/src/interfaces/Random.nc"
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
# 84 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustomP.nc"
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

# 177 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustomP.nc"
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
# 303 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
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

# 49 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustomP.nc"
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
# 8 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
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
# 52 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustomP.nc"
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

# 92 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static bool BasicServicesP__TimerVM__isRunning(void ){
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
#line 78
inline static void BasicServicesP__TimerVM__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
#line 73
inline static void BasicServicesP__TimerVM__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 26 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/hardware.h"
static __inline  float __nesc_hton_afloat(void * target, float value)
#line 26
{
  memcpy(target, &value, sizeof(float ));
  return value;
}

# 303 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
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

# 85 "/home/wsn/workspace/TerraVM_New/src/interfaces/PacketAcknowledgements.nc"
inline static bool BasicServicesP__RadioAck__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = UDPActiveMessageP__PacketAcknowledgements__wasAcked(msg);
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
# 139 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void SingleTimerMilliP__TimerFrom__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 20 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/SingleTimerMilliP.nc"
static inline void SingleTimerMilliP__tarefaTimer__runTask(void )
#line 20
{

  SingleTimerMilliP__TimerFrom__fired();
}

# 75 "TerraVMC.nc"
static inline void TerraVMC__BSBoot__booted(void )
#line 75
{

  TOS_NODE_ID = 1;

  __nesc_hton_uint16(TerraVMC__MoteID.nxdata, TOS_NODE_ID);
}

# 60 "/home/wsn/workspace/TerraVM_New/src/interfaces/Boot.nc"
inline static void BasicServicesP__BSBoot__booted(void ){
#line 60
  TerraVMC__BSBoot__booted();
#line 60
}
#line 60
# 202 "BasicServicesP.nc"
static inline uint32_t BasicServicesP__getRequestTimeout(void )
#line 202
{
#line 202
  return REQUEST_TIMEOUT;
}

# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void BasicServicesP__ProgReqTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(5U, dt);
#line 73
}
#line 73
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

# 113 "/home/wsn/workspace/TerraVM_New/src/interfaces/SplitControl.nc"
inline static void UDPActiveMessageP__SplitControl__startDone(error_t error){
#line 113
  BasicServicesP__RadioControl__startDone(error);
#line 113
}
#line 113
# 154 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP__start_done__runTask(void )
#line 154
{
  UDPActiveMessageP__SplitControl__startDone(SUCCESS);
}

# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
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
# 186 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustomP.nc"
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
# 147 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMPacket.nc"
inline static am_id_t BasicServicesP__RadioAMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = UDPActiveMessageP__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
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

# 8 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
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

# 88 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMPacket.nc"
inline static am_addr_t BasicServicesP__RadioAMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = UDPActiveMessageP__AMPacket__source(amsg);
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

#line 422
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

# 78 "/home/wsn/workspace/TerraVM_New/src/interfaces/Receive.nc"
inline static message_t * UDPActiveMessageP__Receive__receive(am_id_t arg_0x2b878963b220, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = BasicServicesP__RadioReceiver__receive(arg_0x2b878963b220, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 84 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP__receiveTask__runTask(void )
#line 84
{
  UDPActiveMessageP__Receive__receive(UDPActiveMessageP__AMPacket__type(&UDPActiveMessageP__lastReceiveMessage), &UDPActiveMessageP__lastReceiveMessage, UDPActiveMessageP__Packet__getPayload(&UDPActiveMessageP__lastReceiveMessage, UDPActiveMessageP__Packet__payloadLength(&UDPActiveMessageP__lastReceiveMessage)), UDPActiveMessageP__Packet__payloadLength(&UDPActiveMessageP__lastReceiveMessage));
}

# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
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
# 79 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP__send_done__runTask(void )
#line 79
{
  __nesc_hton_uint16(UDPActiveMessageP__getHeader(UDPActiveMessageP__lastSendMessage)->ackID.nxdata, FALSE);
  UDPActiveMessageP__AMSend__sendDone(__nesc_ntoh_uint8(UDPActiveMessageP__getHeader(UDPActiveMessageP__lastSendMessage)->type.nxdata), UDPActiveMessageP__lastSendMessage, SUCCESS);
}

#line 74
static inline void UDPActiveMessageP__send_doneAck__runTask(void )
#line 74
{
  __nesc_hton_uint16(UDPActiveMessageP__getHeader(UDPActiveMessageP__lastSendMessage)->ackID.nxdata, TRUE);
  UDPActiveMessageP__AMSend__sendDone(__nesc_ntoh_uint8(UDPActiveMessageP__getHeader(UDPActiveMessageP__lastSendMessage)->type.nxdata), UDPActiveMessageP__lastSendMessage, SUCCESS);
}

# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
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
# 9 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
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

# 11 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
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
# 1007 "BasicServicesP.nc"
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

# 126 "/home/wsn/workspace/TerraVM_New/src/interfaces/Packet.nc"
inline static void * BasicServicesP__RadioPacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = UDPActiveMessageP__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 382 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline uint8_t UDPActiveMessageP__Packet__maxPayloadLength(void )
#line 382
{
  return 28;
#line 383
  ;
}

# 106 "/home/wsn/workspace/TerraVM_New/src/interfaces/Packet.nc"
inline static uint8_t BasicServicesP__RadioPacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = UDPActiveMessageP__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 403 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline error_t UDPActiveMessageP__PacketAcknowledgements__requestAck(message_t *msg)
#line 403
{

  __nesc_hton_uint16(UDPActiveMessageP__getHeader(msg)->ackID.nxdata, 1);
  return SUCCESS;
}

# 59 "/home/wsn/workspace/TerraVM_New/src/interfaces/PacketAcknowledgements.nc"
inline static error_t BasicServicesP__RadioAck__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = UDPActiveMessageP__PacketAcknowledgements__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 409 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline error_t UDPActiveMessageP__PacketAcknowledgements__noAck(message_t *msg)
#line 409
{

  __nesc_hton_uint16(UDPActiveMessageP__getHeader(msg)->ackID.nxdata, 0);
  return SUCCESS;
}

# 71 "/home/wsn/workspace/TerraVM_New/src/interfaces/PacketAcknowledgements.nc"
inline static error_t BasicServicesP__RadioAck__noAck(message_t * msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = UDPActiveMessageP__PacketAcknowledgements__noAck(msg);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 439 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP__AMAux__setPower(message_t *p_msg, uint8_t power)
#line 439
{
}

# 2 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMAux.nc"
inline static void BasicServicesP__AMAux__setPower(message_t *p_msg, uint8_t power){
#line 2
  UDPActiveMessageP__AMAux__setPower(p_msg, power);
#line 2
}
#line 2
# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void UDPActiveMessageP__sendDoneTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
#line 136
inline static uint32_t UDPActiveMessageP__sendDoneTimer__getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(0U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
inline static error_t UDPActiveMessageP__send_done__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(UDPActiveMessageP__send_done);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 321 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t t)
#line 321
{
  serial_header_t *header = UDPActiveMessageP__getHeader(amsg);

#line 323
  __nesc_hton_uint8(header->type.nxdata, t);
}

#line 350
static inline void UDPActiveMessageP__AMPacket__setGroup(message_t *amsg, am_group_t grp)
#line 350
{
  serial_header_t *header = UDPActiveMessageP__getHeader(amsg);

#line 352
  __nesc_hton_uint8(header->group.nxdata, grp);
}

#line 340
static inline void UDPActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 340
{
  serial_header_t *header = UDPActiveMessageP__getHeader(amsg);

#line 342
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

#line 316
static inline void UDPActiveMessageP__AMPacket__setSource(message_t *amsg, am_addr_t addr)
#line 316
{
  serial_header_t *header = UDPActiveMessageP__getHeader(amsg);

#line 318
  __nesc_hton_uint16(header->src.nxdata, addr);
}

#line 267
static inline error_t UDPActiveMessageP__AMSend__send(am_id_t id, am_addr_t am_addr, message_t *msg, uint8_t len)
#line 267
{

  struct ip_mreq mcast_group;
  message_header_t *header;

  UDPActiveMessageP__AMPacket__setSource(msg, TOS_NODE_ID);
  UDPActiveMessageP__AMPacket__setDestination(msg, am_addr);
  UDPActiveMessageP__AMPacket__setGroup(msg, TOS_AM_GROUP);
  UDPActiveMessageP__AMPacket__setType(msg, id);
  printf("Send 1\n");

  if (__nesc_ntoh_uint16(UDPActiveMessageP__getHeader(msg)->ackID.nxdata) != 0) {
      printf("Send 2 tem ack\n");
      UDPActiveMessageP__counter = UDPActiveMessageP__counter == 0 ? 1 : UDPActiveMessageP__counter + 1;
      __nesc_hton_uint16(UDPActiveMessageP__getHeader(msg)->ackID.nxdata, UDPActiveMessageP__counter);
    }
  printf("Vou passar no sendTo\n");
  UDPActiveMessageP__lastSendMessage = msg;
  sendto(UDPActiveMessageP__socket_sender, msg, sizeof(message_t ), 0, (struct sockaddr *)&UDPActiveMessageP__addrSender, sizeof(struct sockaddr_in ));

  printf("Send 3 depois do sendTo\n");

  if (__nesc_ntoh_uint16(UDPActiveMessageP__getHeader(msg)->ackID.nxdata) == 0) {
    UDPActiveMessageP__send_done__postTask();
    }
  else 
#line 291
    {
      printf("start timeout: %d \n", (uint16_t )UDPActiveMessageP__sendDoneTimer__getNow());
      UDPActiveMessageP__sendDoneTimer__startOneShot(100);
    }
  return SUCCESS;
}

# 80 "/home/wsn/workspace/TerraVM_New/src/interfaces/AMSend.nc"
inline static error_t BasicServicesP__RadioSender__send(am_id_t arg_0x2b87891fd590, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = UDPActiveMessageP__AMSend__send(arg_0x2b87891fd590, addr, msg, len);
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

# 9 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
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
# 87 "/home/wsn/workspace/TerraVM_New/src/system/vmBitVector.nc"
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

# 59 "/home/wsn/workspace/TerraVM_New/src/system/vmBitVectorC.nc"
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

# 56 "/home/wsn/workspace/TerraVM_New/src/system/vmBitVector.nc"
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
# 78 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void BasicServicesP__ProgReqTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(5U);
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

# 126 "/home/wsn/workspace/TerraVM_New/src/system/vmBitVectorC.nc"
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

# 94 "/home/wsn/workspace/TerraVM_New/src/system/vmBitVector.nc"
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
# 81 "/home/wsn/workspace/TerraVM_New/src/interfaces/Queue.nc"
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
# 57 "/home/wsn/workspace/TerraVM_New/src/system/QueueC.nc"
static inline uint8_t /*TerraVMAppC.evtQ*/QueueC__0__Queue__size(void )
#line 57
{
  return /*TerraVMAppC.evtQ*/QueueC__0__size;
}

# 58 "/home/wsn/workspace/TerraVM_New/src/interfaces/Queue.nc"
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

# 60 "/home/wsn/workspace/TerraVM_New/src/system/dataQueueP.nc"
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

# 11 "/home/wsn/workspace/TerraVM_New/src/system/dataQueue.nc"
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

# 65 "/home/wsn/workspace/TerraVM_New/src/system/QueueC.nc"
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

# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
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

# 69 "/home/wsn/workspace/TerraVM_New/src/system/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 113 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/SingleTimerMilliP.nc"
static inline error_t SingleTimerMilliP__SoftwareInit__init(void )
#line 113
{



  gettimeofday(&SingleTimerMilliP__t_initial, (void *)0);
  SingleTimerMilliP__now = 0;
  SingleTimerMilliP__isRunning = TRUE;
  return SUCCESS;
}

# 55 "/home/wsn/workspace/TerraVM_New/src/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 62 "/home/wsn/workspace/TerraVM_New/src/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RandomMlcgC__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, SingleTimerMilliP__SoftwareInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 4 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/hardware.h"
static __inline void __nesc_enable_interrupt()
#line 4
{
}

# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
inline static error_t UDPActiveMessageP__start_done__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(UDPActiveMessageP__start_done);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t UDPActiveMessageP__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(UDPActiveMessageP__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 73 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void UDPActiveMessageP__timerDelay__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 336 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline am_addr_t UDPActiveMessageP__AMPacket__address(void )
#line 336
{
  return TOS_NODE_ID;
}

#line 311
static inline bool UDPActiveMessageP__AMPacket__isForMe(message_t *amsg)
#line 311
{
  return UDPActiveMessageP__AMPacket__destination(amsg) == UDPActiveMessageP__AMPacket__address() || 
  UDPActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

# 67 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
inline static error_t UDPActiveMessageP__send_doneAck__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(UDPActiveMessageP__send_doneAck);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 78 "/home/wsn/workspace/TerraVM_New/src/interfaces/Timer.nc"
inline static void UDPActiveMessageP__sendDoneTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
#line 92
inline static bool UDPActiveMessageP__sendDoneTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(0U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 88 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP__UDP_HandleReceiver(int signum)
{
  char dgram[256];
  struct sockaddr_in addr;
  int fromlen = sizeof addr;
  message_t *msg;
  ackMessage_t receiveAckMsg;
  int size;
  struct sockaddr *addrRcv;
  struct socklen_t *addRcvLen;

  size = recvfrom(UDPActiveMessageP__socket_receiver, dgram, 256, 0, (struct sockaddr *)&addr, (socklen_t *)&fromlen);

  if (size < 0) {
#line 101
    printf("Erro recvfrom\n");
    }
  else 
#line 102
    {
      dgram[size] = '\0';
    }
  printf("Passou por aqui a mensagem: %d\n", __nesc_ntoh_uint16((* (nx_uint16_t *)dgram).nxdata));
  if (__nesc_ntoh_uint16((* (nx_uint16_t *)dgram).nxdata) == 0xFFFE) {

      memcpy(&receiveAckMsg, (ackMessage_t *)dgram, sizeof(ackMessage_t ));
      if (__nesc_ntoh_uint16(receiveAckMsg.dest.nxdata) == TOS_NODE_ID) {
          printf("Recebi mensagem ACK %d\n", __nesc_ntoh_uint16((* (nx_uint16_t *)dgram).nxdata));
          printf("EH ACK! Dest: %d Src: %d AckID: %d\n", __nesc_ntoh_uint16(receiveAckMsg.dest.nxdata), __nesc_ntoh_uint16(receiveAckMsg.src.nxdata), __nesc_ntoh_uint16(receiveAckMsg.ackID.nxdata));
          printf("Tos_node_id: %d, ackID: %d, dest: %d, Timer: %s\n", TOS_NODE_ID, __nesc_ntoh_uint16(UDPActiveMessageP__getHeader(UDPActiveMessageP__lastSendMessage)->ackID.nxdata), __nesc_ntoh_uint16(UDPActiveMessageP__getHeader(UDPActiveMessageP__lastSendMessage)->dest.nxdata), UDPActiveMessageP__sendDoneTimer__isRunning() ? "true" : "false");

          printf("receive: %d \n", (uint16_t )UDPActiveMessageP__sendDoneTimer__getNow());


          if (__nesc_ntoh_uint16(
#line 115
          receiveAckMsg.src.nxdata) == __nesc_ntoh_uint16(UDPActiveMessageP__getHeader(UDPActiveMessageP__lastSendMessage)->dest.nxdata)
           && __nesc_ntoh_uint16(receiveAckMsg.ackID.nxdata) == __nesc_ntoh_uint16(UDPActiveMessageP__getHeader(UDPActiveMessageP__lastSendMessage)->ackID.nxdata)
           && UDPActiveMessageP__sendDoneTimer__isRunning()) {
              printf("ACK RECEBIDO\n");
              UDPActiveMessageP__sendDoneTimer__stop();
              UDPActiveMessageP__send_doneAck__postTask();
            }
        }
    }
  else {
      msg = (message_t *)dgram;

      if (UDPActiveMessageP__AMPacket__isForMe(msg)) {
          printf("Recebi mensagem %d\n", __nesc_ntoh_uint16((* (nx_uint16_t *)dgram).nxdata));
          memcpy(&UDPActiveMessageP__lastReceiveMessage, msg, sizeof(message_t ));
          printf("Message: %d Ack: %d\n", UDPActiveMessageP__AMPacket__source(msg), __nesc_ntoh_uint16(UDPActiveMessageP__getHeader(msg)->ackID.nxdata));


          if (__nesc_ntoh_uint16(UDPActiveMessageP__getHeader(msg)->ackID.nxdata) != 0 && __nesc_ntoh_uint16(UDPActiveMessageP__getHeader(msg)->dest.nxdata) == TOS_NODE_ID) {
              UDPActiveMessageP__timerDelay__startOneShot(1);
            }
          UDPActiveMessageP__receiveTask__postTask();
        }
    }
}

#line 36
static inline uint16_t UDPActiveMessageP__getID_fromIP(void )
#line 36
{

  struct ifaddrs *ifaddr;
#line 38
  struct ifaddrs *ifa;
  int family;
#line 39
  int s;
  char host[1025];
  unsigned int addrHost[4];

  if (getifaddrs(&ifaddr) == -1) {
      perror("getifaddrs");
      exit(1);
    }




  for (ifa = ifaddr; ifa != (void *)0; ifa = ifa->ifa_next) {
      if (ifa->ifa_addr == (void *)0) {
        continue;
        }
      family = ifa->ifa_addr->sa_family;

      if (family == 2) {
          s = getnameinfo(ifa->ifa_addr, sizeof(struct sockaddr_in ), host, 1025, (void *)0, 0, 1);
          if (s != 0) {
              printf("getnameinfo() failed: %s\n", gai_strerror(s));
              exit(1);
            }

          sscanf(host, "%u.%u.%u.%u", &addrHost[0], &addrHost[1], &addrHost[2], &addrHost[3]);

          if (addrHost[0] != 127) {
#line 66
            return (uint16_t )(addrHost[2] * 256 + addrHost[3]);
            }
        }
    }

  return 0;
}

#line 158
static inline error_t UDPActiveMessageP__SplitControl__start(void )
#line 158
{

  const unsigned int reuse = 1;
  struct sockaddr_in addr;
  struct ip_mreq mcast_group;
  pid_t pid;
  int a_flags;
  struct sigaction a_sa;

  const unsigned int zero = 0;
  const unsigned int one = 1;
  int status;

  TOS_NODE_ID = UDPActiveMessageP__getID_fromIP();
  if (TOS_NODE_ID == 0) {
      printf("Nenhuma interface ethernet AF_INET foi encontrada\n");
      return FAIL;
    }
  printf("Meu am_id: %d\n", TOS_NODE_ID);


  UDPActiveMessageP__socket_receiver = socket(2, SOCK_DGRAM, 0);
  if (UDPActiveMessageP__socket_receiver < 0) {
      return FAIL;
    }

  if (setsockopt(UDPActiveMessageP__socket_receiver, 1, 2, &reuse, sizeof reuse) < 0) {
      close(UDPActiveMessageP__socket_receiver);
      return FAIL;
    }

  if (fcntl(UDPActiveMessageP__socket_receiver, 4, 04000) < 0) {
      close(UDPActiveMessageP__socket_receiver);
      return FAIL;
    }

  memset((char *)&addr, 0, sizeof addr);
  addr.sin_family = 2;
  addr.sin_port = htons(5000);
  addr.sin_addr.s_addr = (in_addr_t )0x00000000;
  if (bind(UDPActiveMessageP__socket_receiver, (struct sockaddr *)&addr, sizeof addr)) {
      close(UDPActiveMessageP__socket_receiver);
      return FAIL;
    }

  mcast_group.imr_multiaddr.s_addr = inet_addr("224.0.0.1");
  mcast_group.imr_interface.s_addr = (in_addr_t )0x00000000;
  if (setsockopt(UDPActiveMessageP__socket_receiver, IPPROTO_IP, 35, (char *)&mcast_group, sizeof mcast_group)) {
      close(UDPActiveMessageP__socket_receiver);
      return FAIL;
    }

  pid = getpid();

  a_flags = fcntl(UDPActiveMessageP__socket_receiver, 3);
  fcntl(UDPActiveMessageP__socket_receiver, 4, a_flags | 020000);

  a_sa.sa_flags = 0;
  a_sa.__sigaction_handler.sa_handler = UDPActiveMessageP__UDP_HandleReceiver;
  sigemptyset(& a_sa.sa_mask);

  sigaction(29, &a_sa, (void *)0);
  fcntl(UDPActiveMessageP__socket_receiver, 8, pid);


  memset((char *)&UDPActiveMessageP__addrSender, 0, sizeof UDPActiveMessageP__addrSender);
  UDPActiveMessageP__addrSender.sin_addr.s_addr = inet_addr("224.0.0.1");
  UDPActiveMessageP__addrSender.sin_family = 2;
  UDPActiveMessageP__addrSender.sin_port = htons(5000);

  UDPActiveMessageP__socket_sender = socket(2, SOCK_DGRAM, 0);
  if (UDPActiveMessageP__socket_sender < 0) {
      printf("socket\n");
      return FAIL;
    }

  if (setsockopt(UDPActiveMessageP__socket_sender, 1, 2, &one, sizeof(unsigned int )) < 0) {
      close(UDPActiveMessageP__socket_sender);
      printf("setsockopt 1\n");
      return FAIL;
    }

  if (setsockopt(UDPActiveMessageP__socket_sender, IPPROTO_IP, 34, &zero, sizeof(unsigned int )) < 0) {
      close(UDPActiveMessageP__socket_sender);
      printf("setsockopt 2\n");
      return FAIL;
    }

  mcast_group.imr_multiaddr.s_addr = inet_addr("224.0.0.1");
  mcast_group.imr_interface.s_addr = (in_addr_t )0x00000000;
  status = setsockopt(UDPActiveMessageP__socket_sender, IPPROTO_IP, 35, (char *)&mcast_group, sizeof mcast_group);
  if (status) {
      printf("setsockopt 3 Erro: %d Devido a falta de conexão com a interface \n", *__errno_location());
      close(UDPActiveMessageP__socket_sender);
      return FAIL;
    }

  printf("START - pid: %d\n", pid);

  UDPActiveMessageP__start_done__postTask();

  return SUCCESS;
}

# 104 "/home/wsn/workspace/TerraVM_New/src/interfaces/SplitControl.nc"
inline static error_t BasicServicesP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = UDPActiveMessageP__SplitControl__start();
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

# 46 "/home/wsn/workspace/TerraVM_New/src/interfaces/Random.nc"
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

# 60 "/home/wsn/workspace/TerraVM_New/src/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  BasicServicesP__TOSBoot__booted();
#line 60
}
#line 60
# 10 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 10
{
}

# 76 "/home/wsn/workspace/TerraVM_New/src/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/home/wsn/workspace/TerraVM_New/src/system/SchedulerBasicP.nc"
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

# 72 "/home/wsn/workspace/TerraVM_New/src/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 5 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/hardware.h"
static __inline void __nesc_disable_interrupt()
#line 5
{
}

# 63 "/home/wsn/workspace/TerraVM_New/src/system/RealMainP.nc"
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

# 134 "/home/wsn/workspace/TerraVM_New/src/system/SchedulerBasicP.nc"
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

# 75 "/home/wsn/workspace/TerraVM_New/src/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2b8788e902f0){
#line 75
  switch (arg_0x2b8788e902f0) {
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
    case UDPActiveMessageP__send_doneAck:
#line 75
      UDPActiveMessageP__send_doneAck__runTask();
#line 75
      break;
#line 75
    case UDPActiveMessageP__send_done:
#line 75
      UDPActiveMessageP__send_done__runTask();
#line 75
      break;
#line 75
    case UDPActiveMessageP__receiveTask:
#line 75
      UDPActiveMessageP__receiveTask__runTask();
#line 75
      break;
#line 75
    case UDPActiveMessageP__start_done:
#line 75
      UDPActiveMessageP__start_done__runTask();
#line 75
      break;
#line 75
    case SingleTimerMilliP__tarefaTimer:
#line 75
      SingleTimerMilliP__tarefaTimer__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
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
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2b8788e902f0);
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

# 97 "/home/wsn/workspace/TerraVM_New/src/system/QueueC.nc"
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

# 170 "/home/wsn/workspace/TerraVM_New/src/system/SchedulerBasicP.nc"
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

# 144 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
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

# 82 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/SingleTimerMilliP.nc"
static uint32_t SingleTimerMilliP__TimerFrom__getNow(void )
#line 82
{
  uint32_t result;
  long t1;
#line 84
  long t2;

  gettimeofday(&SingleTimerMilliP__t_current, (void *)0);

  result = SingleTimerMilliP__t_current.tv_sec * 1000 - SingleTimerMilliP__t_initial.tv_sec * 1000;
  result += SingleTimerMilliP__t_current.tv_usec / 1000 - SingleTimerMilliP__t_initial.tv_usec / 1000;

  SingleTimerMilliP__now += result;
  t1 = SingleTimerMilliP__t_current.tv_sec;
  t2 = SingleTimerMilliP__t_initial.tv_sec;




  SingleTimerMilliP__t_initial.tv_sec = SingleTimerMilliP__t_current.tv_sec;
  SingleTimerMilliP__t_initial.tv_usec = SingleTimerMilliP__t_current.tv_usec;



  return SingleTimerMilliP__now;
}

# 73 "/home/wsn/workspace/TerraVM_New/src/system/VirtualizeTimerC.nc"
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

# 84 "/home/wsn/workspace/TerraVM_New/src/system/vmBitVectorC.nc"
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

# 21 "/home/wsn/workspace/TerraVM_New/src/system/dataQueueP.nc"
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

# 69 "/home/wsn/workspace/TerraVM_New/src/system/RandomMlcgC.nc"
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

# 148 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustomP.nc"
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

# 1076 "BasicServicesP.nc"
static void BasicServicesP__RadioSender__sendDone(am_id_t id, message_t *msg, error_t error)
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

# 60 "/home/wsn/workspace/TerraVM_New/src/system/dataQueueP.nc"
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

# 398 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static bool UDPActiveMessageP__PacketAcknowledgements__wasAcked(message_t *msg)
#line 398
{

  return __nesc_ntoh_uint16(UDPActiveMessageP__getHeader(msg)->ackID.nxdata) == 1;
}

# 37 "/home/wsn/workspace/TerraVM_New/src/system/dataQueueP.nc"
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

# 206 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/VMCustomP.nc"
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

# 21 "/home/wsn/workspace/TerraVM_New/src/system/dataQueueP.nc"
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

# 345 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static am_addr_t UDPActiveMessageP__AMPacket__source(message_t *amsg)
#line 345
{
  serial_header_t *header = UDPActiveMessageP__getHeader(amsg);

#line 347
  return __nesc_ntoh_uint16(header->src.nxdata);
}

#line 326
static am_id_t UDPActiveMessageP__AMPacket__type(message_t *amsg)
#line 326
{
  serial_header_t *header = UDPActiveMessageP__getHeader(amsg);

#line 328
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 373
static void *UDPActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len)
#line 373
{
  if (len > UDPActiveMessageP__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

#line 368
static uint8_t UDPActiveMessageP__Packet__payloadLength(message_t *msg)
#line 368
{
  serial_header_t *header = UDPActiveMessageP__getHeader(msg);

#line 370
  return __nesc_ntoh_uint8(header->length.nxdata);
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

# 37 "/home/wsn/workspace/TerraVM_New/src/system/dataQueueP.nc"
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

# 85 "/home/wsn/workspace/TerraVM_New/src/system/QueueC.nc"
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

# 118 "/home/wsn/workspace/TerraVM_New/src/system/vmBitVectorC.nc"
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

# 331 "/home/wsn/workspace/TerraVM_New/src/platforms/RPi/UDPActiveMessageP.nc"
static am_addr_t UDPActiveMessageP__AMPacket__destination(message_t *amsg)
#line 331
{
  serial_header_t *header = UDPActiveMessageP__getHeader(amsg);

#line 333
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

