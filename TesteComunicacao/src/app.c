#define nx_struct struct
#define nx_union union
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
#line 310
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
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
typedef int (*__compar_fn_t)(const void *arg_0x7fe252077cf8, const void *arg_0x7fe252076020);
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
# 25 "/home/wsn/git/TerraIx/nesCix/src/includes/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4266 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;





struct __nesc_attr_atmostonce {
};
#line 36
struct __nesc_attr_atleastonce {
};
#line 37
struct __nesc_attr_exactlyonce {
};
# 10 "/home/wsn/git/TerraIx/nesCix/src/types/TinyError.h"
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
# 4 "/home/wsn/git/TerraIx/nesCix/src/types/hardware.h"
static __inline void __nesc_enable_interrupt();
static __inline void __nesc_disable_interrupt();

typedef uint8_t __nesc_atomic_t;
typedef uint8_t mcu_power_t;

__inline __nesc_atomic_t __nesc_atomic_start(void )  ;



__inline void __nesc_atomic_end(__nesc_atomic_t x)  ;



typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
#line 34
enum __nesc_unnamed4268 {
  TOS_SLEEP_NONE = 0
};
# 255 "/usr/include/unistd.h" 3
typedef __useconds_t useconds_t;
#line 274
typedef __socklen_t socklen_t;
#line 353
extern int close(int __fd);
#line 444
extern unsigned int sleep(unsigned int __seconds);
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum __nesc_unnamed4269 {

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



enum __nesc_unnamed4270 {

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



enum __nesc_unnamed4271 {

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
# 4 "TesteCom.h"
enum __nesc_unnamed4272 {
  AM_SENDTONODE = 6, 
  TIMER_PERIOD_MILLI = 250
};




#line 9
typedef nx_struct SendToNodeMsg {
  nx_uint16_t nodeid;
  nx_uint16_t counter;
} __attribute__((packed)) SendToNodeMsg;
# 44 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 64
typedef struct _IO_FILE __FILE;
# 94 "/usr/include/wchar.h" 3
#line 82
typedef struct __nesc_unnamed4273 {

  int __count;
  union __nesc_unnamed4274 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 3
#line 21
typedef struct __nesc_unnamed4275 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 26
typedef struct __nesc_unnamed4276 {

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
typedef struct __nesc_unnamed4277 {

  int si_signo;
  int si_errno;

  int si_code;

  union __nesc_unnamed4278 {

    int _pad[128 / sizeof(int ) - 4];


    struct __nesc_unnamed4279 {

      __pid_t si_pid;
      __uid_t si_uid;
    } _kill;


    struct __nesc_unnamed4280 {

      int si_tid;
      int si_overrun;
      sigval_t si_sigval;
    } _timer;


    struct __nesc_unnamed4281 {

      __pid_t si_pid;
      __uid_t si_uid;
      sigval_t si_sigval;
    } _rt;


    struct __nesc_unnamed4282 {

      __pid_t si_pid;
      __uid_t si_uid;
      int si_status;
      __sigchld_clock_t si_utime;
      __sigchld_clock_t si_stime;
    } _sigchld;


    struct __nesc_unnamed4283 {

      void *si_addr;
      short int si_addr_lsb;
    } _sigfault;


    struct __nesc_unnamed4284 {

      long int si_band;
      int si_fd;
    } _sigpoll;


    struct __nesc_unnamed4285 {

      void *_call_addr;
      int _syscall;
      unsigned int _arch;
    } _sigsys;
  } _sifields;
} siginfo_t;
#line 153
enum __nesc_unnamed4286 {

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




enum __nesc_unnamed4287 {

  ILL_ILLOPC = 1, 

  ILL_ILLOPN, 

  ILL_ILLADR, 

  ILL_ILLTRP, 

  ILL_PRVOPC, 

  ILL_PRVREG, 

  ILL_COPROC, 

  ILL_BADSTK
};



enum __nesc_unnamed4288 {

  FPE_INTDIV = 1, 

  FPE_INTOVF, 

  FPE_FLTDIV, 

  FPE_FLTOVF, 

  FPE_FLTUND, 

  FPE_FLTRES, 

  FPE_FLTINV, 

  FPE_FLTSUB
};



enum __nesc_unnamed4289 {

  SEGV_MAPERR = 1, 

  SEGV_ACCERR
};



enum __nesc_unnamed4290 {

  BUS_ADRALN = 1, 

  BUS_ADRERR, 

  BUS_OBJERR, 

  BUS_MCEERR_AR, 

  BUS_MCEERR_AO
};



enum __nesc_unnamed4291 {

  TRAP_BRKPT = 1, 

  TRAP_TRACE
};



enum __nesc_unnamed4292 {

  CLD_EXITED = 1, 

  CLD_KILLED, 

  CLD_DUMPED, 

  CLD_TRAPPED, 

  CLD_STOPPED, 

  CLD_CONTINUED
};



enum __nesc_unnamed4293 {

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

  union __nesc_unnamed4294 {

    int _pad[64 / sizeof(int ) - 4];



    __pid_t _tid;

    struct __nesc_unnamed4295 {

      void (*_function)(sigval_t arg_0x7fe251ca9060);
      pthread_attr_t *_attribute;
    } _sigev_thread;
  } _sigev_un;
} sigevent_t;






enum __nesc_unnamed4296 {

  SIGEV_SIGNAL = 0, 

  SIGEV_NONE, 

  SIGEV_THREAD, 


  SIGEV_THREAD_ID = 4
};
# 85 "/usr/include/signal.h" 3
typedef void (*__sighandler_t)(int arg_0x7fe251ca6ae0);
#line 209
typedef __sighandler_t sig_t;





extern int sigemptyset(sigset_t *__set) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 24 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3
struct sigaction {



  union __nesc_unnamed4297 {


    __sighandler_t sa_handler;

    void (*sa_sigaction)(int arg_0x7fe251c88020, siginfo_t *arg_0x7fe251c88320, void *arg_0x7fe251c885c0);
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



enum __nesc_unnamed4298 {

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
typedef struct __nesc_unnamed4299 {

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



enum __nesc_unnamed4300 {

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
enum __nesc_unnamed4301 {

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




enum __nesc_unnamed4302 {

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
enum __nesc_unnamed4303 {

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





enum __nesc_unnamed4304 {

  IPPROTO_HOPOPTS = 0, 

  IPPROTO_ROUTING = 43, 

  IPPROTO_FRAGMENT = 44, 

  IPPROTO_ICMPV6 = 58, 

  IPPROTO_NONE = 59, 

  IPPROTO_DSTOPTS = 60, 

  IPPROTO_MH = 135
};




typedef uint16_t in_port_t;


enum __nesc_unnamed4305 {

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

  union __nesc_unnamed4306 {

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
  union __nesc_unnamed4307 {





    struct sockaddr *ifu_broadaddr;
    struct sockaddr *ifu_dstaddr;
  } ifa_ifu;









  void *ifa_data;
};








extern int getifaddrs(struct ifaddrs **__ifap) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3
extern int *__errno_location(void ) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
# 6 "/home/wsn/git/TerraIx/nesCix/src/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4308 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4309 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/home/wsn/git/TerraIx/nesCix/src/types/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4310 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4311 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4312 {
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
# 22 "/home/wsn/git/TerraIx/nesCix/src/types/platform_message.h"
#line 20
typedef union message_header {
  serial_header_t serial;
} message_header_t;



#line 24
typedef union message_footer {
  nx_uint8_t dummy;
} message_footer_t;



#line 28
typedef union message_metadata {
  nx_uint8_t dummy;
} message_metadata_t;
# 21 "/home/wsn/git/TerraIx/nesCix/src/types/message.h"
#line 16
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;






#line 23
typedef nx_struct ackMessage_t {
  nx_uint16_t ackCode;
  nx_am_addr_t src;
  nx_am_addr_t dest;
  nx_uint16_t ackID;
} __attribute__((packed)) ackMessage_t;
# 41 "/home/wsn/git/TerraIx/nesCix/src/includes/Timer.h"
typedef struct __nesc_unnamed4313 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4314 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4315 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4316 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
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
# 8 "/home/wsn/git/TerraIx/nesCix/src/system/TimerP.nc"
extern void setSignal(int signum, __sighandler_t handler);
extern void setTimer(int which, const struct itimerval *new_value, struct itimerval *old_value);
enum HilTimerMilliC$__nesc_unnamed4317 {
  HilTimerMilliC$TIMER_COUNT = 3U
};
# 60 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Boot.nc"
static void TesteC$Boot$booted(void );
# 110 "/home/wsn/git/TerraIx/nesCix/src/interfaces/AMSend.nc"
static void TesteC$UDPSender$sendDone(
# 9 "TesteC.nc"
am_id_t arg_0x7fe251b5e2f0, 
# 103 "/home/wsn/git/TerraIx/nesCix/src/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 7 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static void TesteC$periodicTimer$fired(void );
# 78 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



TesteC$UDPReceiver$receive(
# 10 "TesteC.nc"
am_id_t arg_0x7fe251b2ce18, 
# 71 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 113 "/home/wsn/git/TerraIx/nesCix/src/interfaces/SplitControl.nc"
static void TesteC$UDPControl$startDone(error_t error);
# 65 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(
# 57 "/home/wsn/git/TerraIx/nesCix/src/system/SchedulerBasicP.nc"
uint8_t arg_0x7fe251d9a650);
# 73 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 57 "/home/wsn/git/TerraIx/nesCix/src/system/SchedulerBasicP.nc"
uint8_t arg_0x7fe251d9a650);
# 56 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Scheduler.nc"
static void SchedulerBasicP$Scheduler$init(void );
#line 71
static void SchedulerBasicP$Scheduler$taskLoop(void );
#line 64
static bool SchedulerBasicP$Scheduler$runNextTask(void );
# 104 "/home/wsn/git/TerraIx/nesCix/src/interfaces/SplitControl.nc"
static error_t UDPActiveMessageP$SplitControl$start(void );
# 73 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static void UDPActiveMessageP$send_done$runTask(void );
#line 73
static void UDPActiveMessageP$start_done$runTask(void );
# 80 "/home/wsn/git/TerraIx/nesCix/src/interfaces/AMSend.nc"
static error_t UDPActiveMessageP$AMSend$send(
# 7 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
am_id_t arg_0x7fe251ae7340, 
# 80 "/home/wsn/git/TerraIx/nesCix/src/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Packet.nc"
static uint8_t UDPActiveMessageP$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


UDPActiveMessageP$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t UDPActiveMessageP$Packet$maxPayloadLength(void );
# 73 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static void UDPActiveMessageP$receiveTask$runTask(void );
# 7 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static void UDPActiveMessageP$sendDoneTimer$fired(void );
# 59 "/home/wsn/git/TerraIx/nesCix/src/interfaces/PacketAcknowledgements.nc"
static error_t UDPActiveMessageP$PacketAcknowledgements$requestAck(
#line 53
message_t * msg);
# 73 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static void UDPActiveMessageP$send_doneAck$runTask(void );
# 88 "/home/wsn/git/TerraIx/nesCix/src/interfaces/AMPacket.nc"
static am_addr_t UDPActiveMessageP$AMPacket$source(
#line 84
message_t * amsg);
#line 68
static am_addr_t UDPActiveMessageP$AMPacket$address(void );









static am_addr_t UDPActiveMessageP$AMPacket$destination(
#line 74
message_t * amsg);
#line 121
static void UDPActiveMessageP$AMPacket$setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 103
static void UDPActiveMessageP$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t UDPActiveMessageP$AMPacket$type(
#line 143
message_t * amsg);
#line 162
static void UDPActiveMessageP$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool UDPActiveMessageP$AMPacket$isForMe(
#line 133
message_t * amsg);
#line 187
static void UDPActiveMessageP$AMPacket$setGroup(
#line 184
message_t * amsg, 


am_group_t grp);
# 7 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static void UDPActiveMessageP$timerDelay$fired(void );
# 62 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Init.nc"
static error_t TimerP$SoftwareInit$init(void );
# 6 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static void TimerP$TimerFrom$stop(void );






static void TimerP$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
static uint32_t TimerP$TimerFrom$getNow(void );
# 73 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static void TimerP$tarefaTimer$runTask(void );
#line 73
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 7 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );






static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(
# 48 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x7fe2519b0c10);
# 7 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 48 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x7fe2519b0c10);
# 10 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(
# 48 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x7fe2519b0c10);
# 4 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 48 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x7fe2519b0c10, 
# 4 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
uint32_t dt);
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 48 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x7fe2519b0c10, 
# 5 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
uint32_t dt);
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 48 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x7fe2519b0c10);
# 126 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Packet.nc"
static 
#line 123
void * 


TesteC$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 80 "/home/wsn/git/TerraIx/nesCix/src/interfaces/AMSend.nc"
static error_t TesteC$UDPSender$send(
# 9 "TesteC.nc"
am_id_t arg_0x7fe251b5e2f0, 
# 80 "/home/wsn/git/TerraIx/nesCix/src/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 4 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static void TesteC$periodicTimer$startPeriodic(uint32_t dt);
# 59 "/home/wsn/git/TerraIx/nesCix/src/interfaces/PacketAcknowledgements.nc"
static error_t TesteC$PacketAcknowledgements$requestAck(
#line 53
message_t * msg);
# 104 "/home/wsn/git/TerraIx/nesCix/src/interfaces/SplitControl.nc"
static error_t TesteC$UDPControl$start(void );
# 21 "TesteC.nc"
message_t TesteC$msgT;
bool TesteC$status;
SendToNodeMsg *TesteC$sendToNode;
am_id_t TesteC$id = 2;

static inline void TesteC$Boot$booted(void );






static inline void TesteC$UDPControl$startDone(error_t error);






static inline void TesteC$periodicTimer$fired(void );
#line 63
static inline void TesteC$UDPSender$sendDone(am_id_t id, message_t *msg, error_t error);





static inline message_t *TesteC$UDPReceiver$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 62 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Init.nc"
static error_t RealMainP$SoftwareInit$init(void );
# 60 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Boot.nc"
static void RealMainP$Boot$booted(void );
# 56 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Scheduler.nc"
static void RealMainP$Scheduler$init(void );
#line 71
static void RealMainP$Scheduler$taskLoop(void );
#line 64
static bool RealMainP$Scheduler$runNextTask(void );
# 10 "/home/wsn/git/TerraIx/nesCix/src/system/RealMainP.nc"
int main(void )   ;
# 73 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(
# 57 "/home/wsn/git/TerraIx/nesCix/src/system/SchedulerBasicP.nc"
uint8_t arg_0x7fe251d9a650);




enum SchedulerBasicP$__nesc_unnamed4318 {

  SchedulerBasicP$NUM_TASKS = 6U, 
  SchedulerBasicP$NO_TASK = 255
};

uint8_t SchedulerBasicP$m_head;
uint8_t SchedulerBasicP$m_tail;
uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void );
#line 98
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 125
static inline void SchedulerBasicP$Scheduler$init(void );
#line 138
static bool SchedulerBasicP$Scheduler$runNextTask(void );
#line 153
static inline void SchedulerBasicP$Scheduler$taskLoop(void );
#line 177
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 113 "/home/wsn/git/TerraIx/nesCix/src/interfaces/SplitControl.nc"
static void UDPActiveMessageP$SplitControl$startDone(error_t error);
# 65 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static error_t UDPActiveMessageP$send_done$postTask(void );
#line 65
static error_t UDPActiveMessageP$start_done$postTask(void );
# 110 "/home/wsn/git/TerraIx/nesCix/src/interfaces/AMSend.nc"
static void UDPActiveMessageP$AMSend$sendDone(
# 7 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
am_id_t arg_0x7fe251ae7340, 
# 103 "/home/wsn/git/TerraIx/nesCix/src/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 65 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static error_t UDPActiveMessageP$receiveTask$postTask(void );
# 6 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static void UDPActiveMessageP$sendDoneTimer$stop(void );



static bool UDPActiveMessageP$sendDoneTimer$isRunning(void );
#line 5
static void UDPActiveMessageP$sendDoneTimer$startOneShot(uint32_t dt);








static uint32_t UDPActiveMessageP$sendDoneTimer$getNow(void );
# 78 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Receive.nc"
static 
#line 74
message_t * 



UDPActiveMessageP$Receive$receive(
# 8 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
am_id_t arg_0x7fe251ae6470, 
# 71 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 65 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static error_t UDPActiveMessageP$send_doneAck$postTask(void );
# 5 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static void UDPActiveMessageP$timerDelay$startOneShot(uint32_t dt);
# 71 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
enum UDPActiveMessageP$__nesc_unnamed4319 {
#line 71
  UDPActiveMessageP$send_doneAck = 0U
};
#line 71
typedef int UDPActiveMessageP$__nesc_sillytask_send_doneAck[UDPActiveMessageP$send_doneAck];




enum UDPActiveMessageP$__nesc_unnamed4320 {
#line 76
  UDPActiveMessageP$send_done = 1U
};
#line 76
typedef int UDPActiveMessageP$__nesc_sillytask_send_done[UDPActiveMessageP$send_done];




enum UDPActiveMessageP$__nesc_unnamed4321 {
#line 81
  UDPActiveMessageP$receiveTask = 2U
};
#line 81
typedef int UDPActiveMessageP$__nesc_sillytask_receiveTask[UDPActiveMessageP$receiveTask];
#line 151
enum UDPActiveMessageP$__nesc_unnamed4322 {
#line 151
  UDPActiveMessageP$start_done = 3U
};
#line 151
typedef int UDPActiveMessageP$__nesc_sillytask_start_done[UDPActiveMessageP$start_done];
#line 21
int UDPActiveMessageP$socket_sender;
int UDPActiveMessageP$socket_receiver;

int UDPActiveMessageP$counter = 0;
message_t *UDPActiveMessageP$lastSendMessage;
message_t UDPActiveMessageP$lastReceiveMessage;
struct sockaddr_in UDPActiveMessageP$addrSender;

static inline serial_header_t * UDPActiveMessageP$getHeader(message_t * msg);



static inline uint16_t UDPActiveMessageP$getID_fromIP(void );
#line 71
static inline void UDPActiveMessageP$send_doneAck$runTask(void );




static inline void UDPActiveMessageP$send_done$runTask(void );




static inline void UDPActiveMessageP$receiveTask$runTask(void );



static inline void UDPActiveMessageP$UDP_HandleReceiver(int signum);
#line 138
static inline void UDPActiveMessageP$timerDelay$fired(void );
#line 151
static inline void UDPActiveMessageP$start_done$runTask(void );



static inline error_t UDPActiveMessageP$SplitControl$start(void );
#line 259
static inline void UDPActiveMessageP$sendDoneTimer$fired(void );




static inline error_t UDPActiveMessageP$AMSend$send(am_id_t id, am_addr_t am_addr, message_t *msg, uint8_t len);
#line 308
static inline bool UDPActiveMessageP$AMPacket$isForMe(message_t *amsg);




static inline void UDPActiveMessageP$AMPacket$setSource(message_t *amsg, am_addr_t addr);




static inline void UDPActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t t);




static inline am_id_t UDPActiveMessageP$AMPacket$type(message_t *amsg);




static am_addr_t UDPActiveMessageP$AMPacket$destination(message_t *amsg);




static inline am_addr_t UDPActiveMessageP$AMPacket$address(void );



static inline void UDPActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);




static inline am_addr_t UDPActiveMessageP$AMPacket$source(message_t *amsg);




static inline void UDPActiveMessageP$AMPacket$setGroup(message_t *amsg, am_group_t grp);
#line 365
static uint8_t UDPActiveMessageP$Packet$payloadLength(message_t *msg);




static void *UDPActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len);








static inline uint8_t UDPActiveMessageP$Packet$maxPayloadLength(void );
#line 400
static inline error_t UDPActiveMessageP$PacketAcknowledgements$requestAck(message_t *msg);
# 7 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static void TimerP$TimerFrom$fired(void );
# 65 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static error_t TimerP$tarefaTimer$postTask(void );
# 29 "/home/wsn/git/TerraIx/nesCix/src/system/TimerP.nc"
enum TimerP$__nesc_unnamed4323 {
#line 29
  TimerP$tarefaTimer = 4U
};
#line 29
typedef int TimerP$__nesc_sillytask_tarefaTimer[TimerP$tarefaTimer];
#line 21
bool TimerP$isRunning;
uint32_t TimerP$now;
struct itimerval TimerP$timer = { 0 };


struct timeval TimerP$t_initial = { 0 };
struct timeval TimerP$t_current = { 0 };



static inline void TimerP$tarefaTimer$runTask(void );




static inline void TimerP$sigalrm_handler(int signum);
#line 65
static inline void TimerP$TimerFrom$stop(void );
#line 84
static inline void TimerP$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 97
static uint32_t TimerP$TimerFrom$getNow(void );
#line 128
static inline error_t TimerP$SoftwareInit$init(void );
# 65 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 14 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 13
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 6
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 48 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x7fe2519b0c10);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4324 {
#line 71
  VirtualizeTimerC$0$updateFromTimer = 5U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4325 {

  VirtualizeTimerC$0$NUM_TIMERS = 3, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4326 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num);
#line 189
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 10 "/home/wsn/git/TerraIx/nesCix/src/types/hardware.h"
__inline  __nesc_atomic_t __nesc_atomic_start(void )
#line 10
{
  return 0;
}

__inline  void __nesc_atomic_end(__nesc_atomic_t x)
#line 14
{
}

# 125 "/home/wsn/git/TerraIx/nesCix/src/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP$Scheduler$init(void )
{
  /* atomic removed: atomic calls only */
  {
    char i;

#line 130
    for (i = 0; i < sizeof SchedulerBasicP$m_next; i++) SchedulerBasicP$m_next[i] = SchedulerBasicP$NO_TASK;


    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 56 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$init(void ){
#line 56
  SchedulerBasicP$Scheduler$init();
#line 56
}
#line 56








inline static bool RealMainP$Scheduler$runNextTask(void ){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = SchedulerBasicP$Scheduler$runNextTask();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 65 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
inline static error_t TimerP$tarefaTimer$postTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(TimerP$tarefaTimer);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 36 "/home/wsn/git/TerraIx/nesCix/src/system/TimerP.nc"
static inline void TimerP$sigalrm_handler(int signum)
{
  uint32_t currentTime;

  currentTime = TimerP$TimerFrom$getNow();
  if (currentTime > 0) {


    if (TimerP$isRunning) {
#line 44
      TimerP$tarefaTimer$postTask();
      }
    }
}

#line 84
static inline void TimerP$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt)
#line 84
{
  uint32_t t1;

#line 86
  TimerP$isRunning = TRUE;

  t1 = t0 + dt - TimerP$TimerFrom$getNow();

  TimerP$timer.it_value.tv_sec = t1 / 1000;
  TimerP$timer.it_value.tv_usec = t1 % 1000 * 1000;

  setSignal(14, &TimerP$sigalrm_handler);
  setTimer(ITIMER_REAL, &TimerP$timer, (void *)0);
}

# 13 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 13
  TimerP$TimerFrom$startOneShotAt(t0, dt);
#line 13
}
#line 13
# 65 "/home/wsn/git/TerraIx/nesCix/src/system/TimerP.nc"
static inline void TimerP$TimerFrom$stop(void )
#line 65
{








  TimerP$isRunning = FALSE;
}

# 6 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 6
  TimerP$TimerFrom$stop();
#line 6
}
#line 6








inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 14
  unsigned int __nesc_result;
#line 14

#line 14
  __nesc_result = TimerP$TimerFrom$getNow();
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 100 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

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
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 281 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
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

# 29 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static inline serial_header_t * UDPActiveMessageP$getHeader(message_t * msg)
#line 29
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned long )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

# 63 "TesteC.nc"
static inline void TesteC$UDPSender$sendDone(am_id_t id, message_t *msg, error_t error)
#line 63
{


  printf("UDPSender.sendDone: %d\n", error);
}

# 110 "/home/wsn/git/TerraIx/nesCix/src/interfaces/AMSend.nc"
inline static void UDPActiveMessageP$AMSend$sendDone(am_id_t arg_0x7fe251ae7340, message_t * msg, error_t error){
#line 110
  TesteC$UDPSender$sendDone(arg_0x7fe251ae7340, msg, error);
#line 110
}
#line 110
# 259 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP$sendDoneTimer$fired(void )
#line 259
{
  __nesc_hton_uint16(UDPActiveMessageP$getHeader(UDPActiveMessageP$lastSendMessage)->ackID.nxdata, FALSE);
  UDPActiveMessageP$AMSend$sendDone(__nesc_ntoh_uint8(UDPActiveMessageP$getHeader(UDPActiveMessageP$lastSendMessage)->type.nxdata), UDPActiveMessageP$lastSendMessage, SUCCESS);
}

# 310 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 138 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP$timerDelay$fired(void )
#line 138
{
  ackMessage_t ackMsg;

  __nesc_hton_uint16(ackMsg.ackCode.nxdata, 0xFFFE);
  __nesc_hton_uint16(ackMsg.src.nxdata, TOS_NODE_ID);
  __nesc_hton_uint16(ackMsg.dest.nxdata, __nesc_ntoh_uint16(UDPActiveMessageP$getHeader(&UDPActiveMessageP$lastReceiveMessage)->src.nxdata));
  __nesc_hton_uint16(ackMsg.ackID.nxdata, __nesc_ntoh_uint16(UDPActiveMessageP$getHeader(&UDPActiveMessageP$lastReceiveMessage)->ackID.nxdata));

  sendto(UDPActiveMessageP$socket_sender, &ackMsg, sizeof(message_t ), 0, (struct sockaddr *)&UDPActiveMessageP$addrSender, sizeof(struct sockaddr_in ));
}

# 159 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 5 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
inline static void UDPActiveMessageP$sendDoneTimer$startOneShot(uint32_t dt){
#line 5
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, dt);
#line 5
}
#line 5
# 189 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
}

# 14 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
inline static uint32_t UDPActiveMessageP$sendDoneTimer$getNow(void ){
#line 14
  unsigned int __nesc_result;
#line 14

#line 14
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(0U);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 65 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
inline static error_t UDPActiveMessageP$send_done$postTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(UDPActiveMessageP$send_done);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 286 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 318 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t t)
#line 318
{
  serial_header_t *header = UDPActiveMessageP$getHeader(amsg);

#line 320
  __nesc_hton_uint8(header->type.nxdata, t);
}

#line 347
static inline void UDPActiveMessageP$AMPacket$setGroup(message_t *amsg, am_group_t grp)
#line 347
{
  serial_header_t *header = UDPActiveMessageP$getHeader(amsg);

#line 349
  __nesc_hton_uint8(header->group.nxdata, grp);
}

#line 337
static inline void UDPActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 337
{
  serial_header_t *header = UDPActiveMessageP$getHeader(amsg);

#line 339
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

#line 313
static inline void UDPActiveMessageP$AMPacket$setSource(message_t *amsg, am_addr_t addr)
#line 313
{
  serial_header_t *header = UDPActiveMessageP$getHeader(amsg);

#line 315
  __nesc_hton_uint16(header->src.nxdata, addr);
}

#line 264
static inline error_t UDPActiveMessageP$AMSend$send(am_id_t id, am_addr_t am_addr, message_t *msg, uint8_t len)
#line 264
{

  struct ip_mreq mcast_group;
  message_header_t *header;

  UDPActiveMessageP$AMPacket$setSource(msg, TOS_NODE_ID);
  UDPActiveMessageP$AMPacket$setDestination(msg, am_addr);
  UDPActiveMessageP$AMPacket$setGroup(msg, TOS_AM_GROUP);
  UDPActiveMessageP$AMPacket$setType(msg, id);
  printf("Send 1\n");

  if (__nesc_ntoh_uint16(UDPActiveMessageP$getHeader(msg)->ackID.nxdata) != 0) {
      printf("Send 2 tem ack\n");
      UDPActiveMessageP$counter = UDPActiveMessageP$counter == 0 ? 1 : UDPActiveMessageP$counter + 1;
      __nesc_hton_uint16(UDPActiveMessageP$getHeader(msg)->ackID.nxdata, UDPActiveMessageP$counter);
    }
  printf("Vou passar no sendTo\n");
  UDPActiveMessageP$lastSendMessage = msg;
  sendto(UDPActiveMessageP$socket_sender, msg, sizeof(message_t ), 0, (struct sockaddr *)&UDPActiveMessageP$addrSender, sizeof(struct sockaddr_in ));

  printf("Send 3 depois do sendTo\n");

  if (__nesc_ntoh_uint16(UDPActiveMessageP$getHeader(msg)->ackID.nxdata) == 0) {
    UDPActiveMessageP$send_done$postTask();
    }
  else 
#line 288
    {
      printf("start timeout: %d \n", (uint16_t )UDPActiveMessageP$sendDoneTimer$getNow());
      UDPActiveMessageP$sendDoneTimer$startOneShot(100);
    }
  return SUCCESS;
}

# 80 "/home/wsn/git/TerraIx/nesCix/src/interfaces/AMSend.nc"
inline static error_t TesteC$UDPSender$send(am_id_t arg_0x7fe251b5e2f0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = UDPActiveMessageP$AMSend$send(arg_0x7fe251b5e2f0, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 400 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static inline error_t UDPActiveMessageP$PacketAcknowledgements$requestAck(message_t *msg)
#line 400
{

  __nesc_hton_uint16(UDPActiveMessageP$getHeader(msg)->ackID.nxdata, 1);
  return SUCCESS;
}

# 59 "/home/wsn/git/TerraIx/nesCix/src/interfaces/PacketAcknowledgements.nc"
inline static error_t TesteC$PacketAcknowledgements$requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = UDPActiveMessageP$PacketAcknowledgements$requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 126 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Packet.nc"
inline static void * TesteC$Packet$getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = UDPActiveMessageP$Packet$getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 40 "TesteC.nc"
static inline void TesteC$periodicTimer$fired(void )
#line 40
{

  printf("Vou enviar.\n");

  TesteC$sendToNode = (SendToNodeMsg *)TesteC$Packet$getPayload(&TesteC$msgT, sizeof(SendToNodeMsg ));
  if (TesteC$sendToNode == (void *)0) {
      return;
    }
  __nesc_hton_uint16(TesteC$sendToNode->nodeid.nxdata, 1);
  __nesc_hton_uint16(TesteC$sendToNode->counter.nxdata, 1);


  TesteC$PacketAcknowledgements$requestAck(&TesteC$msgT);

  TesteC$status = TesteC$UDPSender$send(TesteC$id, AM_BROADCAST_ADDR, &TesteC$msgT, sizeof(SendToNodeMsg ));
  if (TesteC$status != SUCCESS) {
      printf("Status: %d\n", TesteC$status);
    }
  else {

    printf("Dei o send\n");
    }
}

# 204 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 7 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x7fe2519b0c10){
#line 7
  switch (arg_0x7fe2519b0c10) {
#line 7
    case 0U:
#line 7
      UDPActiveMessageP$sendDoneTimer$fired();
#line 7
      break;
#line 7
    case 1U:
#line 7
      UDPActiveMessageP$timerDelay$fired();
#line 7
      break;
#line 7
    case 2U:
#line 7
      TesteC$periodicTimer$fired();
#line 7
      break;
#line 7
    default:
#line 7
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x7fe2519b0c10);
#line 7
      break;
#line 7
    }
#line 7
}
#line 7
# 379 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static inline uint8_t UDPActiveMessageP$Packet$maxPayloadLength(void )
#line 379
{
  return 28;
#line 380
  ;
}

# 98 "/home/wsn/git/TerraIx/nesCix/src/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{
  return SchedulerBasicP$m_next[id] != SchedulerBasicP$NO_TASK || SchedulerBasicP$m_tail == id;
}

static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  if (!SchedulerBasicP$isWaiting(id)) 
    {
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_head = id;
          SchedulerBasicP$m_tail = id;
        }
      else 
        {
          SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
          SchedulerBasicP$m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 65 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 139 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 7 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
inline static void TimerP$TimerFrom$fired(void ){
#line 7
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 7
}
#line 7
# 31 "/home/wsn/git/TerraIx/nesCix/src/system/TimerP.nc"
static inline void TimerP$tarefaTimer$runTask(void )
#line 31
{

  TimerP$TimerFrom$fired();
}

# 154 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 4 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
inline static void TesteC$periodicTimer$startPeriodic(uint32_t dt){
#line 4
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(2U, dt);
#line 4
}
#line 4
# 33 "TesteC.nc"
static inline void TesteC$UDPControl$startDone(error_t error)
#line 33
{


  if (TOS_NODE_ID == 56452) {
    TesteC$periodicTimer$startPeriodic(5000);
    }
}

# 113 "/home/wsn/git/TerraIx/nesCix/src/interfaces/SplitControl.nc"
inline static void UDPActiveMessageP$SplitControl$startDone(error_t error){
#line 113
  TesteC$UDPControl$startDone(error);
#line 113
}
#line 113
# 151 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP$start_done$runTask(void )
#line 151
{
  UDPActiveMessageP$SplitControl$startDone(SUCCESS);
}

#line 323
static inline am_id_t UDPActiveMessageP$AMPacket$type(message_t *amsg)
#line 323
{
  serial_header_t *header = UDPActiveMessageP$getHeader(amsg);

#line 325
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 69 "TesteC.nc"
static inline message_t *TesteC$UDPReceiver$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 69
{


  SendToNodeMsg *dataReceived = payload;

#line 73
  printf(" NodeId %d, Counter %d\n", __nesc_ntoh_uint16(dataReceived->nodeid.nxdata), __nesc_ntoh_uint16(dataReceived->counter.nxdata));
  return msg;
}

# 78 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Receive.nc"
inline static message_t * UDPActiveMessageP$Receive$receive(am_id_t arg_0x7fe251ae6470, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = TesteC$UDPReceiver$receive(arg_0x7fe251ae6470, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 81 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP$receiveTask$runTask(void )
#line 81
{
  UDPActiveMessageP$Receive$receive(UDPActiveMessageP$AMPacket$type(&UDPActiveMessageP$lastReceiveMessage), &UDPActiveMessageP$lastReceiveMessage, UDPActiveMessageP$Packet$getPayload(&UDPActiveMessageP$lastReceiveMessage, UDPActiveMessageP$Packet$payloadLength(&UDPActiveMessageP$lastReceiveMessage)), UDPActiveMessageP$Packet$payloadLength(&UDPActiveMessageP$lastReceiveMessage));
}

#line 76
static inline void UDPActiveMessageP$send_done$runTask(void )
#line 76
{
  __nesc_hton_uint16(UDPActiveMessageP$getHeader(UDPActiveMessageP$lastSendMessage)->ackID.nxdata, FALSE);
  UDPActiveMessageP$AMSend$sendDone(__nesc_ntoh_uint8(UDPActiveMessageP$getHeader(UDPActiveMessageP$lastSendMessage)->type.nxdata), UDPActiveMessageP$lastSendMessage, SUCCESS);
}

#line 71
static inline void UDPActiveMessageP$send_doneAck$runTask(void )
#line 71
{
  __nesc_hton_uint16(UDPActiveMessageP$getHeader(UDPActiveMessageP$lastSendMessage)->ackID.nxdata, TRUE);
  UDPActiveMessageP$AMSend$sendDone(__nesc_ntoh_uint8(UDPActiveMessageP$getHeader(UDPActiveMessageP$lastSendMessage)->type.nxdata), UDPActiveMessageP$lastSendMessage, SUCCESS);
}

# 128 "/home/wsn/git/TerraIx/nesCix/src/system/TimerP.nc"
static inline error_t TimerP$SoftwareInit$init(void )
#line 128
{



  gettimeofday(&TimerP$t_initial, (void *)0);
  TimerP$now = 0;
  TimerP$isRunning = TRUE;
  return SUCCESS;
}

# 62 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = TimerP$SoftwareInit$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 4 "/home/wsn/git/TerraIx/nesCix/src/types/hardware.h"
static __inline void __nesc_enable_interrupt()
#line 4
{
}

# 65 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
inline static error_t UDPActiveMessageP$start_done$postTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(UDPActiveMessageP$start_done);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
inline static error_t UDPActiveMessageP$receiveTask$postTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(UDPActiveMessageP$receiveTask);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 5 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
inline static void UDPActiveMessageP$timerDelay$startOneShot(uint32_t dt){
#line 5
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(1U, dt);
#line 5
}
#line 5
# 342 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static inline am_addr_t UDPActiveMessageP$AMPacket$source(message_t *amsg)
#line 342
{
  serial_header_t *header = UDPActiveMessageP$getHeader(amsg);

#line 344
  return __nesc_ntoh_uint16(header->src.nxdata);
}

#line 333
static inline am_addr_t UDPActiveMessageP$AMPacket$address(void )
#line 333
{
  return TOS_NODE_ID;
}

#line 308
static inline bool UDPActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 308
{
  return UDPActiveMessageP$AMPacket$destination(amsg) == UDPActiveMessageP$AMPacket$address() || 
  UDPActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 65 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
inline static error_t UDPActiveMessageP$send_doneAck$postTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(UDPActiveMessageP$send_doneAck);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 164 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 6 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
inline static void UDPActiveMessageP$sendDoneTimer$stop(void ){
#line 6
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
#line 6
}
#line 6
# 169 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning;
}

# 10 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Timer.nc"
inline static bool UDPActiveMessageP$sendDoneTimer$isRunning(void ){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(0U);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 85 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static inline void UDPActiveMessageP$UDP_HandleReceiver(int signum)
{
  char dgram[256];
  struct sockaddr_in addr;
  int fromlen = sizeof addr;
  message_t *msg;
  ackMessage_t receiveAckMsg;
  int size;
  struct sockaddr *addrRcv;
  struct socklen_t *addRcvLen;

  size = recvfrom(UDPActiveMessageP$socket_receiver, dgram, 256, 0, (struct sockaddr *)&addr, (socklen_t *)&fromlen);

  if (size < 0) {
#line 98
    printf("Erro recvfrom\n");
    }
  else 
#line 99
    {
      dgram[size] = '\0';
    }
  printf("Passou por aqui a mensagem: %d\n", __nesc_ntoh_uint16((* (nx_uint16_t *)dgram).nxdata));
  if (__nesc_ntoh_uint16((* (nx_uint16_t *)dgram).nxdata) == 0xFFFE) {

      memcpy(&receiveAckMsg, (ackMessage_t *)dgram, sizeof(ackMessage_t ));
      if (__nesc_ntoh_uint16(receiveAckMsg.dest.nxdata) == TOS_NODE_ID) {
          printf("Recebi mensagem ACK %d\n", __nesc_ntoh_uint16((* (nx_uint16_t *)dgram).nxdata));
          printf("EH ACK! Dest: %d Src: %d AckID: %d\n", __nesc_ntoh_uint16(receiveAckMsg.dest.nxdata), __nesc_ntoh_uint16(receiveAckMsg.src.nxdata), __nesc_ntoh_uint16(receiveAckMsg.ackID.nxdata));
          printf("Tos_node_id: %d, ackID: %d, dest: %d, Timer: %s\n", TOS_NODE_ID, __nesc_ntoh_uint16(UDPActiveMessageP$getHeader(UDPActiveMessageP$lastSendMessage)->ackID.nxdata), __nesc_ntoh_uint16(UDPActiveMessageP$getHeader(UDPActiveMessageP$lastSendMessage)->dest.nxdata), UDPActiveMessageP$sendDoneTimer$isRunning() ? "true" : "false");

          printf("receive: %d \n", (uint16_t )UDPActiveMessageP$sendDoneTimer$getNow());


          if (__nesc_ntoh_uint16(
#line 112
          receiveAckMsg.src.nxdata) == __nesc_ntoh_uint16(UDPActiveMessageP$getHeader(UDPActiveMessageP$lastSendMessage)->dest.nxdata)
           && __nesc_ntoh_uint16(receiveAckMsg.ackID.nxdata) == __nesc_ntoh_uint16(UDPActiveMessageP$getHeader(UDPActiveMessageP$lastSendMessage)->ackID.nxdata)
           && UDPActiveMessageP$sendDoneTimer$isRunning()) {
              printf("ACK RECEBIDO\n");
              UDPActiveMessageP$sendDoneTimer$stop();
              UDPActiveMessageP$send_doneAck$postTask();
            }
        }
    }
  else {
      msg = (message_t *)dgram;

      if (UDPActiveMessageP$AMPacket$isForMe(msg)) {
          printf("Recebi mensagem %d\n", __nesc_ntoh_uint16((* (nx_uint16_t *)dgram).nxdata));
          memcpy(&UDPActiveMessageP$lastReceiveMessage, msg, sizeof(message_t ));
          printf("Message: %d Ack: %d\n", UDPActiveMessageP$AMPacket$source(msg), __nesc_ntoh_uint16(UDPActiveMessageP$getHeader(msg)->ackID.nxdata));


          if (__nesc_ntoh_uint16(UDPActiveMessageP$getHeader(msg)->ackID.nxdata) != 0 && __nesc_ntoh_uint16(UDPActiveMessageP$getHeader(msg)->dest.nxdata) == TOS_NODE_ID) {
              UDPActiveMessageP$timerDelay$startOneShot(1);
            }
          UDPActiveMessageP$receiveTask$postTask();
        }
    }
}

#line 33
static inline uint16_t UDPActiveMessageP$getID_fromIP(void )
#line 33
{

  struct ifaddrs *ifaddr;
#line 35
  struct ifaddrs *ifa;
  int family;
#line 36
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
#line 63
            return (uint16_t )(addrHost[2] * 256 + addrHost[3]);
            }
        }
    }

  return 0;
}

#line 155
static inline error_t UDPActiveMessageP$SplitControl$start(void )
#line 155
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

  TOS_NODE_ID = UDPActiveMessageP$getID_fromIP();
  if (TOS_NODE_ID == 0) {
      printf("Nenhuma interface ethernet AF_INET foi encontrada\n");
      return FAIL;
    }
  printf("Meu am_id: %d\n", TOS_NODE_ID);


  UDPActiveMessageP$socket_receiver = socket(2, SOCK_DGRAM, 0);
  if (UDPActiveMessageP$socket_receiver < 0) {
      return FAIL;
    }

  if (setsockopt(UDPActiveMessageP$socket_receiver, 1, 2, &reuse, sizeof reuse) < 0) {
      close(UDPActiveMessageP$socket_receiver);
      return FAIL;
    }

  if (fcntl(UDPActiveMessageP$socket_receiver, 4, 04000) < 0) {
      close(UDPActiveMessageP$socket_receiver);
      return FAIL;
    }

  memset((char *)&addr, 0, sizeof addr);
  addr.sin_family = 2;
  addr.sin_port = htons(5000);
  addr.sin_addr.s_addr = (in_addr_t )0x00000000;
  if (bind(UDPActiveMessageP$socket_receiver, (struct sockaddr *)&addr, sizeof addr)) {
      close(UDPActiveMessageP$socket_receiver);
      return FAIL;
    }

  mcast_group.imr_multiaddr.s_addr = inet_addr("224.0.0.1");
  mcast_group.imr_interface.s_addr = (in_addr_t )0x00000000;
  if (setsockopt(UDPActiveMessageP$socket_receiver, IPPROTO_IP, 35, (char *)&mcast_group, sizeof mcast_group)) {
      close(UDPActiveMessageP$socket_receiver);
      return FAIL;
    }

  pid = getpid();

  a_flags = fcntl(UDPActiveMessageP$socket_receiver, 3);
  fcntl(UDPActiveMessageP$socket_receiver, 4, a_flags | 020000);

  a_sa.sa_flags = 0;
  a_sa.__sigaction_handler.sa_handler = UDPActiveMessageP$UDP_HandleReceiver;
  sigemptyset(& a_sa.sa_mask);

  sigaction(29, &a_sa, (void *)0);
  fcntl(UDPActiveMessageP$socket_receiver, 8, pid);


  memset((char *)&UDPActiveMessageP$addrSender, 0, sizeof UDPActiveMessageP$addrSender);
  UDPActiveMessageP$addrSender.sin_addr.s_addr = inet_addr("224.0.0.1");
  UDPActiveMessageP$addrSender.sin_family = 2;
  UDPActiveMessageP$addrSender.sin_port = htons(5000);

  UDPActiveMessageP$socket_sender = socket(2, SOCK_DGRAM, 0);
  if (UDPActiveMessageP$socket_sender < 0) {
      printf("socket\n");
      return FAIL;
    }

  if (setsockopt(UDPActiveMessageP$socket_sender, 1, 2, &one, sizeof(unsigned int )) < 0) {
      close(UDPActiveMessageP$socket_sender);
      printf("setsockopt 1\n");
      return FAIL;
    }

  if (setsockopt(UDPActiveMessageP$socket_sender, IPPROTO_IP, 34, &zero, sizeof(unsigned int )) < 0) {
      close(UDPActiveMessageP$socket_sender);
      printf("setsockopt 2\n");
      return FAIL;
    }

  mcast_group.imr_multiaddr.s_addr = inet_addr("224.0.0.1");
  mcast_group.imr_interface.s_addr = (in_addr_t )0x00000000;
  status = setsockopt(UDPActiveMessageP$socket_sender, IPPROTO_IP, 35, (char *)&mcast_group, sizeof mcast_group);
  if (status) {
      printf("setsockopt 3 Erro: %d Devido a falta de conexão com a interface \n", *__errno_location());
      close(UDPActiveMessageP$socket_sender);
      return FAIL;
    }

  printf("START - pid: %d\n", pid);

  UDPActiveMessageP$start_done$postTask();

  return SUCCESS;
}

# 104 "/home/wsn/git/TerraIx/nesCix/src/interfaces/SplitControl.nc"
inline static error_t TesteC$UDPControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = UDPActiveMessageP$SplitControl$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 26 "TesteC.nc"
static inline void TesteC$Boot$booted(void )
#line 26
{

  printf("booted.\n");
  TesteC$UDPControl$start();
}

# 60 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 60
  TesteC$Boot$booted();
#line 60
}
#line 60
# 79 "/home/wsn/git/TerraIx/nesCix/src/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void )
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 84
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 153
static inline void SchedulerBasicP$Scheduler$taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {

              sleep(1);
            }
        }
#line 166
        __nesc_atomic_end(__nesc_atomic); }


      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 71 "/home/wsn/git/TerraIx/nesCix/src/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$taskLoop(void ){
#line 71
  SchedulerBasicP$Scheduler$taskLoop();
#line 71
}
#line 71
# 5 "/home/wsn/git/TerraIx/nesCix/src/types/hardware.h"
static __inline void __nesc_disable_interrupt()
#line 5
{
}

# 10 "/home/wsn/git/TerraIx/nesCix/src/system/RealMainP.nc"
  int main(void )
#line 10
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 18
      ;

      RealMainP$Scheduler$init();






      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 35
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 138 "/home/wsn/git/TerraIx/nesCix/src/system/SchedulerBasicP.nc"
static bool SchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 142
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 146
          FALSE;

#line 146
          return __nesc_temp;
        }
      }
  }
#line 149
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

#line 182
static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 73 "/home/wsn/git/TerraIx/nesCix/src/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x7fe251d9a650){
#line 73
  switch (arg_0x7fe251d9a650) {
#line 73
    case UDPActiveMessageP$send_doneAck:
#line 73
      UDPActiveMessageP$send_doneAck$runTask();
#line 73
      break;
#line 73
    case UDPActiveMessageP$send_done:
#line 73
      UDPActiveMessageP$send_done$runTask();
#line 73
      break;
#line 73
    case UDPActiveMessageP$receiveTask:
#line 73
      UDPActiveMessageP$receiveTask$runTask();
#line 73
      break;
#line 73
    case UDPActiveMessageP$start_done:
#line 73
      UDPActiveMessageP$start_done$runTask();
#line 73
      break;
#line 73
    case TimerP$tarefaTimer:
#line 73
      TimerP$tarefaTimer$runTask();
#line 73
      break;
#line 73
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 73
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 73
      break;
#line 73
    default:
#line 73
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x7fe251d9a650);
#line 73
      break;
#line 73
    }
#line 73
}
#line 73
# 97 "/home/wsn/git/TerraIx/nesCix/src/system/TimerP.nc"
static uint32_t TimerP$TimerFrom$getNow(void )
#line 97
{
  uint32_t result;
  long t1;
#line 99
  long t2;

  gettimeofday(&TimerP$t_current, (void *)0);

  result = TimerP$t_current.tv_sec * 1000 - TimerP$t_initial.tv_sec * 1000;
  result += TimerP$t_current.tv_usec / 1000 - TimerP$t_initial.tv_usec / 1000;

  TimerP$now += result;
  t1 = TimerP$t_current.tv_sec;
  t2 = TimerP$t_initial.tv_sec;




  TimerP$t_initial.tv_sec = TimerP$t_current.tv_sec;
  TimerP$t_initial.tv_usec = TimerP$t_current.tv_usec;



  return TimerP$now;
}

# 73 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

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
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 370 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static void *UDPActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len)
#line 370
{
  if (len > UDPActiveMessageP$Packet$maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 177 "/home/wsn/git/TerraIx/nesCix/src/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 179
    {
#line 179
      {
        unsigned char __nesc_temp = 
#line 179
        SchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;

        {
#line 179
          __nesc_atomic_end(__nesc_atomic); 
#line 179
          return __nesc_temp;
        }
      }
    }
#line 182
    __nesc_atomic_end(__nesc_atomic); }
}

# 144 "/home/wsn/git/TerraIx/nesCix/src/system/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 365 "/home/wsn/git/TerraIx/nesCix/src/system/UDPActiveMessageP.nc"
static uint8_t UDPActiveMessageP$Packet$payloadLength(message_t *msg)
#line 365
{
  serial_header_t *header = UDPActiveMessageP$getHeader(msg);

#line 367
  return __nesc_ntoh_uint8(header->length.nxdata);
}

#line 328
static am_addr_t UDPActiveMessageP$AMPacket$destination(message_t *amsg)
#line 328
{
  serial_header_t *header = UDPActiveMessageP$getHeader(amsg);

#line 330
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

