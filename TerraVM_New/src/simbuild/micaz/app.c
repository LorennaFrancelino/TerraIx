#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 150 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 3
typedef int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
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
# 37 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__ 
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__ 
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__ 
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__ 
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__ 
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__ 
typedef unsigned long long int uint_fast64_t;
#line 126
typedef int intptr_t;


typedef unsigned int uintptr_t;








__extension__ 
typedef long long int intmax_t;
__extension__ 
typedef unsigned long long int uintmax_t;
# 35 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 292
#line 288
typedef struct __nesc_unnamed4242 {

  long long int quot;
  long long int rem;
} imaxdiv_t;
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
# 44 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, 
const void *__restrict __src, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 65
extern void *memset(void *__s, int __c, size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 128
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 143
extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 40 "/usr/include/xlocale.h" 3
#line 28
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 262 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
#line 399
extern size_t strlen(const char *__s) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
# 67 "/usr/include/i386-linux-gnu/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4243 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4244 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 72 "/usr/include/stdlib.h" 3
#line 68
typedef union __nesc_unnamed4245 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 102
#line 98
typedef struct __nesc_unnamed4246 {

  int quot;
  int rem;
} div_t;







#line 106
typedef struct __nesc_unnamed4247 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 118
typedef struct __nesc_unnamed4248 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 158
__extension__ 
#line 195
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 31 "/usr/include/i386-linux-gnu/bits/types.h" 3
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




__extension__ 
#line 47
typedef signed long long int __int64_t;
__extension__ 
#line 48
typedef unsigned long long int __uint64_t;







__extension__ 
#line 56
typedef long long int __quad_t;
__extension__ 
#line 57
typedef unsigned long long int __u_quad_t;
#line 134
__extension__ 
#line 134
typedef __u_quad_t __dev_t;
__extension__ 
#line 135
typedef unsigned int __uid_t;
__extension__ 
#line 136
typedef unsigned int __gid_t;
__extension__ 
#line 137
typedef unsigned long int __ino_t;
__extension__ 
#line 138
typedef __u_quad_t __ino64_t;
__extension__ 
#line 139
typedef unsigned int __mode_t;
__extension__ 
#line 140
typedef unsigned int __nlink_t;
__extension__ 
#line 141
typedef long int __off_t;
__extension__ 
#line 142
typedef __quad_t __off64_t;
__extension__ 
#line 143
typedef int __pid_t;
__extension__ 
#line 144
typedef struct __nesc_unnamed4249 {
#line 144
  int __val[2];
} 
#line 144
__fsid_t;
__extension__ 
#line 145
typedef long int __clock_t;
__extension__ 
#line 146
typedef unsigned long int __rlim_t;
__extension__ 
#line 147
typedef __u_quad_t __rlim64_t;
__extension__ 
#line 148
typedef unsigned int __id_t;
__extension__ 
#line 149
typedef long int __time_t;
__extension__ 
#line 150
typedef unsigned int __useconds_t;
__extension__ 
#line 151
typedef long int __suseconds_t;

__extension__ 
#line 153
typedef int __daddr_t;
__extension__ 
#line 154
typedef long int __swblk_t;
__extension__ 
#line 155
typedef int __key_t;


__extension__ 
#line 158
typedef int __clockid_t;


__extension__ 
#line 161
typedef void *__timer_t;


__extension__ 
#line 164
typedef long int __blksize_t;




__extension__ 
#line 169
typedef long int __blkcnt_t;
__extension__ 
#line 170
typedef __quad_t __blkcnt64_t;


__extension__ 
#line 173
typedef unsigned long int __fsblkcnt_t;
__extension__ 
#line 174
typedef __u_quad_t __fsblkcnt64_t;


__extension__ 
#line 177
typedef unsigned long int __fsfilcnt_t;
__extension__ 
#line 178
typedef __u_quad_t __fsfilcnt64_t;

__extension__ 
#line 180
typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ 
#line 189
typedef int __intptr_t;


__extension__ 
#line 192
typedef unsigned int __socklen_t;
# 34 "/usr/include/i386-linux-gnu/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 61
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 99
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 60 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 76
typedef __time_t time_t;
#line 92
typedef __clockid_t clockid_t;
#line 104
typedef __timer_t timer_t;
# 151 "/usr/include/i386-linux-gnu/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 201
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 24 "/usr/include/i386-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 29
typedef struct __nesc_unnamed4250 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 38 "/usr/include/i386-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  long int tv_nsec;
};
# 31 "/usr/include/i386-linux-gnu/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 49 "/usr/include/i386-linux-gnu/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 76
#line 65
typedef struct __nesc_unnamed4251 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 32 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 229 "/usr/include/i386-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 36 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;






#line 39
typedef union __nesc_unnamed4252 {

  char __size[36];
  long int __align;
} pthread_attr_t;





#line 46
typedef struct __pthread_internal_slist {

  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
#line 73
#line 54
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union  {

      int __spins;
      __pthread_slist_t __list;
    } ;
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;





#line 75
typedef union __nesc_unnamed4254 {

  char __size[4];
  long int __align;
} pthread_mutexattr_t;
#line 99
#line 84
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





#line 101
typedef union __nesc_unnamed4257 {

  char __size[4];
  long int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 139
#line 119
typedef union __nesc_unnamed4258 {

  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;





#line 141
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 156
typedef union __nesc_unnamed4261 {

  char __size[20];
  long int __align;
} pthread_barrier_t;





#line 162
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 349 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 418
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};
#line 471
extern void *malloc(size_t __size) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 488
extern void free(void *__ptr) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 544
extern void exit(int __status) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__noreturn__)) ;
#line 742
typedef int (*__compar_fn_t)(const void *arg_0x4042fa98, const void *arg_0x4042fc30);
#line 776
__extension__ 
#line 793
__extension__ 
# 36 "/usr/include/i386-linux-gnu/bits/mathdef.h" 3
typedef long double float_t;

typedef long double double_t;
# 110 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3
extern double log(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 155
extern double pow(double __x, double __y) __attribute((__leaf__)) __attribute((__nothrow__)) ;


extern double sqrt(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 186
extern double floor(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
#line 252
extern double erfc(double arg_0x40476da8) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 203 "/usr/include/math.h" 3
enum __nesc_unnamed4263 {

  FP_NAN, 

  FP_INFINITE, 

  FP_ZERO, 

  FP_SUBNORMAL, 

  FP_NORMAL
};
#line 303
#line 296
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 321
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 48 "/usr/include/ctype.h" 3
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
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 65
typedef struct _IO_FILE __FILE;
# 95 "/usr/include/wchar.h" 3
#line 83
typedef struct __nesc_unnamed4266 {

  int __count;
  union __nesc_unnamed4267 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 26 "/usr/include/_G_config.h" 3
#line 22
typedef struct __nesc_unnamed4268 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 27
typedef struct __nesc_unnamed4269 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
#line 53
typedef int _G_int16_t __attribute((__mode__(__HI__))) ;
typedef int _G_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int _G_uint16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int _G_uint32_t __attribute((__mode__(__SI__))) ;
# 40 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 172 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 172
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 208
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 273
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
#line 366
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 80 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
#line 111
typedef _G_fpos_t fpos_t;
#line 169
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 238
extern int fclose(FILE *__stream);




extern int fflush(FILE *__stream);
#line 273
extern FILE *fopen(const char *__restrict __filename, 
const char *__restrict __modes);
#line 307
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 357
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 387
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;
#line 706
extern size_t fread(void *__restrict __ptr, size_t __size, 
size_t __n, FILE *__restrict __stream);




extern size_t fwrite(const void *__restrict __ptr, size_t __size, 
size_t __n, FILE *__restrict __s);
#line 855
extern int fileno(FILE *__stream) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 74 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/tos.h"
typedef uint8_t bool;


enum __nesc_unnamed4270 {
#line 77
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 51 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 50 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 53 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);
# 65 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 98 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 99
struct __nesc_attr_atleastonce {
};
#line 100
struct __nesc_attr_exactlyonce {
};
# 9 "/opt/tinyos-2.1.2/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x405d2320), 
int (*key_eq_fn)(void *arg_0x405d2768, void *arg_0x405d28e0));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 47 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4271 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 51
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 56
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4272 {
  SIM_LOG_OUTPUT_COUNT = 522U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 84
static void fillInOutput(int id, char *name);
#line 159
static inline void sim_log_init();
#line 172
static inline void sim_log_add_channel(char *name, FILE *file);
#line 212
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 234
static void sim_log_commit_change();
#line 246
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 261
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 276
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 306
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 65 "/opt/tinyos-2.1.2/tos/lib/tossim/heap.h"
#line 61
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 58 "/opt/tinyos-2.1.2/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 62
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 114
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 130
static inline void expand_heap(heap_t *heap);
#line 144
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 158
static void swap(node_t *first, node_t *second);
#line 171
static void down_heap(heap_t *heap, int findex);
#line 197
static void up_heap(heap_t *heap, int findex);
# 44 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 57 "/usr/include/i386-linux-gnu/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 93
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
# 51 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4273 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 64
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 83
#line 73
typedef struct sim_noise_node_t {
  char key[NOISE_HISTORY];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal;
  uint32_t noiseGenTime;
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 51 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 80
void sim_end()   ;





int sim_random()   ;
#line 102
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 156
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 179
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 99 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 44 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_gain.h"
#line 53
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 124
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 148
double sim_gain_sample_noise(int node)   ;
#line 161
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/opt/tinyos-2.1.2/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
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
# 233 "/usr/include/time.h"
struct tm;



struct tm;





struct tm;




struct tm;
# 46 "/opt/tinyos-2.1.2/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x40706558, int arg_0x407066b0);
static double RandomUniform(void );
# 51 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 84
void sim_noise_create_model(uint16_t node_id)   ;
#line 97
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 113
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 192
void sim_noise_dist(uint16_t node_id)   ;
#line 245
void arrangeKey(uint16_t node_id)   ;









void makePmfDistr(uint16_t node_id)   ;
#line 283
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id)   ;
#line 364
char sim_noise_generate(uint16_t node_id, uint32_t cur_t)   ;
#line 419
void makeNoiseModel(uint16_t node_id)   ;
# 59 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 59
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);
# 6 "/opt/tinyos-2.1.2/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4274 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4275 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 12 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 14
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;





#line 18
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t ack;
  nx_uint16_t time;
} __attribute__((packed)) tossim_metadata_t;
# 83 "/opt/tinyos-2.1.2/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4276 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4277 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4278 {
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
# 53 "/opt/tinyos-2.1.2/tos/lib/tossim/platform_message.h"
#line 50
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 55
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 59
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/opt/tinyos-2.1.2/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[29];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 48 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;
# 63 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim_serial_packet.h"
typedef struct sim_serial_packet {
} 
#line 63
sim_serial_packet_t;

void sim_serial_packet_set_destination(sim_serial_packet_t *msg, uint16_t dest);
uint16_t sim_serial_packet_destination(sim_serial_packet_t *msg);

void sim_serial_packet_set_source(sim_serial_packet_t *msg, uint16_t src);
uint16_t sim_serial_packet_source(sim_serial_packet_t *msg);

void sim_serial_packet_set_length(sim_serial_packet_t *msg, uint8_t len);
uint16_t sim_serial_packet_length(sim_serial_packet_t *msg);

void sim_serial_packet_set_type(sim_serial_packet_t *msg, uint8_t type);
uint8_t sim_serial_packet_type(sim_serial_packet_t *msg);

uint8_t *sim_serial_packet_data(sim_serial_packet_t *msg);

void sim_serial_packet_deliver(int node, sim_serial_packet_t *msg, sim_time_t t);
uint8_t sim_serial_packet_max_length(sim_serial_packet_t *msg);

sim_serial_packet_t *sim_serial_packet_allocate();
void sim_serial_packet_free(sim_serial_packet_t *m);
# 50 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim_serial_packet.c"
void serial_active_message_deliver(int node, message_t *m, sim_time_t t);

inline static serial_header_t *getSerialHeader(message_t *msg);



void sim_serial_packet_set_destination(sim_serial_packet_t *msg, uint16_t dest)   ;




  uint16_t sim_serial_packet_destination(sim_serial_packet_t *msg)   ;




void sim_serial_packet_set_source(sim_serial_packet_t *msg, uint16_t src)   ;




  uint16_t sim_serial_packet_source(sim_serial_packet_t *msg)   ;




void sim_serial_packet_set_length(sim_serial_packet_t *msg, uint8_t length)   ;



uint16_t sim_serial_packet_length(sim_serial_packet_t *msg)   ;




void sim_serial_packet_set_type(sim_serial_packet_t *msg, uint8_t type)   ;




uint8_t sim_serial_packet_type(sim_serial_packet_t *msg)   ;




uint8_t *sim_serial_packet_data(sim_serial_packet_t *p)   ;




void sim_serial_packet_deliver(int node, sim_serial_packet_t *msg, sim_time_t t)   ;







uint8_t sim_serial_packet_max_length(sim_serial_packet_t *msg)   ;



sim_serial_packet_t *sim_serial_packet_allocate()   ;



void sim_serial_packet_free(sim_serial_packet_t *p)   ;
# 51 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
enum __nesc_unnamed4279 {
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
# 6 "VMData.h"
enum __nesc_unnamed4280 {

  MSG_BUFF_SIZE = 28, 
  BLOCK_SIZE = 24, 
  SET_DATA_SIZE = 18, 
  SEND_DATA_SIZE = 16, 


  CURRENT_MAX_BLOCKS = 72
};
# 4 "VMError.h"
enum __nesc_unnamed4281 {


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
#line 53
typedef float nx_float;



typedef int64_t s64;
typedef uint64_t u64;
typedef int32_t s32;
typedef uint32_t u32;
typedef int16_t s16;
typedef uint16_t u16;
typedef int8_t s8;
typedef uint8_t u8;
typedef float f32;

enum __nesc_unnamed4282 {



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
enum __nesc_unnamed4283 {



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



  REQUEST_TIMEOUT = 800L, 
  REQUEST_TIMEOUT_BS = 800L, 




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
# 25 "/opt/tinyos-2.1.2/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4284 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4285 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 85
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 97
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 106
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 120
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4286 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 43 "/opt/tinyos-2.1.2/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4287 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4288 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4289 {
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
typedef struct __nesc_unnamed4290 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4291 {
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


enum __nesc_unnamed4292 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4293 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4294 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4295 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4296 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4297 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 54 "/opt/tinyos-2.1.2/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4298 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 41 "/opt/tinyos-2.1.2/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 48 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim_serial_forwarder.h"
struct sim_sf_client_list {

  struct sim_sf_client_list *next;
  int fd;
};


void sim_sf_dispatch_packet(const void *packet, int len);
# 41 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4299 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4300 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4301 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4302 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 52 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4303 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4304 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4305 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4306 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4307 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4308 {

  uint8_t flat;
  struct __nesc_unnamed4309 {
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
typedef union __nesc_unnamed4310 {

  uint8_t flat;
  struct __nesc_unnamed4311 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4312 {

  uint8_t flat;
  struct __nesc_unnamed4313 {
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
typedef union __nesc_unnamed4314 {

  uint8_t flat;
  struct __nesc_unnamed4315 {
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
typedef union __nesc_unnamed4316 {

  uint8_t flat;
  struct __nesc_unnamed4317 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4318 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4319 {

  uint8_t flat;
  struct __nesc_unnamed4320 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4321 {
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
typedef union __nesc_unnamed4322 {

  uint8_t flat;
  struct __nesc_unnamed4323 {
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
typedef union __nesc_unnamed4324 {

  uint8_t flat;
  struct __nesc_unnamed4325 {
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
typedef union __nesc_unnamed4326 {

  uint8_t flat;
  struct __nesc_unnamed4327 {
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
typedef union __nesc_unnamed4328 {

  uint8_t flat;
  struct __nesc_unnamed4329 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 14 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/usrMsg.h"
enum __nesc_unnamed4330 {
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
enum __nesc_unnamed4331 {



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
enum __nesc_unnamed4332 {

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
# 43 "/opt/tinyos-2.1.2/tos/types/Leds.h"
enum __nesc_unnamed4333 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
typedef evtData_t TerraVMC$evtQ$t;
typedef TMilli BasicServicesP$SendDataFullTimer$precision_tag;
typedef TMilli BasicServicesP$TimerAsync$precision_tag;
typedef TMilli BasicServicesP$ProgReqTimer$precision_tag;
typedef TMilli BasicServicesP$TimerVM$precision_tag;
typedef TMilli BasicServicesP$sendTimer$precision_tag;
typedef GenericData_t /*BasicServicesC.inQueue*/dataQueueC$0$dataType;
typedef /*BasicServicesC.inQueue*/dataQueueC$0$dataType /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataType;
typedef GenericData_t /*BasicServicesC.outQueue*/dataQueueC$1$dataType;
typedef /*BasicServicesC.outQueue*/dataQueueC$1$dataType /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataType;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Timer0$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef uint16_t RandomMlcgC$SeedInit$parameter;
typedef uint16_t SensActP$S_VOLT$val_t;
typedef uint16_t SensActP$S_TEMP$val_t;
typedef uint16_t SensActP$S_PHOTO$val_t;
typedef uint16_t dataSensorP$Photo$val_t;
typedef uint16_t dataSensorP$Volt$val_t;
typedef uint16_t dataSensorP$Temp$val_t;
typedef qData_t /*VMCustomC.usrDataQ*/dataQueueC$2$dataType;
typedef /*VMCustomC.usrDataQ*/dataQueueC$2$dataType /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataType;
typedef evtData_t /*TerraVMAppC.evtQ*/QueueC$0$queue_t;
typedef /*TerraVMAppC.evtQ*/QueueC$0$queue_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$t;
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void TerraVMC$procEvent$runTask(void );
# 24 "VMCustom.nc"
static uint32_t TerraVMC$VMCustom$getTime(void );
#line 21
static void *TerraVMC$VMCustom$getRealAddr(uint16_t Maddr);
#line 17
static void TerraVMC$VMCustom$push(uint32_t val);
#line 16
static uint32_t TerraVMC$VMCustom$pop(void );

static void TerraVMC$VMCustom$queueEvt(uint8_t evtId, uint8_t auxId, void *data);
static int32_t TerraVMC$VMCustom$getMVal(uint16_t Maddr, uint8_t tp);
# 19 "BSTimer.nc"
static void TerraVMC$BSTimerAsync$fired(void );
# 20 "BSUpload.nc"
static void TerraVMC$BSUpload$stop(void );


static void TerraVMC$BSUpload$setEnv(newProgVersion_t *data);
#line 35
static void TerraVMC$BSUpload$loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[]);


static uint8_t *TerraVMC$BSUpload$getSection(uint16_t Addr);
#line 32
static void TerraVMC$BSUpload$resetMemory(void );
#line 29
static void TerraVMC$BSUpload$start(bool resetFlag);
#line 26
static void TerraVMC$BSUpload$getEnv(newProgVersion_t *data);
# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
static void TerraVMC$BSBoot$booted(void );
# 19 "BSTimer.nc"
static void TerraVMC$BSTimerVM$fired(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 62
static error_t MotePlatformP$SubInit$default$init(void );
#line 62
static error_t MotePlatformP$PlatformInit$init(void );
# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(
# 49 "/opt/tinyos-2.1.2/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x407c4970);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$default$runTask(
# 49 "/opt/tinyos-2.1.2/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x407c4970);
# 57 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Scheduler.nc"
static void SimSchedulerBasicP$Scheduler$init(void );







static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
# 44 "/opt/tinyos-2.1.2/tos/lib/tossim/SimMote.nc"
static void SimMoteP$SimMote$setEuid(long long int euid);


static int SimMoteP$SimMote$getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP$SimMote$turnOff(void );
#line 48
static void SimMoteP$SimMote$turnOn(void );
#line 43
static long long int SimMoteP$SimMote$getEuid(void );


static bool SimMoteP$SimMote$isOn(void );
#line 45
static long long int SimMoteP$SimMote$getStartTime(void );
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t TossimActiveMessageC$AMSend$send(
# 47 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x40c04108, 
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$default$receive(
# 49 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x40c01178, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Packet.nc"
static uint8_t TossimActiveMessageC$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


TossimActiveMessageC$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );
# 85 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModel.nc"
static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 76
static void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t error);










static bool TossimActiveMessageC$Model$shouldAck(message_t *msg);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
static am_addr_t TossimActiveMessageC$AMPacket$source(
#line 84
message_t * amsg);
#line 68
static am_addr_t TossimActiveMessageC$AMPacket$address(void );









static am_addr_t TossimActiveMessageC$AMPacket$destination(
#line 74
message_t * amsg);
#line 147
static am_id_t TossimActiveMessageC$AMPacket$type(
#line 143
message_t * amsg);
#line 136
static bool TossimActiveMessageC$AMPacket$isForMe(
#line 133
message_t * amsg);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void TossimPacketModelC$stopDoneTask$runTask(void );
# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimPacketModelC$Packet$send(int node, message_t *msg, uint8_t len);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void TossimPacketModelC$sendDoneTask$runTask(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t TossimPacketModelC$Init$init(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void TossimPacketModelC$startDoneTask$runTask(void );
# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t TossimPacketModelC$Control$start(void );
# 59 "/opt/tinyos-2.1.2/tos/interfaces/PacketAcknowledgements.nc"
static error_t TossimPacketModelC$PacketAcknowledgements$requestAck(
#line 53
message_t * msg);
#line 71
static error_t TossimPacketModelC$PacketAcknowledgements$noAck(
#line 65
message_t * msg);
#line 85
static bool TossimPacketModelC$PacketAcknowledgements$wasAcked(
#line 80
message_t * msg);
# 60 "/opt/tinyos-2.1.2/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$receive(message_t *msg);
#line 59
static void TossimPacketModelC$GainRadioModel$acked(message_t *msg);

static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
#line 48
static void CpmModelC$Model$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC$Model$clearChannel(void );
static void CpmModelC$Model$setPendingTransmission(void );
# 60 "/opt/tinyos-2.1.2/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t SerialActiveMessageC$SplitControl$start(void );
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t SerialActiveMessageC$AMSend$send(
# 50 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
am_id_t arg_0x40d23ae8, 
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Packet.nc"
static uint8_t SerialActiveMessageC$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


SerialActiveMessageC$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t SerialActiveMessageC$Packet$maxPayloadLength(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SerialActiveMessageC$startDone$runTask(void );
#line 75
static void SerialActiveMessageC$stopDone$runTask(void );
# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModel.nc"
static error_t SerialActiveMessageC$Model$default$send(int node, message_t *msg, uint8_t len);
#line 85
static void SerialActiveMessageC$Model$receive(message_t *msg);
#line 76
static void SerialActiveMessageC$Model$sendDone(message_t *msg, error_t error);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SerialActiveMessageC$modelSendDone$runTask(void );
# 147 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
static am_id_t SerialActiveMessageC$AMPacket$type(
#line 143
message_t * amsg);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void BasicServicesP$ProgReqTimerTask$runTask(void );
# 9 "BSRadio.nc"
static error_t BasicServicesP$BSRadio$send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck);




static void BasicServicesP$BSRadio$setRFPower(uint8_t powerIdx);
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP$SendDataFullTimer$fired(void );
# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void BasicServicesP$SerialControl$startDone(error_t error);
#line 138
static void BasicServicesP$SerialControl$stopDone(error_t error);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void BasicServicesP$sendNextMsg$runTask(void );
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void BasicServicesP$RadioSender$sendDone(
# 27 "BasicServicesP.nc"
am_id_t arg_0x40d577c8, 
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void BasicServicesP$RadioControl$startDone(error_t error);
#line 138
static void BasicServicesP$RadioControl$stopDone(error_t error);
# 17 "BSTimer.nc"
static bool BasicServicesP$BSTimerAsync$isRunning(void );
#line 15
static void BasicServicesP$BSTimerAsync$startOneShot(uint32_t dt);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



BasicServicesP$RadioReceiver$receive(
# 28 "BasicServicesP.nc"
am_id_t arg_0x40d822a8, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static void BasicServicesP$outQ$dataReady(void );
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



BasicServicesP$SerialReceiver$receive(
# 74 "BasicServicesP.nc"
am_id_t arg_0x40d888b8, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void BasicServicesP$procInputEvent$runTask(void );
# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
static void BasicServicesP$TOSBoot$booted(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP$TimerAsync$fired(void );
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void BasicServicesP$SerialSender$sendDone(
# 73 "BasicServicesP.nc"
am_id_t arg_0x40d89e18, 
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void BasicServicesP$sendMessage$runTask(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP$ProgReqTimer$fired(void );
#line 83
static void BasicServicesP$TimerVM$fired(void );
# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static void BasicServicesP$inQ$dataReady(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP$sendTimer$fired(void );
# 16 "BSTimer.nc"
static uint32_t BasicServicesP$BSTimerVM$getNow(void );
#line 15
static void BasicServicesP$BSTimerVM$startOneShot(uint32_t dt);
# 2 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMAux.nc"
static void AMAuxC$AMAux$setPower(message_t *p_msg, uint8_t power);
# 94 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
static void /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$resetRange(uint16_t from, uint16_t to);
#line 50
static bool /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$get(uint16_t bitnum);





static void /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$set(uint16_t bitnum);
#line 87
static bool /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$isAllBitSet(void );
# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$get(void *Data);

static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$read(void *Data);
#line 8
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$put(void *Data);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataReady$runTask(void );
# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$get(void *Data);

static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$read(void *Data);
#line 8
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$put(void *Data);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataReady$runTask(void );
# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
#line 61
static HplAtm128Timer0AsyncP$Timer0$timer_size HplAtm128Timer0AsyncP$Timer0$get(void );
#line 110
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 67
static void HplAtm128Timer0AsyncP$Timer0$set(HplAtm128Timer0AsyncP$Timer0$timer_size t);
# 44 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t control);
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 136
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x4101bc70);
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x4101bc70);
# 151 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getdt(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x4101bc70);
# 92 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x4101bc70);
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x4101bc70, 
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x4101bc70);
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 46
static uint32_t RandomMlcgC$Random$rand32(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 13 "VMCustom.nc"
static void VMCustomP$VM$procOutEvt(uint8_t id, uint32_t value);
static void VMCustomP$VM$callFunction(uint8_t id);
static void VMCustomP$VM$reset(void );
# 12 "BSRadio.nc"
static void VMCustomP$BSRadio$receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len);
#line 11
static void VMCustomP$BSRadio$sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked);
#line 10
static void VMCustomP$BSRadio$sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error);
# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static void VMCustomP$usrDataQ$dataReady(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void VMCustomP$BCRadio_receive$runTask(void );
# 19 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
static void VMCustomP$SA$Ready(uint8_t reqSource, uint8_t codeEvt_id);
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void SensActP$S_VOLT$readDone(error_t result, SensActP$S_VOLT$val_t val);
#line 63
static void SensActP$S_TEMP$readDone(error_t result, SensActP$S_TEMP$val_t val);
# 16 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
static void SensActP$SA$reqSensor(uint8_t reqSource, uint8_t id);








static void SensActP$SA$setActuator(uint8_t id, uint16_t val);

static void *SensActP$SA$getDatap(uint8_t id);
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void SensActP$S_PHOTO$readDone(error_t result, SensActP$S_PHOTO$val_t val);
#line 55
static error_t dataSensorP$Photo$read(void );
# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
static void dataSensorP$Boot$booted(void );
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t dataSensorP$Volt$read(void );
#line 55
static error_t dataSensorP$Temp$read(void );
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void dataSensorP$photoRead$runTask(void );
#line 75
static void dataSensorP$voltRead$runTask(void );
#line 75
static void dataSensorP$tempRead$runTask(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0Off(void );





static void LedsP$Leds$led0Toggle(void );




static void LedsP$Leds$led1On(void );










static void LedsP$Leds$led1Toggle(void );
#line 100
static void LedsP$Leds$led2Toggle(void );
#line 117
static uint8_t LedsP$Leds$get(void );
#line 77
static void LedsP$Leds$led1Off(void );
#line 94
static void LedsP$Leds$led2Off(void );
#line 134
static void LedsP$Leds$set(uint8_t val);
#line 56
static void LedsP$Leds$led0On(void );
#line 89
static void LedsP$Leds$led2On(void );
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static error_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$clearAll(void );
#line 12
static uint8_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$size(void );
#line 9
static error_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$get(void *Data);
#line 8
static error_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$put(void *Data);
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataReady$runTask(void );
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Queue.nc"
static 
#line 71
/*TerraVMAppC.evtQ*/QueueC$0$Queue$t  

/*TerraVMAppC.evtQ*/QueueC$0$Queue$head(void );
#line 90
static error_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$enqueue(
#line 86
/*TerraVMAppC.evtQ*/QueueC$0$Queue$t  newVal);
#line 65
static uint8_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$maxSize(void );
#line 81
static 
#line 79
/*TerraVMAppC.evtQ*/QueueC$0$Queue$t  

/*TerraVMAppC.evtQ*/QueueC$0$Queue$dequeue(void );
#line 50
static bool /*TerraVMAppC.evtQ*/QueueC$0$Queue$empty(void );







static uint8_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$size(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t TerraVMC$procEvent$postTask(void );
# 13 "VMCustom.nc"
static void TerraVMC$VMCustom$procOutEvt(uint8_t id, uint32_t value);
static void TerraVMC$VMCustom$callFunction(uint8_t id);
static void TerraVMC$VMCustom$reset(void );
# 17 "BSTimer.nc"
static bool TerraVMC$BSTimerAsync$isRunning(void );
#line 15
static void TerraVMC$BSTimerAsync$startOneShot(uint32_t dt);
# 90 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Queue.nc"
static error_t TerraVMC$evtQ$enqueue(
#line 86
TerraVMC$evtQ$t  newVal);
#line 81
static 
#line 79
TerraVMC$evtQ$t  

TerraVMC$evtQ$dequeue(void );
#line 58
static uint8_t TerraVMC$evtQ$size(void );
# 16 "BSTimer.nc"
static uint32_t TerraVMC$BSTimerVM$getNow(void );
#line 15
static void TerraVMC$BSTimerVM$startOneShot(uint32_t dt);
# 60 "TerraVMC.nc"
enum TerraVMC$__nesc_unnamed4334 {
#line 60
  TerraVMC$procEvent = 0U
};
#line 60
typedef int TerraVMC$__nesc_sillytask_procEvent[TerraVMC$procEvent];
#line 27
u32 TerraVMC$old[1000];

nx_uint16_t TerraVMC$MoteID[1000];

nx_uint8_t TerraVMC$CEU_data[1000][BLOCK_SIZE * CURRENT_MAX_BLOCKS];

uint16_t TerraVMC$PC[1000];

bool TerraVMC$haltedFlag[1000];

bool TerraVMC$procFlag[1000];

nx_uint8_t TerraVMC$ExtDataSysError[1000];


uint16_t TerraVMC$ProgStart[1000];
uint16_t TerraVMC$ProgEnd[1000];
uint16_t TerraVMC$nTracks[1000];
uint16_t TerraVMC$wClocks[1000];
uint16_t TerraVMC$asyncs[1000];
uint16_t TerraVMC$wClock0[1000];
uint16_t TerraVMC$gate0[1000];
uint16_t TerraVMC$inEvts[1000];
uint16_t TerraVMC$async0[1000];
nx_uint8_t *TerraVMC$MEM[1000];


uint16_t TerraVMC$currStack[1000];






static inline void TerraVMC$Decoder(uint8_t Opcode, uint8_t Modifier);
static inline void TerraVMC$ceu_boot(void );
static void TerraVMC$push(uint32_t value);
static uint32_t TerraVMC$pop(void );
static void TerraVMC$pushf(float value);
static float TerraVMC$popf(void );


static inline void TerraVMC$ceu_out_wclock(uint32_t ms);





static inline void TerraVMC$BSBoot$booted(void );








static uint8_t TerraVMC$getOpCode(uint8_t *Opcode, uint8_t *Modifier);
#line 100
static inline uint16_t TerraVMC$getLblAddr(uint16_t lbl);









static inline void TerraVMC$TViewer(char *cmd, uint16_t p1, uint16_t p2);






static void TerraVMC$evtError(uint8_t ecode);
#line 136
static uint8_t TerraVMC$getPar8(uint8_t p_len);





static uint16_t TerraVMC$getPar16(uint8_t p_len);
#line 156
static uint32_t TerraVMC$getPar32(uint8_t p_len);
#line 171
static uint8_t TerraVMC$getBits(uint8_t data, uint8_t stBit, uint8_t endBit);





static inline uint8_t TerraVMC$getBitsPow(uint8_t data, uint8_t stBit, uint8_t endBit);


static uint32_t TerraVMC$unit2val(uint32_t val, uint8_t unit);









static void TerraVMC$push(uint32_t value);
#line 203
static void TerraVMC$pushf(float value);
#line 217
static uint32_t TerraVMC$pop(void );



static float TerraVMC$popf(void );




static uint32_t TerraVMC$getMVal(uint16_t Maddr, uint8_t type);
#line 238
static inline float TerraVMC$getMValf(uint16_t Maddr);



static void TerraVMC$setMVal(uint32_t buffer, uint16_t Maddr, uint8_t fromTp, uint8_t toTp);
#line 285
static inline uint16_t TerraVMC$getEvtCeuId(uint8_t EvtId);
#line 322
typedef u16 TerraVMC$tceu_noff;
typedef u16 TerraVMC$tceu_nlbl;




#line 325
typedef struct TerraVMC$__nesc_unnamed4335 {
  s32 togo;
  TerraVMC$tceu_nlbl lbl;
} TerraVMC$tceu_wclock;





#line 330
typedef struct TerraVMC$__nesc_unnamed4336 {
  u8 stack;
  u8 tree;
  TerraVMC$tceu_nlbl lbl;
} TerraVMC$tceu_trk;

enum TerraVMC$__nesc_unnamed4337 {
  TerraVMC$Inactive = 0, 
  TerraVMC$Init = 1
};


static int TerraVMC$ceu_go(int *ret);
#line 355
#line 345
typedef struct TerraVMC$__nesc_unnamed4338 {
  int tracks_n;
  u8 stack;
  void *ext_data;
  int ext_int;
  int wclk_late;
  TerraVMC$tceu_wclock *wclk_cur;
  int async_cur;
  TerraVMC$tceu_trk *p_tracks;
  nx_uint8_t *p_mem;
} TerraVMC$tceu;



TerraVMC$tceu TerraVMC$CEU_[1000];
#line 373
static int TerraVMC$ceu_track_cmp(TerraVMC$tceu_trk *trk1, TerraVMC$tceu_trk *trk2);
#line 387
static void TerraVMC$ceu_track_ins(u8 stack, u8 tree, int chk, TerraVMC$tceu_nlbl lbl);
#line 424
static int TerraVMC$ceu_track_rem(TerraVMC$tceu_trk *trk, u8 N);
#line 454
static inline void TerraVMC$ceu_track_clr(TerraVMC$tceu_nlbl l1, TerraVMC$tceu_nlbl l2);










static void TerraVMC$ceu_spawn(TerraVMC$tceu_nlbl *lbl);








static void TerraVMC$ceu_trigger(TerraVMC$tceu_noff off, uint8_t auxId);
#line 504
static int TerraVMC$ceu_wclock_lt(TerraVMC$tceu_wclock *tmr);









static void TerraVMC$ceu_wclock_enable(int gte, s32 us, TerraVMC$tceu_nlbl lbl);
#line 531
static inline void TerraVMC$ceu_async_enable(int gte, TerraVMC$tceu_nlbl lbl);







static inline int TerraVMC$ceu_go_init(int *ret);
#line 552
static inline int TerraVMC$ceu_go_event(int *ret, int id, uint8_t auxId, void *data);
#line 568
static inline int TerraVMC$ceu_go_async(int *ret, int *pending);
#line 604
static inline int TerraVMC$ceu_go_wclock(int *ret, s32 dt, s32 *nxt);
#line 661
static inline void TerraVMC$execTrail(uint16_t lbl);
#line 680
static int TerraVMC$ceu_go(int *ret);
#line 733
static inline void TerraVMC$ceu_boot(void );









static inline void TerraVMC$f_nop(uint8_t Modifier);

static inline void TerraVMC$f_end(uint8_t Modifier);




static inline void TerraVMC$f_bnot(uint8_t Modifier);






static inline void TerraVMC$f_lnot(uint8_t Modifier);






static inline void TerraVMC$f_neg(uint8_t Modifier);






static inline void TerraVMC$f_sub(uint8_t Modifier);








static inline void TerraVMC$f_add(uint8_t Modifier);








static inline void TerraVMC$f_mod(uint8_t Modifier);









static inline void TerraVMC$f_mult(uint8_t Modifier);








static inline void TerraVMC$f_div(uint8_t Modifier);









static inline void TerraVMC$f_bor(uint8_t Modifier);







static inline void TerraVMC$f_band(uint8_t Modifier);







static inline void TerraVMC$f_lshft(uint8_t Modifier);







static inline void TerraVMC$f_rshft(uint8_t Modifier);







static inline void TerraVMC$f_bxor(uint8_t Modifier);







static inline void TerraVMC$f_eq(uint8_t Modifier);








static inline void TerraVMC$f_neq(uint8_t Modifier);







static inline void TerraVMC$f_gte(uint8_t Modifier);







static inline void TerraVMC$f_lte(uint8_t Modifier);







static inline void TerraVMC$f_gt(uint8_t Modifier);







static inline void TerraVMC$f_lt(uint8_t Modifier);







static inline void TerraVMC$f_lor(uint8_t Modifier);







static inline void TerraVMC$f_land(uint8_t Modifier);








static inline void TerraVMC$f_neg_f(uint8_t Modifier);






static inline void TerraVMC$f_sub_f(uint8_t Modifier);







static inline void TerraVMC$f_add_f(uint8_t Modifier);







static inline void TerraVMC$f_mult_f(uint8_t Modifier);







static inline void TerraVMC$f_div_f(uint8_t Modifier);








static inline void TerraVMC$f_eq_f(uint8_t Modifier);








static inline void TerraVMC$f_neq_f(uint8_t Modifier);







static inline void TerraVMC$f_gte_f(uint8_t Modifier);







static inline void TerraVMC$f_lte_f(uint8_t Modifier);







static inline void TerraVMC$f_gt_f(uint8_t Modifier);







static inline void TerraVMC$f_lt_f(uint8_t Modifier);








static inline void TerraVMC$f_func(uint8_t Modifier);







static inline void TerraVMC$f_outevt_e(uint8_t Modifier);









static inline void TerraVMC$f_outevt_z(uint8_t Modifier);






static inline void TerraVMC$f_clken_e(uint8_t Modifier);
#line 1055
static inline void TerraVMC$f_clken_v(uint8_t Modifier);
#line 1075
static inline void TerraVMC$f_clken_c(uint8_t Modifier);
#line 1093
static inline void TerraVMC$f_set_v(uint8_t Modifier);
#line 1115
static inline void TerraVMC$f_setarr_vc(uint8_t Modifier);
#line 1149
static inline void TerraVMC$f_setarr_vv(uint8_t Modifier);
#line 1190
static inline void TerraVMC$f_poparr_v(uint8_t Modifier);
#line 1224
static inline void TerraVMC$f_pusharr_v(uint8_t Modifier);
#line 1252
static inline void TerraVMC$f_getextdt_e(uint8_t Modifier);










static inline void TerraVMC$f_trg(uint8_t Modifier);









static inline void TerraVMC$f_exec(uint8_t Modifier);









static inline void TerraVMC$f_chkret(uint8_t Modifier);









static inline void TerraVMC$f_push_c(uint8_t Modifier);








static inline void TerraVMC$f_cast(uint8_t Modifier);
#line 1316
static inline void TerraVMC$f_memclr(uint8_t Modifier);
#line 1329
static inline void TerraVMC$f_ifelse(uint8_t Modifier);
#line 1341
static inline void TerraVMC$f_asen(uint8_t Modifier);
#line 1353
static inline void TerraVMC$f_tkclr(uint8_t Modifier);
#line 1365
static inline void TerraVMC$f_outevt_c(uint8_t Modifier);










static inline void TerraVMC$f_getextdt_v(uint8_t Modifier);
#line 1388
static inline void TerraVMC$f_inc(uint8_t Modifier);








static inline void TerraVMC$f_dec(uint8_t Modifier);









static inline void TerraVMC$f_set_e(uint8_t Modifier);
#line 1424
static inline void TerraVMC$f_deref(uint8_t Modifier);
#line 1441
static inline void TerraVMC$f_memcpy(uint8_t Modifier);
#line 1454
static inline void TerraVMC$f_tkins_z(uint8_t Modifier);
#line 1467
static inline void TerraVMC$f_tkins_max(uint8_t Modifier);










static inline void TerraVMC$f_push_v(uint8_t Modifier);
#line 1494
static inline void TerraVMC$f_pop(uint8_t Modifier);
#line 1512
static inline void TerraVMC$f_popx(uint8_t Modifier);




static inline void TerraVMC$f_outevt_v(uint8_t Modifier);
#line 1529
static inline void TerraVMC$f_set_c(uint8_t Modifier);
#line 1550
static inline void TerraVMC$Decoder(uint8_t Opcode, uint8_t Modifier);
#line 1644
static void TerraVMC$VMCustom$queueEvt(uint8_t evtId, uint8_t auxId, void *data);
#line 1659
static inline void TerraVMC$procEvent$runTask(void );
#line 1684
static inline int32_t TerraVMC$VMCustom$getMVal(uint16_t Maddr, uint8_t tp);






static void *TerraVMC$VMCustom$getRealAddr(uint16_t Maddr);





static inline uint32_t TerraVMC$VMCustom$pop(void );


static inline void TerraVMC$VMCustom$push(uint32_t value);







static inline uint32_t TerraVMC$VMCustom$getTime(void );



static inline void TerraVMC$BSTimerVM$fired(void );









static inline bool TerraVMC$hasAsync(void );










static inline void TerraVMC$BSTimerAsync$fired(void );
#line 1745
static inline void TerraVMC$BSUpload$stop(void );




static inline void TerraVMC$BSUpload$setEnv(newProgVersion_t *data);
#line 1765
static inline void TerraVMC$BSUpload$getEnv(newProgVersion_t *data);
#line 1781
static void TerraVMC$BSUpload$start(bool resetFlag);
#line 1799
static inline uint8_t *TerraVMC$BSUpload$getSection(uint16_t Addr);



static inline void TerraVMC$BSUpload$resetMemory(void );
#line 1816
static inline void TerraVMC$BSUpload$loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[]);
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 62
static error_t PlatformP$MeasureClock$init(void );
# 51 "/opt/tinyos-2.1.2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 41
static void MotePlatformP$SerialIdPin$clr(void );
# 49 "/opt/tinyos-2.1.2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
#line 61
static inline error_t MotePlatformP$SubInit$default$init(void );
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
# 21 "/opt/tinyos-2.1.2/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t SimMainP$SoftwareInit$init(void );
# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
static void SimMainP$Boot$booted(void );
# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
static error_t SimMainP$PlatformInit$init(void );
# 57 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Scheduler.nc"
static void SimMainP$Scheduler$init(void );







static bool SimMainP$Scheduler$runNextTask(void );
# 51 "/opt/tinyos-2.1.2/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$runTask(
# 49 "/opt/tinyos-2.1.2/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x407c4970);



enum SimSchedulerBasicP$__nesc_unnamed4339 {

  SimSchedulerBasicP$NUM_TASKS = 20U, 
  SimSchedulerBasicP$NO_TASK = 255
};

uint8_t SimSchedulerBasicP$m_head[1000];
uint8_t SimSchedulerBasicP$m_tail[1000];
uint8_t SimSchedulerBasicP$m_next[1000][SimSchedulerBasicP$NUM_TASKS];




bool SimSchedulerBasicP$sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP$sim_scheduler_event[1000];

static inline int SimSchedulerBasicP$sim_config_task_latency(void );







static void SimSchedulerBasicP$sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e);
#line 103
static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e);
#line 120
static inline uint8_t SimSchedulerBasicP$popTask(void );
#line 139
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP$pushTask(uint8_t id);
#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void );
#line 180
static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
#line 205
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id);
#line 221
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 50 "/opt/tinyos-2.1.2/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP$euid[1000];
long long int SimMoteP$startTime[1000];
bool SimMoteP$isOn[1000];
sim_event_t *SimMoteP$bootEvent[1000];

static inline long long int SimMoteP$SimMote$getEuid(void );


static inline void SimMoteP$SimMote$setEuid(long long int e);


static inline long long int SimMoteP$SimMote$getStartTime(void );


static inline bool SimMoteP$SimMote$isOn(void );



static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP$SimMote$turnOn(void );
#line 85
static inline void SimMoteP$SimMote$turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC$amAddress(void );
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void TossimActiveMessageC$AMSend$sendDone(
# 47 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x40c04108, 
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$receive(
# 49 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x40c01178, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



TossimActiveMessageC$Receive$receive(
# 48 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x40c04ac8, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len);
# 62 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
message_t TossimActiveMessageC$buffer[1000];
message_t *TossimActiveMessageC$bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg);







static inline error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 103
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result);





static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 127
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg);








static inline am_addr_t TossimActiveMessageC$AMPacket$address(void );



static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg);









static am_addr_t TossimActiveMessageC$AMPacket$source(message_t *amsg);









static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg);




static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg);
#line 177
static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg);







static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );



static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len);
#line 216
static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 236
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 254
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 85 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModel.nc"
static void TossimPacketModelC$Packet$receive(message_t *msg);
#line 76
static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error);










static bool TossimPacketModelC$Packet$shouldAck(message_t *msg);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC$startDoneTask$postTask(void );
# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void TossimPacketModelC$Control$startDone(error_t error);
#line 138
static void TossimPacketModelC$Control$stopDone(error_t error);
# 48 "/opt/tinyos-2.1.2/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool TossimPacketModelC$GainRadioModel$clearChannel(void );
static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void );
# 96 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
enum TossimPacketModelC$__nesc_unnamed4340 {
#line 96
  TossimPacketModelC$startDoneTask = 1U
};
#line 96
typedef int TossimPacketModelC$__nesc_sillytask_startDoneTask[TossimPacketModelC$startDoneTask];




enum TossimPacketModelC$__nesc_unnamed4341 {
#line 101
  TossimPacketModelC$stopDoneTask = 2U
};
#line 101
typedef int TossimPacketModelC$__nesc_sillytask_stopDoneTask[TossimPacketModelC$stopDoneTask];
#line 145
enum TossimPacketModelC$__nesc_unnamed4342 {
#line 145
  TossimPacketModelC$sendDoneTask = 3U
};
#line 145
typedef int TossimPacketModelC$__nesc_sillytask_sendDoneTask[TossimPacketModelC$sendDoneTask];
#line 70
bool TossimPacketModelC$initialized[1000];
bool TossimPacketModelC$running[1000];
uint8_t TossimPacketModelC$backoffCount[1000];
uint8_t TossimPacketModelC$neededFreeSamples[1000];
message_t *TossimPacketModelC$sending[1000];
bool TossimPacketModelC$transmitting[1000];
uint8_t TossimPacketModelC$sendingLength[1000];
int TossimPacketModelC$destNode[1000];
sim_event_t TossimPacketModelC$sendEvent[1000];



static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg);



static inline error_t TossimPacketModelC$Init$init(void );









static inline void TossimPacketModelC$startDoneTask$runTask(void );




static inline void TossimPacketModelC$stopDoneTask$runTask(void );




static inline error_t TossimPacketModelC$Control$start(void );
#line 128
static inline error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg);





static inline error_t TossimPacketModelC$PacketAcknowledgements$noAck(message_t *ack);





static error_t TossimPacketModelC$PacketAcknowledgements$wasAcked(message_t *ack);




static inline void TossimPacketModelC$sendDoneTask$runTask(void );
#line 159
static inline void TossimPacketModelC$start_csma(void );

static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len);
#line 183
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC$start_csma(void );
#line 211
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
#line 253
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
#line 280
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);







static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg);





uint8_t TossimPacketModelC$error[1000];

static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg);










static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
# 60 "/opt/tinyos-2.1.2/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC$Model$receive(message_t *msg);
#line 59
static void CpmModelC$Model$acked(message_t *msg);

static bool CpmModelC$Model$shouldAck(message_t *msg);
# 58 "/opt/tinyos-2.1.2/tos/lib/tossim/CpmModelC.nc"
message_t *CpmModelC$outgoing[1000];
bool CpmModelC$requestAck[1000];
bool CpmModelC$receiving[1000];
bool CpmModelC$transmitting[1000];
sim_time_t CpmModelC$transmissionEndTime[1000];
struct CpmModelC$receive_message;
typedef struct CpmModelC$receive_message CpmModelC$receive_message_t;

struct CpmModelC$receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC$receive_message_t *next;
};

CpmModelC$receive_message_t *CpmModelC$outstandingReceptionHead[1000];

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t t, CpmModelC$receive_message_t *m);

static bool CpmModelC$shouldReceive(double SNR);
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);


static inline double CpmModelC$timeInMs(void );
#line 126
static double CpmModelC$noise_hash_generation(void );
#line 151
static inline double CpmModelC$arr_estimate_from_snr(double SNR);
#line 166
static inline int CpmModelC$shouldAckReceive(double snr);
#line 178
static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt);
#line 200
double CpmModelC$clearThreshold[1000];










static inline bool CpmModelC$Model$clearChannel(void );




static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r);
#line 230
static inline double CpmModelC$prr_estimate_from_snr(double SNR);
#line 248
static bool CpmModelC$shouldReceive(double SNR);
#line 260
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
#line 274
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);
#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt);
#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 428
static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 459
static inline void CpmModelC$Model$setPendingTransmission(void );







static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg);
#line 479
static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );



static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
# 65 "/opt/tinyos-2.1.2/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC$set[1000];
am_addr_t ActiveMessageAddressC$addr[1000];









static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 88
static inline am_addr_t ActiveMessageAddressC$amAddress(void );
# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void SerialActiveMessageC$SplitControl$startDone(error_t error);
#line 138
static void SerialActiveMessageC$SplitControl$stopDone(error_t error);
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void SerialActiveMessageC$AMSend$sendDone(
# 50 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
am_id_t arg_0x40d23ae8, 
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t SerialActiveMessageC$startDone$postTask(void );
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



SerialActiveMessageC$Receive$receive(
# 51 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
am_id_t arg_0x40d22548, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModel.nc"
static error_t SerialActiveMessageC$Model$send(int node, message_t *msg, uint8_t len);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t SerialActiveMessageC$modelSendDone$postTask(void );
# 74 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
enum SerialActiveMessageC$__nesc_unnamed4343 {
#line 74
  SerialActiveMessageC$startDone = 4U
};
#line 74
typedef int SerialActiveMessageC$__nesc_sillytask_startDone[SerialActiveMessageC$startDone];
enum SerialActiveMessageC$__nesc_unnamed4344 {
#line 75
  SerialActiveMessageC$stopDone = 5U
};
#line 75
typedef int SerialActiveMessageC$__nesc_sillytask_stopDone[SerialActiveMessageC$stopDone];
#line 119
enum SerialActiveMessageC$__nesc_unnamed4345 {
#line 119
  SerialActiveMessageC$modelSendDone = 6U
};
#line 119
typedef int SerialActiveMessageC$__nesc_sillytask_modelSendDone[SerialActiveMessageC$modelSendDone];
#line 65
message_t SerialActiveMessageC$buffer[1000];
message_t *SerialActiveMessageC$bufferPointer[1000];

message_t *SerialActiveMessageC$sendMsgPtr[1000];

static inline serial_header_t *SerialActiveMessageC$getHeader(message_t *amsg);



static inline void SerialActiveMessageC$startDone$runTask(void );
static inline void SerialActiveMessageC$stopDone$runTask(void );

static inline error_t SerialActiveMessageC$SplitControl$start(void );









static inline error_t SerialActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 115
static inline void SerialActiveMessageC$Model$sendDone(message_t *msg, error_t result);



static inline void SerialActiveMessageC$modelSendDone$runTask(void );




static inline error_t SerialActiveMessageC$Model$default$send(int node, message_t *msg, uint8_t len);
#line 139
static inline void SerialActiveMessageC$Model$receive(message_t *msg);
#line 196
static am_id_t SerialActiveMessageC$AMPacket$type(message_t *amsg);
#line 221
static inline void *SerialActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len);
#line 233
static inline uint8_t SerialActiveMessageC$Packet$maxPayloadLength(void );



static inline uint8_t SerialActiveMessageC$Packet$payloadLength(message_t *msg);
#line 272
static inline void SerialActiveMessageC$serial_active_message_deliver_handle(sim_event_t *evt);




static inline sim_event_t *SerialActiveMessageC$allocate_serial_deliver_event(int node, message_t *msg, sim_time_t t);
#line 293
void serial_active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t BasicServicesP$ProgReqTimerTask$postTask(void );
# 12 "BSRadio.nc"
static void BasicServicesP$BSRadio$receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len);
#line 11
static void BasicServicesP$BSRadio$sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked);
#line 10
static void BasicServicesP$BSRadio$sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error);
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP$SendDataFullTimer$startOneShot(uint32_t dt);
# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t BasicServicesP$SerialControl$start(void );
# 88 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
static am_addr_t BasicServicesP$RadioAMPacket$source(
#line 84
message_t * amsg);
#line 147
static am_id_t BasicServicesP$RadioAMPacket$type(
#line 143
message_t * amsg);
# 2 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMAux.nc"
static void BasicServicesP$AMAux$setPower(message_t *p_msg, uint8_t power);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t BasicServicesP$sendNextMsg$postTask(void );
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t BasicServicesP$RadioSender$send(
# 27 "BasicServicesP.nc"
am_id_t arg_0x40d577c8, 
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t BasicServicesP$RadioControl$start(void );
# 19 "BSTimer.nc"
static void BasicServicesP$BSTimerAsync$fired(void );
# 126 "/opt/tinyos-2.1.2/tos/interfaces/Packet.nc"
static 
#line 123
void * 


BasicServicesP$RadioPacket$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t BasicServicesP$RadioPacket$maxPayloadLength(void );
# 46 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
static uint32_t BasicServicesP$Random$rand32(void );
# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static error_t BasicServicesP$outQ$get(void *Data);

static error_t BasicServicesP$outQ$read(void *Data);
#line 8
static error_t BasicServicesP$outQ$put(void *Data);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t BasicServicesP$procInputEvent$postTask(void );
# 151 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static uint32_t BasicServicesP$TimerAsync$getdt(void );
#line 92
static bool BasicServicesP$TimerAsync$isRunning(void );
#line 73
static void BasicServicesP$TimerAsync$startOneShot(uint32_t dt);




static void BasicServicesP$TimerAsync$stop(void );
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t BasicServicesP$SerialSender$send(
# 73 "BasicServicesP.nc"
am_id_t arg_0x40d89e18, 
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/PacketAcknowledgements.nc"
static error_t BasicServicesP$RadioAck$requestAck(
#line 53
message_t * msg);
#line 71
static error_t BasicServicesP$RadioAck$noAck(
#line 65
message_t * msg);
#line 85
static bool BasicServicesP$RadioAck$wasAcked(
#line 80
message_t * msg);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t BasicServicesP$sendMessage$postTask(void );
# 20 "BSUpload.nc"
static void BasicServicesP$BSUpload$stop(void );


static void BasicServicesP$BSUpload$setEnv(newProgVersion_t *data);
#line 35
static void BasicServicesP$BSUpload$loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[]);


static uint8_t *BasicServicesP$BSUpload$getSection(uint16_t Addr);
#line 32
static void BasicServicesP$BSUpload$resetMemory(void );
#line 29
static void BasicServicesP$BSUpload$start(bool resetFlag);
#line 26
static void BasicServicesP$BSUpload$getEnv(newProgVersion_t *data);
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP$ProgReqTimer$startOneShot(uint32_t dt);




static void BasicServicesP$ProgReqTimer$stop(void );
# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
static void BasicServicesP$BSBoot$booted(void );
# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static uint32_t BasicServicesP$TimerVM$getNow(void );
#line 151
static uint32_t BasicServicesP$TimerVM$getdt(void );
#line 92
static bool BasicServicesP$TimerVM$isRunning(void );
#line 73
static void BasicServicesP$TimerVM$startOneShot(uint32_t dt);




static void BasicServicesP$TimerVM$stop(void );
# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static error_t BasicServicesP$inQ$get(void *Data);

static error_t BasicServicesP$inQ$read(void *Data);
#line 8
static error_t BasicServicesP$inQ$put(void *Data);
# 94 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
static void BasicServicesP$BM$resetRange(uint16_t from, uint16_t to);
#line 50
static bool BasicServicesP$BM$get(uint16_t bitnum);





static void BasicServicesP$BM$set(uint16_t bitnum);
#line 87
static bool BasicServicesP$BM$isAllBitSet(void );
# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP$sendTimer$startOneShot(uint32_t dt);
# 19 "BSTimer.nc"
static void BasicServicesP$BSTimerVM$fired(void );
# 141 "BasicServicesP.nc"
enum BasicServicesP$__nesc_unnamed4346 {
#line 141
  BasicServicesP$ProgReqTimerTask = 7U
};
#line 141
typedef int BasicServicesP$__nesc_sillytask_ProgReqTimerTask[BasicServicesP$ProgReqTimerTask];
#line 902
enum BasicServicesP$__nesc_unnamed4347 {
#line 902
  BasicServicesP$procInputEvent = 8U
};
#line 902
typedef int BasicServicesP$__nesc_sillytask_procInputEvent[BasicServicesP$procInputEvent];
#line 992
enum BasicServicesP$__nesc_unnamed4348 {
#line 992
  BasicServicesP$sendMessage = 9U
};
#line 992
typedef int BasicServicesP$__nesc_sillytask_sendMessage[BasicServicesP$sendMessage];
#line 1029
enum BasicServicesP$__nesc_unnamed4349 {
#line 1029
  BasicServicesP$sendNextMsg = 10U
};
#line 1029
typedef int BasicServicesP$__nesc_sillytask_sendNextMsg[BasicServicesP$sendNextMsg];
#line 82
nx_uint16_t BasicServicesP$MoteID[1000];
bool BasicServicesP$firstInic[1000];
uint32_t BasicServicesP$reSendDelay[1000];

GenericData_t BasicServicesP$tempInputInQ[1000];
GenericData_t BasicServicesP$tempInputOutQ[1000];
GenericData_t BasicServicesP$tempOutputInQ[1000];
GenericData_t BasicServicesP$tempOutputOutQ[1000];
GenericData_t BasicServicesP$lastNewProgVersion[1000];
message_t BasicServicesP$sendBuff[1000];


message_t BasicServicesP$serialAux[1000];



uint8_t BasicServicesP$sendCounter[1000];


uint8_t BasicServicesP$userRFPowerIdx[1000];


uint8_t BasicServicesP$ReqState[1000];


nx_uint16_t BasicServicesP$ProgVersion[1000];
nx_uint16_t BasicServicesP$ProgMoteSource[1000];
nx_uint16_t BasicServicesP$ProgBlockStart[1000];
nx_uint16_t BasicServicesP$ProgBlockLen[1000];
uint8_t BasicServicesP$loadingProgramFlag[1000];

uint8_t BasicServicesP$ProgTimeOutCounter[1000];
uint16_t BasicServicesP$DsmBlockCount[1000];
nx_uint16_t BasicServicesP$lastRecNewProgVersion[1000];


nx_uint16_t BasicServicesP$NewDataSeq[1000];
nx_uint16_t BasicServicesP$maxSeenDataSeq[1000];

nx_uint16_t BasicServicesP$NewDataMoteSource[1000];


uint16_t BasicServicesP$disseminatorRoot[1000];
#line 137
static void BasicServicesP$sendReqProgBlock(reqProgBlock_t *Data);
static inline void BasicServicesP$sendNewProgVersion(newProgVersion_t *Data);
static void BasicServicesP$sendNewProgBlock(newProgBlock_t *Data);





static inline void BasicServicesP$TViewer(char *cmd, uint16_t p1, uint16_t p2);
#line 157
static inline void BasicServicesP$inicCtlData(void );
#line 176
static inline void BasicServicesP$TOSBoot$booted(void );
#line 203
static inline uint32_t BasicServicesP$getRequestTimeout(void );




static inline void BasicServicesP$RadioControl$startDone(error_t error);
#line 237
static inline void BasicServicesP$RadioControl$stopDone(error_t error);



static inline void BasicServicesP$BSRadio$setRFPower(uint8_t powerIdx);










static inline uint32_t BasicServicesP$BSTimerVM$getNow(void );
static void BasicServicesP$BSTimerVM$startOneShot(uint32_t dt);






static inline void BasicServicesP$TimerVM$fired(void );








static void BasicServicesP$BSTimerAsync$startOneShot(uint32_t dt);




static inline bool BasicServicesP$BSTimerAsync$isRunning(void );

static inline void BasicServicesP$TimerAsync$fired(void );
#line 289
static uint16_t BasicServicesP$getNextEmptyBlock(void );
#line 399
static void BasicServicesP$recNewProgVersionNet_receive(message_t *msg, void *payload, uint8_t len);
#line 423
static void BasicServicesP$recNewProgBlockNet_receive(message_t *msg, void *payload, uint8_t len);
#line 460
static inline void BasicServicesP$recReqProgBlockNet_receive(message_t *msg, void *payload, uint8_t len);
#line 476
static inline void BasicServicesP$recSetDataNDNet_receive(message_t *msg, void *payload, uint8_t len);
#line 499
static void BasicServicesP$recCustomMsgNet_receive(message_t *msg, void *payload, uint8_t len);









static inline void BasicServicesP$recReqDataNet_receive(message_t *msg, void *payload, uint8_t len);
#line 522
static inline message_t *BasicServicesP$RadioReceiver$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 557
static inline message_t *BasicServicesP$SerialReceiver$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 592
static inline void BasicServicesP$procNewProgVersion(newProgVersion_t *Data);
#line 625
static inline void BasicServicesP$procNewProgBlock(newProgBlock_t *Data);
#line 657
static inline void BasicServicesP$procRecReqProgBlock(reqProgBlock_t *Data);
#line 701
static inline void BasicServicesP$ProgReqTimerTask$runTask(void );
#line 770
static inline void BasicServicesP$ProgReqTimer$fired(void );




static inline void BasicServicesP$SendDataFullTimer$fired(void );
#line 902
static inline void BasicServicesP$procInputEvent$runTask(void );
#line 931
static inline void BasicServicesP$inQ$dataReady(void );
#line 947
static inline error_t BasicServicesP$RadioSender_send(uint8_t am_id, uint16_t target, message_t *msg, uint8_t len);
#line 964
static void BasicServicesP$sendRadioN(void );
#line 992
static inline void BasicServicesP$sendMessage$runTask(void );
#line 1019
static inline void BasicServicesP$outQ$dataReady(void );









static inline void BasicServicesP$sendNextMsg$runTask(void );









static inline void BasicServicesP$sendTimer$fired(void );
#line 1051
static void BasicServicesP$RadioSender$sendDone(am_id_t id, message_t *msg, error_t error);
#line 1097
static inline void BasicServicesP$SerialSender$sendDone(am_id_t id, message_t *msg, error_t error);
#line 1111
static inline void BasicServicesP$sendNewProgVersion(newProgVersion_t *Data);
#line 1127
static void BasicServicesP$sendNewProgBlock(newProgBlock_t *Data);
#line 1143
static void BasicServicesP$sendReqProgBlock(reqProgBlock_t *Data);
#line 1191
static inline error_t BasicServicesP$BSRadio$send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck);
#line 1235
static inline void BasicServicesP$SerialControl$stopDone(error_t error);



static inline void BasicServicesP$SerialControl$startDone(error_t error);
# 32 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/AMAuxC.nc"
static inline void AMAuxC$AMAux$setPower(message_t *p_msg, uint8_t power);
# 44 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVectorC.nc"
typedef uint8_t /*BasicServicesC.Bitmap*/vmBitVectorC$0$int_type;

enum /*BasicServicesC.Bitmap*/vmBitVectorC$0$__nesc_unnamed4350 {

  vmBitVectorC$0$ELEMENT_SIZE = 8 * sizeof(/*BasicServicesC.Bitmap*/vmBitVectorC$0$int_type ), 
  vmBitVectorC$0$ARRAY_SIZE = (72 + /*BasicServicesC.Bitmap*/vmBitVectorC$0$ELEMENT_SIZE - 1) / /*BasicServicesC.Bitmap*/vmBitVectorC$0$ELEMENT_SIZE
};

/*BasicServicesC.Bitmap*/vmBitVectorC$0$int_type /*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[1000][/*BasicServicesC.Bitmap*/vmBitVectorC$0$ARRAY_SIZE];

static inline uint16_t /*BasicServicesC.Bitmap*/vmBitVectorC$0$getIndex(uint16_t bitnum);




static inline uint16_t /*BasicServicesC.Bitmap*/vmBitVectorC$0$getMask(uint16_t bitnum);
#line 84
static bool /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$get(uint16_t bitnum);





static inline void /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$set(uint16_t bitnum);
#line 118
static bool /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$isAllBitSet(void );







static inline void /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$resetRange(uint16_t from, uint16_t to);
# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static void /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$dataReady(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataReady$postTask(void );
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
enum /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$__nesc_unnamed4351 {
#line 16
  dataQueueP$0$dataReady = 11U
};
#line 16
typedef int /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$__nesc_sillytask_dataReady[/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataReady];
#line 9
bool /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ[1000];


/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataType /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qData[1000][5];
uint8_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qHead[1000];
#line 13
uint8_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qTail[1000];
#line 13
uint8_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[1000];


static inline void /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataReady$runTask(void );




static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$put(void *Data);
#line 37
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$get(void *Data);
#line 60
static inline error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$read(void *Data);
# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static void /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$dataReady(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataReady$postTask(void );
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
enum /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$__nesc_unnamed4352 {
#line 16
  dataQueueP$1$dataReady = 12U
};
#line 16
typedef int /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$__nesc_sillytask_dataReady[/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataReady];
#line 9
bool /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ[1000];


/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataType /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qData[1000][10];
uint8_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qHead[1000];
#line 13
uint8_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qTail[1000];
#line 13
uint8_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[1000];


static inline void /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataReady$runTask(void );




static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$put(void *Data);
#line 37
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$get(void *Data);
#line 60
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$read(void *Data);
# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4353 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer0$overflow(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 57 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP$inOverflow[1000];




static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP$lastZero[1000];





uint8_t HplAtm128Timer0AsyncP$oldScale[1000];



static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP$last_zero(void );







static inline void HplAtm128Timer0AsyncP$notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void );
#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );
#line 185
sim_event_t *HplAtm128Timer0AsyncP$compare[1000];

static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt);
#line 223
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );







static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt);
#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );
#line 282
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void );
#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal);
#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 364
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x);
#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 447
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static uint8_t HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);
#line 480
sim_event_t *HplAtm128Timer0AsyncP$overflow[1000];
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt);
#line 500
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );







static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt);
#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
#line 561
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );







static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 74 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4354 {
#line 74
  AlarmToTimerC$0$fired = 13U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
uint8_t arg_0x4101bc70);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4355 {
#line 71
  VirtualizeTimerC$0$updateFromTimer = 14U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4356 {

  VirtualizeTimerC$0$NUM_TIMERS = 6U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4357 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num);
#line 189
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num);









static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getdt(uint8_t num);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 58 "/opt/tinyos-2.1.2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 52 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed[1000];


static inline error_t RandomMlcgC$Init$init(void );
#line 69
static uint32_t RandomMlcgC$Random$rand32(void );
#line 89
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 24 "VMCustom.nc"
static uint32_t VMCustomP$VM$getTime(void );
#line 21
static void *VMCustomP$VM$getRealAddr(uint16_t Maddr);
#line 17
static void VMCustomP$VM$push(uint32_t val);
#line 16
static uint32_t VMCustomP$VM$pop(void );

static void VMCustomP$VM$queueEvt(uint8_t evtId, uint8_t auxId, void *data);
static int32_t VMCustomP$VM$getMVal(uint16_t Maddr, uint8_t tp);
# 9 "BSRadio.nc"
static error_t VMCustomP$BSRadio$send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck);




static void VMCustomP$BSRadio$setRFPower(uint8_t powerIdx);
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static error_t VMCustomP$usrDataQ$clearAll(void );
#line 12
static uint8_t VMCustomP$usrDataQ$size(void );
#line 9
static error_t VMCustomP$usrDataQ$get(void *Data);
#line 8
static error_t VMCustomP$usrDataQ$put(void *Data);
# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
static uint16_t VMCustomP$Random$rand16(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t VMCustomP$BCRadio_receive$postTask(void );
# 16 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
static void VMCustomP$SA$reqSensor(uint8_t reqSource, uint8_t id);








static void VMCustomP$SA$setActuator(uint8_t id, uint16_t val);

static void *VMCustomP$SA$getDatap(uint8_t id);
# 315 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
enum VMCustomP$__nesc_unnamed4358 {
#line 315
  VMCustomP$BCRadio_receive = 15U
};
#line 315
typedef int VMCustomP$__nesc_sillytask_BCRadio_receive[VMCustomP$BCRadio_receive];
#line 26
nx_uint8_t VMCustomP$ExtDataCustomA[1000];
usrMsg_t VMCustomP$ExtDataRadioReceived[1000];
nx_uint8_t VMCustomP$ExtDataSendDoneError[1000];
nx_uint8_t VMCustomP$ExtDataWasAcked[1000];
nx_uint8_t VMCustomP$ExtDataQReady[1000];


uint8_t VMCustomP$MIC_flag[1000];
nx_uint16_t *VMCustomP$MIC_buf[1000];
uint16_t VMCustomP$MIC_count[1000];
uint32_t VMCustomP$MIC_usPeriod[1000];
uint8_t VMCustomP$MIC_gain[1000];





static inline void VMCustomP$proc_leds(uint16_t id, uint32_t value);



static inline void VMCustomP$proc_led0(uint16_t id, uint32_t value);






static inline void VMCustomP$proc_led1(uint16_t id, uint32_t value);






static inline void VMCustomP$proc_led2(uint16_t id, uint32_t value);






static inline void VMCustomP$proc_req_temp(uint16_t id, uint32_t value);



static inline void VMCustomP$proc_req_photo(uint16_t id, uint32_t value);



static inline void VMCustomP$proc_req_volts(uint16_t id, uint32_t value);




static void VMCustomP$proc_send_x(uint16_t id, uint16_t addr, uint8_t ack);









static inline void VMCustomP$proc_send(uint16_t id, uint32_t addr);


static inline void VMCustomP$proc_send_ack(uint16_t id, uint32_t addr);




static inline void VMCustomP$proc_set_port_a(uint16_t id, uint32_t value);



static inline void VMCustomP$proc_set_port_b(uint16_t id, uint32_t value);



static inline void VMCustomP$proc_cfg_port_a(uint16_t id, uint32_t value);



static inline void VMCustomP$proc_cfg_port_b(uint16_t id, uint32_t value);



static inline void VMCustomP$proc_req_port_a(uint16_t id, uint32_t value);



static inline void VMCustomP$proc_req_port_b(uint16_t id, uint32_t value);



static inline void VMCustomP$proc_cfg_int_a(uint16_t id, uint32_t value);



static inline void VMCustomP$proc_cfg_int_b(uint16_t id, uint32_t value);



static inline void VMCustomP$proc_req_custom_a(uint16_t id, uint32_t value);









static inline void VMCustomP$proc_req_custom(uint16_t id, uint32_t value);







static inline void VMCustomP$proc_req_mic(uint16_t id, uint32_t value);
#line 161
static inline void VMCustomP$proc_beep(uint16_t id, uint32_t value);







static inline void VMCustomP$func_getNodeId(uint16_t id);






static inline void VMCustomP$func_random(uint16_t id);






static inline void VMCustomP$func_getMem(uint16_t id);







static inline void VMCustomP$func_getTime(uint16_t id);






static inline void VMCustomP$func_qPut(uint16_t id);









static inline void VMCustomP$func_qGet(uint16_t id);









static inline void VMCustomP$func_qSize(uint16_t id);






static inline void VMCustomP$func_qClear(uint16_t id);








static inline void VMCustomP$func_setupMic(uint16_t id);
#line 248
static inline void VMCustomP$func_RFPower(uint16_t id);
#line 262
static void VMCustomP$VM$procOutEvt(uint8_t id, uint32_t value);
#line 291
static inline void VMCustomP$VM$callFunction(uint8_t id);
#line 310
static inline void VMCustomP$VM$reset(void );




static inline void VMCustomP$BCRadio_receive$runTask(void );




static inline void VMCustomP$BSRadio$receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len);









static void VMCustomP$BSRadio$sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error);









static void VMCustomP$BSRadio$sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked);










static inline uint8_t VMCustomP$wd2ceuSensorId(uint8_t wdId);
#line 364
static void VMCustomP$SA$Ready(uint8_t reqSource, uint8_t codeEvt_id);
#line 381
static inline void VMCustomP$usrDataQ$dataReady(void );
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t SensActP$S_VOLT$read(void );
#line 55
static error_t SensActP$S_TEMP$read(void );
# 19 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
static void SensActP$SA$Ready(uint8_t reqSource, uint8_t codeEvt_id);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void SensActP$A_LEDS$led0Off(void );





static void SensActP$A_LEDS$led0Toggle(void );




static void SensActP$A_LEDS$led1On(void );










static void SensActP$A_LEDS$led1Toggle(void );
#line 100
static void SensActP$A_LEDS$led2Toggle(void );
#line 117
static uint8_t SensActP$A_LEDS$get(void );
#line 77
static void SensActP$A_LEDS$led1Off(void );
#line 94
static void SensActP$A_LEDS$led2Off(void );
#line 134
static void SensActP$A_LEDS$set(uint8_t val);
#line 56
static void SensActP$A_LEDS$led0On(void );
#line 89
static void SensActP$A_LEDS$led2On(void );
# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static error_t SensActP$S_PHOTO$read(void );
# 49 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
nx_uint16_t SensActP$dTemp[1000];
#line 49
nx_uint16_t SensActP$dPhoto[1000];
#line 49
nx_uint16_t SensActP$dLeds[1000];
#line 49
nx_uint16_t SensActP$dVolt[1000];
#line 49
nx_uint16_t SensActP$dIn1[1000];
#line 49
nx_uint16_t SensActP$dIn2[1000];
uint8_t SensActP$sensorsReqs[1000][SENSOR_COUNT + 4];
bool SensActP$initFlag[1000];

static inline void SensActP$TViewer(char *cmd, uint16_t p1, uint16_t p2);



static bool SensActP$getSReq(uint8_t reqSource, uint8_t sensorId);










static void SensActP$insertSReq(uint8_t reqSource, uint8_t sensorId);
#line 87
static inline bool SensActP$getPinX(int sid);
#line 124
static void SensActP$SA$reqSensor(uint8_t reqSource, uint8_t id);
#line 168
static void SensActP$SA$setActuator(uint8_t id, uint16_t val);
#line 199
static inline void *SensActP$SA$getDatap(uint8_t id);
#line 221
static inline void SensActP$S_TEMP$readDone(error_t result, uint16_t val);







static inline void SensActP$S_PHOTO$readDone(error_t result, uint16_t val);







static inline void SensActP$S_VOLT$readDone(error_t result, uint16_t val);
# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
static void dataSensorP$Photo$readDone(error_t result, dataSensorP$Photo$val_t val);
#line 63
static void dataSensorP$Volt$readDone(error_t result, dataSensorP$Volt$val_t val);
#line 63
static void dataSensorP$Temp$readDone(error_t result, dataSensorP$Temp$val_t val);
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t dataSensorP$photoRead$postTask(void );
#line 67
static error_t dataSensorP$voltRead$postTask(void );
#line 67
static error_t dataSensorP$tempRead$postTask(void );
# 59 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/dataSensorP.nc"
enum dataSensorP$__nesc_unnamed4359 {
#line 59
  dataSensorP$tempRead = 16U
};
#line 59
typedef int dataSensorP$__nesc_sillytask_tempRead[dataSensorP$tempRead];



enum dataSensorP$__nesc_unnamed4360 {
#line 63
  dataSensorP$photoRead = 17U
};
#line 63
typedef int dataSensorP$__nesc_sillytask_photoRead[dataSensorP$photoRead];



enum dataSensorP$__nesc_unnamed4361 {
#line 67
  dataSensorP$voltRead = 18U
};
#line 67
typedef int dataSensorP$__nesc_sillytask_voltRead[dataSensorP$voltRead];
#line 12
bool dataSensorP$initialized[1000];
FILE *dataSensorP$file[1000];
typedef struct dataSensorP$__nesc_unnamed4362 {
#line 14
  uint16_t temp;
#line 14
  uint16_t photo;
#line 14
  uint16_t volt;
} 
#line 14
dataSensorP$reg_t;
dataSensorP$reg_t dataSensorP$lastReg[1000];

static inline void dataSensorP$resetDataFile(void );
#line 38
static inline void dataSensorP$Boot$booted(void );




static void dataSensorP$readReg(void );
#line 59
static inline void dataSensorP$tempRead$runTask(void );



static inline void dataSensorP$photoRead$runTask(void );



static inline void dataSensorP$voltRead$runTask(void );




static inline error_t dataSensorP$Temp$read(void );
static inline error_t dataSensorP$Photo$read(void );
static inline error_t dataSensorP$Volt$read(void );
# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$toggle(void );
static bool LedsP$Led0$get(void );


static void LedsP$Led0$makeOutput(void );
#line 40
static void LedsP$Led0$set(void );
static void LedsP$Led0$clr(void );
static void LedsP$Led1$toggle(void );
static bool LedsP$Led1$get(void );


static void LedsP$Led1$makeOutput(void );
#line 40
static void LedsP$Led1$set(void );
static void LedsP$Led1$clr(void );
static void LedsP$Led2$toggle(void );
static bool LedsP$Led2$get(void );


static void LedsP$Led2$makeOutput(void );
#line 40
static void LedsP$Led2$set(void );
static void LedsP$Led2$clr(void );
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 74
static void LedsP$Leds$led0On(void );




static void LedsP$Leds$led0Off(void );




static inline void LedsP$Leds$led0Toggle(void );




static void LedsP$Leds$led1On(void );




static void LedsP$Leds$led1Off(void );




static inline void LedsP$Leds$led1Toggle(void );




static void LedsP$Leds$led2On(void );




static void LedsP$Leds$led2Off(void );




static inline void LedsP$Leds$led2Toggle(void );




static inline uint8_t LedsP$Leds$get(void );
#line 136
static inline void LedsP$Leds$set(uint8_t val);
# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
static void /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$dataReady(void );
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
static error_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataReady$postTask(void );
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
enum /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$__nesc_unnamed4363 {
#line 16
  dataQueueP$2$dataReady = 19U
};
#line 16
typedef int /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$__nesc_sillytask_dataReady[/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataReady];
#line 9
bool /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ[1000];


/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataType /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qData[1000][10];
uint8_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qHead[1000];
#line 13
uint8_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qTail[1000];
#line 13
uint8_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[1000];


static inline void /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataReady$runTask(void );




static inline error_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$put(void *Data);
#line 37
static inline error_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$get(void *Data);
#line 70
static inline uint8_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$size(void );
#line 84
static inline error_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$clearAll(void );
# 48 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
/*TerraVMAppC.evtQ*/QueueC$0$queue_t  /*TerraVMAppC.evtQ*/QueueC$0$queue[1000][6];
uint8_t /*TerraVMAppC.evtQ*/QueueC$0$head[1000];
uint8_t /*TerraVMAppC.evtQ*/QueueC$0$tail[1000];
uint8_t /*TerraVMAppC.evtQ*/QueueC$0$size[1000];

static inline bool /*TerraVMAppC.evtQ*/QueueC$0$Queue$empty(void );



static inline uint8_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$size(void );



static inline uint8_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$maxSize(void );



static inline /*TerraVMAppC.evtQ*/QueueC$0$queue_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$head(void );



static void /*TerraVMAppC.evtQ*/QueueC$0$printQueue(void );
#line 85
static /*TerraVMAppC.evtQ*/QueueC$0$queue_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$dequeue(void );
#line 97
static error_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$enqueue(/*TerraVMAppC.evtQ*/QueueC$0$queue_t newVal);
# 78 "/opt/tinyos-2.1.2/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 78
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 130
static inline void expand_heap(heap_t *heap)
#line 130
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 144
{
  int findex = heap->size;

#line 146
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 88
static inline int is_empty(heap_t *heap)
#line 88
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 92
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 96
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 317 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 317
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 306
inline static unsigned int sim_log_hash(void *key)
#line 306
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 159
static inline void sim_log_init()
#line 159
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 130 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 130
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 134
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 140
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 64 "/opt/tinyos-2.1.2/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP$SimMote$isOn(void )
#line 64
{
  return SimMoteP$isOn[sim_node()];
}

# 172 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 172
{
  sim_log_channel_t *channel;

#line 174
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 180
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 212
{
  sim_log_channel_t *channel;
  int i;

#line 215
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 224
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 161 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 161
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 163
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/opt/tinyos-2.1.2/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 284 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 284
{
  dummy = 5;
}

# 50 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 50
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 236 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt)
#line 236
{
  message_t *m = (message_t *)evt->data;

#line 238
  sim_log_debug(291U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  TossimActiveMessageC$Model$receive(m);
}

static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 242
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 244
  evt->mote = node;
  evt->time = t;
  evt->handle = TossimActiveMessageC$active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 65 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg)
#line 65
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 177
static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg)
#line 177
{
  return __nesc_ntoh_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata);
}

# 88 "/opt/tinyos-2.1.2/tos/lib/tossim/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$amAddress(void )
#line 88
{
  return ActiveMessageAddressC$ActiveMessageAddress$amAddress();
}

# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
inline static am_addr_t TossimActiveMessageC$amAddress(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = ActiveMessageAddressC$amAddress();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
#line 136
static inline am_addr_t TossimActiveMessageC$AMPacket$address(void )
#line 136
{
  return TossimActiveMessageC$amAddress();
}

#line 160
static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg)
#line 160
{
  return TossimActiveMessageC$AMPacket$destination(amsg) == TossimActiveMessageC$AMPacket$address() || 
  TossimActiveMessageC$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
inline static am_addr_t BasicServicesP$RadioAMPacket$source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = TossimActiveMessageC$AMPacket$source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 8 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t BasicServicesP$inQ$put(void *Data){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$put(Data);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 509 "BasicServicesP.nc"
static inline void BasicServicesP$recReqDataNet_receive(message_t *msg, void *payload, uint8_t len)
#line 509
{
  reqData_t *xmsg;

#line 511
  sim_log_debug(364U, "terra", "BS::recReqDataNet_receive().\n");

  memcpy(BasicServicesP$tempInputInQ[sim_node()].Data, payload, sizeof(reqData_t ));
  xmsg = (reqData_t *)BasicServicesP$tempInputInQ[sim_node()].Data;
  __nesc_hton_uint8(BasicServicesP$tempInputInQ[sim_node()].AM_ID.nxdata, AM_REQDATA);
  __nesc_hton_uint8(BasicServicesP$tempInputInQ[sim_node()].DataSize.nxdata, sizeof(reqData_t ));

  if (BasicServicesP$inQ$put(&BasicServicesP$tempInputInQ[sim_node()]) != SUCCESS) {
#line 518
    sim_log_debug(365U, "terra", "BS::recReqDataNet_receive(): inQueue is full! Losting a message.\n");
    }
}

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

#line 310
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 8 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t BasicServicesP$outQ$put(void *Data){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$put(Data);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 476 "BasicServicesP.nc"
static inline void BasicServicesP$recSetDataNDNet_receive(message_t *msg, void *payload, uint8_t len)
#line 476
{
  setDataND_t *xmsg;

#line 478
  sim_log_debug(357U, "terra", "BS::recSetDataNDNet_receive().\n");

  memcpy(BasicServicesP$tempInputInQ[sim_node()].Data, payload, sizeof(setDataND_t ));
  xmsg = (setDataND_t *)BasicServicesP$tempInputInQ[sim_node()].Data;
  __nesc_hton_uint8(BasicServicesP$tempInputInQ[sim_node()].AM_ID.nxdata, AM_SETDATAND);
  __nesc_hton_uint8(BasicServicesP$tempInputInQ[sim_node()].DataSize.nxdata, sizeof(setDataND_t ));

  if (__nesc_ntoh_uint16(xmsg->versionId.nxdata) != __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata)) {
#line 485
      sim_log_debug(358U, "terra", "BS::recSetDataNDNet_receive(): Discarding old version!\n");
#line 485
      return;
    }
#line 486
  if (__nesc_ntoh_uint16(xmsg->seq.nxdata) < __nesc_ntoh_uint16(BasicServicesP$NewDataSeq[sim_node()].nxdata) + 1) {
#line 486
      sim_log_debug(359U, "terra", "BS::recSetDataNDNet_receive(): Discarding old data!\n");
#line 486
      return;
    }
  if (BasicServicesP$inQ$put(&BasicServicesP$tempInputInQ[sim_node()]) != SUCCESS) {
#line 488
    sim_log_debug(360U, "terra", "BS::recSetDataNDNet_receive(): inQueue is full! Losting a message.\n");
    }
  __nesc_hton_uint16(BasicServicesP$NewDataMoteSource[sim_node()].nxdata, BasicServicesP$RadioAMPacket$source(msg));

  if (__nesc_ntoh_uint16(xmsg->seq.nxdata) == __nesc_ntoh_uint16(BasicServicesP$NewDataSeq[sim_node()].nxdata) + 1) {
      __nesc_hton_uint16(BasicServicesP$tempInputInQ[sim_node()].sendToMote.nxdata, AM_BROADCAST_ADDR);
      if (BasicServicesP$outQ$put(&BasicServicesP$tempInputInQ[sim_node()]) != SUCCESS) {
#line 494
        sim_log_debug(361U, "terra", "BS::recSetDataNDNet_receive(): outQueue is full! Losting a message.\n");
        }
    }
}

#line 460
static inline void BasicServicesP$recReqProgBlockNet_receive(message_t *msg, void *payload, uint8_t len)
#line 460
{
  reqProgBlock_t *xmsg;

#line 462
  sim_log_debug(355U, "terra", "BS::recReqProgBlockNet_receive().\n");

  memcpy(BasicServicesP$tempInputInQ[sim_node()].Data, payload, sizeof(reqProgBlock_t ));
  xmsg = (reqProgBlock_t *)BasicServicesP$tempInputInQ[sim_node()].Data;
  __nesc_hton_uint8(BasicServicesP$tempInputInQ[sim_node()].AM_ID.nxdata, AM_REQPROGBLOCK);
  __nesc_hton_uint8(BasicServicesP$tempInputInQ[sim_node()].DataSize.nxdata, sizeof(reqProgBlock_t ));

  if (BasicServicesP$inQ$put(&BasicServicesP$tempInputInQ[sim_node()]) != SUCCESS) {
#line 469
    sim_log_debug(356U, "terra", "BS::recReqProgBlockNet_receive(): inQueue is full! Losting a message.\n");
    }
}

#line 522
static inline message_t *BasicServicesP$RadioReceiver$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 522
{
  sim_log_debug(366U, "terra", "BS::RadioReceiver.receive(). AM=%hhu from %hhu.  disseminatorRoot=%d\n", id, BasicServicesP$RadioAMPacket$source(msg), BasicServicesP$disseminatorRoot[sim_node()]);

  switch (id) {
      case AM_NEWPROGVERSION: 
        BasicServicesP$recNewProgVersionNet_receive(msg, payload, len);
      break;
      case AM_NEWPROGBLOCK: 
        BasicServicesP$recNewProgBlockNet_receive(msg, payload, len);
      break;
      case AM_REQPROGBLOCK: 
        BasicServicesP$recReqProgBlockNet_receive(msg, payload, len);
      break;
      case AM_SETDATAND: 
        BasicServicesP$recSetDataNDNet_receive(msg, payload, len);
      break;
      case AM_REQDATA: 
        BasicServicesP$recReqDataNet_receive(msg, payload, len);
      break;
      default: 
        if (id >= AM_CUSTOM_START && id <= AM_CUSTOM_END) {
            if (BasicServicesP$loadingProgramFlag[sim_node()] == FALSE) {
                BasicServicesP$recCustomMsgNet_receive(msg, payload, len);
              }
          }
        else 
#line 546
          {
            sim_log_debug(367U, "terra", "BS::RadioReceiver.receive(). Received a undefined AM=%hhu from %hhu\n", id, BasicServicesP$RadioAMPacket$source(msg));
          }
      break;
    }
  return msg;
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Receive$receive(am_id_t arg_0x40c04ac8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = BasicServicesP$RadioReceiver$receive(arg_0x40c04ac8, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataReady$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataReady);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 139 "/opt/tinyos-2.1.2/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id)
{
  return SimSchedulerBasicP$m_next[sim_node()][id] != SimSchedulerBasicP$NO_TASK || SimSchedulerBasicP$m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP$pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP$isWaiting(id)) 
    {
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_head[sim_node()] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_tail[sim_node()]] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 69
static inline int SimSchedulerBasicP$sim_config_task_latency(void )
#line 69
{
#line 69
  return 100;
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataReady$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataReady);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 61 "/opt/tinyos-2.1.2/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getStartTime(void )
#line 61
{
  return SimMoteP$startTime[sim_node()];
}

# 127 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void )
#line 127
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 154
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t)
#line 154
{
  t *= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 53 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4314 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 147 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
inline static am_id_t BasicServicesP$RadioAMPacket$type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = TossimActiveMessageC$AMPacket$type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t VMCustomP$BCRadio_receive$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(VMCustomP$BCRadio_receive);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 320 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$BSRadio$receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len)
#line 320
{
  sim_log_debug(479U, "terra", "Custom::BSRadio.receive(): AM_ID = %d\n", am_id);
  if (am_id == AM_USRMSG) {
      memcpy(&VMCustomP$ExtDataRadioReceived[sim_node()], payload, sizeof(usrMsg_t ));
      VMCustomP$BCRadio_receive$postTask();
    }
  else 
#line 325
    {
      sim_log_debug(480U, "terra", "Custom::BSRadio.receive(): Discarting AM_ID = %d\n", am_id);
    }
}

# 12 "BSRadio.nc"
inline static void BasicServicesP$BSRadio$receive(uint8_t am_id, message_t *msg, void *payload, uint8_t len){
#line 12
  VMCustomP$BSRadio$receive(am_id, msg, payload, len);
#line 12
}
#line 12
# 216 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 216
{
  return msg;
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Snoop$receive(am_id_t arg_0x40c01178, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = TossimActiveMessageC$Snoop$default$receive(arg_0x40c01178, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 52 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim_serial_packet.c"
inline static serial_header_t *getSerialHeader(message_t *msg)
#line 52
{
  return (serial_header_t *)(msg->data - sizeof(serial_header_t ));
}

# 557 "BasicServicesP.nc"
static inline message_t *BasicServicesP$SerialReceiver$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 557
{
  if (__nesc_ntoh_uint16(BasicServicesP$MoteID[sim_node()].nxdata) == RootNode) {
      sim_log_debug(368U, "terra", "BS::SerialReceiver.receive(). AM=%hhu from %hhu.  disseminatorRoot=%d\n", id, 0, BasicServicesP$disseminatorRoot[sim_node()]);

      switch (id) {
          case AM_NEWPROGVERSION: 
            BasicServicesP$recNewProgVersionNet_receive(msg, payload, len);
          break;
          case AM_NEWPROGBLOCK: 
            BasicServicesP$recNewProgBlockNet_receive(msg, payload, len);
          break;
          default: 
            if (id >= AM_CUSTOM_START && id <= AM_CUSTOM_END) {
                if (BasicServicesP$loadingProgramFlag[sim_node()] == FALSE) {
                    BasicServicesP$recCustomMsgNet_receive(msg, payload, len);
                  }
              }
            else 
#line 573
              {
                sim_log_debug(369U, "terra", "BS::SerialReceiver.receive(). Received a undefined AM=%hhu from %hhu\n", id, 0);
              }
          break;
        }
    }
  return msg;
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
inline static message_t * SerialActiveMessageC$Receive$receive(am_id_t arg_0x40d22548, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = BasicServicesP$SerialReceiver$receive(arg_0x40d22548, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 70 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
static inline serial_header_t *SerialActiveMessageC$getHeader(message_t *amsg)
#line 70
{
  return (serial_header_t *)(amsg->data - sizeof(serial_header_t ));
}

#line 237
static inline uint8_t SerialActiveMessageC$Packet$payloadLength(message_t *msg)
#line 237
{
  return __nesc_ntoh_uint8(SerialActiveMessageC$getHeader(msg)->length.nxdata);
}

#line 233
static inline uint8_t SerialActiveMessageC$Packet$maxPayloadLength(void )
#line 233
{
  return 29;
}

#line 221
static inline void *SerialActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len)
#line 221
{
  if (len <= 29) {
      return msg->data;
    }
  else 
#line 224
    {
      return (void *)0;
    }
}

#line 139
static inline void SerialActiveMessageC$Model$receive(message_t *msg)
#line 139
{
  uint8_t len;
  void *payload;

  memcpy(SerialActiveMessageC$bufferPointer[sim_node()], msg, sizeof(message_t ));

  if (msg != (void *)0) {
      free(msg);
    }

  payload = SerialActiveMessageC$Packet$getPayload(SerialActiveMessageC$bufferPointer[sim_node()], SerialActiveMessageC$Packet$maxPayloadLength());
  len = SerialActiveMessageC$Packet$payloadLength(SerialActiveMessageC$bufferPointer[sim_node()]);

  sim_log_debug(333U, "Serial", "Received serial message (%p) of type %hhu and length %hhu @ %s.\n", SerialActiveMessageC$bufferPointer[sim_node()], SerialActiveMessageC$AMPacket$type(SerialActiveMessageC$bufferPointer[sim_node()]), len, sim_time_string());

  SerialActiveMessageC$bufferPointer[sim_node()] = SerialActiveMessageC$Receive$receive(SerialActiveMessageC$AMPacket$type(SerialActiveMessageC$bufferPointer[sim_node()]), 
  SerialActiveMessageC$bufferPointer[sim_node()], payload, len);
}

#line 272
static inline void SerialActiveMessageC$serial_active_message_deliver_handle(sim_event_t *evt)
#line 272
{
  message_t *m = (message_t *)evt->data;

#line 274
  SerialActiveMessageC$Model$receive(m);
}

static inline sim_event_t *SerialActiveMessageC$allocate_serial_deliver_event(int node, message_t *msg, sim_time_t t)
#line 277
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));
  message_t *newMsg = (message_t *)malloc(sizeof(message_t ));
  uint8_t payloadLength = __nesc_ntoh_uint8(((serial_header_t *)msg->header)->length.nxdata);

#line 281
  memcpy(SerialActiveMessageC$getHeader(newMsg), msg, sizeof(serial_header_t ) + payloadLength);

  evt->mote = node;
  evt->time = t;
  evt->handle = SerialActiveMessageC$serial_active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = newMsg;
  return evt;
}

# 89 "/opt/tinyos-2.1.2/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 89
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 97
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 101
  __nesc_disable_interrupt();
  return result;
}



#line 106
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 85 "/opt/tinyos-2.1.2/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e)
#line 85
{
  SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP$Scheduler$runNextTask()) {
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e)
#line 103
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP$sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void )
{
  sim_log_debug(278U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP$m_next[sim_node()], SimSchedulerBasicP$NO_TASK, sizeof SimSchedulerBasicP$m_next[sim_node()]);
    SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$NO_TASK;
    SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;

    SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP$sim_scheduler_event_init(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
  }
}

# 57 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Scheduler.nc"
inline static void SimMainP$Scheduler$init(void ){
#line 57
  SimSchedulerBasicP$Scheduler$init();
#line 57
}
#line 57
# 120 "/opt/tinyos-2.1.2/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP$popTask(void )
{
  if (SimSchedulerBasicP$m_head[sim_node()] != SimSchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP$m_head[sim_node()];

#line 125
      SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_head[sim_node()]];
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;
        }
      SimSchedulerBasicP$m_next[sim_node()][id] = SimSchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP$NO_TASK;
    }
}

# 552 "TerraVMC.nc"
static inline int TerraVMC$ceu_go_event(int *ret, int id, uint8_t auxId, void *data)
{
  sim_log_debug(71U, "terra", "CEU::ceu_go_event(): halted=%s - evt slotAddr=%d, auxId=%d\n", TerraVMC$haltedFlag[sim_node()] ? "TRUE" : "FALSE", id, auxId);

  if (TerraVMC$haltedFlag[sim_node()]) {
#line 556
    return 0;
    }
  (&TerraVMC$CEU_[sim_node()])->ext_data = data;
  (&TerraVMC$CEU_[sim_node()])->stack = 0x01;
  TerraVMC$ceu_trigger(id, auxId);

  (&TerraVMC$CEU_[sim_node()])->wclk_late--;

  return TerraVMC$ceu_go(ret);
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t TerraVMC$procEvent$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TerraVMC$procEvent);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 285 "TerraVMC.nc"
static inline uint16_t TerraVMC$getEvtCeuId(uint8_t EvtId)
#line 285
{
  uint8_t i = 0;
  uint8_t slotSize;
  uint16_t currSlot = TerraVMC$gate0[sim_node()];

#line 289
  slotSize = __nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC$MEM[sim_node()] + currSlot + 1)).nxdata) & 0x80 ? 3 : 2;
  sim_log_debug(60U, "terra", "VM::getEvtCeuId(): EvtId?=%d : currSlot=%d,  slotId=%d, slotSize=%d, i=%d, inEvts=%d\n", EvtId, currSlot, __nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC$MEM[sim_node()] + currSlot)).nxdata), slotSize, i, TerraVMC$inEvts[sim_node()]);

  while (EvtId != __nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC$MEM[sim_node()] + currSlot)).nxdata) && i < TerraVMC$inEvts[sim_node()]) {
      i++;
      currSlot = currSlot + 1 + (__nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC$MEM[sim_node()] + currSlot + 1)).nxdata) & 0x7f) * slotSize + 1;
      slotSize = __nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC$MEM[sim_node()] + currSlot + 1)).nxdata) & 0x80 ? 3 : 2;
      sim_log_debug(61U, "terra", "VM::getEvtCeuId(): EvtId?=%d : currSlot=%d,  slotId=%d, slotSize=%d, i=%d, inEvts=%d\n", EvtId, currSlot, __nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC$MEM[sim_node()] + currSlot)).nxdata), slotSize, i, TerraVMC$inEvts[sim_node()]);
    }
  if (EvtId != __nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC$MEM[sim_node()] + currSlot)).nxdata)) {
      sim_log_debug(62U, "terra", "WARNING: Not found slot for event %d!\n", EvtId);
      return 0;
    }
  return currSlot + 1;
}

# 81 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Queue.nc"
inline static TerraVMC$evtQ$t  TerraVMC$evtQ$dequeue(void ){
#line 81
  struct evtData __nesc_result;
#line 81

#line 81
  __nesc_result = /*TerraVMAppC.evtQ*/QueueC$0$Queue$dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 57 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
static inline uint8_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$size(void )
#line 57
{
  return /*TerraVMAppC.evtQ*/QueueC$0$size[sim_node()];
}

# 58 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Queue.nc"
inline static uint8_t TerraVMC$evtQ$size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*TerraVMAppC.evtQ*/QueueC$0$Queue$size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 1659 "TerraVMC.nc"
static inline void TerraVMC$procEvent$runTask(void )
#line 1659
{
  evtData_t evtData;
  uint16_t ceuId;

#line 1662
  sim_log_debug(214U, "terra", "VM::procEvent(): haltedFlag = %s, procFlag=%s\n", TerraVMC$haltedFlag[sim_node()] ? "TRUE" : "FALSE", TerraVMC$procFlag[sim_node()] ? "TRUE" : "FALSE");
  if (TerraVMC$haltedFlag[sim_node()] == TRUE) {
      TerraVMC$evtQ$dequeue();
      return;
    }

  if (TerraVMC$evtQ$size() > 0 && TerraVMC$procFlag[sim_node()] == FALSE) {

      sim_log_debug(215U, "terra", "VM::procEvent(): Dequeue an event and ...\n");
      evtData = TerraVMC$evtQ$dequeue();
      sim_log_debug(216U, "terra", "VM::procEvent(): ... calling ceu_go_event() for evtId=%d, auxId=%d\n", evtData.evtId, evtData.auxId);
      ceuId = TerraVMC$getEvtCeuId(evtData.evtId);
      if (ceuId == 0) {
          sim_log_debug(217U, "terra", "VM::procEvent(): Discarding event %d\n", evtData.evtId);
          TerraVMC$procEvent$postTask();
        }
      else 
#line 1677
        {
          TerraVMC$ceu_go_event((void *)0, ceuId, evtData.auxId, evtData.data);
        }
    }
  sim_log_debug(218U, "terra", "VM::procEvent()...\n");
}

#line 75
static inline void TerraVMC$BSBoot$booted(void )
#line 75
{
  __nesc_hton_uint16(TerraVMC$MoteID[sim_node()].nxdata, TOS_NODE_ID);
}

# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
inline static void BasicServicesP$BSBoot$booted(void ){
#line 60
  TerraVMC$BSBoot$booted();
#line 60
}
#line 60
# 203 "BasicServicesP.nc"
static inline uint32_t BasicServicesP$getRequestTimeout(void )
#line 203
{
#line 203
  return REQUEST_TIMEOUT;
}

# 222 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 109
  unsigned int __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void BasicServicesP$ProgReqTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(3U, dt);
#line 73
}
#line 73
# 208 "BasicServicesP.nc"
static inline void BasicServicesP$RadioControl$startDone(error_t error)
#line 208
{
  sim_log_debug(340U, "terra", "BS::RadioControl.startDone().\n");
  __nesc_hton_uint16(BasicServicesP$MoteID[sim_node()].nxdata, TOS_NODE_ID);




  if (BasicServicesP$firstInic[sim_node()]) {
      reqProgBlock_t Data;

      BasicServicesP$firstInic[sim_node()] = FALSE;

      BasicServicesP$ReqState[sim_node()] = RO_NEW_VERSION;
      __nesc_hton_uint8(Data.reqOper.nxdata, RO_NEW_VERSION);
      __nesc_hton_uint16(Data.versionId.nxdata, 0);
      __nesc_hton_uint16(Data.blockId.nxdata, 0);
      __nesc_hton_uint16(BasicServicesP$ProgMoteSource[sim_node()].nxdata, AM_BROADCAST_ADDR);
      BasicServicesP$sendReqProgBlock(&Data);

      BasicServicesP$ProgReqTimer$startOneShot(BasicServicesP$getRequestTimeout());
    }





  BasicServicesP$BSBoot$booted();
}

# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$startDone(error_t error){
#line 113
  BasicServicesP$RadioControl$startDone(error);
#line 113
}
#line 113
# 96 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$startDoneTask$runTask(void )
#line 96
{
  TossimPacketModelC$running[sim_node()] = TRUE;
  TossimPacketModelC$Control$startDone(SUCCESS);
}

# 237 "BasicServicesP.nc"
static inline void BasicServicesP$RadioControl$stopDone(error_t error)
#line 237
{
  sim_log_debug(341U, "terra", "BS::RadioControl.stopDone().\n");
}

# 138 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$stopDone(error_t error){
#line 138
  BasicServicesP$RadioControl$stopDone(error);
#line 138
}
#line 138
# 101 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$stopDoneTask$runTask(void )
#line 101
{
  TossimPacketModelC$running[sim_node()] = FALSE;
  TossimPacketModelC$Control$stopDone(SUCCESS);
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

# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void TossimActiveMessageC$AMSend$sendDone(am_id_t arg_0x40c04108, message_t * msg, error_t error){
#line 110
  BasicServicesP$RadioSender$sendDone(arg_0x40c04108, msg, error);
#line 110
}
#line 110
# 103 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result)
#line 103
{
  TossimActiveMessageC$AMSend$sendDone(TossimActiveMessageC$AMPacket$type(msg), msg, result);
}

# 76 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error){
#line 76
  TossimActiveMessageC$Model$sendDone(msg, error);
#line 76
}
#line 76
# 82 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg)
#line 82
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 145
static inline void TossimPacketModelC$sendDoneTask$runTask(void )
#line 145
{
  message_t *msg = TossimPacketModelC$sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 148
  __nesc_hton_uint8(meta->ack.nxdata, 0);
  __nesc_hton_int8(meta->strength.nxdata, 0);
  __nesc_hton_uint16(meta->time.nxdata, 0);
  TossimPacketModelC$sending[sim_node()] = FALSE;
  TossimPacketModelC$Packet$sendDone(msg, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

# 1239 "BasicServicesP.nc"
static inline void BasicServicesP$SerialControl$startDone(error_t error)
#line 1239
{
}

# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static void SerialActiveMessageC$SplitControl$startDone(error_t error){
#line 113
  BasicServicesP$SerialControl$startDone(error);
#line 113
}
#line 113
# 74 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
static inline void SerialActiveMessageC$startDone$runTask(void )
#line 74
{
#line 74
  SerialActiveMessageC$SplitControl$startDone(SUCCESS);
}

# 1235 "BasicServicesP.nc"
static inline void BasicServicesP$SerialControl$stopDone(error_t error)
#line 1235
{
}

# 138 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static void SerialActiveMessageC$SplitControl$stopDone(error_t error){
#line 138
  BasicServicesP$SerialControl$stopDone(error);
#line 138
}
#line 138
# 75 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
static inline void SerialActiveMessageC$stopDone$runTask(void )
#line 75
{
#line 75
  SerialActiveMessageC$SplitControl$stopDone(SUCCESS);
}

# 1097 "BasicServicesP.nc"
static inline void BasicServicesP$SerialSender$sendDone(am_id_t id, message_t *msg, error_t error)
#line 1097
{
}

# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void SerialActiveMessageC$AMSend$sendDone(am_id_t arg_0x40d23ae8, message_t * msg, error_t error){
#line 110
  BasicServicesP$SerialSender$sendDone(arg_0x40d23ae8, msg, error);
#line 110
}
#line 110
# 115 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
static inline void SerialActiveMessageC$Model$sendDone(message_t *msg, error_t result)
#line 115
{
  SerialActiveMessageC$AMSend$sendDone(SerialActiveMessageC$AMPacket$type(msg), msg, result);
}

static inline void SerialActiveMessageC$modelSendDone$runTask(void )
{
  SerialActiveMessageC$Model$sendDone(SerialActiveMessageC$sendMsgPtr[sim_node()], SUCCESS);
}

# 29 "BSUpload.nc"
inline static void BasicServicesP$BSUpload$start(bool resetFlag){
#line 29
  TerraVMC$BSUpload$start(resetFlag);
#line 29
}
#line 29
# 145 "BasicServicesP.nc"
static inline void BasicServicesP$TViewer(char *cmd, uint16_t p1, uint16_t p2)
#line 145
{
  sim_log_debug(335U, "TVIEW", "<<: %s %d %d %d :>>\n", cmd, TOS_NODE_ID, p1, p2);
}

# 87 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
inline static bool BasicServicesP$BM$isAllBitSet(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$isAllBitSet();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 701 "BasicServicesP.nc"
static inline void BasicServicesP$ProgReqTimerTask$runTask(void )
#line 701
{
  uint16_t nextBlock = CURRENT_MAX_BLOCKS;
  reqProgBlock_t Data;
  uint32_t timeout = BasicServicesP$getRequestTimeout();

#line 705
  nextBlock = BasicServicesP$getNextEmptyBlock();
  sim_log_debug(377U, "terra", "BS::ProgReqTimer.fired(). nextBlock=%d\n", nextBlock);
  __nesc_hton_uint16(BasicServicesP$lastRecNewProgVersion[sim_node()].nxdata, 0);
  switch (BasicServicesP$ReqState[sim_node()]) {
      case RO_NEW_VERSION: 
        BasicServicesP$ProgTimeOutCounter[sim_node()]++;

      if (BasicServicesP$ProgTimeOutCounter[sim_node()] >= 3) {
          BasicServicesP$ProgTimeOutCounter[sim_node()] = 0;
          __nesc_hton_uint16(BasicServicesP$lastRecNewProgVersion[sim_node()].nxdata, 0);
          timeout = REQUEST_VERY_LONG_TIMEOUT;
        }
      __nesc_hton_uint8(Data.reqOper.nxdata, RO_NEW_VERSION);
      __nesc_hton_uint16(Data.versionId.nxdata, 0);
      __nesc_hton_uint16(Data.blockId.nxdata, __nesc_ntoh_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata));
      __nesc_hton_uint16(BasicServicesP$ProgMoteSource[sim_node()].nxdata, AM_BROADCAST_ADDR);
      BasicServicesP$sendReqProgBlock(&Data);

      BasicServicesP$ProgReqTimer$startOneShot(timeout);
      break;
      case RO_DATA_FULL: 

        nextBlock = BasicServicesP$getNextEmptyBlock();
      if (nextBlock < __nesc_ntoh_uint16(BasicServicesP$ProgBlockLen[sim_node()].nxdata)) {
          __nesc_hton_uint8(Data.reqOper.nxdata, RO_DATA_FULL);
          BasicServicesP$ReqState[sim_node()] = RO_DATA_FULL;
          __nesc_hton_uint16(Data.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata));
          __nesc_hton_uint16(Data.blockId.nxdata, nextBlock);
          BasicServicesP$sendReqProgBlock(&Data);

          BasicServicesP$ProgReqTimer$startOneShot(BasicServicesP$getRequestTimeout());
        }
      else 
#line 736
        {

          if (BasicServicesP$BM$isAllBitSet()) {

              BasicServicesP$ReqState[sim_node()] = RO_IDLE;
              BasicServicesP$TViewer("vmstart", 0, 0);
              BasicServicesP$BSUpload$start(TRUE);
            }
        }
      break;
      case RO_DATA_SINGLE: 

        nextBlock = BasicServicesP$getNextEmptyBlock();
      if (nextBlock < CURRENT_MAX_BLOCKS) {
          __nesc_hton_uint8(Data.reqOper.nxdata, RO_DATA_SINGLE);
          BasicServicesP$ReqState[sim_node()] = RO_DATA_SINGLE;
          __nesc_hton_uint16(Data.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata));
          __nesc_hton_uint16(Data.blockId.nxdata, nextBlock);
          BasicServicesP$sendReqProgBlock(&Data);

          BasicServicesP$ProgReqTimer$startOneShot(BasicServicesP$getRequestTimeout());
        }
      else 
#line 757
        {

          if (BasicServicesP$BM$isAllBitSet()) {

              BasicServicesP$ReqState[sim_node()] = RO_IDLE;
              BasicServicesP$TViewer("vmstart", 0, 0);
              BasicServicesP$BSUpload$start(TRUE);
            }
        }
      break;
    }
}

# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t BasicServicesP$inQ$get(void *Data){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$get(Data);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t BasicServicesP$procInputEvent$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(BasicServicesP$procInputEvent);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 50 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
inline static bool BasicServicesP$BM$get(uint16_t bitnum){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$get(bitnum);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 1799 "TerraVMC.nc"
static inline uint8_t *TerraVMC$BSUpload$getSection(uint16_t Addr)
#line 1799
{
  return (uint8_t *)&TerraVMC$CEU_data[sim_node()][Addr];
}

# 38 "BSUpload.nc"
inline static uint8_t *BasicServicesP$BSUpload$getSection(uint16_t Addr){
#line 38
  unsigned char *__nesc_result;
#line 38

#line 38
  __nesc_result = TerraVMC$BSUpload$getSection(Addr);
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38
# 1111 "BasicServicesP.nc"
static inline void BasicServicesP$sendNewProgVersion(newProgVersion_t *Data)
#line 1111
{
  sim_log_debug(399U, "terra", "BS::sendNewProgVersion(): insert in outQueue\n");
  memcpy(& BasicServicesP$tempInputOutQ[sim_node()].Data, Data, sizeof(newProgVersion_t ));
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].AM_ID.nxdata, AM_NEWPROGVERSION);
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].DataSize.nxdata, sizeof(newProgVersion_t ));
  __nesc_hton_uint16(BasicServicesP$tempInputOutQ[sim_node()].sendToMote.nxdata, AM_BROADCAST_ADDR);
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].reqAck.nxdata, 0);
  if (BasicServicesP$outQ$put(&BasicServicesP$tempInputOutQ[sim_node()]) != SUCCESS) {
      sim_log_debug(400U, "terra", "BS::sendNewProgVersion(): outQueue is full! Losting a message.\n");
    }
}

# 1765 "TerraVMC.nc"
static inline void TerraVMC$BSUpload$getEnv(newProgVersion_t *data)
#line 1765
{
  sim_log_debug(224U, "terra", "VM::BSUpload.getEnv()\n");
  __nesc_hton_uint16(data->startProg.nxdata, TerraVMC$ProgStart[sim_node()]);
  __nesc_hton_uint16(data->endProg.nxdata, TerraVMC$ProgEnd[sim_node()]);
  __nesc_hton_uint16(data->nTracks.nxdata, TerraVMC$nTracks[sim_node()]);
  __nesc_hton_uint16(data->wClocks.nxdata, TerraVMC$wClocks[sim_node()]);
  __nesc_hton_uint16(data->asyncs.nxdata, TerraVMC$asyncs[sim_node()]);
  __nesc_hton_uint16(data->wClock0.nxdata, TerraVMC$wClock0[sim_node()]);
  __nesc_hton_uint16(data->gate0.nxdata, TerraVMC$gate0[sim_node()]);
  __nesc_hton_uint16(data->inEvts.nxdata, TerraVMC$inEvts[sim_node()]);
  __nesc_hton_uint16(data->async0.nxdata, TerraVMC$async0[sim_node()]);
  sim_log_debug(225U, "terra", "VM::BSUpload.getEnv(): ProgStart=%d, ProgEnd=%d, nTracks=%d, wClocks=%d, asyncs=%d, wClock0=%d, gate0=%d, async0=%d\n", TerraVMC$ProgStart[sim_node()], TerraVMC$ProgEnd[sim_node()], TerraVMC$nTracks[sim_node()], TerraVMC$wClocks[sim_node()], TerraVMC$asyncs[sim_node()], TerraVMC$wClock0[sim_node()], TerraVMC$gate0[sim_node()], TerraVMC$async0[sim_node()]);
}

# 26 "BSUpload.nc"
inline static void BasicServicesP$BSUpload$getEnv(newProgVersion_t *data){
#line 26
  TerraVMC$BSUpload$getEnv(data);
#line 26
}
#line 26
# 657 "BasicServicesP.nc"
static inline void BasicServicesP$procRecReqProgBlock(reqProgBlock_t *Data)
#line 657
{
  newProgVersion_t xVersion;
  newProgBlock_t xBlock;
  uint8_t *mem;
  uint16_t i = 0;

#line 662
  sim_log_debug(373U, "terra", "BS::procRecReqProgBlock(). Local version=%hhu, Req Version %hhu Oper=%hhu, BM.isAllBitSet=%s\n", __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata), __nesc_ntoh_uint16(Data->versionId.nxdata), __nesc_ntoh_uint8(Data->reqOper.nxdata), BasicServicesP$BM$isAllBitSet() ? "TRUE" : "FALSE");
  switch (__nesc_ntoh_uint8(Data->reqOper.nxdata)) {
      case RO_NEW_VERSION: 
        if (__nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata) > __nesc_ntoh_uint16(Data->versionId.nxdata) && __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata) > 0 && BasicServicesP$BM$isAllBitSet()) {
            __nesc_hton_uint16(xVersion.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata));
            __nesc_hton_uint16(xVersion.blockLen.nxdata, __nesc_ntoh_uint16(BasicServicesP$ProgBlockLen[sim_node()].nxdata));
            __nesc_hton_uint16(xVersion.blockStart.nxdata, __nesc_ntoh_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata));
            BasicServicesP$BSUpload$getEnv(&xVersion);
            BasicServicesP$sendNewProgVersion(&xVersion);
          }
        else 
#line 671
          {
            sim_log_debug(374U, "terra", "BS::procRecReqProgBlock(). Request RO_NEW_VERSION discarted!\n");
          }
      break;
      case RO_DATA_FULL: 

        if (__nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata) == __nesc_ntoh_uint16(Data->versionId.nxdata) && __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata) > 0 && BasicServicesP$BM$isAllBitSet()) {
            BasicServicesP$DsmBlockCount[sim_node()] = 0;
            BasicServicesP$SendDataFullTimer$startOneShot(DISSEMINATION_TIMEOUT);
          }
        else 
#line 680
          {
            sim_log_debug(375U, "terra", "BS::procRecReqProgBlock(). Request RO_DATA_FULL discarted!\n");
          }
      break;
      case RO_DATA_SINGLE: 
        if (__nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata) == __nesc_ntoh_uint16(Data->versionId.nxdata) && __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata) > 0 && BasicServicesP$BM$get(__nesc_ntoh_uint16(Data->blockId.nxdata))) {
            __nesc_hton_uint16(xBlock.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata));
            __nesc_hton_uint16(xBlock.blockId.nxdata, __nesc_ntoh_uint16(Data->blockId.nxdata));
            mem = BasicServicesP$BSUpload$getSection(__nesc_ntoh_uint16(Data->blockId.nxdata) * BLOCK_SIZE);
            for (i = 0; i < BLOCK_SIZE; i++) __nesc_hton_uint8(xBlock.data[i].nxdata, __nesc_ntoh_uint8((* (nx_uint8_t *)(mem + i)).nxdata));
            BasicServicesP$ReqState[sim_node()] = ST_WAIT_PROG_BLK;
            BasicServicesP$sendNewProgBlock(&xBlock);
          }
        else 
#line 692
          {
            sim_log_debug(376U, "terra", "BS::procRecReqProgBlock(). Request RO_DATA_SINGLE discarted! Block=%hhu\n", BasicServicesP$BM$get(__nesc_ntoh_uint16(Data->blockId.nxdata)));
          }
      break;
    }
}

# 59 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVectorC.nc"
static inline uint16_t /*BasicServicesC.Bitmap*/vmBitVectorC$0$getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*BasicServicesC.Bitmap*/vmBitVectorC$0$ELEMENT_SIZE;
}

#line 54
static inline uint16_t /*BasicServicesC.Bitmap*/vmBitVectorC$0$getIndex(uint16_t bitnum)
{
  return bitnum / /*BasicServicesC.Bitmap*/vmBitVectorC$0$ELEMENT_SIZE;
}

#line 90
static inline void /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$set(uint16_t bitnum)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 92
    {
#line 92
      /*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[sim_node()][/*BasicServicesC.Bitmap*/vmBitVectorC$0$getIndex(bitnum)] |= /*BasicServicesC.Bitmap*/vmBitVectorC$0$getMask(bitnum);
    }
#line 93
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
inline static void BasicServicesP$BM$set(uint16_t bitnum){
#line 56
  /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$set(bitnum);
#line 56
}
#line 56
# 1816 "TerraVMC.nc"
static inline void TerraVMC$BSUpload$loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[])
#line 1816
{
  memcpy(&TerraVMC$CEU_data[sim_node()][Addr], Data, Size);
  sim_log_debug(228U, "terra", "VM::BSUpload.loadSection(): blk=%d, Addr=%d, Size=%d 1stByte=%d\n", (uint8_t )(Addr / BLOCK_SIZE), Addr, Size, __nesc_ntoh_uint8(TerraVMC$CEU_data[sim_node()][Addr].nxdata));
}

# 35 "BSUpload.nc"
inline static void BasicServicesP$BSUpload$loadSection(uint16_t Addr, uint8_t Size, uint8_t Data[]){
#line 35
  TerraVMC$BSUpload$loadSection(Addr, Size, Data);
#line 35
}
#line 35
# 164 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num].isrunning = FALSE;
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void BasicServicesP$ProgReqTimer$stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(3U);
#line 78
}
#line 78
# 625 "BasicServicesP.nc"
static inline void BasicServicesP$procNewProgBlock(newProgBlock_t *Data)
#line 625
{
  uint8_t lData[BLOCK_SIZE];
  uint16_t i;
  uint16_t Addr = 0;

#line 629
  sim_log_debug(372U, "terra", "BS::procNewProgBlock(). version=%hhu, blockId=%hhu, ReqState=%d\n", __nesc_ntoh_uint16(Data->versionId.nxdata), __nesc_ntoh_uint16(Data->blockId.nxdata), BasicServicesP$ReqState[sim_node()]);
  BasicServicesP$ProgReqTimer$stop();

  for (i = 0; i < BLOCK_SIZE; i++) lData[i] = (uint8_t )__nesc_ntoh_uint8(Data->data[i].nxdata);

  Addr = __nesc_ntoh_uint16(Data->blockId.nxdata) * BLOCK_SIZE;

  BasicServicesP$BSUpload$loadSection(Addr, (uint8_t )BLOCK_SIZE, &lData[0]);
  BasicServicesP$BM$set((uint16_t )__nesc_ntoh_uint16(Data->blockId.nxdata));

  BasicServicesP$ProgTimeOutCounter[sim_node()] = 0;

  if (BasicServicesP$BM$isAllBitSet()) {
      BasicServicesP$loadingProgramFlag[sim_node()] = FALSE;

      BasicServicesP$ReqState[sim_node()] = ST_IDLE;
      BasicServicesP$TViewer("vmstart", 0, 0);
      BasicServicesP$BSUpload$start(TRUE);
    }
  else 
#line 647
    {

      BasicServicesP$ReqState[sim_node()] = ST_WAIT_PROG_BLK;
      BasicServicesP$ProgReqTimer$startOneShot(BasicServicesP$getRequestTimeout());
    }
}

# 126 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVectorC.nc"
static inline void /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$resetRange(uint16_t from, uint16_t to)
{
  uint16_t bitnum;

  memset(/*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[sim_node()], 255, sizeof /*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[sim_node()]);

  for (bitnum = from; bitnum <= to; bitnum++) /* atomic removed: atomic calls only */
#line 132
    {
#line 132
      /*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[sim_node()][/*BasicServicesC.Bitmap*/vmBitVectorC$0$getIndex(bitnum)] &= ~/*BasicServicesC.Bitmap*/vmBitVectorC$0$getMask(bitnum);
    }
#line 132
  ;
  sim_log_debug(411U, "terra", "VM::BitVector.resetRange(): from=%d, to=%d, bits=%0x\n", from, to, (uint8_t )/*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[sim_node()][0]);
}

# 94 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVector.nc"
inline static void BasicServicesP$BM$resetRange(uint16_t from, uint16_t to){
#line 94
  /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$resetRange(from, to);
#line 94
}
#line 94
# 1750 "TerraVMC.nc"
static inline void TerraVMC$BSUpload$setEnv(newProgVersion_t *data)
#line 1750
{
  TerraVMC$ProgStart[sim_node()] = (uint16_t )__nesc_ntoh_uint16(data->startProg.nxdata);
  TerraVMC$ProgEnd[sim_node()] = (uint16_t )__nesc_ntoh_uint16(data->endProg.nxdata);
  TerraVMC$nTracks[sim_node()] = __nesc_ntoh_uint16(data->nTracks.nxdata);
  TerraVMC$wClocks[sim_node()] = __nesc_ntoh_uint16(data->wClocks.nxdata);
  TerraVMC$asyncs[sim_node()] = __nesc_ntoh_uint16(data->asyncs.nxdata);
  TerraVMC$wClock0[sim_node()] = __nesc_ntoh_uint16(data->wClock0.nxdata);
  TerraVMC$gate0[sim_node()] = __nesc_ntoh_uint16(data->gate0.nxdata);
  TerraVMC$inEvts[sim_node()] = __nesc_ntoh_uint16(data->inEvts.nxdata);
  TerraVMC$async0[sim_node()] = __nesc_ntoh_uint16(data->async0.nxdata);

  sim_log_debug(223U, "terra", "VM::BSUpload.setEnv(): ProgStart=%d, ProgEnd=%d, nTracks=%d, wClocks=%d, asyncs=%d, wClock0=%d, gate0=%d, async0=%d\n", TerraVMC$ProgStart[sim_node()], TerraVMC$ProgEnd[sim_node()], TerraVMC$nTracks[sim_node()], TerraVMC$wClocks[sim_node()], TerraVMC$asyncs[sim_node()], TerraVMC$wClock0[sim_node()], TerraVMC$gate0[sim_node()], TerraVMC$async0[sim_node()]);
}

# 23 "BSUpload.nc"
inline static void BasicServicesP$BSUpload$setEnv(newProgVersion_t *data){
#line 23
  TerraVMC$BSUpload$setEnv(data);
#line 23
}
#line 23
# 1803 "TerraVMC.nc"
static inline void TerraVMC$BSUpload$resetMemory(void )
#line 1803
{
  uint16_t i;
  uint8_t size;

#line 1806
  sim_log_debug(227U, "terra", "VM::BSUpload.resetMemory()\n");
  TerraVMC$haltedFlag[sim_node()] = TRUE;

  for (i = 0; i < (uint16_t )(BLOCK_SIZE * CURRENT_MAX_BLOCKS); i++) __nesc_hton_uint8(TerraVMC$CEU_data[sim_node()][i].nxdata, 0);

  size = TerraVMC$evtQ$size();
  for (i = 0; i < size; i++) TerraVMC$evtQ$dequeue();
}

# 32 "BSUpload.nc"
inline static void BasicServicesP$BSUpload$resetMemory(void ){
#line 32
  TerraVMC$BSUpload$resetMemory();
#line 32
}
#line 32
# 1745 "TerraVMC.nc"
static inline void TerraVMC$BSUpload$stop(void )
#line 1745
{
  sim_log_debug(222U, "terra", "VM::BSUpload.stop()\n");
  TerraVMC$haltedFlag[sim_node()] = TRUE;
}

# 20 "BSUpload.nc"
inline static void BasicServicesP$BSUpload$stop(void ){
#line 20
  TerraVMC$BSUpload$stop();
#line 20
}
#line 20
# 592 "BasicServicesP.nc"
static inline void BasicServicesP$procNewProgVersion(newProgVersion_t *Data)
#line 592
{
  sim_log_debug(370U, "terra", "BS::procNewProgVersion().\n");

  BasicServicesP$BSUpload$stop();
  BasicServicesP$BSUpload$resetMemory();
  BasicServicesP$TViewer("vmstop", 0, 0);

  __nesc_hton_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata, __nesc_ntoh_uint16(Data->versionId.nxdata));
  __nesc_hton_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata, __nesc_ntoh_uint16(Data->blockStart.nxdata));
  __nesc_hton_uint16(BasicServicesP$ProgBlockLen[sim_node()].nxdata, __nesc_ntoh_uint16(Data->blockLen.nxdata));

  BasicServicesP$BSUpload$setEnv(Data);
  sim_log_debug(371U, "terra", "BS::procNewProgVersion(). ProgBlockStart=%d, ProgBlockLen=%d \n", __nesc_ntoh_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata), __nesc_ntoh_uint16(BasicServicesP$ProgBlockLen[sim_node()].nxdata));

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 606
    BasicServicesP$BM$resetRange(__nesc_ntoh_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata), __nesc_ntoh_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata) + __nesc_ntoh_uint16(BasicServicesP$ProgBlockLen[sim_node()].nxdata) - 1);
#line 606
    __nesc_atomic_end(__nesc_atomic); }
  {
    reqProgBlock_t xData;

    BasicServicesP$ProgTimeOutCounter[sim_node()] = 0;
    __nesc_hton_uint8(xData.reqOper.nxdata, RO_DATA_FULL);
    BasicServicesP$ReqState[sim_node()] = RO_DATA_FULL;
    __nesc_hton_uint16(xData.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata));
    __nesc_hton_uint16(xData.blockId.nxdata, __nesc_ntoh_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata));
    BasicServicesP$loadingProgramFlag[sim_node()] = TRUE;
    BasicServicesP$sendReqProgBlock(&xData);

    BasicServicesP$ProgReqTimer$startOneShot(BasicServicesP$getRequestTimeout());
  }
}

# 60 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static inline error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$read(void *Data)
#line 60
{
  sim_log_debug(415U, "terra", "dataQ[%hhu]::read(). Size and FlagFree before %hhu : %s\n", 0, /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[sim_node()], /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ[sim_node()] == TRUE ? "TRUE" : "FALSE");

  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[sim_node()] <= 0) {
#line 63
    return FAIL;
    }
  memcpy(Data, (void *)&/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qData[sim_node()][/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qHead[sim_node()]], sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataType ));
  return SUCCESS;
}

# 11 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t BasicServicesP$inQ$read(void *Data){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$read(Data);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 902 "BasicServicesP.nc"
static inline void BasicServicesP$procInputEvent$runTask(void )
#line 902
{
  {
    sim_log_debug(379U, "terra", "BS::procInputEvent().\n");

    if (BasicServicesP$inQ$read(&BasicServicesP$tempOutputInQ[sim_node()]) == SUCCESS) {
        BasicServicesP$inQ$get(&BasicServicesP$tempOutputInQ[sim_node()]);
        switch (__nesc_ntoh_uint8(BasicServicesP$tempOutputInQ[sim_node()].AM_ID.nxdata)) {
            case AM_NEWPROGVERSION: BasicServicesP$procNewProgVersion((newProgVersion_t *)& BasicServicesP$tempOutputInQ[sim_node()].Data);
#line 909
            break;
            case AM_NEWPROGBLOCK: BasicServicesP$procNewProgBlock((newProgBlock_t *)& BasicServicesP$tempOutputInQ[sim_node()].Data);
#line 910
            break;
            case AM_REQPROGBLOCK: BasicServicesP$procRecReqProgBlock((reqProgBlock_t *)& BasicServicesP$tempOutputInQ[sim_node()].Data);
#line 911
            break;




            default: sim_log_debug(380U, "terra", "BS::procInputEvent(): Unknow AM_ID=%hhu\n", __nesc_ntoh_uint8(BasicServicesP$tempOutputInQ[sim_node()].AM_ID.nxdata));
#line 916
            break;
          }
        sim_log_debug(381U, "terra", "BS::procInputEvent(): nextMessage.\n");
        BasicServicesP$inQ$get(&BasicServicesP$tempOutputInQ[sim_node()]);
        BasicServicesP$procInputEvent$postTask();
      }
    else 
#line 921
      {
        BasicServicesP$inQ$get(&BasicServicesP$tempOutputInQ[sim_node()]);
        sim_log_debug(382U, "terra", "BS::procInputEvent(): inQueue is empty!\n");
      }
  }
}

# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t BasicServicesP$outQ$get(void *Data){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$get(Data);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9


inline static error_t BasicServicesP$outQ$read(void *Data){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$read(Data);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 992 "BasicServicesP.nc"
static inline void BasicServicesP$sendMessage$runTask(void )
#line 992
{
  BasicServicesP$sendCounter[sim_node()]++;
  if (BasicServicesP$outQ$read(&BasicServicesP$tempOutputOutQ[sim_node()]) == SUCCESS) {
      sim_log_debug(388U, "terra", "BS::sendMessage():AM=%hhu, senToMote=%d.\n", __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata), __nesc_ntoh_uint16(BasicServicesP$tempOutputOutQ[sim_node()].sendToMote.nxdata));
      switch (__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata)) {
          case AM_NEWPROGVERSION: BasicServicesP$sendRadioN();
#line 997
          break;
          case AM_NEWPROGBLOCK: BasicServicesP$sendRadioN();
#line 998
          break;
          case AM_REQPROGBLOCK: BasicServicesP$sendRadioN();
#line 999
          break;




          default: 
            if (__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata) >= AM_CUSTOM_START && __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata) <= AM_CUSTOM_END) {
                BasicServicesP$sendRadioN();
              }
          break;
        }
    }
  else 
#line 1010
    {
      BasicServicesP$outQ$get(&BasicServicesP$tempOutputOutQ[sim_node()]);
      sim_log_debug(389U, "terra", "BS::sendMessage(): outQueue is empty!\n");
    }
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t BasicServicesP$sendMessage$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(BasicServicesP$sendMessage);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 1029 "BasicServicesP.nc"
static inline void BasicServicesP$sendNextMsg$runTask(void )
#line 1029
{
  sim_log_debug(391U, "terra", "BS::sendNextMsg(): \n");
  if (BasicServicesP$sendCounter[sim_node()] < MAX_SEND_RETRIES) {
      BasicServicesP$sendMessage$postTask();
    }
  else 
#line 1033
    {
      BasicServicesP$outQ$get(&BasicServicesP$tempOutputOutQ[sim_node()]);
      BasicServicesP$sendCounter[sim_node()] = 0;
      BasicServicesP$sendMessage$postTask();
    }
}

#line 931
static inline void BasicServicesP$inQ$dataReady(void )
#line 931
{
  sim_log_debug(383U, "terra", "BS::inQ.dataReady().\n");
  BasicServicesP$procInputEvent$postTask();
}

# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static void /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$dataReady(void ){
#line 15
  BasicServicesP$inQ$dataReady();
#line 15
}
#line 15
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static inline void /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataReady$runTask(void )
#line 16
{
  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[sim_node()] > 0) {
    /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$dataReady();
    }
}

# 1019 "BasicServicesP.nc"
static inline void BasicServicesP$outQ$dataReady(void )
#line 1019
{
  sim_log_debug(390U, "terra", "BS::outQ.dataReady().\n");
  BasicServicesP$sendCounter[sim_node()] = 0;
  BasicServicesP$sendTimer$startOneShot(BasicServicesP$reSendDelay[sim_node()]);
}

# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static void /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$dataReady(void ){
#line 15
  BasicServicesP$outQ$dataReady();
#line 15
}
#line 15
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static inline void /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataReady$runTask(void )
#line 16
{
  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[sim_node()] > 0) {
    /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$dataReady();
    }
}

# 139 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 83
}
#line 83
# 226 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()];

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

# 116 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 116
  unsigned int __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
#line 103
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()], FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 129 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 78 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 78
}
#line 78
# 100 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

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

# 18 "VMCustom.nc"
inline static void VMCustomP$VM$queueEvt(uint8_t evtId, uint8_t auxId, void *data){
#line 18
  TerraVMC$VMCustom$queueEvt(evtId, auxId, data);
#line 18
}
#line 18
# 315 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$BCRadio_receive$runTask(void )
#line 315
{
  VMCustomP$VM$queueEvt(I_RECEIVE_ID, __nesc_ntoh_uint8(VMCustomP$ExtDataRadioReceived[sim_node()].type.nxdata), &VMCustomP$ExtDataRadioReceived[sim_node()]);
  VMCustomP$VM$queueEvt(I_RECEIVE, 0, &VMCustomP$ExtDataRadioReceived[sim_node()]);
}

# 19 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
inline static void SensActP$SA$Ready(uint8_t reqSource, uint8_t codeEvt_id){
#line 19
  VMCustomP$SA$Ready(reqSource, codeEvt_id);
#line 19
}
#line 19
# 221 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP$S_TEMP$readDone(error_t result, uint16_t val)
#line 221
{
  uint8_t source;

#line 223
  sim_log_debug(493U, "terra", "S_TEMP.readDone(): val=%d\n", val);
  __nesc_hton_uint16(SensActP$dTemp[sim_node()].nxdata, val);
  for (source = 0; source < 4; source++) 
    if (SensActP$getSReq(source, SID_TEMP) == TRUE) {
#line 226
      SensActP$SA$Ready(source, TID_SENSOR_DONE | SID_TEMP);
      }
}

# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static void dataSensorP$Temp$readDone(error_t result, dataSensorP$Temp$val_t val){
#line 63
  SensActP$S_TEMP$readDone(result, val);
#line 63
}
#line 63
# 59 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/dataSensorP.nc"
static inline void dataSensorP$tempRead$runTask(void )
#line 59
{
  dataSensorP$readReg();
  dataSensorP$Temp$readDone(SUCCESS, dataSensorP$lastReg[sim_node()].temp);
}

# 229 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP$S_PHOTO$readDone(error_t result, uint16_t val)
#line 229
{
  uint8_t source;

#line 231
  sim_log_debug(494U, "terra", "S_PHOTO.readDone(): val=%d\n", val);
  __nesc_hton_uint16(SensActP$dPhoto[sim_node()].nxdata, val);
  for (source = 0; source < 4; source++) 
    if (SensActP$getSReq(source, SID_PHOTO) == TRUE) {
#line 234
      SensActP$SA$Ready(source, TID_SENSOR_DONE | SID_PHOTO);
      }
}

# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static void dataSensorP$Photo$readDone(error_t result, dataSensorP$Photo$val_t val){
#line 63
  SensActP$S_PHOTO$readDone(result, val);
#line 63
}
#line 63
# 63 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/dataSensorP.nc"
static inline void dataSensorP$photoRead$runTask(void )
#line 63
{
  dataSensorP$readReg();
  dataSensorP$Photo$readDone(SUCCESS, dataSensorP$lastReg[sim_node()].photo);
}

# 237 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP$S_VOLT$readDone(error_t result, uint16_t val)
#line 237
{
  uint8_t source;

#line 239
  sim_log_debug(495U, "terra", "S_VOLT.readDone(): val=%d\n", val);
  __nesc_hton_uint16(SensActP$dVolt[sim_node()].nxdata, val);

  for (source = 0; source < 4; source++) 
    if (SensActP$getSReq(source, SID_VOLT) == TRUE) {
#line 243
      SensActP$SA$Ready(source, TID_SENSOR_DONE | SID_VOLT);
      }
}

# 63 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static void dataSensorP$Volt$readDone(error_t result, dataSensorP$Volt$val_t val){
#line 63
  SensActP$S_VOLT$readDone(result, val);
#line 63
}
#line 63
# 67 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/dataSensorP.nc"
static inline void dataSensorP$voltRead$runTask(void )
#line 67
{
  dataSensorP$readReg();
  dataSensorP$Volt$readDone(SUCCESS, dataSensorP$lastReg[sim_node()].volt);
}

# 70 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static inline uint8_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$size(void )
#line 70
{

  return /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[sim_node()];
}

# 12 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static uint8_t VMCustomP$usrDataQ$size(void ){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$size();
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 381 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$usrDataQ$dataReady(void )
#line 381
{
  sim_log_debug(487U, "terra", "Custom::usrDataQ.dataReady()\n");

  __nesc_hton_uint8(VMCustomP$ExtDataQReady[sim_node()].nxdata, VMCustomP$usrDataQ$size());
  VMCustomP$VM$queueEvt(I_Q_READY, 0, &VMCustomP$ExtDataQReady[sim_node()]);
}

# 15 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static void /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$dataReady(void ){
#line 15
  VMCustomP$usrDataQ$dataReady();
#line 15
}
#line 15
# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static inline void /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataReady$runTask(void )
#line 16
{
  if (/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[sim_node()] > 0) {
    /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$dataReady();
    }
}

# 221 "/opt/tinyos-2.1.2/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 75 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x407c4970){
#line 75
  switch (arg_0x407c4970) {
#line 75
    case TerraVMC$procEvent:
#line 75
      TerraVMC$procEvent$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$startDoneTask:
#line 75
      TossimPacketModelC$startDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$stopDoneTask:
#line 75
      TossimPacketModelC$stopDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$sendDoneTask:
#line 75
      TossimPacketModelC$sendDoneTask$runTask();
#line 75
      break;
#line 75
    case SerialActiveMessageC$startDone:
#line 75
      SerialActiveMessageC$startDone$runTask();
#line 75
      break;
#line 75
    case SerialActiveMessageC$stopDone:
#line 75
      SerialActiveMessageC$stopDone$runTask();
#line 75
      break;
#line 75
    case SerialActiveMessageC$modelSendDone:
#line 75
      SerialActiveMessageC$modelSendDone$runTask();
#line 75
      break;
#line 75
    case BasicServicesP$ProgReqTimerTask:
#line 75
      BasicServicesP$ProgReqTimerTask$runTask();
#line 75
      break;
#line 75
    case BasicServicesP$procInputEvent:
#line 75
      BasicServicesP$procInputEvent$runTask();
#line 75
      break;
#line 75
    case BasicServicesP$sendMessage:
#line 75
      BasicServicesP$sendMessage$runTask();
#line 75
      break;
#line 75
    case BasicServicesP$sendNextMsg:
#line 75
      BasicServicesP$sendNextMsg$runTask();
#line 75
      break;
#line 75
    case /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataReady:
#line 75
      /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataReady$runTask();
#line 75
      break;
#line 75
    case /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataReady:
#line 75
      /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataReady$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 75
      break;
#line 75
    case VMCustomP$BCRadio_receive:
#line 75
      VMCustomP$BCRadio_receive$runTask();
#line 75
      break;
#line 75
    case dataSensorP$tempRead:
#line 75
      dataSensorP$tempRead$runTask();
#line 75
      break;
#line 75
    case dataSensorP$photoRead:
#line 75
      dataSensorP$photoRead$runTask();
#line 75
      break;
#line 75
    case dataSensorP$voltRead:
#line 75
      dataSensorP$voltRead$runTask();
#line 75
      break;
#line 75
    case /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataReady:
#line 75
      /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataReady$runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SimSchedulerBasicP$TaskBasic$default$runTask(arg_0x407c4970);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 90 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Queue.nc"
inline static error_t TerraVMC$evtQ$enqueue(TerraVMC$evtQ$t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*TerraVMAppC.evtQ*/QueueC$0$Queue$enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 61 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
static inline uint8_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$maxSize(void )
#line 61
{
  return 6;
}

# 351 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline uint8_t VMCustomP$wd2ceuSensorId(uint8_t wdId)
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
static inline void *SensActP$SA$getDatap(uint8_t id)
#line 199
{
  sim_log_debug(492U, "terra", "SA.getDatap(%d)\n", id);
  switch (id) {
      case SID_TEMP: return &SensActP$dTemp[sim_node()];
      case SID_PHOTO: return &SensActP$dPhoto[sim_node()];
      case SID_LEDS: return &SensActP$dLeds[sim_node()];
      case SID_VOLT: return &SensActP$dVolt[sim_node()];
    }










  return &SensActP$dTemp[sim_node()];
}

# 27 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
inline static void *VMCustomP$SA$getDatap(uint8_t id){
#line 27
  void *__nesc_result;
#line 27

#line 27
  __nesc_result = SensActP$SA$getDatap(id);
#line 27

#line 27
  return __nesc_result;
#line 27
}
#line 27
# 15 "BSTimer.nc"
inline static void TerraVMC$BSTimerVM$startOneShot(uint32_t dt){
#line 15
  BasicServicesP$BSTimerVM$startOneShot(dt);
#line 15
}
#line 15
# 69 "TerraVMC.nc"
static inline void TerraVMC$ceu_out_wclock(uint32_t ms)
#line 69
{
#line 69
  if (ms != 0x7FFFFFFF) {
#line 69
      TerraVMC$BSTimerVM$startOneShot(ms);
    }
}

#line 604
static inline int TerraVMC$ceu_go_wclock(int *ret, s32 dt, s32 *nxt)
{
  int i;
  s32 min_togo = 0x7FFFFFFF;
  TerraVMC$tceu_wclock *CLK0 = (TerraVMC$tceu_wclock *)((&TerraVMC$CEU_[sim_node()])->p_mem + TerraVMC$wClock0[sim_node()]);

  (&TerraVMC$CEU_[sim_node()])->stack = 0x01;

  if (! (&TerraVMC$CEU_[sim_node()])->wclk_cur) {
      if (nxt) {
#line 613
        *nxt = 0x7FFFFFFF;
        }
      TerraVMC$ceu_out_wclock(0x7FFFFFFF);
      return 0;
    }
  if ((&TerraVMC$CEU_[sim_node()])->wclk_cur->togo <= dt) {
      min_togo = (&TerraVMC$CEU_[sim_node()])->wclk_cur->togo;
      (&TerraVMC$CEU_[sim_node()])->wclk_late = dt - (&TerraVMC$CEU_[sim_node()])->wclk_cur->togo;
    }




  (&TerraVMC$CEU_[sim_node()])->wclk_cur = (void *)0;
  for (i = 0; i < TerraVMC$wClocks[sim_node()]; i++) 
    {
      TerraVMC$tceu_wclock *tmr = &CLK0[i];

#line 630
      sim_log_debug(73U, "terra", "CEU::ceu_go_wclock(): Loop1 nos wClocks: tmr->togo=%d, tmr->lbl=%d\n", (unsigned int )tmr->togo, __nesc_ntoh_uint16((* (nx_uint16_t *)& tmr->lbl).nxdata));
      if (tmr->lbl == TerraVMC$Inactive) {
        continue;
        }
      if (tmr->togo == min_togo) {
          tmr->togo = 0L;
          sim_log_debug(74U, "VMDBG", "VM:: timer fired for label %d\n", __nesc_ntoh_uint16((* (nx_uint16_t *)& tmr->lbl).nxdata));
          TerraVMC$ceu_spawn(& tmr->lbl);
        }
      else 
#line 638
        {
          tmr->togo -= dt;
          if (tmr->togo < 0) {
              tmr->togo = 0L;
              TerraVMC$ceu_spawn(& tmr->lbl);
            }
          else {
#line 644
            TerraVMC$ceu_wclock_lt(tmr);
            }
        }
    }


  {
#line 650
    int s = TerraVMC$ceu_go(ret);

#line 651
    if (nxt) {
      *nxt = (&TerraVMC$CEU_[sim_node()])->wclk_cur ? (&TerraVMC$CEU_[sim_node()])->wclk_cur->togo : 0x7FFFFFFF;
      }
#line 653
    (&TerraVMC$CEU_[sim_node()])->wclk_late = 0;
    TerraVMC$ceu_out_wclock((&TerraVMC$CEU_[sim_node()])->wclk_cur ? (&TerraVMC$CEU_[sim_node()])->wclk_cur->togo : 0x7FFFFFFF);

    return s;
  }
}

# 189 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
}

# 136 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static uint32_t BasicServicesP$TimerVM$getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(0U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 252 "BasicServicesP.nc"
static inline uint32_t BasicServicesP$BSTimerVM$getNow(void )
#line 252
{
#line 252
  return BasicServicesP$TimerVM$getNow();
}

# 16 "BSTimer.nc"
inline static uint32_t TerraVMC$BSTimerVM$getNow(void ){
#line 16
  unsigned int __nesc_result;
#line 16

#line 16
  __nesc_result = BasicServicesP$BSTimerVM$getNow();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 1712 "TerraVMC.nc"
static inline void TerraVMC$BSTimerVM$fired(void )
{
  u32 now = (u32 )TerraVMC$BSTimerVM$getNow();
  s32 dt = now - TerraVMC$old[sim_node()];

#line 1716
  TerraVMC$old[sim_node()] = now;
  sim_log_debug(220U, "terra", "VM::BSTimerVM.fired(): dt=%d\n", dt);
  TerraVMC$ceu_go_wclock((void *)0, dt, (void *)0);
}

# 19 "BSTimer.nc"
inline static void BasicServicesP$BSTimerVM$fired(void ){
#line 19
  TerraVMC$BSTimerVM$fired();
#line 19
}
#line 19
# 260 "BasicServicesP.nc"
static inline void BasicServicesP$TimerVM$fired(void )
#line 260
{
  BasicServicesP$BSTimerVM$fired();
}

# 568 "TerraVMC.nc"
static inline int TerraVMC$ceu_go_async(int *ret, int *pending)
{
  int i;
#line 570
  int s = 0;
  TerraVMC$tceu_nlbl *ASY0 = (TerraVMC$tceu_nlbl *)((&TerraVMC$CEU_[sim_node()])->p_mem + TerraVMC$async0[sim_node()]);

#line 572
  sim_log_debug(72U, "terra", "CEU::ceu_go_async(): ret=%d, pending=%d, async0=%d,asyncs=%d, async_cur=%d, ASY0[0]=%d\n", ret == (void *)0 ? 0 : *ret, pending == (void *)0 ? 0 : *pending, TerraVMC$async0[sim_node()], TerraVMC$asyncs[sim_node()], (&TerraVMC$CEU_[sim_node()])->async_cur, ASY0[0]);


  for (i = 0; i < TerraVMC$asyncs[sim_node()]; i++) {
      int idx = ((&TerraVMC$CEU_[sim_node()])->async_cur + i) % TerraVMC$asyncs[sim_node()];

#line 577
      if (ASY0[idx] != TerraVMC$Inactive) {

          TerraVMC$ceu_track_ins(0x01, 0xFF, 0, ASY0[idx]);
          ASY0[idx] = TerraVMC$Inactive;
          (&TerraVMC$CEU_[sim_node()])->async_cur = (idx + 1) % TerraVMC$asyncs[sim_node()];

          (&TerraVMC$CEU_[sim_node()])->wclk_late--;
          s = TerraVMC$ceu_go(ret);
          break;
        }
    }

  if (pending != (void *)0) 
    {
      *pending = 0;
      for (i = 0; i < TerraVMC$asyncs[sim_node()]; i++) {
          if (ASY0[i] != TerraVMC$Inactive) {
              *pending = 1;
              break;
            }
        }
    }

  return s;
}

# 15 "BSTimer.nc"
inline static void TerraVMC$BSTimerAsync$startOneShot(uint32_t dt){
#line 15
  BasicServicesP$BSTimerAsync$startOneShot(dt);
#line 15
}
#line 15
# 1722 "TerraVMC.nc"
static inline bool TerraVMC$hasAsync(void )
#line 1722
{
  uint8_t i;
  TerraVMC$tceu_nlbl *ASY0 = (TerraVMC$tceu_nlbl *)((&TerraVMC$CEU_[sim_node()])->p_mem + TerraVMC$async0[sim_node()]);

#line 1725
  for (i = 0; i < TerraVMC$asyncs[sim_node()]; i++) {
      if (ASY0[i] != TerraVMC$Inactive) {
          return TRUE;
        }
    }
  return FALSE;
}

static inline void TerraVMC$BSTimerAsync$fired(void )
{
  sim_log_debug(221U, "terra", "VM::BSTimerAsync.fired()\n");
  if (TerraVMC$hasAsync()) {
#line 1736
    TerraVMC$BSTimerAsync$startOneShot(2);
    }
#line 1737
  TerraVMC$ceu_go_async((void *)0, (void *)0);
}

# 19 "BSTimer.nc"
inline static void BasicServicesP$BSTimerAsync$fired(void ){
#line 19
  TerraVMC$BSTimerAsync$fired();
#line 19
}
#line 19
# 276 "BasicServicesP.nc"
static inline void BasicServicesP$TimerAsync$fired(void )
#line 276
{
#line 276
  BasicServicesP$BSTimerAsync$fired();
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t BasicServicesP$sendNextMsg$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(BasicServicesP$sendNextMsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 1039 "BasicServicesP.nc"
static inline void BasicServicesP$sendTimer$fired(void )
#line 1039
{
  sim_log_debug(392U, "terra", "BS::sendTimer.fired(): \n");
  BasicServicesP$sendNextMsg$postTask();
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t BasicServicesP$ProgReqTimerTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(BasicServicesP$ProgReqTimerTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 770 "BasicServicesP.nc"
static inline void BasicServicesP$ProgReqTimer$fired(void )
#line 770
{
  BasicServicesP$ProgReqTimerTask$postTask();
}


static inline void BasicServicesP$SendDataFullTimer$fired(void )
#line 775
{
  newProgBlock_t xBlock;

#line 777
  sim_log_debug(378U, "terra", "BS::SendDataFullTimer.fired().\n");

  if (BasicServicesP$BM$get(BasicServicesP$DsmBlockCount[sim_node()] + __nesc_ntoh_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata))) {
      uint8_t *mem;
      uint16_t i;

#line 782
      __nesc_hton_uint16(xBlock.versionId.nxdata, __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata));
      __nesc_hton_uint16(xBlock.blockId.nxdata, (uint16_t )(BasicServicesP$DsmBlockCount[sim_node()] + __nesc_ntoh_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata)));
      mem = BasicServicesP$BSUpload$getSection((BasicServicesP$DsmBlockCount[sim_node()] + __nesc_ntoh_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata)) * BLOCK_SIZE);
      for (i = 0; i < BLOCK_SIZE; i++) __nesc_hton_uint8(xBlock.data[i].nxdata, __nesc_ntoh_uint8((* (nx_uint8_t *)(mem + i)).nxdata));
      BasicServicesP$sendNewProgBlock(&xBlock);
    }
  BasicServicesP$DsmBlockCount[sim_node()]++;
  if (BasicServicesP$DsmBlockCount[sim_node()] < __nesc_ntoh_uint16(BasicServicesP$ProgBlockLen[sim_node()].nxdata)) {

      BasicServicesP$SendDataFullTimer$startOneShot(DISSEMINATION_TIMEOUT);
    }
  else 
#line 792
    {
      BasicServicesP$ReqState[sim_node()] = ST_IDLE;
    }
}

# 204 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 83 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x4101bc70){
#line 83
  switch (arg_0x4101bc70) {
#line 83
    case 0U:
#line 83
      BasicServicesP$TimerVM$fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      BasicServicesP$TimerAsync$fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      BasicServicesP$sendTimer$fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      BasicServicesP$ProgReqTimer$fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      BasicServicesP$SendDataFullTimer$fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x4101bc70);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 199 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getdt(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num].dt;
}

# 151 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static uint32_t BasicServicesP$TimerAsync$getdt(void ){
#line 151
  unsigned int __nesc_result;
#line 151

#line 151
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getdt(1U);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
#line 78
inline static void BasicServicesP$TimerAsync$stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(1U);
#line 78
}
#line 78
#line 73
inline static void BasicServicesP$TimerAsync$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(1U, dt);
#line 73
}
#line 73
# 177 "TerraVMC.nc"
static inline uint8_t TerraVMC$getBitsPow(uint8_t data, uint8_t stBit, uint8_t endBit)
#line 177
{
#line 177
  return 1 << TerraVMC$getBits(data, stBit, endBit);
}

#line 1529
static inline void TerraVMC$f_set_c(uint8_t Modifier)
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
  tp1 = TerraVMC$getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  p1_1len = TerraVMC$getBitsPow(Modifier, 3, 3);
  p2_len = (uint8_t )(TerraVMC$getBits(Modifier, 4, 5) + 1);
  Maddr = TerraVMC$getPar16(p1_1len);
  Const = TerraVMC$getPar32(p2_len);
  sim_log_debug(211U, "terra", "VM::f_set_c(%02x): v1_len=%d, p1_1len=%d, p2_len=%d, Maddr=%d, Const=%d\n", Modifier, v1_len, p1_1len, p2_len, Maddr, Const);
  if (tp1 == F32) {
      float buffer = * (float *)&Const;

#line 1542
      TerraVMC$setMVal(* (uint32_t *)&buffer, Maddr, F32, tp1);
    }
  else 
#line 1543
    {
      TerraVMC$setMVal(Const, Maddr, S32, tp1);
    }
}

# 13 "VMCustom.nc"
inline static void TerraVMC$VMCustom$procOutEvt(uint8_t id, uint32_t value){
#line 13
  VMCustomP$VM$procOutEvt(id, value);
#line 13
}
#line 13
# 1517 "TerraVMC.nc"
static inline void TerraVMC$f_outevt_v(uint8_t Modifier)
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
  p2_1len = TerraVMC$getBitsPow(Modifier, 3, 3);
  tp2 = TerraVMC$getBits(Modifier, 0, 2);
  v2_len = tp2 == F32 ? 4 : 1 << (tp2 & 0x3);
  Cevt = TerraVMC$getPar8(1);
  Maddr = TerraVMC$getPar16(p2_1len);
  sim_log_debug(210U, "terra", "VM::f_outevt_v(%02x): Cevt=%d, Maddr=%d\n", Modifier, Cevt, Maddr);
  TerraVMC$VMCustom$procOutEvt(Cevt, Maddr);
}

#line 1494
static inline void TerraVMC$f_pop(uint8_t Modifier)
#line 1494
{
  uint8_t v1_len;
#line 1495
  uint8_t tp1;
#line 1495
  uint8_t p1_1len;
  uint16_t Maddr;

#line 1497
  p1_1len = TerraVMC$getBitsPow(Modifier, 3, 3);
  tp1 = TerraVMC$getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  Maddr = TerraVMC$getPar16(p1_1len);
  if (tp1 == F32) {
      float Value = TerraVMC$popf();

#line 1503
      sim_log_debug(207U, "terra", "VM::f_pop(%02x): tp1=%d, Maddr=%d, value=%f, \n", Modifier, tp1, Maddr, Value);
      TerraVMC$setMVal(* (uint32_t *)&Value, Maddr, F32, tp1);
    }
  else 
#line 1505
    {
      int32_t Value = TerraVMC$pop();

#line 1507
      sim_log_debug(208U, "terra", "VM::f_pop(%02x): tp1=%d, Maddr=%d, value=%d, \n", Modifier, tp1, Maddr, Value);
      TerraVMC$setMVal(Value, Maddr, S32, tp1);
    }
}

#line 238
static inline float TerraVMC$getMValf(uint16_t Maddr)
#line 238
{
  return (float )* (nx_float *)(TerraVMC$MEM[sim_node()] + Maddr);
}

#line 1478
static inline void TerraVMC$f_push_v(uint8_t Modifier)
#line 1478
{
  uint8_t v1_len;
#line 1479
  uint8_t tp1;
#line 1479
  uint8_t p1_1len;
  uint16_t Maddr;

#line 1481
  p1_1len = TerraVMC$getBitsPow(Modifier, 3, 3);
  tp1 = TerraVMC$getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  Maddr = TerraVMC$getPar16(p1_1len);
  if (tp1 == F32) {
      sim_log_debug(205U, "terra", "VM::f_push_v(%02x): tp1=%d, Maddr=%d, value=%f, \n", Modifier, tp1, Maddr, TerraVMC$getMValf(Maddr));
      TerraVMC$pushf(TerraVMC$getMValf(Maddr));
    }
  else 
#line 1488
    {
      sim_log_debug(206U, "terra", "VM::f_push_v(%02x): tp1=%d, Maddr=%d, value=%d, \n", Modifier, tp1, Maddr, TerraVMC$getMVal(Maddr, tp1));
      TerraVMC$push(TerraVMC$getMVal(Maddr, tp1));
    }
}

#line 1467
static inline void TerraVMC$f_tkins_max(uint8_t Modifier)
#line 1467
{
  uint8_t stack;
#line 1468
  uint8_t p1_1len;
  uint16_t lbl;

#line 1470
  stack = (uint8_t )((&TerraVMC$CEU_[sim_node()])->stack + TerraVMC$getBits(Modifier, 1, 2));
  p1_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  lbl = TerraVMC$getPar16(p1_1len);
  sim_log_debug(203U, "terra", "VM::f_tkins_max(%02x): stack=%d, lbl=%d, \n", Modifier, stack, lbl);
  sim_log_debug(204U, "VMDBG", "VM:: enable track for label %d\n", lbl);
  TerraVMC$ceu_track_ins(stack, 255, 0, lbl);
}

#line 1441
static inline void TerraVMC$f_memcpy(uint8_t Modifier)
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
  p1_1len = TerraVMC$getBitsPow(Modifier, 2, 2);
  p2_1len = TerraVMC$getBitsPow(Modifier, 1, 1);
  p3_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  size = TerraVMC$getPar16(p1_1len);
  MaddrFrom = TerraVMC$getPar16(p2_1len);
  MaddrTo = TerraVMC$getPar16(p3_1len);
  sim_log_debug(200U, "terra", "VM::f_memcpy(%02x): size=%d, p1_1len=%d, p2_1len=%d, p3_1len=%d, AddrTo=%d, AddrFrom=%d \n", Modifier, size, p1_1len, p2_1len, p3_1len, MaddrTo, MaddrFrom);
  memcpy((void *)(TerraVMC$MEM[sim_node()] + MaddrTo), (void *)(TerraVMC$MEM[sim_node()] + MaddrFrom), size);
}

#line 1424
static inline void TerraVMC$f_deref(uint8_t Modifier)
#line 1424
{
  uint16_t MAddr;
  uint8_t type;

#line 1427
  type = TerraVMC$getBits(Modifier, 0, 2);
  MAddr = (uint16_t )TerraVMC$pop();
  sim_log_debug(192U, "terra", "VM::f_deref(%02x): type=%d, MAddr=%d, ", Modifier, type, MAddr);
  switch (type) {
      case U8: sim_log_debug_clear(193U, "terra", "type= 'u8' , value=%d\n", (uint8_t )TerraVMC$getMVal(MAddr, type));
#line 1431
      TerraVMC$push((uint8_t )TerraVMC$getMVal(MAddr, type));
#line 1431
      break;
      case U16: sim_log_debug_clear(194U, "terra", "type='u16' , value=%d\n", (uint16_t )TerraVMC$getMVal(MAddr, type));
#line 1432
      TerraVMC$push((uint16_t )TerraVMC$getMVal(MAddr, type));
#line 1432
      break;
      case U32: sim_log_debug_clear(195U, "terra", "type='u32' , value=%d\n", (uint32_t )TerraVMC$getMVal(MAddr, type));
#line 1433
      TerraVMC$push((uint32_t )TerraVMC$getMVal(MAddr, type));
#line 1433
      break;
      case F32: sim_log_debug_clear(196U, "terra", "type='f32' , value=%f\n", TerraVMC$getMValf(MAddr));
#line 1434
      TerraVMC$pushf(TerraVMC$getMValf(MAddr));
#line 1434
      break;
      case S8: sim_log_debug_clear(197U, "terra", "type= 's8' , value=%d\n", (int8_t )TerraVMC$getMVal(MAddr, type));
#line 1435
      TerraVMC$push((int8_t )TerraVMC$getMVal(MAddr, type));
#line 1435
      break;
      case S16: sim_log_debug_clear(198U, "terra", "type='s16' , value=%d\n", (int16_t )TerraVMC$getMVal(MAddr, type));
#line 1436
      TerraVMC$push((int16_t )TerraVMC$getMVal(MAddr, type));
#line 1436
      break;
      case S32: sim_log_debug_clear(199U, "terra", "type='s32' , value=%d\n", (int32_t )TerraVMC$getMVal(MAddr, type));
#line 1437
      TerraVMC$push((int32_t )TerraVMC$getMVal(MAddr, type));
#line 1437
      break;
    }
}

#line 1407
static inline void TerraVMC$f_set_e(uint8_t Modifier)
#line 1407
{
  uint8_t v1_len;
#line 1408
  uint8_t tp1;
  uint16_t Maddr1;

#line 1410
  tp1 = TerraVMC$getBits(Modifier, 0, 2);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  Maddr1 = (uint16_t )TerraVMC$pop();
  if (tp1 == F32) {
      float Value = TerraVMC$popf();

#line 1415
      TerraVMC$setMVal(* (uint32_t *)&Value, Maddr1, F32, tp1);
      sim_log_debug(190U, "terra", "VM::f_set_e(%02x): v1_len=%d, Maddr1=%d, Value=%f, ValuePos=%d\n", Modifier, v1_len, Maddr1, Value, TerraVMC$getMValf(Maddr1));
    }
  else 
#line 1417
    {
      uint32_t Value = TerraVMC$pop();

#line 1419
      TerraVMC$setMVal(Value, Maddr1, S32, tp1);
      sim_log_debug(191U, "terra", "VM::f_set_e(%02x): v1_len=%d, Maddr1=%d, Value=%d, ValuePos=%d\n", Modifier, v1_len, Maddr1, Value, TerraVMC$getMVal(Maddr1, v1_len));
    }
}

#line 1397
static inline void TerraVMC$f_dec(uint8_t Modifier)
#line 1397
{
  uint8_t v1_len;
#line 1398
  uint8_t tp1;
  uint16_t Maddr;

#line 1400
  tp1 = TerraVMC$getBits(Modifier, 0, 1);
  v1_len = 1 << tp1;
  Maddr = (uint16_t )TerraVMC$pop();
  sim_log_debug(189U, "terra", "VM::f_dec(%02x): v1_len=%d, Maddr=%d, value-1=%d, \n", Modifier, v1_len, Maddr, TerraVMC$getMVal(Maddr, tp1) - 1);
  TerraVMC$setMVal(TerraVMC$getMVal(Maddr, tp1) - 1, Maddr, tp1, tp1);
}

#line 1388
static inline void TerraVMC$f_inc(uint8_t Modifier)
#line 1388
{
  uint8_t v1_len;
#line 1389
  uint8_t tp1;
  uint16_t Maddr;

#line 1391
  tp1 = TerraVMC$getBits(Modifier, 0, 1);
  v1_len = 1 << tp1;
  Maddr = (uint16_t )TerraVMC$pop();
  sim_log_debug(188U, "terra", "VM::f_inc(%02x): v1_len=%d, Maddr=%d, value+1=%d, \n", Modifier, v1_len, Maddr, TerraVMC$getMVal(Maddr, tp1) + 1);
  TerraVMC$setMVal(TerraVMC$getMVal(Maddr, tp1) + 1, Maddr, tp1, tp1);
}

#line 1376
static inline void TerraVMC$f_getextdt_v(uint8_t Modifier)
#line 1376
{
  uint8_t p1_1len;
#line 1377
  uint8_t p2_1len;
  uint16_t Maddr;
#line 1378
  uint16_t size;

#line 1379
  p1_1len = TerraVMC$getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  Maddr = TerraVMC$getPar16(p1_1len);
  size = TerraVMC$getPar16(p2_1len);
  sim_log_debug(186U, "terra", "VM::f_getextdt_v(%02x): Maddr=%d, len=%d\n", Modifier, Maddr, size);
  sim_log_debug(187U, "VMDBG", "VM:: reading input event data.\n");
  memcpy(TerraVMC$MEM[sim_node()] + Maddr, (&TerraVMC$CEU_[sim_node()])->ext_data, size);
}

#line 1365
static inline void TerraVMC$f_outevt_c(uint8_t Modifier)
#line 1365
{
  uint8_t Clen;
  uint8_t Cevt;
  uint32_t Const;

#line 1369
  Clen = (uint8_t )(TerraVMC$getBits(Modifier, 0, 1) + 1);
  Cevt = TerraVMC$getPar8(1);
  Const = TerraVMC$getPar32(Clen);
  sim_log_debug(185U, "terra", "VM::f_outevt_c(%02x): Cevt=%d, Clen=%d, Const=%d\n", Modifier, Cevt, Clen, Const);
  TerraVMC$VMCustom$procOutEvt(Cevt, Const);
}

#line 454
static inline void TerraVMC$ceu_track_clr(TerraVMC$tceu_nlbl l1, TerraVMC$tceu_nlbl l2)
#line 454
{
  int i;

#line 456
  for (i = 1; i <= (&TerraVMC$CEU_[sim_node()])->tracks_n; i++) {
      TerraVMC$tceu_trk *trk = (&TerraVMC$CEU_[sim_node()])->p_tracks + i;

#line 458
      if (trk->lbl >= l1 && trk->lbl <= l2) {
          TerraVMC$ceu_track_rem((void *)0, i);
          i--;
        }
    }
}

#line 1353
static inline void TerraVMC$f_tkclr(uint8_t Modifier)
#line 1353
{
  uint8_t p1_1len;
#line 1354
  uint8_t p2_1len;
  uint16_t lbl1;
#line 1355
  uint16_t lbl2;

#line 1356
  p1_1len = TerraVMC$getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  lbl1 = TerraVMC$getPar16(p1_1len);
  lbl2 = TerraVMC$getPar16(p2_1len);
  sim_log_debug(183U, "terra", "VM::f_tkclr(%02x): lbl1=%d, lbl2=%d\n", Modifier, lbl1, lbl2);
  sim_log_debug(184U, "VMDBG", "VM:: clear tracks for label %d to label %d\n", lbl1, lbl2);
  TerraVMC$ceu_track_clr(lbl1, lbl2);
}

# 169 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num].isrunning;
}

# 92 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static bool BasicServicesP$TimerAsync$isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(1U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 274 "BasicServicesP.nc"
static inline bool BasicServicesP$BSTimerAsync$isRunning(void )
#line 274
{
#line 274
  return BasicServicesP$TimerAsync$isRunning();
}

# 17 "BSTimer.nc"
inline static bool TerraVMC$BSTimerAsync$isRunning(void ){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = BasicServicesP$BSTimerAsync$isRunning();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 531 "TerraVMC.nc"
static inline void TerraVMC$ceu_async_enable(int gte, TerraVMC$tceu_nlbl lbl)
#line 531
{
  ((TerraVMC$tceu_nlbl *)((&TerraVMC$CEU_[sim_node()])->p_mem + TerraVMC$async0[sim_node()]))[gte] = lbl;
  if (!TerraVMC$BSTimerAsync$isRunning()) {
    TerraVMC$BSTimerAsync$startOneShot(2);
    }
}

#line 1341
static inline void TerraVMC$f_asen(uint8_t Modifier)
#line 1341
{
  uint8_t p1_1len;
#line 1342
  uint8_t p2_1len;
  uint16_t gate;
#line 1343
  uint16_t lbl;

#line 1344
  p1_1len = TerraVMC$getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  gate = TerraVMC$getPar16(p1_1len);
  lbl = TerraVMC$getPar16(p2_1len);
  sim_log_debug(181U, "terra", "VM::f_asen(%02x): gate=%d, lbl=%d\n", Modifier, gate, lbl);
  sim_log_debug(182U, "VMDBG", "VM:: async enable: gate=%d; label=%d.\n", gate, lbl);
  TerraVMC$ceu_async_enable(gate, lbl);
}

#line 100
static inline uint16_t TerraVMC$getLblAddr(uint16_t lbl)
#line 100
{
  sim_log_debug(48U, "terra", "VM::getLblAddr(%d):\n", lbl);
  return lbl;
}

#line 1329
static inline void TerraVMC$f_ifelse(uint8_t Modifier)
#line 1329
{
  uint8_t p1_1len;
#line 1330
  uint8_t p2_1len;
  uint16_t lbl1;
#line 1331
  uint16_t lbl2;

#line 1332
  p1_1len = TerraVMC$getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  lbl1 = TerraVMC$getPar16(p1_1len);
  lbl2 = TerraVMC$getPar16(p2_1len);
  sim_log_debug(179U, "terra", "VM::f_ifelse(%02x): lbl1=%d, lbl2=%d\n", Modifier, lbl1, lbl2);
  sim_log_debug(180U, "VMDBG", "VM:: if/else: TRUE label=%d; FALSE label=%d.\n", lbl1, lbl2);
  if (TerraVMC$pop()) {
#line 1338
    TerraVMC$PC[sim_node()] = TerraVMC$getLblAddr(lbl1);
    }
  else {
#line 1338
    TerraVMC$PC[sim_node()] = TerraVMC$getLblAddr(lbl2);
    }
}

#line 1316
static inline void TerraVMC$f_memclr(uint8_t Modifier)
#line 1316
{
  uint8_t p1_1len;
#line 1317
  uint8_t p2_1len;
  uint16_t Maddr;
#line 1318
  uint16_t size;

#line 1319
  p1_1len = TerraVMC$getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  Maddr = TerraVMC$getPar16(p1_1len);
  size = TerraVMC$getPar16(p2_1len);
  sim_log_debug(177U, "terra", "VM::f_memclr(%02x): Maddr=%d, size=%d\n", Modifier, Maddr, size);
  sim_log_debug(178U, "VMDBG", "VM:: clear clock/gate entry.\n");

  {
#line 1326
    int x;

#line 1326
    for (x = 0; x < size; x++) * (uint8_t *)(TerraVMC$MEM[sim_node()] + Maddr + x) = 0;
  }
}

#line 1302
static inline void TerraVMC$f_cast(uint8_t Modifier)
#line 1302
{
  uint32_t stacki;
  float stackf;
  uint8_t mode;

#line 1306
  mode = TerraVMC$getBits(Modifier, 0, 1);
  sim_log_debug(172U, "terra", "VM::f_cast(%02x): mode=%d, ", Modifier, mode);
  switch (mode) {
      case U32_F: stacki = TerraVMC$pop();
#line 1309
      sim_log_debug_clear(173U, "terra", "mode='U32_F', stack=%d, cast=%f\n", stacki, (f32 )* (u32 *)&stacki);
#line 1309
      TerraVMC$pushf((f32 )* (u32 *)&stacki);
#line 1309
      break;
      case S32_F: stacki = TerraVMC$pop();
#line 1310
      sim_log_debug_clear(174U, "terra", "mode='S32_F', stack=%d, cast=%f\n", stacki, (f32 )* (s32 *)&stacki);
#line 1310
      TerraVMC$pushf((f32 )* (s32 *)&stacki);
#line 1310
      break;
      case F_U32: stackf = TerraVMC$popf();
#line 1311
      sim_log_debug_clear(175U, "terra", "mode='F_U32', stack=%f, cast=%d\n", stackf, (u32 )* (f32 *)&stackf);
#line 1311
      TerraVMC$push((u32 )* (f32 *)&stackf);
#line 1311
      break;
      case F_S32: stackf = TerraVMC$popf();
#line 1312
      sim_log_debug_clear(176U, "terra", "mode='F_S32', stack=%f, cast=%d\n", stackf, (s32 )* (f32 *)&stackf);
#line 1312
      TerraVMC$push((u32 )* (f32 *)&stackf);
#line 1312
      break;
    }
}

#line 1293
static inline void TerraVMC$f_push_c(uint8_t Modifier)
#line 1293
{
  uint8_t p1_len;
  uint32_t Const;

#line 1296
  p1_len = (uint8_t )(TerraVMC$getBits(Modifier, 0, 1) + 1);
  Const = TerraVMC$getPar32(p1_len);
  sim_log_debug(171U, "terra", "VM::f_push_c(%02x): p1_len=%d, Const=%d, \n", Modifier, p1_len, Const);
  TerraVMC$push(Const);
}

#line 1454
static inline void TerraVMC$f_tkins_z(uint8_t Modifier)
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
  p2_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  par1 = TerraVMC$getPar8(1);
  chk = TerraVMC$getBits(par1, 7, 7);
  tree = TerraVMC$getBits(par1, 0, 6);
  lbl = TerraVMC$getPar16(p2_1len);
  sim_log_debug(201U, "terra", "VM::f_tkins_z(%02x): tree=%d, chk=%d, p2_1len=%d, lbl=%d, \n", Modifier, tree, chk, p2_1len, lbl);
  sim_log_debug(202U, "VMDBG", "VM:: enable track for label %d\n", lbl);
  TerraVMC$ceu_track_ins(0, tree, chk, lbl);
}

#line 1283
static inline void TerraVMC$f_chkret(uint8_t Modifier)
#line 1283
{
  uint8_t p1_1len;
  uint16_t Maddr;

#line 1286
  p1_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  Maddr = TerraVMC$getPar16(p1_1len);
  sim_log_debug(169U, "terra", "VM::f_chkret(%02x): p1_1len=%d, MAddr=%d value=%d, \n", Modifier, p1_1len, Maddr, * (uint8_t *)(TerraVMC$MEM[sim_node()] + Maddr));
  sim_log_debug(170U, "VMDBG", "VM:: test end of PAR.\n");
  if (* (uint8_t *)(TerraVMC$MEM[sim_node()] + Maddr) > 0) {
#line 1290
    TerraVMC$PC[sim_node()] = TerraVMC$PC[sim_node()] + 1;
    }
}

#line 1273
static inline void TerraVMC$f_exec(uint8_t Modifier)
#line 1273
{
  uint8_t p1_1len;
  uint16_t Const;

#line 1276
  p1_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  Const = TerraVMC$getPar16(p1_1len);
  sim_log_debug(167U, "terra", "VM::f_exec(%02x): p1_1len=%d, Const=%d\n", Modifier, p1_1len, Const);
  sim_log_debug(168U, "VMDBG", "VM:: executing trail: label=%d.\n", Const);
  TerraVMC$PC[sim_node()] = TerraVMC$getLblAddr(Const);
}

#line 1263
static inline void TerraVMC$f_trg(uint8_t Modifier)
#line 1263
{
  uint8_t p1_1len;
  uint16_t gtAddr;

#line 1266
  p1_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  gtAddr = TerraVMC$getPar16(p1_1len);
  sim_log_debug(165U, "terra", "VM::f_trg(%02x): p1_1len=%d, gtAddr=%d, \n", Modifier, p1_1len, gtAddr);
  sim_log_debug(166U, "VMDBG", "VM:: trigger event gate=%d, auxId=0\n", gtAddr);
  TerraVMC$ceu_trigger(gtAddr, 0);
}

#line 1252
static inline void TerraVMC$f_getextdt_e(uint8_t Modifier)
#line 1252
{
  uint8_t p1_1len;
  uint16_t Maddr;
#line 1254
  uint16_t len;

#line 1255
  p1_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  Maddr = (uint16_t )TerraVMC$pop();
  len = TerraVMC$getPar16(p1_1len);
  sim_log_debug(163U, "terra", "VM::f_getextdt_e(%02x): Maddr=%d, len=%d\n", Modifier, Maddr, len);
  sim_log_debug(164U, "VMDBG", "VM:: reading input event data.\n");
  memcpy(TerraVMC$MEM[sim_node()] + Maddr, (&TerraVMC$CEU_[sim_node()])->ext_data, len);
}

#line 1224
static inline void TerraVMC$f_pusharr_v(uint8_t Modifier)
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

  p3_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  Aux = TerraVMC$getPar8(1);
  p1_1len = TerraVMC$getBitsPow(Aux, 7, 7);
  tp1 = TerraVMC$getBits(Aux, 4, 6);
  p2_1len = TerraVMC$getBitsPow(Aux, 3, 3);
  tp2 = TerraVMC$getBits(Aux, 0, 2);

  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  v2_len = tp2 == F32 ? 4 : 1 << (tp2 & 0x3);

  Maddr = TerraVMC$getPar16(p1_1len);
  Vidx = TerraVMC$getPar16(p2_1len);
  Max = TerraVMC$getPar16(p3_1len);

  if (TerraVMC$getMVal(Vidx, tp2) >= Max) {
    TerraVMC$evtError(E_IDXOVF);
    }
  else 
#line 1244
    {
      sim_log_debug(162U, "terra", "VM::f_pusharr_v(%02x):Maddr=%d, Vidx=%d, Max=%d, IDX OVERFLOW=%s idx=%d, v1_len=%d\n", Modifier, Maddr, Vidx, Max, TerraVMC$getMVal(Vidx, tp2) > Max ? "TRUE" : "FALSE", TerraVMC$getMVal(Vidx, v2_len), v1_len);

      TerraVMC$push(Maddr + TerraVMC$getMVal(Vidx, tp2) % Max * v1_len);
    }
}

#line 1190
static inline void TerraVMC$f_poparr_v(uint8_t Modifier)
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

  p3_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  Aux = TerraVMC$getPar8(1);
  p1_1len = TerraVMC$getBitsPow(Aux, 7, 7);
  tp1 = TerraVMC$getBits(Aux, 4, 6);
  p2_1len = TerraVMC$getBitsPow(Aux, 3, 3);
  tp2 = TerraVMC$getBits(Aux, 0, 2);

  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  v2_len = tp2 == F32 ? 4 : 1 << (tp2 & 0x3);

  Maddr = TerraVMC$getPar16(p1_1len);
  Vidx = TerraVMC$getPar16(p2_1len);
  Max = TerraVMC$getPar16(p3_1len);
  if (TerraVMC$getMVal(Vidx, tp2) >= Max) {
    TerraVMC$evtError(E_IDXOVF);
    }
  else 
#line 1209
    {
      if (tp1 == F32) {
          float v2 = TerraVMC$popf();

#line 1212
          sim_log_debug(160U, "terra", "VM::f_poparr_v(%02x):Maddr=%d, Vidx=%d, Max=%d, Value=%f, IDX OVERFLOW=%s idx=%d\n", Modifier, Maddr, Vidx, Max, v2, TerraVMC$getMVal(Vidx, tp2) > Max ? "TRUE" : "FALSE", TerraVMC$getMVal(Vidx, tp2));

          TerraVMC$setMVal(* (uint32_t *)&v2, Maddr + TerraVMC$getMVal(Vidx, tp2) % Max * v1_len, F32, tp1);
        }
      else 
#line 1215
        {
          int32_t v2 = TerraVMC$pop();

#line 1217
          sim_log_debug(161U, "terra", "VM::f_poparr_v(%02x):Maddr=%d, Vidx=%d, Max=%d, Value=%d, IDX OVERFLOW=%s idx=%d\n", Modifier, Maddr, Vidx, Max, v2, TerraVMC$getMVal(Vidx, tp2) > Max ? "TRUE" : "FALSE", TerraVMC$getMVal(Vidx, tp2));

          TerraVMC$setMVal(v2, Maddr + TerraVMC$getMVal(Vidx, tp2) % Max * v1_len, S32, tp1);
        }
    }
}

#line 1149
static inline void TerraVMC$f_setarr_vv(uint8_t Modifier)
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
  Modifier = TerraVMC$getPar8(1);
  Aux = TerraVMC$getPar8(1);

  p1_1len = TerraVMC$getBitsPow(Modifier, 7, 7);
  tp1 = TerraVMC$getBits(Modifier, 4, 6);
  p2_1len = TerraVMC$getBitsPow(Modifier, 3, 3);
  tp2 = TerraVMC$getBits(Modifier, 0, 2);

  p3_1len = TerraVMC$getBitsPow(Aux, 4, 4);
  p4_1len = TerraVMC$getBitsPow(Aux, 3, 3);
  tp4 = TerraVMC$getBits(Aux, 0, 2);

  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  v2_len = tp2 == F32 ? 4 : 1 << (tp2 & 0x3);
  v4_len = tp4 == F32 ? 4 : 1 << (tp4 & 0x3);

  Maddr1 = TerraVMC$getPar16(p1_1len);
  Vidx = TerraVMC$getPar16(p2_1len);
  Max = TerraVMC$getPar16(p3_1len);
  Maddr2 = TerraVMC$getPar16(p4_1len);

  sim_log_debug(159U, "terra", "VM::f_setarr_vv(%02x):Maddr1=%d, Vidx=%d, Max=%d, Madr2=%d, IDX OVERFLOW=%s idx=%d\n", Modifier, Maddr1, Vidx, Max, Maddr2, TerraVMC$getMVal(Vidx, tp2) > Max ? "TRUE" : "FALSE", TerraVMC$getMVal(Vidx, tp2));

  if (TerraVMC$getMVal(Vidx, tp2) >= Max) {
    TerraVMC$evtError(E_IDXOVF);
    }
  else 
#line 1177
    {
      if (tp4 == F32) {
          float buffer = TerraVMC$getMValf(Maddr2);

#line 1180
          TerraVMC$setMVal(* (uint32_t *)&buffer, Maddr1 + TerraVMC$getMVal(Vidx, tp2) % Max * v1_len, tp4, tp1);
        }
      else 
#line 1181
        {
          uint32_t buffer = TerraVMC$getMVal(Maddr2, tp4);

#line 1183
          TerraVMC$setMVal(buffer, Maddr1 + TerraVMC$getMVal(Vidx, tp2) % Max * v1_len, tp4, tp1);
        }
    }
}

#line 1115
static inline void TerraVMC$f_setarr_vc(uint8_t Modifier)
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
  Modifier = TerraVMC$getPar8(1);
  Aux = TerraVMC$getPar8(1);

  p1_1len = TerraVMC$getBitsPow(Modifier, 7, 7);
  tp1 = TerraVMC$getBits(Modifier, 4, 6);
  p2_1len = TerraVMC$getBitsPow(Modifier, 3, 3);
  tp2 = TerraVMC$getBits(Modifier, 0, 2);
  p3_1len = TerraVMC$getBitsPow(Aux, 2, 2);
  p4_len = (uint8_t )(TerraVMC$getBits(Aux, 0, 1) + 1);
  v1_len = tp1 == F32 ? 4 : 1 << (tp1 & 0x3);
  v2_len = tp2 == F32 ? 4 : 1 << (tp2 & 0x3);

  Maddr = TerraVMC$getPar16(p1_1len);
  Vidx = TerraVMC$getPar16(p2_1len);
  Max = TerraVMC$getPar16(p3_1len);
  Const = TerraVMC$getPar32(p4_len);
  sim_log_debug(158U, "terra", "VM::f_setarr_vc(%02x):Maddr=%d, Vidx=%d, Max=%d, Const=%d, IDX OVERFLOW=%s idx=%d\n", Modifier, Maddr, Vidx, Max, Const, TerraVMC$getMVal(Vidx, tp2) > Max ? "TRUE" : "FALSE", TerraVMC$getMVal(Vidx, tp2));

  if (TerraVMC$getMVal(Vidx, tp2) >= Max) {
    TerraVMC$evtError(E_IDXOVF);
    }
  else 
#line 1139
    {
      if (tp1 == F32) {
          float buffer = (float )Const;

#line 1142
          TerraVMC$setMVal(* (uint32_t *)&buffer, Maddr + TerraVMC$getMVal(Vidx, tp2) % Max * v1_len, tp2, tp1);
        }
      else 
#line 1143
        {
          TerraVMC$setMVal(Const, Maddr + TerraVMC$getMVal(Vidx, tp2) % Max * v1_len, tp2, tp1);
        }
    }
}

#line 1093
static inline void TerraVMC$f_set_v(uint8_t Modifier)
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
  Modifier = TerraVMC$getPar8(1);
  p1_1len = TerraVMC$getBitsPow(Modifier, 7, 7);
  tp1 = TerraVMC$getBits(Modifier, 4, 6);
  p2_1len = TerraVMC$getBitsPow(Modifier, 3, 3);
  tp2 = TerraVMC$getBits(Modifier, 0, 2);
  Maddr1 = TerraVMC$getPar16(p1_1len);
  Maddr2 = TerraVMC$getPar16(p2_1len);

  sim_log_debug(157U, "terra", "VM::f_set_v(%02x): tp1=%d, tp2=%d, p1_1len=%d, p2_1len=%d, Maddr1=%d, Maddr2=%d\n", Modifier, tp1, tp2, p1_1len, p2_1len, Maddr1, Maddr2);

  if (tp2 == F32) {
      float buffer = TerraVMC$getMValf(Maddr2);

#line 1109
      TerraVMC$setMVal(* (uint32_t *)&buffer, Maddr1, tp2, tp1);
    }
  else 
#line 1110
    {
      uint32_t buffer = TerraVMC$getMVal(Maddr2, tp2);

#line 1112
      TerraVMC$setMVal(buffer, Maddr1, tp2, tp1);
    }
}

#line 1075
static inline void TerraVMC$f_clken_c(uint8_t Modifier)
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
  Modifier = TerraVMC$getPar8(1);
  p1_1len = TerraVMC$getBitsPow(Modifier, 3, 3);
  p2_len = (uint8_t )(TerraVMC$getBits(Modifier, 1, 2) + 1);
  p3_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  gate = TerraVMC$getPar16(p1_1len);
  Ctime = TerraVMC$getPar32(p2_len);
  lbl = TerraVMC$getPar16(p3_1len);
  sim_log_debug(155U, "terra", "VM::f_clken_c(%02x): p1_1len=%d, p2_len=%d, p3_1len=%d, gate=%d, Ctime=%d, lbl=%d\n", Modifier, p1_1len, p2_len, p3_1len, gate, Ctime, lbl);
  sim_log_debug(156U, "VMDBG", "VM:: await timer %ld for label %d\n", (s32 )Ctime, lbl);
  TerraVMC$ceu_wclock_enable(gate, (s32 )Ctime, lbl);
}

#line 1055
static inline void TerraVMC$f_clken_v(uint8_t Modifier)
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
  Modifier = TerraVMC$getPar8(1);
  unit = TerraVMC$getBits(Modifier, 5, 7);
  timeTp = TerraVMC$getBits(Modifier, 3, 4);
  p1_1len = TerraVMC$getBitsPow(Modifier, 2, 2);
  p2_1len = TerraVMC$getBitsPow(Modifier, 1, 1);
  p3_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  gate = TerraVMC$getPar16(p1_1len);
  VtimeAddr = TerraVMC$getPar16(p2_1len);
  lbl = TerraVMC$getPar16(p3_1len);
  Time = TerraVMC$getMVal(VtimeAddr, timeTp);
  sim_log_debug(153U, "terra", "VM::f_clken_v(%02x): p1_1len=%d, type=%d, gate=%d, unit=%d, VtimeAddr=%d, Time=%d, lbl=%d, Time(ms)=%d\n", Modifier, p1_1len, timeTp, gate, unit, VtimeAddr, Time, lbl, (s32 )TerraVMC$unit2val(Time, unit));

  sim_log_debug(154U, "VMDBG", "VM:: await timer %ld for label %d\n", (s32 )TerraVMC$unit2val(Time, unit), lbl);
  TerraVMC$ceu_wclock_enable(gate, (s32 )TerraVMC$unit2val(Time, unit), lbl);
}

#line 1039
static inline void TerraVMC$f_clken_e(uint8_t Modifier)
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
  Modifier = TerraVMC$getPar8(1);
  p1_1len = TerraVMC$getBitsPow(Modifier, 1, 1);
  p2_1len = TerraVMC$getBitsPow(Modifier, 0, 0);
  unit = TerraVMC$getBits(Modifier, 4, 6);
  gate = TerraVMC$getPar16(p1_1len);
  lbl = TerraVMC$getPar16(p2_1len);
  Time = TerraVMC$pop();
  sim_log_debug(151U, "terra", "VM::f_clken_e(%02x): p1_1len=%d, p2_1len=%d, gate=%d, unit=%d, Time=%d, lbl=%d\n", Modifier, p1_1len, p2_1len, gate, unit, Time, lbl);

  sim_log_debug(152U, "VMDBG", "VM:: await timer %ld for label %d\n", (s32 )TerraVMC$unit2val(Time, unit), lbl);
  TerraVMC$ceu_wclock_enable(gate, (s32 )TerraVMC$unit2val(Time, unit), lbl);
}

#line 1032
static inline void TerraVMC$f_outevt_z(uint8_t Modifier)
#line 1032
{
  uint8_t Cevt;

#line 1034
  Cevt = TerraVMC$getPar8(1);
  sim_log_debug(150U, "terra", "VM::f_outevt_z(%02x): Evt=%d, \n", Modifier, Cevt);
  TerraVMC$VMCustom$procOutEvt(Cevt, 0);
}

#line 1022
static inline void TerraVMC$f_outevt_e(uint8_t Modifier)
#line 1022
{
  uint8_t Cevt;
  uint32_t value;

#line 1025
  value = TerraVMC$pop();
  Cevt = TerraVMC$getPar8(1);
  sim_log_debug(148U, "terra", "VM::f_outevt_e(%02x): Cevt=%d\n", Modifier, Cevt);
  sim_log_debug(149U, "VMDBG", "VM:: emitting output event %d\n", Cevt);
  TerraVMC$VMCustom$procOutEvt(Cevt, value);
}

#line 1700
static inline void TerraVMC$VMCustom$push(uint32_t value)
#line 1700
{
  TerraVMC$push(value);
}

# 17 "VMCustom.nc"
inline static void VMCustomP$VM$push(uint32_t val){
#line 17
  TerraVMC$VMCustom$push(val);
#line 17
}
#line 17
# 241 "BasicServicesP.nc"
static inline void BasicServicesP$BSRadio$setRFPower(uint8_t powerIdx)
#line 241
{
  sim_log_debug(342U, "terra", "BS::BSRadio.setRFPower(%d).\n", powerIdx);
  if (powerIdx < 8) {
      BasicServicesP$userRFPowerIdx[sim_node()] = powerIdx;
    }
}

# 14 "BSRadio.nc"
inline static void VMCustomP$BSRadio$setRFPower(uint8_t powerIdx){
#line 14
  BasicServicesP$BSRadio$setRFPower(powerIdx);
#line 14
}
#line 14
# 1697 "TerraVMC.nc"
static inline uint32_t TerraVMC$VMCustom$pop(void )
#line 1697
{
  return TerraVMC$pop();
}

# 16 "VMCustom.nc"
inline static uint32_t VMCustomP$VM$pop(void ){
#line 16
  unsigned int __nesc_result;
#line 16

#line 16
  __nesc_result = TerraVMC$VMCustom$pop();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 248 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$func_RFPower(uint16_t id)
#line 248
{
  uint8_t powerIdx;

#line 250
  powerIdx = (uint8_t )VMCustomP$VM$pop();
  VMCustomP$BSRadio$setRFPower(powerIdx);
  VMCustomP$VM$push(SUCCESS);
}

# 21 "VMCustom.nc"
inline static void *VMCustomP$VM$getRealAddr(uint16_t Maddr){
#line 21
  void *__nesc_result;
#line 21

#line 21
  __nesc_result = TerraVMC$VMCustom$getRealAddr(Maddr);
#line 21

#line 21
  return __nesc_result;
#line 21
}
#line 21
# 234 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$func_setupMic(uint16_t id)
#line 234
{
  error_t stat;
  uint16_t bufAddr;

#line 237
  VMCustomP$MIC_gain[sim_node()] = (uint8_t )VMCustomP$VM$pop();
  VMCustomP$MIC_usPeriod[sim_node()] = (uint32_t )VMCustomP$VM$pop();
  VMCustomP$MIC_count[sim_node()] = (uint16_t )VMCustomP$VM$pop();
  bufAddr = (uint16_t )VMCustomP$VM$pop();
  VMCustomP$MIC_buf[sim_node()] = (nx_uint16_t *)VMCustomP$VM$getRealAddr(bufAddr);
  VMCustomP$MIC_flag[sim_node()] = TRUE;
  stat = SUCCESS;
  VMCustomP$VM$push(stat);
}

# 84 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static inline error_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$clearAll(void )
#line 84
{
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qHead[sim_node()] = 0;
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qTail[sim_node()] = 0;
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[sim_node()] = 0;
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ[sim_node()] = TRUE;
  return SUCCESS;
}

# 16 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t VMCustomP$usrDataQ$clearAll(void ){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$clearAll();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 225 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$func_qClear(uint16_t id)
#line 225
{
  error_t stat;

#line 227
  sim_log_debug(476U, "terra", "Custom::func_qClear(): id=%d\n", id);

  stat = VMCustomP$usrDataQ$clearAll();
  VMCustomP$VM$push(stat);
}

#line 218
static inline void VMCustomP$func_qSize(uint16_t id)
#line 218
{
  uint8_t stat;

  stat = VMCustomP$usrDataQ$size();
  sim_log_debug(475U, "terra", "Custom::func_qSize(): id=%d, size=%d\n", id, stat);
  VMCustomP$VM$push(stat);
}

# 37 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static inline error_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$get(void *Data)
#line 37
{
  sim_log_debug(511U, "terra", "dataQ[%hhu]::get(%x[%d]). Size and FlagFree before %hhu : %s\n", 2, Data, sizeof(/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataType ), /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[sim_node()], /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ[sim_node()] == TRUE ? "TRUE" : "FALSE");

  if (/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[sim_node()] <= 0) {
#line 40
      /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ[sim_node()] = TRUE;
#line 40
      return FAIL;
    }
  memcpy(Data, (void *)&/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qData[sim_node()][/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qHead[sim_node()]], sizeof(/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataType ));
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qHead[sim_node()]++;
#line 43
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qHead[sim_node()] = (uint8_t )(/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qHead[sim_node()] % 10);
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[sim_node()]--;
  if (/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[sim_node()] <= 0) {
#line 45
    /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ[sim_node()] = TRUE;
    }
#line 46
  return SUCCESS;
}

# 9 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t VMCustomP$usrDataQ$get(void *Data){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$get(Data);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 208 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$func_qGet(uint16_t id)
#line 208
{
  error_t stat;
  qData_t *qData_p;
  uint16_t value = (uint16_t )VMCustomP$VM$pop();

#line 212
  sim_log_debug(474U, "terra", "Custom::func_qGet(): id=%d, addr=%d\n", id, value);

  qData_p = (qData_t *)VMCustomP$VM$getRealAddr(value);
  stat = VMCustomP$usrDataQ$get(qData_p);
  VMCustomP$VM$push(stat);
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataReady$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataReady);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 21 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static inline error_t /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$put(void *Data)
#line 21
{
  sim_log_debug(510U, "terra", "dataQ[%hhu]::put(). Size and FlagFree before %hhu : %s\n", 2, /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[sim_node()], /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ[sim_node()] == TRUE ? "TRUE" : "FALSE");

  if (/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[sim_node()] >= 10) {
      return FAIL;
    }

  memcpy((void *)&/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qData[sim_node()][/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qTail[sim_node()]], Data, sizeof(/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataType ));
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qTail[sim_node()]++;
#line 29
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qTail[sim_node()] = (uint8_t )(/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qTail[sim_node()] % 10);
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[sim_node()]++;
  if (/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ[sim_node()] == TRUE) {
      /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ[sim_node()] = FALSE;
#line 32
      /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataReady$postTask();
    }
  return SUCCESS;
}

# 8 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueue.nc"
inline static error_t VMCustomP$usrDataQ$put(void *Data){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$dataQueue$put(Data);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 198 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$func_qPut(uint16_t id)
#line 198
{
  error_t stat;
  qData_t *qData_p;
  uint16_t value = (uint16_t )VMCustomP$VM$pop();

#line 202
  sim_log_debug(473U, "terra", "Custom::func_qPut(): id=%d, addr=%d\n", id, value);

  qData_p = (qData_t *)VMCustomP$VM$getRealAddr(value);
  stat = VMCustomP$usrDataQ$put(qData_p);
  VMCustomP$VM$push(stat);
}

# 1708 "TerraVMC.nc"
static inline uint32_t TerraVMC$VMCustom$getTime(void )
#line 1708
{
  return TerraVMC$BSTimerVM$getNow();
}

# 24 "VMCustom.nc"
inline static uint32_t VMCustomP$VM$getTime(void ){
#line 24
  unsigned int __nesc_result;
#line 24

#line 24
  __nesc_result = TerraVMC$VMCustom$getTime();
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 191 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$func_getTime(uint16_t id)
#line 191
{
  uint32_t val;

#line 193
  val = VMCustomP$VM$getTime();
  sim_log_debug(472U, "terra", "Custom::func_getTime(): func id=%d, val=%d(%0x)\n", id, val, val);
  VMCustomP$VM$push(val);
}

# 1684 "TerraVMC.nc"
static inline int32_t TerraVMC$VMCustom$getMVal(uint16_t Maddr, uint8_t tp)
#line 1684
{
  return TerraVMC$getMVal(Maddr, tp);
}

# 19 "VMCustom.nc"
inline static int32_t VMCustomP$VM$getMVal(uint16_t Maddr, uint8_t tp){
#line 19
  int __nesc_result;
#line 19

#line 19
  __nesc_result = TerraVMC$VMCustom$getMVal(Maddr, tp);
#line 19

#line 19
  return __nesc_result;
#line 19
}
#line 19
# 183 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$func_getMem(uint16_t id)
#line 183
{
  uint8_t val;
  uint16_t Maddr;

#line 186
  Maddr = (uint16_t )VMCustomP$VM$pop();
  val = (uint8_t )VMCustomP$VM$getMVal(Maddr, 0);
  sim_log_debug(471U, "terra", "Custom::func_getMem(): func id=%d, addr=%d, val=%d(%0x)\n", id, Maddr, val, val);
  VMCustomP$VM$push(val);
}

# 89 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 52 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
inline static uint16_t VMCustomP$Random$rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC$Random$rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 176 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$func_random(uint16_t id)
#line 176
{
  uint16_t stat;

  stat = VMCustomP$Random$rand16();
  sim_log_debug(470U, "terra", "Custom::func_random(): func id=%d, Random=%d\n", id, stat);
  VMCustomP$VM$push(stat);
}

#line 169
static inline void VMCustomP$func_getNodeId(uint16_t id)
#line 169
{
  uint16_t stat;

  stat = TOS_NODE_ID;
  sim_log_debug(469U, "terra", "Custom::func_getNodeId(): id=%d, NodeId=%d\n", id, stat);
  VMCustomP$VM$push(stat);
}

#line 291
static inline void VMCustomP$VM$callFunction(uint8_t id)
#line 291
{
  sim_log_debug(478U, "terra", "Custom::VM.callFunction(%d)\n", id);
  switch (id) {
      case F_GETNODEID: VMCustomP$func_getNodeId(id);
#line 294
      break;
      case F_RANDOM: VMCustomP$func_random(id);
#line 295
      break;
      case F_GETMEM: VMCustomP$func_getMem(id);
#line 296
      break;
      case F_GETTIME: VMCustomP$func_getTime(id);
#line 297
      break;

      case F_QPUT: VMCustomP$func_qPut(id);
#line 299
      break;
      case F_QGET: VMCustomP$func_qGet(id);
#line 300
      break;
      case F_QSIZE: VMCustomP$func_qSize(id);
#line 301
      break;
      case F_QCLEAR: VMCustomP$func_qClear(id);
#line 302
      break;

      case F_SETUP_MIC: VMCustomP$func_setupMic(id);
#line 304
      break;
      case F_RFPOWER: VMCustomP$func_RFPower(id);
#line 305
      break;
    }
}

# 14 "VMCustom.nc"
inline static void TerraVMC$VMCustom$callFunction(uint8_t id){
#line 14
  VMCustomP$VM$callFunction(id);
#line 14
}
#line 14
# 1014 "TerraVMC.nc"
static inline void TerraVMC$f_func(uint8_t Modifier)
#line 1014
{
  uint8_t fID;

#line 1016
  fID = TerraVMC$getPar8(1);
  sim_log_debug(146U, "terra", "VM::f_func(%02x): fID=%d\n", Modifier, fID);
  sim_log_debug(147U, "VMDBG", "VM:: call function %d\n", fID);
  TerraVMC$VMCustom$callFunction(fID);
}

#line 1005
static inline void TerraVMC$f_lt_f(uint8_t Modifier)
#line 1005
{
  float v1;
#line 1006
  float v2;

#line 1007
  v1 = TerraVMC$popf();
  v2 = TerraVMC$popf();
  sim_log_debug(144U, "terra", "VM::f_lt_f(%02x): (v1=%f < v2=%f) = %s\n", Modifier, v1, v2, v1 < v2 ? "TRUE" : "FALSE");
  sim_log_debug(145U, "VMDBG", "VM:: less-than test: (%f < %f) = %s \n", v1, v2, v1 < v2 ? "TRUE" : "FALSE");
  TerraVMC$pushf(v1 < v2);
}

#line 997
static inline void TerraVMC$f_gt_f(uint8_t Modifier)
#line 997
{
  float v1;
#line 998
  float v2;

#line 999
  v1 = TerraVMC$popf();
  v2 = TerraVMC$popf();
  sim_log_debug(142U, "terra", "VM::f_gt_f(%02x): (v1=%f > v2=%f) = %s\n", Modifier, v1, v2, v1 > v2 ? "TRUE" : "FALSE");
  sim_log_debug(143U, "VMDBG", "VM::  greater-than test: (%f > %f) = %s \n", v1, v2, v1 > v2 ? "TRUE" : "FALSE");
  TerraVMC$pushf(v1 > v2);
}

#line 989
static inline void TerraVMC$f_lte_f(uint8_t Modifier)
#line 989
{
  float v1;
#line 990
  float v2;

#line 991
  v1 = TerraVMC$popf();
  v2 = TerraVMC$popf();
  sim_log_debug(140U, "terra", "VM::f_lte_f(%02x): (v1=%f <= v2=%f) = %s\n", Modifier, v1, v2, v1 <= v2 ? "TRUE" : "FALSE");
  sim_log_debug(141U, "VMDBG", "VM:: less-than-equal test: (%f <= %f) = %s \n", v1, v2, v1 <= v2 ? "TRUE" : "FALSE");
  TerraVMC$pushf(v1 <= v2);
}

#line 981
static inline void TerraVMC$f_gte_f(uint8_t Modifier)
#line 981
{
  float v1;
#line 982
  float v2;

#line 983
  v1 = TerraVMC$popf();
  v2 = TerraVMC$popf();
  sim_log_debug(138U, "terra", "VM::f_gte_f(%02x): (v1=%f >= v2=%f) = %s\n", Modifier, v1, v2, v1 >= v2 ? "TRUE" : "FALSE");
  sim_log_debug(139U, "VMDBG", "VM::  greater-than-equal test: (%f >= %f) = %s \n", v1, v2, v1 >= v2 ? "TRUE" : "FALSE");
  TerraVMC$pushf(v1 >= v2);
}

#line 973
static inline void TerraVMC$f_neq_f(uint8_t Modifier)
#line 973
{
  float v1;
#line 974
  float v2;

#line 975
  v1 = TerraVMC$popf();
  v2 = TerraVMC$popf();
  sim_log_debug(136U, "terra", "VM::f_neq_f(%02x): (v1=%f != v2=%f) = %s\n", Modifier, v1, v2, v1 != v2 ? "TRUE" : "FALSE");
  sim_log_debug(137U, "VMDBG", "VM:: inequality test: (%f != %f) = %s \n", v1, v2, v1 != v2 ? "TRUE" : "FALSE");
  TerraVMC$pushf(v1 != v2);
}

#line 964
static inline void TerraVMC$f_eq_f(uint8_t Modifier)
#line 964
{
  float v1;
#line 965
  float v2;

#line 966
  v1 = TerraVMC$popf();
  v2 = TerraVMC$popf();
  sim_log_debug(134U, "terra", "VM::f_eq_f(%02x): (v1=%f == v2=%f) = %s\n", Modifier, v1, v2, v1 == v2 ? "TRUE" : "FALSE");
  sim_log_debug(135U, "VMDBG", "VM:: equality test: (%f == %f) = %s \n", v1, v2, v1 == v2 ? "TRUE" : "FALSE");
  TerraVMC$pushf(v1 == v2);
}

#line 955
static inline void TerraVMC$f_div_f(uint8_t Modifier)
#line 955
{
  float v1;
#line 956
  float v2;

#line 957
  v1 = TerraVMC$popf();
  v2 = TerraVMC$popf();
  sim_log_debug(132U, "terra", "VM::f_div_f(%02x): v1=%f, v2=%f, div=%f\n", Modifier, v1, v2, v1 / v2);
  sim_log_debug(133U, "VMDBG", "VM:: div operation: (%f / %f) = %f \n", v1, v2, v1 / v2);
  TerraVMC$pushf(v1 / v2);
}

#line 947
static inline void TerraVMC$f_mult_f(uint8_t Modifier)
#line 947
{
  float v1;
#line 948
  float v2;

#line 949
  v1 = TerraVMC$popf();
  v2 = TerraVMC$popf();
  sim_log_debug(130U, "terra", "VM::f_mult_f(%02x): v1=%f, v2=%f, mult=%f\n", Modifier, v1, v2, v1 * v2);
  sim_log_debug(131U, "VMDBG", "VM:: mult operation: (%f * %f) = %f \n", v1, v2, v1 * v2);
  TerraVMC$pushf(v1 * v2);
}

#line 939
static inline void TerraVMC$f_add_f(uint8_t Modifier)
#line 939
{
  float v1;
#line 940
  float v2;

#line 941
  v1 = TerraVMC$popf();
  v2 = TerraVMC$popf();
  sim_log_debug(128U, "terra", "VM::f_add(%02x): v1=%f, v2=%f, add=%f\n", Modifier, v1, v2, v1 + v2);
  sim_log_debug(129U, "VMDBG", "VM:: add operation: (%f + %f) = %f \n", v1, v2, v1 + v2);
  TerraVMC$pushf(v1 + v2);
}

#line 931
static inline void TerraVMC$f_sub_f(uint8_t Modifier)
#line 931
{
  float v1;
#line 932
  float v2;

#line 933
  v1 = TerraVMC$popf();
  v2 = TerraVMC$popf();
  sim_log_debug(126U, "terra", "VM::f_sub(%02x): v1=%f, v2=%f, sub=%f\n", Modifier, v1, v2, v1 - v2);
  sim_log_debug(127U, "VMDBG", "VM:: sub operation: (%f - %f) = %f \n", v1, v2, v1 - v2);
  TerraVMC$pushf(v1 - v2);
}

#line 924
static inline void TerraVMC$f_neg_f(uint8_t Modifier)
#line 924
{
  float v1;

#line 926
  v1 = TerraVMC$popf();
  sim_log_debug(124U, "terra", "VM::f_neg_f(%02x): -(v1=%f) =%f\n", Modifier, v1, -1 * v1);
  sim_log_debug(125U, "VMDBG", "VM:: negative float operation: (-%f) = %f \n", v1, -1 * v1);
  TerraVMC$pushf(-1 * v1);
}

#line 1512
static inline void TerraVMC$f_popx(uint8_t Modifier)
#line 1512
{
  TerraVMC$pop();
  sim_log_debug(209U, "terra", "VM::f_popx(%02x):\n", Modifier);
}

#line 915
static inline void TerraVMC$f_land(uint8_t Modifier)
#line 915
{
  int32_t v1;
#line 916
  int32_t v2;

#line 917
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(122U, "terra", "VM::f_land(%02x): (v1=%d && v2=%d) = %d\n", Modifier, v1, v2, v1 && v2);
  sim_log_debug(123U, "VMDBG", "VM:: logical AND operation: (%d && %d) = %s \n", v1, v2, v1 && v2 ? "TRUE" : "FALSE");
  TerraVMC$push(v1 && v2);
}

#line 907
static inline void TerraVMC$f_lor(uint8_t Modifier)
#line 907
{
  int32_t v1;
#line 908
  int32_t v2;

#line 909
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(120U, "terra", "VM::f_lor(%02x): (v1=%d || v2=%d) = %d\n", Modifier, v1, v2, v1 || v2);
  sim_log_debug(121U, "VMDBG", "VM:: logical OR operation: (%d || %d) = %s \n", v1, v2, v1 || v2 ? "TRUE" : "FALSE");
  TerraVMC$push(v1 || v2);
}

#line 899
static inline void TerraVMC$f_lt(uint8_t Modifier)
#line 899
{
  int32_t v1;
#line 900
  int32_t v2;

#line 901
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(118U, "terra", "VM::f_lt(%02x): (v1=%d < v2=%d) = %d\n", Modifier, v1, v2, v1 < v2);
  sim_log_debug(119U, "VMDBG", "VM:: less-than test: (%d < %d) = %s \n", v1, v2, v1 < v2 ? "TRUE" : "FALSE");
  TerraVMC$push(v1 < v2);
}

#line 891
static inline void TerraVMC$f_gt(uint8_t Modifier)
#line 891
{
  int32_t v1;
#line 892
  int32_t v2;

#line 893
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(116U, "terra", "VM::f_gt(%02x): (v1=%d > v2=%d) = %d\n", Modifier, v1, v2, v1 > v2);
  sim_log_debug(117U, "VMDBG", "VM::  greater-than test: (%d > %d) = %s \n", v1, v2, v1 > v2 ? "TRUE" : "FALSE");
  TerraVMC$push(v1 > v2);
}

#line 883
static inline void TerraVMC$f_lte(uint8_t Modifier)
#line 883
{
  int32_t v1;
#line 884
  int32_t v2;

#line 885
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(114U, "terra", "VM::f_lte(%02x): (v1=%d <= v2=%d) = %d\n", Modifier, v1, v2, v1 <= v2);
  sim_log_debug(115U, "VMDBG", "VM:: less-than-equal test: (%d <= %d) = %s \n", v1, v2, v1 <= v2 ? "TRUE" : "FALSE");
  TerraVMC$push(v1 <= v2);
}

#line 875
static inline void TerraVMC$f_gte(uint8_t Modifier)
#line 875
{
  int32_t v1;
#line 876
  int32_t v2;

#line 877
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(112U, "terra", "VM::f_gte(%02x): (v1=%d >= v2=%d) = %d\n", Modifier, v1, v2, v1 >= v2);
  sim_log_debug(113U, "VMDBG", "VM::  greater-than-equal test: (%d >= %d) = %s \n", v1, v2, v1 >= v2 ? "TRUE" : "FALSE");
  TerraVMC$push(v1 >= v2);
}

#line 867
static inline void TerraVMC$f_neq(uint8_t Modifier)
#line 867
{
  int32_t v1;
#line 868
  int32_t v2;

#line 869
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(110U, "terra", "VM::f_neq(%02x): (v1=%d != v2=%d) = %d\n", Modifier, v1, v2, v1 != v2);
  sim_log_debug(111U, "VMDBG", "VM:: inequality test: (%d != %d) = %s \n", v1, v2, v1 != v2 ? "TRUE" : "FALSE");
  TerraVMC$push(v1 != v2);
}

#line 858
static inline void TerraVMC$f_eq(uint8_t Modifier)
#line 858
{
  int32_t v1;
#line 859
  int32_t v2;

#line 860
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(108U, "terra", "VM::f_eq(%02x): (v1=%d == v2=%d) = %d\n", Modifier, v1, v2, v1 == v2);
  sim_log_debug(109U, "VMDBG", "VM:: equality test: (%d == %d) = %s \n", v1, v2, v1 == v2 ? "TRUE" : "FALSE");
  TerraVMC$push(v1 == v2);
}

#line 850
static inline void TerraVMC$f_bxor(uint8_t Modifier)
#line 850
{
  int32_t v1;
#line 851
  int32_t v2;

#line 852
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(106U, "terra", "VM::f_bxor(%02x): (v1=%d ^ v2=%d) = %d)\n", Modifier, v1, v2, v1 ^ v2);
  sim_log_debug(107U, "VMDBG", "VM:: binary XOR operation: (0x%x ^ 0x%x) = 0x%x \n", v1, v2, v1 ^ v2);
  TerraVMC$push(v1 ^ v2);
}

#line 842
static inline void TerraVMC$f_rshft(uint8_t Modifier)
#line 842
{
  int32_t v1;
#line 843
  int32_t v2;

#line 844
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(104U, "terra", "VM::f_rshft(%02x): (v1=%d >> v2=%d) = %d\n", Modifier, v1, v2, v1 >> v2);
  sim_log_debug(105U, "VMDBG", "VM:: right shift operation: (0x%x >> %d) = 0x%x \n", v1, v2, v1 >> v2);
  TerraVMC$push(v1 >> v2);
}

#line 834
static inline void TerraVMC$f_lshft(uint8_t Modifier)
#line 834
{
  int32_t v1;
#line 835
  int32_t v2;

#line 836
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(102U, "terra", "VM::f_lshft(%02x): (v1=%d << v2=%d) = %d\n", Modifier, v1, v2, v1 << v2);
  sim_log_debug(103U, "VMDBG", "VM:: left shift operation: (0x%x << %d) = 0x%x \n", v1, v2, v1 << v2);
  TerraVMC$push(v1 << v2);
}

#line 826
static inline void TerraVMC$f_band(uint8_t Modifier)
#line 826
{
  int32_t v1;
#line 827
  int32_t v2;

#line 828
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(100U, "terra", "VM::f_band(%02x): (v1=%d & v2=%d) = %d\n", Modifier, v1, v2, v1 & v2);
  sim_log_debug(101U, "VMDBG", "VM:: binary AND operation: (0x%x & 0x%x) = 0x%x \n", v1, v2, v1 & v2);
  TerraVMC$push(v1 & v2);
}

#line 818
static inline void TerraVMC$f_bor(uint8_t Modifier)
#line 818
{
  int32_t v1;
#line 819
  int32_t v2;

#line 820
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(98U, "terra", "VM::f_bor(%02x): (v1=%d | v2=%d) = %d\n", Modifier, v1, v2, v1 | v2);
  sim_log_debug(99U, "VMDBG", "VM:: binary OR operation: (0x%x | 0x%x) = 0x%x \n", v1, v2, v1 | v2);
  TerraVMC$push(v1 | v2);
}

#line 808
static inline void TerraVMC$f_div(uint8_t Modifier)
#line 808
{
  int32_t v1;
#line 809
  int32_t v2;

#line 810
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(96U, "terra", "VM::f_div(%02x): v1=%d, v2=%d, div=%d\n", Modifier, v1, v2, v2 == 0 ? 0 : v1 / v2);
  sim_log_debug(97U, "VMDBG", "VM:: div operation: (%d / %d) = %d \n", v1, v2, v2 == 0 ? 0 : v1 / v2);
  TerraVMC$push(v2 == 0 ? 0 : v1 / v2);
  if (v2 == 0) {
#line 815
    TerraVMC$evtError(E_DIVZERO);
    }
}

#line 799
static inline void TerraVMC$f_mult(uint8_t Modifier)
#line 799
{
  int32_t v1;
#line 800
  int32_t v2;

#line 801
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(94U, "terra", "VM::f_mult(%02x): v1=%d, v2=%d, mult=%d\n", Modifier, v1, v2, v1 * v2);
  sim_log_debug(95U, "VMDBG", "VM:: mult operation: (%d * %d) = %d \n", v1, v2, v1 * v2);
  TerraVMC$push(v1 * v2);
}

#line 789
static inline void TerraVMC$f_mod(uint8_t Modifier)
#line 789
{
  int32_t v1;
#line 790
  int32_t v2;

#line 791
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(92U, "terra", "VM::f_mod(%02x): v1=%d, v2=%d, mod=%d\n", Modifier, v1, v2, v1 % v2);
  sim_log_debug(93U, "VMDBG", "VM:: mod operation: (%d %% %d) = %d \n", v1, v2, v1 % v2);
  TerraVMC$push(v2 == 0 ? 0 : v1 % v2);
  if (v2 == 0) {
#line 796
    TerraVMC$evtError(E_DIVZERO);
    }
}

#line 780
static inline void TerraVMC$f_add(uint8_t Modifier)
#line 780
{
  int32_t v1;
#line 781
  int32_t v2;

#line 782
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(90U, "terra", "VM::f_add(%02x): v1=%d, v2=%d, add=%d\n", Modifier, v1, v2, v1 + v2);
  sim_log_debug(91U, "VMDBG", "VM:: add operation: (%d + %d) = %d \n", v1, v2, v1 + v2);
  TerraVMC$push(v1 + v2);
}

#line 771
static inline void TerraVMC$f_sub(uint8_t Modifier)
#line 771
{
  int32_t v1;
#line 772
  int32_t v2;

#line 773
  v1 = TerraVMC$pop();
  v2 = TerraVMC$pop();
  sim_log_debug(88U, "terra", "VM::f_sub(%02x): v1=%d, v2=%d, sub=%d\n", Modifier, v1, v2, v1 - v2);
  sim_log_debug(89U, "VMDBG", "VM:: sub operation: (%d - %d) = %d \n", v1, v2, v1 - v2);
  TerraVMC$push(v1 - v2);
}

#line 764
static inline void TerraVMC$f_neg(uint8_t Modifier)
#line 764
{
  int32_t v1;

#line 766
  v1 = TerraVMC$pop();
  sim_log_debug(86U, "terra", "VM::f_neg(%02x): -(v1=%d) =%d\n", Modifier, v1, -1 * v1);
  sim_log_debug(87U, "VMDBG", "VM:: negative operation: (-%d) = %d \n", v1, -1 * v1);
  TerraVMC$push(-1 * v1);
}

#line 757
static inline void TerraVMC$f_lnot(uint8_t Modifier)
#line 757
{
  int32_t v1;

#line 759
  v1 = TerraVMC$pop();
  sim_log_debug(84U, "terra", "VM::f_lnot(%02x): !(v1=%d) =%d\n", Modifier, v1, !v1);
  sim_log_debug(85U, "VMDBG", "VM:: logical NOT operation: (! %d) = %s \n", v1, !v1 ? "TRUE" : "FALSE");
  TerraVMC$push(!v1);
}

#line 750
static inline void TerraVMC$f_bnot(uint8_t Modifier)
#line 750
{
  int32_t v1;

#line 752
  v1 = TerraVMC$pop();
  sim_log_debug(82U, "terra", "VM::f_bnot(%02x): ~(v1=%d) =%d\n", Modifier, v1, ~v1);
  sim_log_debug(83U, "VMDBG", "VM:: binary NOT operation: (~ 0x%x) = 0x%x \n", v1, ~v1);
  TerraVMC$push(~v1);
}

#line 745
static inline void TerraVMC$f_end(uint8_t Modifier)
#line 745
{
  sim_log_debug(80U, "terra", "VM::f_end(%02x)\n", Modifier);
  sim_log_debug(81U, "VMDBG", "VM:: End of Trail\n");
}

#line 743
static inline void TerraVMC$f_nop(uint8_t Modifier)
#line 743
{
#line 743
  sim_log_debug(79U, "terra", "VM::f_nop(%02x)\n", Modifier);
}

#line 1550
static inline void TerraVMC$Decoder(uint8_t Opcode, uint8_t Modifier)
#line 1550
{


  sim_log_debug(212U, "terra", "VM::Decoder(): PC= %d opcode= %hhu modifier=%d Maddr[290]=%d\n", TerraVMC$PC[sim_node()] - 1, Opcode, Modifier, TerraVMC$getMVal(290, U8));
  switch (Opcode) {
      case op_nop: TerraVMC$f_nop(Modifier);
#line 1555
      break;
      case op_end: TerraVMC$f_end(Modifier);
#line 1556
      break;
      case op_bnot: TerraVMC$f_bnot(Modifier);
#line 1557
      break;
      case op_lnot: TerraVMC$f_lnot(Modifier);
#line 1558
      break;
      case op_neg: TerraVMC$f_neg(Modifier);
#line 1559
      break;
      case op_sub: TerraVMC$f_sub(Modifier);
#line 1560
      break;
      case op_add: TerraVMC$f_add(Modifier);
#line 1561
      break;
      case op_mod: TerraVMC$f_mod(Modifier);
#line 1562
      break;
      case op_mult: TerraVMC$f_mult(Modifier);
#line 1563
      break;
      case op_div: TerraVMC$f_div(Modifier);
#line 1564
      break;
      case op_bor: TerraVMC$f_bor(Modifier);
#line 1565
      break;
      case op_band: TerraVMC$f_band(Modifier);
#line 1566
      break;
      case op_lshft: TerraVMC$f_lshft(Modifier);
#line 1567
      break;
      case op_rshft: TerraVMC$f_rshft(Modifier);
#line 1568
      break;
      case op_bxor: TerraVMC$f_bxor(Modifier);
#line 1569
      break;
      case op_eq: TerraVMC$f_eq(Modifier);
#line 1570
      break;
      case op_neq: TerraVMC$f_neq(Modifier);
#line 1571
      break;
      case op_gte: TerraVMC$f_gte(Modifier);
#line 1572
      break;
      case op_lte: TerraVMC$f_lte(Modifier);
#line 1573
      break;
      case op_gt: TerraVMC$f_gt(Modifier);
#line 1574
      break;
      case op_lt: TerraVMC$f_lt(Modifier);
#line 1575
      break;
      case op_lor: TerraVMC$f_lor(Modifier);
#line 1576
      break;
      case op_land: TerraVMC$f_land(Modifier);
#line 1577
      break;
      case op_popx: TerraVMC$f_popx(Modifier);
#line 1578
      break;


      case op_neg_f: TerraVMC$f_neg_f(Modifier);
#line 1581
      break;
      case op_sub_f: TerraVMC$f_sub_f(Modifier);
#line 1582
      break;
      case op_add_f: TerraVMC$f_add_f(Modifier);
#line 1583
      break;
      case op_mult_f: TerraVMC$f_mult_f(Modifier);
#line 1584
      break;
      case op_div_f: TerraVMC$f_div_f(Modifier);
#line 1585
      break;
      case op_eq_f: TerraVMC$f_eq_f(Modifier);
#line 1586
      break;
      case op_neq_f: TerraVMC$f_neq_f(Modifier);
#line 1587
      break;
      case op_gte_f: TerraVMC$f_gte_f(Modifier);
#line 1588
      break;
      case op_lte_f: TerraVMC$f_lte_f(Modifier);
#line 1589
      break;
      case op_gt_f: TerraVMC$f_gt_f(Modifier);
#line 1590
      break;
      case op_lt_f: TerraVMC$f_lt_f(Modifier);
#line 1591
      break;
      case op_func: TerraVMC$f_func(Modifier);
#line 1592
      break;
      case op_outEvt_e: TerraVMC$f_outevt_e(Modifier);
#line 1593
      break;
      case op_outevt_z: TerraVMC$f_outevt_z(Modifier);
#line 1594
      break;
      case op_clken_e: TerraVMC$f_clken_e(Modifier);
#line 1595
      break;
      case op_clken_v: TerraVMC$f_clken_v(Modifier);
#line 1596
      break;
      case op_clken_c: TerraVMC$f_clken_c(Modifier);
#line 1597
      break;
      case op_set_v: TerraVMC$f_set_v(Modifier);
#line 1598
      break;
      case op_setarr_vc: TerraVMC$f_setarr_vc(Modifier);
#line 1599
      break;
      case op_setarr_vv: TerraVMC$f_setarr_vv(Modifier);
#line 1600
      break;



      case op_poparr_v: TerraVMC$f_poparr_v(Modifier);
#line 1604
      break;
      case op_pusharr_v: TerraVMC$f_pusharr_v(Modifier);
#line 1605
      break;
      case op_getextdt_e: TerraVMC$f_getextdt_e(Modifier);
#line 1606
      break;
      case op_trg: TerraVMC$f_trg(Modifier);
#line 1607
      break;
      case op_exec: TerraVMC$f_exec(Modifier);
#line 1608
      break;
      case op_chkret: TerraVMC$f_chkret(Modifier);
#line 1609
      break;
      case op_tkins_z: TerraVMC$f_tkins_z(Modifier);
#line 1610
      break;


      case op_push_c: TerraVMC$f_push_c(Modifier);
#line 1613
      break;
      case op_cast: TerraVMC$f_cast(Modifier);
#line 1614
      break;
      case op_memclr: TerraVMC$f_memclr(Modifier);
#line 1615
      break;
      case op_ifelse: TerraVMC$f_ifelse(Modifier);
#line 1616
      break;
      case op_asen: TerraVMC$f_asen(Modifier);
#line 1617
      break;
      case op_tkclr: TerraVMC$f_tkclr(Modifier);
#line 1618
      break;
      case op_outEvt_c: TerraVMC$f_outevt_c(Modifier);
#line 1619
      break;
      case op_getextdt_v: TerraVMC$f_getextdt_v(Modifier);
#line 1620
      break;
      case op_inc: TerraVMC$f_inc(Modifier);
#line 1621
      break;
      case op_dec: TerraVMC$f_dec(Modifier);
#line 1622
      break;
      case op_set_e: TerraVMC$f_set_e(Modifier);
#line 1623
      break;
      case op_deref: TerraVMC$f_deref(Modifier);
#line 1624
      break;
      case op_memcpy: TerraVMC$f_memcpy(Modifier);
#line 1625
      break;

      case op_tkins_max: TerraVMC$f_tkins_max(Modifier);
#line 1627
      break;
      case op_push_v: TerraVMC$f_push_v(Modifier);
#line 1628
      break;
      case op_pop: TerraVMC$f_pop(Modifier);
#line 1629
      break;
      case op_outEvt_v: TerraVMC$f_outevt_v(Modifier);
#line 1630
      break;
      case op_set_c: TerraVMC$f_set_c(Modifier);
#line 1631
      break;
    }
}

#line 661
static inline void TerraVMC$execTrail(uint16_t lbl)
#line 661
{
  uint8_t Opcode;
#line 662
  uint8_t Param1;

#line 663
  sim_log_debug(75U, "terra", "CEU::execTrail(%d), haltedFlag=%s\n", lbl, TerraVMC$haltedFlag[sim_node()] ? "TRUE" : "FALSE");
  if (TerraVMC$haltedFlag[sim_node()]) {
#line 664
    return;
    }
  TerraVMC$PC[sim_node()] = TerraVMC$getLblAddr(lbl);
  if (TerraVMC$PC[sim_node()] == 0) {
      sim_log_debug(76U, "terra", "ERROR CEU::execTrail():Label %d not found!\n", lbl);
      return;
    }
  TerraVMC$getOpCode(&Opcode, &Param1);
  while (Opcode != op_end) {
      if (TerraVMC$haltedFlag[sim_node()]) {
#line 673
        return;
        }
#line 674
      TerraVMC$Decoder(Opcode, Param1);
      TerraVMC$getOpCode(&Opcode, &Param1);
    }
  sim_log_debug(77U, "terra", "CEU::execTrail(%d):: found an 'end' opcode\n", lbl);
}

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

# 110 "TerraVMC.nc"
static inline void TerraVMC$TViewer(char *cmd, uint16_t p1, uint16_t p2)
#line 110
{
  sim_log_debug(49U, "TVIEW", "<<: %s %d %d %d :>>\n", cmd, TOS_NODE_ID, p1, p2);
}

# 25 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
inline static void VMCustomP$SA$setActuator(uint8_t id, uint16_t val){
#line 25
  SensActP$SA$setActuator(id, val);
#line 25
}
#line 25
# 310 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$VM$reset(void )
#line 310
{

  VMCustomP$SA$setActuator(AID_LEDS, 0);
}

# 15 "VMCustom.nc"
inline static void TerraVMC$VMCustom$reset(void ){
#line 15
  VMCustomP$VM$reset();
#line 15
}
#line 15
# 136 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP$Leds$set(uint8_t val)
#line 136
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 137
    {
      if (val & LEDS_LED0) {
          LedsP$Leds$led0On();
        }
      else {
          LedsP$Leds$led0Off();
        }
      if (val & LEDS_LED1) {
          LedsP$Leds$led1On();
        }
      else {
          LedsP$Leds$led1Off();
        }
      if (val & LEDS_LED2) {
          LedsP$Leds$led2On();
        }
      else {
          LedsP$Leds$led2Off();
        }
    }
#line 156
    __nesc_atomic_end(__nesc_atomic); }
}

# 134 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void SensActP$A_LEDS$set(uint8_t val){
#line 134
  LedsP$Leds$set(val);
#line 134
}
#line 134
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void )
#line 59
{
#line 59
  atm128RegFile[sim_node()][27U] &= ~(1 << 2);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void )
#line 59
{
#line 59
  atm128RegFile[sim_node()][27U] &= ~(1 << 1);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void )
#line 59
{
#line 59
  atm128RegFile[sim_node()][27U] &= ~(1 << 0);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr();
#line 41
}
#line 41
# 53 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline void SensActP$TViewer(char *cmd, uint16_t p1, uint16_t p2)
#line 53
{
  sim_log_debug(488U, "TVIEW", "<<: %s %d %d %d :>>\n", cmd, TOS_NODE_ID, p1, p2);
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void SensActP$A_LEDS$led0On(void ){
#line 56
  LedsP$Leds$led0On();
#line 56
}
#line 56





inline static void SensActP$A_LEDS$led0Off(void ){
#line 61
  LedsP$Leds$led0Off();
#line 61
}
#line 61
#line 72
inline static void SensActP$A_LEDS$led1On(void ){
#line 72
  LedsP$Leds$led1On();
#line 72
}
#line 72





inline static void SensActP$A_LEDS$led1Off(void ){
#line 77
  LedsP$Leds$led1Off();
#line 77
}
#line 77
#line 89
inline static void SensActP$A_LEDS$led2On(void ){
#line 89
  LedsP$Leds$led2On();
#line 89
}
#line 89





inline static void SensActP$A_LEDS$led2Off(void ){
#line 94
  LedsP$Leds$led2Off();
#line 94
}
#line 94
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void )
#line 54
{
#line 54
  return (atm128RegFile[sim_node()][27U] & (1 << 2)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool LedsP$Led0$get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void )
#line 60
{
#line 60
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    atm128RegFile[sim_node()][27U] ^= 1 << 2;
#line 60
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle();
#line 42
}
#line 42
# 84 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0Toggle(void )
#line 84
{
  LedsP$Led0$toggle();
  sim_log_debug(503U, "LedsC", "LEDS: Led""0"" %s.\n", LedsP$Led0$get() ? "off" : "on");
#line 86
  ;
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void SensActP$A_LEDS$led0Toggle(void ){
#line 67
  LedsP$Leds$led0Toggle();
#line 67
}
#line 67
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void )
#line 54
{
#line 54
  return (atm128RegFile[sim_node()][27U] & (1 << 1)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool LedsP$Led1$get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void )
#line 60
{
#line 60
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    atm128RegFile[sim_node()][27U] ^= 1 << 1;
#line 60
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle();
#line 42
}
#line 42
# 99 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1Toggle(void )
#line 99
{
  LedsP$Led1$toggle();
  sim_log_debug(506U, "LedsC", "LEDS: Led""1"" %s.\n", LedsP$Led1$get() ? "off" : "on");
#line 101
  ;
}

# 83 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void SensActP$A_LEDS$led1Toggle(void ){
#line 83
  LedsP$Leds$led1Toggle();
#line 83
}
#line 83
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void )
#line 54
{
#line 54
  return (atm128RegFile[sim_node()][27U] & (1 << 0)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool LedsP$Led2$get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void )
#line 60
{
#line 60
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    atm128RegFile[sim_node()][27U] ^= 1 << 0;
#line 60
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle();
#line 42
}
#line 42
# 114 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP$Leds$led2Toggle(void )
#line 114
{
  LedsP$Led2$toggle();
  sim_log_debug(509U, "LedsC", "LEDS: Led""2"" %s.\n", LedsP$Led2$get() ? "off" : "on");
#line 116
  ;
}

# 100 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void SensActP$A_LEDS$led2Toggle(void ){
#line 100
  LedsP$Leds$led2Toggle();
#line 100
}
#line 100
# 43 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$proc_leds(uint16_t id, uint32_t value)
#line 43
{
  sim_log_debug(449U, "terra", "Custom::proc_leds(): id=%d, val=%d\n", id, (uint8_t )value);
  VMCustomP$SA$setActuator(AID_LEDS, (uint8_t )(value & 0x07));
}

#line 47
static inline void VMCustomP$proc_led0(uint16_t id, uint32_t value)
#line 47
{
  sim_log_debug(450U, "terra", "Custom::proc_led0(): id=%d, value=%d\n", id, (uint8_t )value);
  if (value > 1) {
    VMCustomP$SA$setActuator(AID_LED0_TOGGLE, (uint8_t )(value & 0x07));
    }
  else {
#line 52
    VMCustomP$SA$setActuator(AID_LED0, (uint8_t )(value & 0x01));
    }
}

#line 54
static inline void VMCustomP$proc_led1(uint16_t id, uint32_t value)
#line 54
{
  sim_log_debug(451U, "terra", "Custom::proc_led1(): id=%d, value=%d\n", id, (uint8_t )value);
  if (value > 1) {
    VMCustomP$SA$setActuator(AID_LED1_TOGGLE, (uint8_t )(value & 0x07));
    }
  else {
#line 59
    VMCustomP$SA$setActuator(AID_LED1, (uint8_t )(value & 0x01));
    }
}

#line 61
static inline void VMCustomP$proc_led2(uint16_t id, uint32_t value)
#line 61
{
  sim_log_debug(452U, "terra", "Custom::proc_led2(): id=%d, value=%d\n", id, (uint8_t )value);
  if (value > 1) {
    VMCustomP$SA$setActuator(AID_LED2_TOGGLE, (uint8_t )(value & 0x07));
    }
  else {
#line 66
    VMCustomP$SA$setActuator(AID_LED2, (uint8_t )(value & 0x01));
    }
}

# 16 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensAct.nc"
inline static void VMCustomP$SA$reqSensor(uint8_t reqSource, uint8_t id){
#line 16
  SensActP$SA$reqSensor(reqSource, id);
#line 16
}
#line 16
# 68 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$proc_req_temp(uint16_t id, uint32_t value)
#line 68
{
  sim_log_debug(453U, "terra", "Custom::proc_req_temp(): id=%d\n", id);
  VMCustomP$SA$reqSensor(REQ_SOURCE1, SID_TEMP);
}

# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t dataSensorP$tempRead$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(dataSensorP$tempRead);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 72 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/dataSensorP.nc"
static inline error_t dataSensorP$Temp$read(void )
#line 72
{
#line 72
  dataSensorP$tempRead$postTask();
#line 72
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static error_t SensActP$S_TEMP$read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = dataSensorP$Temp$read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t dataSensorP$photoRead$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(dataSensorP$photoRead);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 73 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/dataSensorP.nc"
static inline error_t dataSensorP$Photo$read(void )
#line 73
{
#line 73
  dataSensorP$photoRead$postTask();
#line 73
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static error_t SensActP$S_PHOTO$read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = dataSensorP$Photo$read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 119 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline uint8_t LedsP$Leds$get(void )
#line 119
{
  uint8_t rval;

#line 121
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 121
    {
      rval = 0;
      if (!LedsP$Led0$get()) {
          rval |= LEDS_LED0;
        }
      if (!LedsP$Led1$get()) {
          rval |= LEDS_LED1;
        }
      if (!LedsP$Led2$get()) {
          rval |= LEDS_LED2;
        }
    }
#line 132
    __nesc_atomic_end(__nesc_atomic); }
  return rval;
}

# 117 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static uint8_t SensActP$A_LEDS$get(void ){
#line 117
  unsigned char __nesc_result;
#line 117

#line 117
  __nesc_result = LedsP$Leds$get();
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t dataSensorP$voltRead$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(dataSensorP$voltRead);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 74 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/dataSensorP.nc"
static inline error_t dataSensorP$Volt$read(void )
#line 74
{
#line 74
  dataSensorP$voltRead$postTask();
#line 74
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/interfaces/Read.nc"
inline static error_t SensActP$S_VOLT$read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = dataSensorP$Volt$read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 87 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static inline bool SensActP$getPinX(int sid)
#line 87
{








  return FALSE;
}

# 72 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$proc_req_photo(uint16_t id, uint32_t value)
#line 72
{
  sim_log_debug(454U, "terra", "Custom::proc_req_photo(): id=%d\n", id);
  VMCustomP$SA$reqSensor(REQ_SOURCE1, SID_PHOTO);
}

#line 76
static inline void VMCustomP$proc_req_volts(uint16_t id, uint32_t value)
#line 76
{
  sim_log_debug(455U, "terra", "Custom::proc_req_volts(): id=%d\n", id);
  VMCustomP$SA$reqSensor(REQ_SOURCE1, SID_VOLT);
}











static inline void VMCustomP$proc_send(uint16_t id, uint32_t addr)
#line 91
{
  VMCustomP$proc_send_x(id, (uint16_t )addr, FALSE);
}

# 1191 "BasicServicesP.nc"
static inline error_t BasicServicesP$BSRadio$send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck)
#line 1191
{
  sim_log_debug(407U, "terra", "BS::BSRadio.send(): insert in outQueue. AM_ID=%d, Target=%u\n", am_id, target);
  memcpy(& BasicServicesP$tempInputOutQ[sim_node()].Data, dataMsg, dataSize);
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].AM_ID.nxdata, am_id);
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].DataSize.nxdata, dataSize);
  __nesc_hton_uint16(BasicServicesP$tempInputOutQ[sim_node()].sendToMote.nxdata, target);
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].reqAck.nxdata, reqAck);
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].RFPower.nxdata, BasicServicesP$userRFPowerIdx[sim_node()]);
  sim_log_debug(408U, "VMDBG", "Radio: Sending user msg AM_ID=%d to node %u\n", am_id, target);
  if (BasicServicesP$outQ$put(&BasicServicesP$tempInputOutQ[sim_node()]) != SUCCESS) {
      sim_log_debug(409U, "terra", "BS::BSRadio.send(): outQueue is full! Losting a message.\n");
      return EBUSY;
    }
  return SUCCESS;
}

# 9 "BSRadio.nc"
inline static error_t VMCustomP$BSRadio$send(uint8_t am_id, uint16_t target, void *dataMsg, uint8_t dataSize, uint8_t reqAck){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = BasicServicesP$BSRadio$send(am_id, target, dataMsg, dataSize, reqAck);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 94 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static inline void VMCustomP$proc_send_ack(uint16_t id, uint32_t addr)
#line 94
{
  VMCustomP$proc_send_x(id, (uint16_t )addr, TRUE);
}


static inline void VMCustomP$proc_set_port_a(uint16_t id, uint32_t value)
#line 99
{
  sim_log_debug(457U, "terra", "Custom::proc_set_port_a(): id=%d, value=%d\n", id, value);
  VMCustomP$SA$setActuator(AID_OUT1, (uint8_t )(value & 0x01));
}

#line 103
static inline void VMCustomP$proc_set_port_b(uint16_t id, uint32_t value)
#line 103
{
  sim_log_debug(458U, "terra", "Custom::proc_set_port_b(): id=%d, value=%d\n", id, value);
  VMCustomP$SA$setActuator(AID_OUT2, (uint8_t )(value & 0x01));
}

#line 107
static inline void VMCustomP$proc_cfg_port_a(uint16_t id, uint32_t value)
#line 107
{
  sim_log_debug(459U, "terra", "Custom::proc_cfg_port_a(): id=%d, value=%d\n", id, value);
  VMCustomP$SA$setActuator(AID_PIN1, (uint8_t )(value & 0x01));
}

#line 111
static inline void VMCustomP$proc_cfg_port_b(uint16_t id, uint32_t value)
#line 111
{
  sim_log_debug(460U, "terra", "Custom::proc_cfg_port_b(): id=%d, value=%d\n", id, value);
  VMCustomP$SA$setActuator(AID_PIN2, (uint8_t )(value & 0x01));
}

#line 115
static inline void VMCustomP$proc_req_port_a(uint16_t id, uint32_t value)
#line 115
{
  sim_log_debug(461U, "terra", "Custom::proc_req_port_a(): id=%d\n", id);
  VMCustomP$SA$reqSensor(REQ_SOURCE1, SID_IN1);
}

#line 119
static inline void VMCustomP$proc_req_port_b(uint16_t id, uint32_t value)
#line 119
{
  sim_log_debug(462U, "terra", "Custom::proc_req_port_b(): id=%d\n", id);
  VMCustomP$SA$reqSensor(REQ_SOURCE1, SID_IN2);
}

#line 123
static inline void VMCustomP$proc_cfg_int_a(uint16_t id, uint32_t value)
#line 123
{
  sim_log_debug(463U, "terra", "Custom::proc_cfg_int_a(): id=%d, value=%d\n", id, value);
  VMCustomP$SA$setActuator(AID_INT1, (uint8_t )value);
}

#line 127
static inline void VMCustomP$proc_cfg_int_b(uint16_t id, uint32_t value)
#line 127
{
  sim_log_debug(464U, "terra", "Custom::proc_cfg_int_b(): id=%d value=%d\n", id, value);
  VMCustomP$SA$setActuator(AID_INT2, (uint8_t )value);
}

#line 131
static inline void VMCustomP$proc_req_custom_a(uint16_t id, uint32_t value)
#line 131
{
  uint8_t auxId;

#line 133
  __nesc_hton_uint8(VMCustomP$ExtDataCustomA[sim_node()].nxdata, (uint8_t )value);
  sim_log_debug(465U, "terra", "Custom::proc_req_custom_a(): id=%d, ExtDataCustomA=%d\n", id, __nesc_ntoh_uint8(VMCustomP$ExtDataCustomA[sim_node()].nxdata));
  auxId = (uint8_t )value;

  VMCustomP$VM$queueEvt(I_CUSTOM_A_ID, auxId, &VMCustomP$ExtDataCustomA[sim_node()]);
  VMCustomP$VM$queueEvt(I_CUSTOM_A, 0, &VMCustomP$ExtDataCustomA[sim_node()]);
}









static inline void VMCustomP$proc_req_mic(uint16_t id, uint32_t value)
#line 149
{
  sim_log_debug(467U, "terra", "Custom::proc_req_mic(): id=%d, value=%d, MIC Flad=%d\n", id, value, VMCustomP$MIC_flag[sim_node()]);
}









static inline void VMCustomP$proc_beep(uint16_t id, uint32_t value)
#line 161
{
  sim_log_debug(468U, "terra", "Custom::proc_beep(): id=%d, val=%d\n", id, (uint16_t )value);
  VMCustomP$SA$setActuator(AID_SOUNDER, (uint16_t )value);
}

#line 141
static inline void VMCustomP$proc_req_custom(uint16_t id, uint32_t value)
#line 141
{
  sim_log_debug(466U, "terra", "Custom::proc_req_custom(): id=%d\n", id);

  __nesc_hton_uint8(VMCustomP$ExtDataCustomA[sim_node()].nxdata, 0);
  VMCustomP$VM$queueEvt(I_CUSTOM, 0, &VMCustomP$ExtDataCustomA[sim_node()]);
}

# 151 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
inline static uint32_t BasicServicesP$TimerVM$getdt(void ){
#line 151
  unsigned int __nesc_result;
#line 151

#line 151
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getdt(0U);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
#line 92
inline static bool BasicServicesP$TimerVM$isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(0U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 78
inline static void BasicServicesP$TimerVM$stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
#line 78
}
#line 78
#line 73
inline static void BasicServicesP$TimerVM$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, dt);
#line 73
}
#line 73
# 334 "/usr/lib/ncc/nesc_nx.h"
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

# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 54
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 54
}
#line 54
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP$Timer0$get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 569 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 569
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 577 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$cancel_compare(void )
#line 577
{
  sim_log_debug(448U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP$compare[sim_node()]);
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP$compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 116
static inline void HplAtm128Timer0AsyncP$notify_changed(void )
#line 116
{
  uint8_t newScale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 118
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP$oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP$oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP$schedule_new_compare();
}

#line 545
static inline void HplAtm128Timer0AsyncP$cancel_overflow(void )
#line 545
{
  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cancelled = 1;
      sim_log_debug(447U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP$overflow[sim_node()]);
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 481
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt)
#line 481
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(444U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(445U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP$configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void )
#line 500
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP$timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void )
#line 534
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_overflow();

#line 536
  HplAtm128Timer0AsyncP$configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_overflow();
    }
  HplAtm128Timer0AsyncP$overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t)
#line 148
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  return t;
}

#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal)
#line 297
{
  uint8_t curVal = HplAtm128Timer0AsyncP$Timer0$get();

#line 299
  sim_log_debug(437U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 305
      adjustment = adjustment << HplAtm128Timer0AsyncP$shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP$clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP$schedule_new_overflow();
      HplAtm128Timer0AsyncP$notify_changed();
    }
}

#line 187
static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt)
#line 187
{
  sim_log_debug(427U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 194
      sim_print_now(timeStr, 128);
      sim_log_debug(428U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(429U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP$Timer0$set(0);
        }
      else {
          sim_log_debug(430U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(431U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(432U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(433U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP$configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void )
#line 223
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 225
  sim_log_debug(434U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP$timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer0$overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 70
}
#line 70
# 58 "/opt/tinyos-2.1.2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 82
}
#line 82
# 85 "/opt/tinyos-2.1.2/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 85
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP$Compare$get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 58
}
#line 58
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 78
}
#line 78
# 189 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len)
#line 189
{
  if (len <= 29) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

# 126 "/opt/tinyos-2.1.2/tos/interfaces/Packet.nc"
inline static void * BasicServicesP$RadioPacket$getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = TossimActiveMessageC$Packet$getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 185 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void )
#line 185
{
  return 29;
}

# 106 "/opt/tinyos-2.1.2/tos/interfaces/Packet.nc"
inline static uint8_t BasicServicesP$RadioPacket$maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = TossimActiveMessageC$Packet$maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 128 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg)
#line 128
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 130
  __nesc_hton_uint8(meta->ack.nxdata, TRUE);
  return SUCCESS;
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t BasicServicesP$RadioAck$requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 134 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$PacketAcknowledgements$noAck(message_t *ack)
#line 134
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(ack);

#line 136
  __nesc_hton_uint8(meta->ack.nxdata, FALSE);
  return SUCCESS;
}

# 71 "/opt/tinyos-2.1.2/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t BasicServicesP$RadioAck$noAck(message_t * msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$noAck(msg);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 32 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/AMAuxC.nc"
static inline void AMAuxC$AMAux$setPower(message_t *p_msg, uint8_t power)
#line 32
{
}

# 2 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/AMAux.nc"
inline static void BasicServicesP$AMAux$setPower(message_t *p_msg, uint8_t power){
#line 2
  AMAuxC$AMAux$setPower(p_msg, power);
#line 2
}
#line 2
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t SerialActiveMessageC$modelSendDone$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(SerialActiveMessageC$modelSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 124 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
static inline error_t SerialActiveMessageC$Model$default$send(int node, message_t *msg, uint8_t len)
#line 124
{

  SerialActiveMessageC$sendMsgPtr[sim_node()] = msg;

  sim_log_debug(332U, "Serial", "Sending serial message (%p) of type %hhu and length %hhu @ %s.\n", msg, SerialActiveMessageC$AMPacket$type(msg), len, sim_time_string());

  sim_sf_dispatch_packet((void *)msg, len);

  SerialActiveMessageC$modelSendDone$postTask();

  return SUCCESS;
}

# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t SerialActiveMessageC$Model$send(int node, message_t *msg, uint8_t len){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = SerialActiveMessageC$Model$default$send(node, msg, len);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 87 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
static inline error_t SerialActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 89
{
  error_t err;
  serial_header_t *header = SerialActiveMessageC$getHeader(amsg);

  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);

  __nesc_hton_uint16(header->src.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(header->length.nxdata, len);
  err = SerialActiveMessageC$Model$send((int )addr, amsg, len + sizeof(serial_header_t ));
  return err;
}

# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static error_t BasicServicesP$SerialSender$send(am_id_t arg_0x40d89e18, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = SerialActiveMessageC$AMSend$send(arg_0x40d89e18, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 483 "/opt/tinyos-2.1.2/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg)
#line 483
{
  free(msg);
}

# 61 "/opt/tinyos-2.1.2/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC$Model$shouldAck(message_t *msg){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = TossimPacketModelC$GainRadioModel$shouldAck(msg);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 85 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$receive(message_t *msg){
#line 85
  TossimActiveMessageC$Model$receive(msg);
#line 85
}
#line 85
# 288 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg)
#line 288
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      TossimPacketModelC$Packet$receive(msg);
    }
}

# 60 "/opt/tinyos-2.1.2/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$receive(message_t *msg){
#line 60
  TossimPacketModelC$GainRadioModel$receive(msg);
#line 60
}
#line 60
# 260 "/opt/tinyos-2.1.2/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg)
#line 260
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 263
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return CpmModelC$shouldReceive(msg->power - noise);
}

#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt)
#line 296
{
  CpmModelC$receive_message_t *mine = (CpmModelC$receive_message_t *)evt->data;
  CpmModelC$receive_message_t *predecessor = (void *)0;
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

  sim_log_debug(311U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 311
    if (mine == CpmModelC$outstandingReceptionHead[sim_node()]) {
        CpmModelC$outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(312U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 317
  sim_log_debug(313U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC$checkReceive(mine)) {
      sim_log_debug(314U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 327
      __nesc_hton_int8(meta->strength.nxdata, mine->strength);

      sim_log_debug_clear(315U, "CpmModelC,SNRLoss", "  -signaling reception\n");
      CpmModelC$Model$receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(316U, "CpmModelC", " acknowledgment requested, ");
        }
      else {
          sim_log_debug_clear(317U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
          sim_log_debug_clear(318U, "CpmModelC", " scheduling ack.\n");
          CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC$free_receive_message(mine);
        }

      CpmModelC$receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(319U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
              sim_log_debug_clear(320U, "CpmModelC", " scheduling ack.\n");
              CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC$free_receive_message(mine);
            }
        }
      else {
          CpmModelC$free_receive_message(mine);
        }
      CpmModelC$receiving[sim_node()] = 0;
      sim_log_debug_clear(321U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 467
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg)
#line 467
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 469
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC$sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void )
#line 479
{
  return (CpmModelC$receive_message_t *)malloc(sizeof(CpmModelC$receive_message_t ));
}

#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 369
{
  sim_event_t *evt;
  CpmModelC$receive_message_t *list;
  CpmModelC$receive_message_t *rcv = CpmModelC$allocate_receive_message();
  double noiseStr = CpmModelC$packetNoise(rcv);

#line 374
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(322U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 396
    if (!CpmModelC$shouldReceive(power - noiseStr)) {
        sim_log_debug(323U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 400
      if (CpmModelC$receiving[sim_node()]) {
          sim_log_debug(324U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
          rcv->lost = 1;
        }
      else {
#line 404
        if (CpmModelC$transmitting[sim_node()] && rcv->start < CpmModelC$transmissionEndTime[sim_node()] && CpmModelC$transmissionEndTime[sim_node()] <= rcv->end) {
            sim_log_debug(325U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-transmission, transmissionEndTime %llu\n", source, sim_node(), CpmModelC$transmissionEndTime[sim_node()]);
            rcv->lost = 1;
          }
        else {
            CpmModelC$receiving[sim_node()] = 1;
          }
        }
      }
    }
#line 412
  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (!CpmModelC$shouldReceive(list->power - rcv->power)) {
          sim_log_debug(326U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC$outstandingReceptionHead[sim_node()];
  CpmModelC$outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC$allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 428
{
  int prevNode = sim_node();

#line 430
  sim_log_debug(327U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC$enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 436
{
  CpmModelC$receive_message_t *list;
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 439
  CpmModelC$requestAck[sim_node()] = ack;
  CpmModelC$outgoing[sim_node()] = msg;
  CpmModelC$transmissionEndTime[sim_node()] = endTime;
  sim_log_debug(328U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 446
      CpmModelC$sim_gain_put(other, msg, endTime, ack, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }

  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      list->lost = 1;
      sim_log_debug(329U, "CpmModelC,SNRLoss", "Lost packet from %i because %i has outstanding reception, startTime %llu endTime %llu\n", list->source, sim_node(), list->start, list->end);
      list = list->next;
    }
}

# 48 "/opt/tinyos-2.1.2/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 48
  CpmModelC$Model$putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 48
}
#line 48
# 280 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt)
#line 280
{
  message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 282
  TossimPacketModelC$sending[sim_node()] = (void *)0;
  TossimPacketModelC$transmitting[sim_node()] = FALSE;
  sim_log_debug(303U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
  TossimPacketModelC$Packet$sendDone(rval, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

#line 253
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt)
#line 253
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

  duration = 8 * TossimPacketModelC$sendingLength[sim_node()];
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = TossimPacketModelC$send_transmit_done;

  sim_log_debug(301U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
  TossimPacketModelC$GainRadioModel$putOnAirTo(TossimPacketModelC$destNode[sim_node()], TossimPacketModelC$sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, 0.0, 0.0);
  __nesc_hton_uint8(metadata->ack.nxdata, 0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(302U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);

  sim_queue_insert(evt);
}

# 459 "/opt/tinyos-2.1.2/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$Model$setPendingTransmission(void )
#line 459
{
  CpmModelC$transmitting[sim_node()] = TRUE;
  sim_log_debug(330U, "CpmModelC", "setPendingTransmission: transmitting %i @ %s\n", CpmModelC$transmitting[sim_node()], sim_time_string());
}

# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void ){
#line 57
  CpmModelC$Model$setPendingTransmission();
#line 57
}
#line 57
# 211 "/opt/tinyos-2.1.2/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$Model$clearChannel(void )
#line 211
{
  sim_log_debug(309U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC$packetNoise((void *)0), CpmModelC$clearThreshold[sim_node()]);
  return CpmModelC$packetNoise((void *)0) < CpmModelC$clearThreshold[sim_node()];
}

# 56 "/opt/tinyos-2.1.2/tos/lib/tossim/GainRadioModel.nc"
inline static bool TossimPacketModelC$GainRadioModel$clearChannel(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CpmModelC$Model$clearChannel();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 211 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt)
#line 211
{
  TossimPacketModelC$backoffCount[sim_node()]++;
  if (TossimPacketModelC$GainRadioModel$clearChannel()) {
      TossimPacketModelC$neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }
  if (TossimPacketModelC$neededFreeSamples[sim_node()] == 0) {
      sim_time_t delay;

#line 221
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC$transmitting[sim_node()] = TRUE;
      TossimPacketModelC$GainRadioModel$setPendingTransmission();
      evt->handle = TossimPacketModelC$send_transmit;
      sim_queue_insert(evt);
    }
  else {
#line 229
    if (sim_csma_max_iterations() == 0 || 
    TossimPacketModelC$backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 233
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC$backoffCount[sim_node()]);
        backoff %= modulo;

        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 243
        TossimPacketModelC$sending[sim_node()] = (void *)0;
        sim_log_debug(300U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
        TossimPacketModelC$Packet$sendDone(rval, EBUSY);
      }
    }
}

#line 187
static inline void TossimPacketModelC$start_csma(void )
#line 187
{
  sim_time_t first_sample;




  sim_time_t backoff = sim_random();

#line 194
  backoff %= sim_csma_init_high() - sim_csma_init_low();
  backoff += sim_csma_init_low();
  backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  sim_log_debug(299U, "TossimPacketModelC", "Starting CMSA with %lli.\n", backoff);
  first_sample = sim_time() + backoff;

  TossimPacketModelC$sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC$sendEvent[sim_node()].time = first_sample;
  TossimPacketModelC$sendEvent[sim_node()].force = 0;
  TossimPacketModelC$sendEvent[sim_node()].cancelled = 0;

  TossimPacketModelC$sendEvent[sim_node()].handle = TossimPacketModelC$send_backoff;
  TossimPacketModelC$sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  sim_queue_insert(&TossimPacketModelC$sendEvent[sim_node()]);
}

#line 161
static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len)
#line 161
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(297U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC$running[sim_node()]) {
      sim_log_error(298U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC$sending[sim_node()] != (void *)0) {
      return EBUSY;
    }
  TossimPacketModelC$sendingLength[sim_node()] = len;
  TossimPacketModelC$sending[sim_node()] = msg;
  TossimPacketModelC$destNode[sim_node()] = dest;
  TossimPacketModelC$backoffCount[sim_node()] = 0;
  TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC$start_csma();
  return SUCCESS;
}

# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = TossimPacketModelC$Packet$send(node, msg, len);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 73 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 75
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 78
  sim_log_debug(287U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);
  __nesc_hton_uint16(header->src.nxdata, TossimActiveMessageC$AMPacket$address());
  __nesc_hton_uint8(header->length.nxdata, len);
  err = TossimActiveMessageC$Model$send((int )addr, amsg, len + sizeof(tossim_header_t ) + sizeof(tossim_footer_t ));
  return err;
}

# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static error_t BasicServicesP$RadioSender$send(am_id_t arg_0x40d577c8, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = TossimActiveMessageC$AMSend$send(arg_0x40d577c8, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 947 "BasicServicesP.nc"
static inline error_t BasicServicesP$RadioSender_send(uint8_t am_id, uint16_t target, message_t *msg, uint8_t len)
#line 947
{
  error_t stat;

  memcpy(&BasicServicesP$serialAux[sim_node()], &BasicServicesP$sendBuff[sim_node()], sizeof(message_t ));

  stat = BasicServicesP$RadioSender$send(__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata), __nesc_ntoh_uint16(BasicServicesP$tempOutputOutQ[sim_node()].sendToMote.nxdata), &BasicServicesP$sendBuff[sim_node()], __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].DataSize.nxdata));


  if (__nesc_ntoh_uint16(BasicServicesP$MoteID[sim_node()].nxdata) == RootNode) {
      if (__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata) == AM_REQPROGBLOCK || (__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata) >= AM_CUSTOM_START && __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata) <= AM_CUSTOM_END)) {
          BasicServicesP$SerialSender$send(__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata), 0, &BasicServicesP$serialAux[sim_node()], __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].DataSize.nxdata));
        }
    }

  return stat;
}

# 90 "/opt/tinyos-2.1.2/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$timeInMs(void )
#line 90
{
  sim_time_t ftime = sim_time();
  int hours;
#line 92
  int minutes;
#line 92
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

# 85 "/opt/tinyos-2.1.2/tos/interfaces/PacketAcknowledgements.nc"
inline static bool BasicServicesP$RadioAck$wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 11 "BSRadio.nc"
inline static void BasicServicesP$BSRadio$sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked){
#line 11
  VMCustomP$BSRadio$sendDoneAck(am_id, msg, dataMsg, error, wasAcked);
#line 11
}
#line 11
#line 10
inline static void BasicServicesP$BSRadio$sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error){
#line 10
  VMCustomP$BSRadio$sendDone(am_id, msg, dataMsg, error);
#line 10
}
#line 10
# 230 "/opt/tinyos-2.1.2/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$prr_estimate_from_snr(double SNR)
#line 230
{



  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 239
  sim_log_debug(310U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 242
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 245
  return prr_hat;
}

# 127 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg)
#line 127
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(msg);

#line 129
  if (__nesc_ntoh_uint16(header->dest.nxdata) == TossimActiveMessageC$amAddress()) {
      sim_log_debug(290U, "Acks", "Received packet addressed to me so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 87 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModel.nc"
inline static bool TossimPacketModelC$Packet$shouldAck(message_t *msg){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = TossimActiveMessageC$Model$shouldAck(msg);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 296 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg)
#line 296
{
  if (TossimPacketModelC$running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

#line 299
      __nesc_hton_uint8(metadata->ack.nxdata, 1);
      if (msg != TossimPacketModelC$sending[sim_node()]) {
          TossimPacketModelC$error[sim_node()] = 1;
          sim_log_debug(304U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC$sending[sim_node()]);
        }
    }
}

# 59 "/opt/tinyos-2.1.2/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$acked(message_t *msg){
#line 59
  TossimPacketModelC$GainRadioModel$acked(msg);
#line 59
}
#line 59
# 151 "/opt/tinyos-2.1.2/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$arr_estimate_from_snr(double SNR)
#line 151
{
  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 157
  sim_log_debug(307U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 160
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 163
  return prr_hat;
}

static inline int CpmModelC$shouldAckReceive(double snr)
#line 166
{
  double prr = CpmModelC$arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 169
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 173
        prr = 0.0;
        }
    }
#line 175
  return (int )prr;
}

static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt)
#line 178
{






  if (
#line 184
  CpmModelC$requestAck[sim_node()] && 
  CpmModelC$outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC$receive_message_t *rcv = (CpmModelC$receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC$packetNoise(rcv);
      double snr = power - noise;

#line 191
      if (CpmModelC$shouldAckReceive(snr)) {
          CpmModelC$Model$acked(CpmModelC$outgoing[sim_node()]);
        }
    }
  CpmModelC$free_receive_message((CpmModelC$receive_message_t *)evt->data);
}

# 65 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
static inline /*TerraVMAppC.evtQ*/QueueC$0$queue_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$head(void )
#line 65
{
  return /*TerraVMAppC.evtQ*/QueueC$0$queue[sim_node()][/*TerraVMAppC.evtQ*/QueueC$0$head[sim_node()]];
}

#line 53
static inline bool /*TerraVMAppC.evtQ*/QueueC$0$Queue$empty(void )
#line 53
{
  return /*TerraVMAppC.evtQ*/QueueC$0$size[sim_node()] == 0;
}

# 539 "TerraVMC.nc"
static inline int TerraVMC$ceu_go_init(int *ret)
{

  if (TerraVMC$haltedFlag[sim_node()]) {
#line 542
    return 0;
    }
  (&TerraVMC$CEU_[sim_node()])->p_tracks = (TerraVMC$tceu_trk *)TerraVMC$CEU_data[sim_node()] + 0;
  (&TerraVMC$CEU_[sim_node()])->p_mem = TerraVMC$CEU_data[sim_node()] + (TerraVMC$nTracks[sim_node()] + 1) * sizeof(TerraVMC$tceu_trk );
  TerraVMC$MEM[sim_node()] = (&TerraVMC$CEU_[sim_node()])->p_mem;

  TerraVMC$ceu_track_ins(0x01, 0xFF, 0, TerraVMC$ProgStart[sim_node()]);
  return TerraVMC$ceu_go(ret);
}

#line 733
static inline void TerraVMC$ceu_boot(void )
{
  TerraVMC$old[sim_node()] = (u32 )TerraVMC$BSTimerVM$getNow();
  TerraVMC$ceu_go_init((void *)0);
}

# 69 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 61 "/opt/tinyos-2.1.2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$SubInit$default$init(void )
#line 61
{
  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP$SubInit$default$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 59
{
#line 59
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 41
}
#line 41
# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 62
{
#line 62
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 44
}
#line 44
# 49 "/opt/tinyos-2.1.2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 49
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void )
#line 55
{
  sim_log_debug(229U, "Pins", "Setting bit %i of port %i.\n", (int )0, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 0;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void )
#line 55
{
  sim_log_debug(230U, "Pins", "Setting bit %i of port %i.\n", (int )1, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 1;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void )
#line 55
{
  sim_log_debug(231U, "Pins", "Setting bit %i of port %i.\n", (int )2, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 2;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 40
}
#line 40
# 63 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void )
#line 63
{
#line 63
  atm128RegFile[sim_node()][26U] |= 1 << 0;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 46
}
#line 46
# 63 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void )
#line 63
{
#line 63
  atm128RegFile[sim_node()][26U] |= 1 << 1;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 46
}
#line 46
# 63 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void )
#line 63
{
#line 63
  atm128RegFile[sim_node()][26U] |= 1 << 2;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    sim_log_debug(500U, "Init", "LEDS: initialized.\n");
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP$Init$init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP$PlatformInit$init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 21 "/opt/tinyos-2.1.2/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 21
{
  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/tinyos-2.1.2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  return ok;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t SimMainP$PlatformInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Scheduler.nc"
inline static bool SimMainP$Scheduler$runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SimSchedulerBasicP$Scheduler$runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 86 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Init$init(void )
#line 86
{
  sim_log_debug(292U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC$initialized[sim_node()] = TRUE;



  TossimPacketModelC$sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 447 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 447
{
#line 447
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 65 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 65
  HplAtm128Timer0AsyncP$Compare$start();
#line 65
}
#line 65
# 364 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x)
#line 364
{
  sim_log_debug(439U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 46 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(control);
#line 46
}
#line 46
# 561 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 561
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC$seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 62 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Init.nc"
inline static error_t SimMainP$SoftwareInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RandomMlcgC$Init$init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, TossimPacketModelC$Init$init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t SerialActiveMessageC$startDone$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(SerialActiveMessageC$startDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 77 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
static inline error_t SerialActiveMessageC$SplitControl$start(void )
#line 77
{
  SerialActiveMessageC$startDone$postTask();
  return SUCCESS;
}

# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static error_t BasicServicesP$SerialControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialActiveMessageC$SplitControl$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 67 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC$startDoneTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TossimPacketModelC$startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 106 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Control$start(void )
#line 106
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(293U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(294U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC$startDoneTask$postTask();
  return SUCCESS;
}

# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static error_t BasicServicesP$RadioControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = TossimPacketModelC$Control$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 157 "BasicServicesP.nc"
static inline void BasicServicesP$inicCtlData(void )
#line 157
{
  sim_log_debug(336U, "terra", "BS::inicCtlData().\n");

  if (BasicServicesP$firstInic[sim_node()]) {

      __nesc_hton_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata, 0);
      __nesc_hton_uint16(BasicServicesP$NewDataSeq[sim_node()].nxdata, 0);
      __nesc_hton_uint16(BasicServicesP$maxSeenDataSeq[sim_node()].nxdata, 0);
      __nesc_hton_uint16(BasicServicesP$NewDataMoteSource[sim_node()].nxdata, AM_BROADCAST_ADDR);

      __nesc_hton_uint16(BasicServicesP$ProgBlockLen[sim_node()].nxdata, CURRENT_MAX_BLOCKS);
      __nesc_hton_uint16(BasicServicesP$ProgMoteSource[sim_node()].nxdata, 0);
    }
}

# 46 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Random.nc"
inline static uint32_t BasicServicesP$Random$rand32(void ){
#line 46
  unsigned int __nesc_result;
#line 46

#line 46
  __nesc_result = RandomMlcgC$Random$rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 176 "BasicServicesP.nc"
static inline void BasicServicesP$TOSBoot$booted(void )
#line 176
{
  uint32_t rnd = 0;

#line 178
  sim_log_debug(337U, "terra", "BS::TOSBoot.booted().\n");
  BasicServicesP$userRFPowerIdx[sim_node()] = 1;





  __nesc_hton_uint16(BasicServicesP$MoteID[sim_node()].nxdata, TOS_NODE_ID);
  rnd = BasicServicesP$Random$rand32() & 0x0f;
  BasicServicesP$reSendDelay[sim_node()] = RESEND_DELAY + rnd * 5;

  if (BasicServicesP$firstInic[sim_node()]) {
      BasicServicesP$inicCtlData();



      if (BasicServicesP$RadioControl$start() != SUCCESS) {
#line 194
        sim_log_debug(338U, "terra", "BS::Error in RadioControl.start()\n");
        }
      if (BasicServicesP$SerialControl$start() != SUCCESS) {
#line 196
        sim_log_debug(339U, "terra", "BS::Error in SerialControl.start()\n");
        }
    }
  else 
#line 198
    {
      BasicServicesP$BSBoot$booted();
    }
}

# 17 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/dataSensorP.nc"
static inline void dataSensorP$resetDataFile(void )
#line 17
{
  uint8_t i;
  dataSensorP$reg_t data[100];

#line 20
  dataSensorP$initialized[sim_node()] = TRUE;
  sim_log_debug(497U, "terra", "dataSensor.resetDataFile():\n");
  for (i = 0; i < 100; i++) {
      data[i].temp = 500;
      data[i].photo = 400;
      data[i].volt = 1000;
    }
  dataSensorP$file[sim_node()] = fopen("sensors.bin", "wb");
  if (!dataSensorP$file[sim_node()]) {
      sim_log_debug(498U, "terra", "dataSensor.resetDataFile(): Unable to create %s file!\n", "sensors.bin");
      printf("*******\n    Unable to create %s file!\n *******\n", "sensors.bin");
      exit(0);
    }
  else 
#line 32
    {
      fwrite(&data, 100 * sizeof(dataSensorP$reg_t ), 1, dataSensorP$file[sim_node()]);
      fclose(dataSensorP$file[sim_node()]);
    }
}

static inline void dataSensorP$Boot$booted(void )
#line 38
{
  if (TOS_NODE_ID == 1) {
#line 39
    dataSensorP$resetDataFile();
    }
}

# 60 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Boot.nc"
inline static void SimMainP$Boot$booted(void ){
#line 60
  dataSensorP$Boot$booted();
#line 60
  BasicServicesP$TOSBoot$booted();
#line 60
}
#line 60
# 55 "/opt/tinyos-2.1.2/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getEuid(void )
#line 55
{
  return SimMoteP$euid[sim_node()];
}

#line 58
static inline void SimMoteP$SimMote$setEuid(long long int e)
#line 58
{
  SimMoteP$euid[sim_node()] = e;
}







static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size)
#line 68
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 85
static inline void SimMoteP$SimMote$turnOff(void )
#line 85
{
  SimMoteP$isOn[sim_node()] = FALSE;
}

#line 157
static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e)
#line 157
{
  char buf[128];

#line 159
  sim_print_now(buf, 128);

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(286U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP$SimMote$turnOn();
}

# 46 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 46
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 50
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 246 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 246
{
  va_list args;
  int i;

#line 249
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 254
      __builtin_va_start(args, format);
      fprintf(file, "DEBUG (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 84
static void fillInOutput(int id, char *name)
#line 84
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 89
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          int i;
#line 137
          int j;

#line 138
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 121 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_tossim.c"
  unsigned long sim_node()
#line 121
{
  return current_node;
}

# 197 "/opt/tinyos-2.1.2/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 197
{
  int parent_index;

#line 199
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 158
static void swap(node_t *first, node_t *second)
#line 158
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 55 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 55
{
  long long int key;

#line 57
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 114 "/opt/tinyos-2.1.2/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 114
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 117
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 171
static void down_heap(heap_t *heap, int findex)
#line 171
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 185
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 190
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 60 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 60
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 64
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 74
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 79
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 84
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 90
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 57
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 65
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 234 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 234
{
  int i;

#line 236
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 67 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;



  for (j = 0; j < 1000; j++) {
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseGenTime = 0;
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 102 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 102
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 80
  void sim_end()
#line 80
{
  sim_queue_init();
}



  int sim_random()
#line 86
{
  uint32_t mlcg;
#line 87
  uint32_t p;
#line 87
  uint32_t q;
  uint64_t tmpseed;

#line 89
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}









  sim_time_t sim_time()
#line 110
{
  return sim_ticks;
}

#line 113
  void sim_set_time(sim_time_t t)
#line 113
{
  sim_ticks = t;
}

  sim_time_t sim_ticks_per_sec()
#line 117
{
  return 10000000000ULL;
}




  void sim_set_node(unsigned long node)
#line 124
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 129
{
  bool result = FALSE;

#line 131
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 133
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 134 "/opt/tinyos-2.1.2/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 134
{
  bool result;
  int tmp = sim_node();

#line 137
  sim_set_node(mote);
  result = SimMoteP$SimMote$isOn();
  sim_set_node(tmp);
  return result;
}

# 276 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 276
{
  va_list args;
  int i;

#line 279
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 284
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 156 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_tossim.c"
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 156
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

  int sim_print_now(char *buf, int len)
#line 179
{
  return sim_print_time(buf, len, sim_time());
}


  char *sim_time_string()
#line 184
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

  void sim_add_channel(char *channel, FILE *file)
#line 189
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 193
{
  return sim_log_remove_channel(channel, file);
}

# 57 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 57
{
  return csmaInitHigh;
}

#line 60
  int sim_csma_init_low()
#line 60
{
  return csmaInitLow;
}

#line 63
  int sim_csma_high()
#line 63
{
  return csmaHigh;
}

#line 66
  int sim_csma_low()
#line 66
{
  return csmaLow;
}

#line 69
  int sim_csma_symbols_per_sec()
#line 69
{
  return csmaSymbolsPerSec;
}

#line 72
  int sim_csma_bits_per_symbol()
#line 72
{
  return csmaBitsPerSymbol;
}

#line 75
  int sim_csma_preamble_length()
#line 75
{
  return csmaPreambleLength;
}

#line 78
  int sim_csma_exponent_base()
#line 78
{
  return csmaExponentBase;
#line 79
  ;
}

#line 81
  int sim_csma_max_iterations()
#line 81
{
  return csmaMaxIterations;
}

#line 84
  int sim_csma_min_free_samples()
#line 84
{
  return csmaMinFreeSamples;
}

#line 87
  int sim_csma_rxtx_delay()
#line 87
{
  return csmaRxTxDelay;
}

#line 90
  int sim_csma_ack_time()
#line 90
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 96
{
  csmaInitHigh = val;
}

#line 99
  void sim_csma_set_init_low(int val)
#line 99
{
  csmaInitLow = val;
}

#line 102
  void sim_csma_set_high(int val)
#line 102
{
  csmaHigh = val;
}

#line 105
  void sim_csma_set_low(int val)
#line 105
{
  csmaLow = val;
}

#line 108
  void sim_csma_set_symbols_per_sec(int val)
#line 108
{
  csmaSymbolsPerSec = val;
}

#line 111
  void sim_csma_set_bits_per_symbol(int val)
#line 111
{
  csmaBitsPerSymbol = val;
}

#line 114
  void sim_csma_set_preamble_length(int val)
#line 114
{
  csmaPreambleLength = val;
}

#line 117
  void sim_csma_set_exponent_base(int val)
#line 117
{
  csmaExponentBase = val;
}

#line 120
  void sim_csma_set_max_iterations(int val)
#line 120
{
  csmaMaxIterations = val;
}

#line 123
  void sim_csma_set_min_free_samples(int val)
#line 123
{
  csmaMinFreeSamples = val;
}

#line 126
  void sim_csma_set_rxtx_delay(int val)
#line 126
{
  csmaRxTxDelay = val;
}

#line 129
  void sim_csma_set_ack_time(int val)
#line 129
{
  csmaAckTime = val;
}

# 16 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 105
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 124
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 124
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 148
  double sim_gain_sample_noise(int node)
#line 148
{
  double val;
#line 149
  double adjust;

#line 150
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 84 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 84
{
  makeNoiseModel(node_id);
  makePmfDistr(node_id);
}

#line 419
  void makeNoiseModel(uint16_t node_id)
#line 419
{
  int i;

#line 421
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_log_debug(44U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id].key[i]);
    }




  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i]);
      arrangeKey(node_id);
      noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  noiseData[node_id].generated = 1;
}

#line 113
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 116
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 144
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  sim_noise_hash_t *noise_hash;

#line 150
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(13U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      hashtable_insert(pnoiseTable, key, noise_hash);
      sim_log_debug(14U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 169
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(15U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(16U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 245
  void arrangeKey(uint16_t node_id)
{
  char *pKey = noiseData[node_id].key;

#line 248
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id);
      arrangeKey(node_id);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_log_debug_clear(21U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(22U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(23U, "HASH", "\n");
}

#line 192
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 201
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);



  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 215
      sim_log_debug(17U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 235
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(18U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(19U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(20U, "HashZeroDebug", "\n");
    }
}

#line 97
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 97
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 102
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
  sim_log_debug(12U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}

#line 123
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 126
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 288
  char sim_noise_gen(uint16_t node_id)
{
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 298
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {

      sim_log_debug(24U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(25U, "HASH", "(N)Noise\n");
      sim_log_debug(26U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(27U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(28U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(29U, "HASH", "\n");

  sim_log_debug(30U, "HASH", "Printing Key\n");
  sim_log_debug(31U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(32U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(33U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(34U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(35U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(36U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(37U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 350
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 357
  sim_log_debug(39U, "HASH", "OUT:for i=%d\n", i);

  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(40U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/opt/tinyos-2.1.2/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 364 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint32_t cur_t)
#line 364
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;

  prev_t = noiseData[node_id].noiseGenTime;

  if (noiseData[node_id].generated == 0) {
      sim_log_error(41U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime = cur_t;
      noiseData[node_id].key[cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 388
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(42U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal;
    }
  else 
#line 394
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id);
          arrangeKey(node_id);
          noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime = cur_t;
  if (noise == 0) {
      sim_log_debug(43U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 261 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 261
{
  va_list args;
  int i;

#line 264
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 269
      __builtin_va_start(args, format);
      fprintf(file, "ERROR (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 54 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 54
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 56
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 59
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 61
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 64
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 66
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 69
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 71
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 74
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 76
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 78
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 78
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 80
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 83
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 85
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 88
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 90
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 93
{
  message_t *msg = (message_t *)p;

#line 95
  return (uint8_t *)& msg->data;
}

#line 97
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 97
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 100
  __nesc_hton_int8(md->strength.nxdata, str);
}

#line 102
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 102
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(45U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 254 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 254
{
  sim_event_t *evt = TossimActiveMessageC$allocate_deliver_event(node, msg, t);

#line 256
  sim_queue_insert(evt);
}

#line 109
static void TossimActiveMessageC$Model$receive(message_t *msg)
#line 109
{
  uint8_t len;
  void *payload;

  memcpy(TossimActiveMessageC$bufferPointer[sim_node()], msg, sizeof(message_t ));
  len = TossimActiveMessageC$Packet$payloadLength(TossimActiveMessageC$bufferPointer[sim_node()]);
  payload = TossimActiveMessageC$Packet$getPayload(TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$Packet$maxPayloadLength());

  if (TossimActiveMessageC$AMPacket$isForMe(msg)) {
      sim_log_debug(288U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Receive$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
  else {
      sim_log_debug(289U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, TossimActiveMessageC$AMPacket$destination(TossimActiveMessageC$bufferPointer[sim_node()]), sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Snoop$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
}

#line 140
static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg)
#line 140
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 142
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 76 "/opt/tinyos-2.1.2/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 76
{
  if (!ActiveMessageAddressC$set[sim_node()]) {
      ActiveMessageAddressC$addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC$set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC$addr[sim_node()];
}

# 165 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimActiveMessageC.nc"
static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg)
#line 165
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 167
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 150
static am_addr_t TossimActiveMessageC$AMPacket$source(message_t *amsg)
#line 150
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 152
  return __nesc_ntoh_uint16(header->src.nxdata);
}

# 399 "BasicServicesP.nc"
static void BasicServicesP$recNewProgVersionNet_receive(message_t *msg, void *payload, uint8_t len)
#line 399
{
  newProgVersion_t *xmsg;

#line 401
  sim_log_debug(345U, "terra", "BS::recNewProgVersionNet_receive(). from %hhu\n", BasicServicesP$RadioAMPacket$source(msg));

  memcpy(BasicServicesP$tempInputInQ[sim_node()].Data, payload, sizeof(newProgVersion_t ));
  xmsg = (newProgVersion_t *)BasicServicesP$tempInputInQ[sim_node()].Data;
  __nesc_hton_uint8(BasicServicesP$tempInputInQ[sim_node()].AM_ID.nxdata, AM_NEWPROGVERSION);
  __nesc_hton_uint8(BasicServicesP$tempInputInQ[sim_node()].DataSize.nxdata, sizeof(newProgVersion_t ));

  if (__nesc_ntoh_uint16(xmsg->versionId.nxdata) <= __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata) || __nesc_ntoh_uint16(xmsg->versionId.nxdata) == __nesc_ntoh_uint16(BasicServicesP$lastRecNewProgVersion[sim_node()].nxdata)) {
#line 408
      sim_log_debug(346U, "terra", "BS::recNewProgVersionNet_receive(): Discarding duplicated message!\n");
#line 408
      return;
    }
  if (BasicServicesP$inQ$put(&BasicServicesP$tempInputInQ[sim_node()]) != SUCCESS) {
#line 410
    sim_log_debug(347U, "terra", "BS::recNewProgVersionNet_receive(): inQueue is full! Losting a message.\n");
    }
  __nesc_hton_uint16(BasicServicesP$ProgMoteSource[sim_node()].nxdata, BasicServicesP$RadioAMPacket$source(msg));
  __nesc_hton_uint16(BasicServicesP$lastRecNewProgVersion[sim_node()].nxdata, __nesc_ntoh_uint16(xmsg->versionId.nxdata));

  __nesc_hton_uint16(BasicServicesP$tempInputInQ[sim_node()].sendToMote.nxdata, AM_BROADCAST_ADDR);
  memcpy(&BasicServicesP$lastNewProgVersion[sim_node()], &BasicServicesP$tempInputInQ[sim_node()], sizeof(GenericData_t ));
}

# 21 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$put(void *Data)
#line 21
{
  sim_log_debug(412U, "terra", "dataQ[%hhu]::put(). Size and FlagFree before %hhu : %s\n", 0, /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[sim_node()], /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ[sim_node()] == TRUE ? "TRUE" : "FALSE");

  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[sim_node()] >= 5) {
      return FAIL;
    }

  memcpy((void *)&/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qData[sim_node()][/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qTail[sim_node()]], Data, sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataType ));
  /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qTail[sim_node()]++;
#line 29
  /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qTail[sim_node()] = (uint8_t )(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qTail[sim_node()] % 5);
  /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[sim_node()]++;
  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ[sim_node()] == TRUE) {
      /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ[sim_node()] = FALSE;
#line 32
      /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataReady$postTask();
    }
  return SUCCESS;
}

# 205 "/opt/tinyos-2.1.2/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  error_t result;

#line 208
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      result = SimSchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(281U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(282U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 77
static void SimSchedulerBasicP$sim_scheduler_submit_event(void )
#line 77
{
  if (SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP$sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP$sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 423 "BasicServicesP.nc"
static void BasicServicesP$recNewProgBlockNet_receive(message_t *msg, void *payload, uint8_t len)
#line 423
{
  newProgBlock_t *xmsg;

#line 425
  sim_log_debug(348U, "terra", "BS::recNewProgBlockNet_receive().\n");

  memcpy(BasicServicesP$tempInputInQ[sim_node()].Data, payload, sizeof(newProgBlock_t ));
  xmsg = (newProgBlock_t *)BasicServicesP$tempInputInQ[sim_node()].Data;
  __nesc_hton_uint8(BasicServicesP$tempInputInQ[sim_node()].AM_ID.nxdata, AM_NEWPROGBLOCK);
  __nesc_hton_uint8(BasicServicesP$tempInputInQ[sim_node()].DataSize.nxdata, sizeof(newProgBlock_t ));

  sim_log_debug(349U, "terra", "BS::recNewProgBlockNet_receive(): (xmsg->versionId=%d,ProgVersion=%d, xmsg->blockId=%d, ProgBlockStart=%d\n", __nesc_ntoh_uint16(xmsg->versionId.nxdata), __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata), __nesc_ntoh_uint16(xmsg->blockId.nxdata), __nesc_ntoh_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata));
  if (__nesc_ntoh_uint16(xmsg->versionId.nxdata) == __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata)) {
      if (!BasicServicesP$BM$get(__nesc_ntoh_uint16(xmsg->blockId.nxdata))) {
          if (__nesc_ntoh_uint16(xmsg->blockId.nxdata) == __nesc_ntoh_uint16(BasicServicesP$ProgBlockStart[sim_node()].nxdata)) {

              if (BasicServicesP$outQ$put(&BasicServicesP$lastNewProgVersion[sim_node()]) != SUCCESS) {
#line 437
                sim_log_debug(350U, "terra", "BS::recNewProgBlockNet_receive(): outQueue is full! Losting a message.\n");
                }
            }
          if (BasicServicesP$inQ$put(&BasicServicesP$tempInputInQ[sim_node()]) != SUCCESS) {
#line 440
            sim_log_debug(351U, "terra", "BS::recNewProgBlockNet_receive(): inQueue is full! Losting a message.\n");
            }
          __nesc_hton_uint16(BasicServicesP$ProgMoteSource[sim_node()].nxdata, BasicServicesP$RadioAMPacket$source(msg));

          if (BasicServicesP$outQ$put(&BasicServicesP$tempInputInQ[sim_node()]) != SUCCESS) {
#line 444
            sim_log_debug(352U, "terra", "BS::recNewProgBlockNet_receive(): outQueue is full! Losting a message.\n");
            }
        }
      else 
#line 445
        {
          sim_log_debug(353U, "terra", "BS::recNewProgBlockNet_receive(): Discarding duplicated message - block is 0!\n");
        }
    }
  else 
#line 448
    {
      if (__nesc_ntoh_uint16(xmsg->versionId.nxdata) > __nesc_ntoh_uint16(BasicServicesP$ProgVersion[sim_node()].nxdata)) {

          BasicServicesP$ProgReqTimer$startOneShot(BasicServicesP$getRequestTimeout());
        }
      else {
#line 453
        sim_log_debug(354U, "terra", "BS::recNewProgBlockNet_receive(): Discarding old version message!\n");
        }
    }
}

# 84 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVectorC.nc"
static bool /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$get(uint16_t bitnum)
{
  sim_log_debug(410U, "terra", "VM::BitVector.get(): bitnum=%d, bits=%0x, ARRAY_SIZE=%d\n", bitnum, (uint8_t )/*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[sim_node()][/*BasicServicesC.Bitmap*/vmBitVectorC$0$getIndex(bitnum)], /*BasicServicesC.Bitmap*/vmBitVectorC$0$ARRAY_SIZE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 87
    {
#line 87
      {
        unsigned char __nesc_temp = 
#line 87
        /*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[sim_node()][/*BasicServicesC.Bitmap*/vmBitVectorC$0$getIndex(bitnum)] & /*BasicServicesC.Bitmap*/vmBitVectorC$0$getMask(bitnum) ? TRUE : FALSE;

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

# 21 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$put(void *Data)
#line 21
{
  sim_log_debug(417U, "terra", "dataQ[%hhu]::put(). Size and FlagFree before %hhu : %s\n", 1, /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[sim_node()], /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ[sim_node()] == TRUE ? "TRUE" : "FALSE");

  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[sim_node()] >= 10) {
      return FAIL;
    }

  memcpy((void *)&/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qData[sim_node()][/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qTail[sim_node()]], Data, sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataType ));
  /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qTail[sim_node()]++;
#line 29
  /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qTail[sim_node()] = (uint8_t )(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qTail[sim_node()] % 10);
  /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[sim_node()]++;
  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ[sim_node()] == TRUE) {
      /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ[sim_node()] = FALSE;
#line 32
      /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataReady$postTask();
    }
  return SUCCESS;
}

# 144 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 161 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 282 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void )
#line 282
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP$last_zero();

#line 285
  elapsed = HplAtm128Timer0AsyncP$sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP$shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(436U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 108
static sim_time_t HplAtm128Timer0AsyncP$last_zero(void )
#line 108
{
  if (HplAtm128Timer0AsyncP$lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP$lastZero[sim_node()];
}

# 106 "/opt/tinyos-2.1.2/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 106
{
  long long int result;
  int tmp = sim_node();

#line 109
  sim_set_node(mote);
  result = SimMoteP$SimMote$getStartTime();
  sim_set_node(tmp);
  return result;
}

# 160 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void )
#line 160
{
  uint8_t scale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 162
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void )
#line 321
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void )
#line 383
{
  Atm128_TIFR_t at;

#line 385
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 457
static uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 457
{
  sim_log_debug(442U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 499 "BasicServicesP.nc"
static void BasicServicesP$recCustomMsgNet_receive(message_t *msg, void *payload, uint8_t len)
#line 499
{
  uint8_t am_id = (uint8_t )BasicServicesP$RadioAMPacket$type(msg);

#line 501
  sim_log_debug(362U, "terra", "BS::recCustomMsgNet.receive():\n");
  sim_log_debug(363U, "VMDBG", "Radio: Received Custom Msg AM=%d from %d\n", am_id, BasicServicesP$RadioAMPacket$source(msg));
  BasicServicesP$BSRadio$receive(am_id, msg, payload, len);
}

# 110 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 110
{
  return 29;
}

  sim_packet_t *sim_packet_allocate()
#line 114
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 118
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

# 56 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim_serial_packet.c"
  void sim_serial_packet_set_destination(sim_serial_packet_t *msg, uint16_t dest)
#line 56
{
  serial_header_t *hdr = getSerialHeader((message_t *)msg);

#line 58
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

    uint16_t sim_serial_packet_destination(sim_serial_packet_t *msg)
#line 61
{
  serial_header_t *hdr = getSerialHeader((message_t *)msg);

#line 63
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_serial_packet_set_source(sim_serial_packet_t *msg, uint16_t src)
#line 66
{
  serial_header_t *hdr = getSerialHeader((message_t *)msg);

#line 68
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

    uint16_t sim_serial_packet_source(sim_serial_packet_t *msg)
#line 71
{
  serial_header_t *hdr = getSerialHeader((message_t *)msg);

#line 73
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_serial_packet_set_length(sim_serial_packet_t *msg, uint8_t length)
#line 76
{
  serial_header_t *hdr = getSerialHeader((message_t *)msg);

#line 78
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 80
  uint16_t sim_serial_packet_length(sim_serial_packet_t *msg)
#line 80
{
  serial_header_t *hdr = getSerialHeader((message_t *)msg);

#line 82
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_serial_packet_set_type(sim_serial_packet_t *msg, uint8_t type)
#line 85
{
  serial_header_t *hdr = getSerialHeader((message_t *)msg);

#line 87
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_serial_packet_type(sim_serial_packet_t *msg)
#line 90
{
  serial_header_t *hdr = getSerialHeader((message_t *)msg);

#line 92
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_serial_packet_data(sim_serial_packet_t *p)
#line 95
{
  message_t *msg = (message_t *)p;

#line 97
  return (uint8_t *)& msg->data;
}

  void sim_serial_packet_deliver(int node, sim_serial_packet_t *msg, sim_time_t t)
#line 100
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(46U, "Packet", "sim_serial_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  serial_active_message_deliver(node, (message_t *)msg, t);
}

# 293 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim/SerialActiveMessageC.nc"
  void serial_active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 293
{
  sim_event_t *evt = SerialActiveMessageC$allocate_serial_deliver_event(node, msg, t);

#line 295
  sim_queue_insert(evt);
}

#line 196
static am_id_t SerialActiveMessageC$AMPacket$type(message_t *amsg)
#line 196
{
  serial_header_t *header = SerialActiveMessageC$getHeader(amsg);

#line 198
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 108 "/opt/tinyos-2.1.2/tos/lib/tossim/sf/sim_serial_packet.c"
  uint8_t sim_serial_packet_max_length(sim_serial_packet_t *msg)
#line 108
{
  return 29;
}

  sim_serial_packet_t *sim_serial_packet_allocate()
#line 112
{
  return (sim_serial_packet_t *)malloc(sizeof(message_t ));
}

  void sim_serial_packet_free(sim_serial_packet_t *p)
#line 116
{
  printf("sim_serial_packet.c: Freeing packet %p\n", p);
  free(p);
}

# 51 "/opt/tinyos-2.1.2/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 51
{
  char timeBuf[128];

#line 53
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {






      SimMainP$Scheduler$init();





      SimMainP$PlatformInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;





      SimMainP$SoftwareInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;
    }
#line 75
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(277U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP$Boot$booted();





  return 0;
}

# 180 "/opt/tinyos-2.1.2/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

#line 183
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP$popTask();
      if (nextTask == SimSchedulerBasicP$NO_TASK) 
        {
          sim_log_debug(279U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 189
            FALSE;

            {
#line 189
              __nesc_atomic_end(__nesc_atomic); 
#line 189
              return __nesc_temp;
            }
          }
        }
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
#line 192
  sim_log_debug(280U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

# 1644 "TerraVMC.nc"
static void TerraVMC$VMCustom$queueEvt(uint8_t evtId, uint8_t auxId, void *data)
#line 1644
{
  evtData_t evtData;

#line 1646
  sim_log_debug(213U, "terra", "VM::VMCustom.queueEvt(): queueing evtId=%d, auxId=%d. procFlag=%s\n", evtId, auxId, TerraVMC$procFlag[sim_node()] ? "TRUE" : "FALSE");


  evtData.evtId = evtId;
  evtData.auxId = auxId;
  evtData.data = data;
  TerraVMC$evtQ$enqueue(evtData);
  if (TerraVMC$procFlag[sim_node()] == FALSE) {
#line 1653
    TerraVMC$procEvent$postTask();
    }
}

# 97 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
static error_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$enqueue(/*TerraVMAppC.evtQ*/QueueC$0$queue_t newVal)
#line 97
{
  if (/*TerraVMAppC.evtQ*/QueueC$0$Queue$size() < /*TerraVMAppC.evtQ*/QueueC$0$Queue$maxSize()) {
      sim_log_debug(521U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*TerraVMAppC.evtQ*/QueueC$0$size[sim_node()]);
      /*TerraVMAppC.evtQ*/QueueC$0$queue[sim_node()][/*TerraVMAppC.evtQ*/QueueC$0$tail[sim_node()]] = newVal;
      /*TerraVMAppC.evtQ*/QueueC$0$tail[sim_node()]++;
      if (/*TerraVMAppC.evtQ*/QueueC$0$tail[sim_node()] == 6) {
#line 102
        /*TerraVMAppC.evtQ*/QueueC$0$tail[sim_node()] = 0;
        }
#line 103
      /*TerraVMAppC.evtQ*/QueueC$0$size[sim_node()]++;
      /*TerraVMAppC.evtQ*/QueueC$0$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

#line 69
static void /*TerraVMAppC.evtQ*/QueueC$0$printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(515U, "QueueC", "head <-");
  for (i = /*TerraVMAppC.evtQ*/QueueC$0$head[sim_node()]; i < /*TerraVMAppC.evtQ*/QueueC$0$head[sim_node()] + /*TerraVMAppC.evtQ*/QueueC$0$size[sim_node()]; i++) {
      sim_log_debug_clear(516U, "QueueC", "[");
      for (j = 0; j < sizeof(/*TerraVMAppC.evtQ*/QueueC$0$queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*TerraVMAppC.evtQ*/QueueC$0$queue[sim_node()][i % 6])[j];

#line 77
          sim_log_debug_clear(517U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(518U, "QueueC", "] ");
    }
  sim_log_debug_clear(519U, "QueueC", "<- tail\n");
}

# 43 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/dataSensorP.nc"
static void dataSensorP$readReg(void )
#line 43
{
  dataSensorP$reg_t data[100];

#line 45
  dataSensorP$file[sim_node()] = fopen("sensors.bin", "rb");
  if (!dataSensorP$file[sim_node()]) {
      sim_log_debug(499U, "terra", "dataSensor.readReg(): Unable to open %s file!\n", "sensors.bin");
      printf("*******\n    Unable to open %s file!\n *******\n", "sensors.bin");
    }
  else 
#line 49
    {
      fread(data, 100 * sizeof(dataSensorP$reg_t ), 1, dataSensorP$file[sim_node()]);
      fclose(dataSensorP$file[sim_node()]);
      dataSensorP$lastReg[sim_node()].temp = data[TOS_NODE_ID].temp;
      dataSensorP$lastReg[sim_node()].photo = data[TOS_NODE_ID].photo;
      dataSensorP$lastReg[sim_node()].volt = data[TOS_NODE_ID].volt;
    }
}

# 57 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static bool SensActP$getSReq(uint8_t reqSource, uint8_t sensorId)
#line 57
{
  uint8_t i;

#line 59
  if (SensActP$initFlag[sim_node()] == FALSE) {
#line 59
      for (i = 0; i < SENSOR_COUNT + 4; i++) SensActP$sensorsReqs[sim_node()][i] = 0;
#line 59
      SensActP$initFlag[sim_node()] = TRUE;
    }
#line 60
  for (i = 0; i < SENSOR_COUNT + 4; i++) 
    if (SensActP$sensorsReqs[sim_node()][i] == sensorId + reqSource * (1 << SENSOR_CTL_BIT)) {
        SensActP$sensorsReqs[sim_node()][i] = 0;
        return TRUE;
      }
  return FALSE;
}

# 364 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static void VMCustomP$SA$Ready(uint8_t reqSource, uint8_t codeEvt_id)
#line 364
{
  sim_log_debug(485U, "terra", "Custom::SA.Ready()\n");
  switch (reqSource) {
      case REQ_SOURCE1: VMCustomP$VM$queueEvt(VMCustomP$wd2ceuSensorId(codeEvt_id), 0, VMCustomP$SA$getDatap((uint8_t )(codeEvt_id & 0x1f)));
#line 367
      break;



      default: sim_log_debug(486U, "terra", "Custom::SA.Ready(): reqSource not defined - %d\n", reqSource);
    }
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/system/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

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

# 1127 "BasicServicesP.nc"
static void BasicServicesP$sendNewProgBlock(newProgBlock_t *Data)
#line 1127
{
  sim_log_debug(401U, "terra", "BS::sendNewProgBlock(): insert in outQueue\n");
  memcpy(& BasicServicesP$tempInputOutQ[sim_node()].Data, Data, sizeof(newProgBlock_t ));
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].AM_ID.nxdata, AM_NEWPROGBLOCK);
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].DataSize.nxdata, sizeof(newProgBlock_t ));
  __nesc_hton_uint16(BasicServicesP$tempInputOutQ[sim_node()].sendToMote.nxdata, AM_BROADCAST_ADDR);
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].reqAck.nxdata, 0);
  if (BasicServicesP$outQ$put(&BasicServicesP$tempInputOutQ[sim_node()]) != SUCCESS) {
      sim_log_debug(402U, "terra", "BS::sendNewProgBlock(): outQueue is full! Losting a message.\n");
    }
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP$SendDataFullTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(4U, dt);
#line 73
}
#line 73
# 269 "BasicServicesP.nc"
static void BasicServicesP$BSTimerAsync$startOneShot(uint32_t dt)
#line 269
{
  sim_log_debug(344U, "terra", "BS::BSTimerAsync.startOneShot() dt=%ld, getdt=%ld, isRunning=%s\n", dt, BasicServicesP$TimerAsync$getdt(), BasicServicesP$TimerAsync$isRunning() ? "TRUE" : "FALSE");
  if (BasicServicesP$TimerAsync$isRunning()) {
#line 271
    BasicServicesP$TimerAsync$stop();
    }
#line 272
  BasicServicesP$TimerAsync$startOneShot(dt);
}

# 387 "TerraVMC.nc"
static void TerraVMC$ceu_track_ins(u8 stack, u8 tree, int chk, TerraVMC$tceu_nlbl lbl)
{
  sim_log_debug(65U, "terra", "CEU::ceu_track_ins():: track_n=%d, stack=%d tree=%d chk=%d lbl=%d\n", (&TerraVMC$CEU_[sim_node()])->tracks_n, stack, tree, chk, lbl);
  {
#line 390
    int i;

#line 391
    if (chk) {
        for (i = 1; i <= (&TerraVMC$CEU_[sim_node()])->tracks_n; i++) {
            if (lbl == ((&TerraVMC$CEU_[sim_node()])->p_tracks + i)->lbl) {
                return;
              }
          }
      }
  }

  {
    int i;

    TerraVMC$tceu_trk trk = { 
    stack, 
    tree, 
    lbl };



    for (i = ++ (&TerraVMC$CEU_[sim_node()])->tracks_n; 
    i > 1 && TerraVMC$ceu_track_cmp(&trk, (&TerraVMC$CEU_[sim_node()])->p_tracks + i / 2); 
    i /= 2) {

        memcpy((&TerraVMC$CEU_[sim_node()])->p_tracks + i, (&TerraVMC$CEU_[sim_node()])->p_tracks + i / 2, sizeof(TerraVMC$tceu_trk ));
      }


    * (TerraVMC$tceu_trk *)((&TerraVMC$CEU_[sim_node()])->p_tracks + i) = trk;
  }
}

#line 373
static int TerraVMC$ceu_track_cmp(TerraVMC$tceu_trk *trk1, TerraVMC$tceu_trk *trk2)
#line 373
{
  sim_log_debug(64U, "terra", "CEU::ceu_track_cmp():: trk1->lbl=%d,stack=%d trk2->lbl=%d,stack=%d -- CEU->stack=%d\n", trk1->lbl, trk1->stack, trk2->lbl, trk2->stack, (&TerraVMC$CEU_[sim_node()])->stack);

  if (trk1->stack != trk2->stack) {
      if (trk1->stack == (&TerraVMC$CEU_[sim_node()])->stack) {
        return 1;
        }
#line 379
      if (trk2->stack == (&TerraVMC$CEU_[sim_node()])->stack) {
        return 0;
        }
#line 381
      return trk1->stack > trk2->stack;
    }
  return trk1->tree > trk2->tree;
}

#line 680
static int TerraVMC$ceu_go(int *ret)
{

  TerraVMC$tceu_trk trk;
  TerraVMC$tceu_nlbl _lbl_;

  sim_log_debug(78U, "terra", "CEU::ceu_go():\n");

  TerraVMC$procFlag[sim_node()] = TRUE;
  (&TerraVMC$CEU_[sim_node()])->stack = 0x01;
  while (TerraVMC$ceu_track_rem(&trk, 1)) 
    {
      if (trk.stack != (&TerraVMC$CEU_[sim_node()])->stack) {
          (&TerraVMC$CEU_[sim_node()])->stack = trk.stack;
        }
      if (trk.lbl == TerraVMC$Inactive) {
        continue;
        }
      _lbl_ = trk.lbl;

      TerraVMC$execTrail(_lbl_);
    }

  TerraVMC$procFlag[sim_node()] = FALSE;
  TerraVMC$procEvent$postTask();

  return 0;
}

#line 424
static int TerraVMC$ceu_track_rem(TerraVMC$tceu_trk *trk, u8 N)
{
  sim_log_debug(66U, "terra", "CEU::ceu_track_rem: track_n=%d\n", (&TerraVMC$CEU_[sim_node()])->tracks_n);
  if ((&TerraVMC$CEU_[sim_node()])->tracks_n == 0) {
    return 0;
    }
  {
#line 430
    int i;
#line 430
    int cur;
    TerraVMC$tceu_trk *last;

    if (trk) {
      memcpy(trk, (&TerraVMC$CEU_[sim_node()])->p_tracks + N, sizeof(TerraVMC$tceu_trk ));
      }
    last = (&TerraVMC$CEU_[sim_node()])->p_tracks + (&TerraVMC$CEU_[sim_node()])->tracks_n--;

    for (i = N; i * 2 <= (&TerraVMC$CEU_[sim_node()])->tracks_n; i = cur) 
      {
        cur = i * 2;
        if (cur != (&TerraVMC$CEU_[sim_node()])->tracks_n && 
        TerraVMC$ceu_track_cmp((&TerraVMC$CEU_[sim_node()])->p_tracks + (cur + 1), (&TerraVMC$CEU_[sim_node()])->p_tracks + cur)) {
          cur++;
          }
        if (TerraVMC$ceu_track_cmp((&TerraVMC$CEU_[sim_node()])->p_tracks + cur, last)) {
          memcpy((&TerraVMC$CEU_[sim_node()])->p_tracks + i, (&TerraVMC$CEU_[sim_node()])->p_tracks + cur, sizeof(TerraVMC$tceu_trk ));
          }
        else {
#line 448
          break;
          }
      }
#line 450
    memcpy((&TerraVMC$CEU_[sim_node()])->p_tracks + i, last, sizeof(TerraVMC$tceu_trk ));
    return 1;
  }
}

#line 84
static uint8_t TerraVMC$getOpCode(uint8_t *Opcode, uint8_t *Modifier)
#line 84
{
  uint8_t i;

#line 86
  *Opcode = (uint8_t )__nesc_ntoh_uint8(TerraVMC$CEU_data[sim_node()][TerraVMC$PC[sim_node()]].nxdata);
  *Modifier = (uint8_t )__nesc_ntoh_uint8(TerraVMC$CEU_data[sim_node()][TerraVMC$PC[sim_node()]].nxdata);
  sim_log_debug(47U, "terra", "VM::getOpCode(): CEU_data[%d]=%d (0x%02x)  %s \n", TerraVMC$PC[sim_node()], *Opcode, *Opcode, *Opcode == op_end ? "--> f_end" : "");
  TerraVMC$PC[sim_node()]++;
  for (i = 0; i < 6; i++) {
      if (*Opcode >= IS_RangeMask[i][0] && *Opcode <= IS_RangeMask[i][1]) {
          *Modifier = (uint8_t )(*Opcode & IS_RangeMask[i][2]);
          *Opcode = (uint8_t )(*Opcode & ~IS_RangeMask[i][2]);
          break;
        }
    }
  return *Opcode;
}

#line 226
static uint32_t TerraVMC$getMVal(uint16_t Maddr, uint8_t type)
#line 226
{
  switch (type) {
      case U8: return (uint32_t )__nesc_ntoh_uint8((* (nx_uint8_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata);
      case U16: return (uint32_t )__nesc_ntoh_uint16((* (nx_uint16_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata);
      case U32: return (uint32_t )__nesc_ntoh_uint32((* (nx_uint32_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata);
      case S8: return (uint32_t )__nesc_ntoh_int8((* (nx_int8_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata);
      case S16: return (uint32_t )__nesc_ntoh_int16((* (nx_int16_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata);
      case S32: return (uint32_t )__nesc_ntoh_int32((* (nx_int32_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata);
    }
  sim_log_debug(58U, "terra", "ERROR VM::getMVal(): Invalid type=%d\n", type);
  return 0;
}

#line 217
static uint32_t TerraVMC$pop(void )
#line 217
{
  TerraVMC$currStack[sim_node()] = TerraVMC$currStack[sim_node()] + 4;
  return * (uint32_t *)(TerraVMC$CEU_data[sim_node()] + TerraVMC$currStack[sim_node()] - 4);
}

#line 190
static void TerraVMC$push(uint32_t value)
#line 190
{
  TerraVMC$currStack[sim_node()] = TerraVMC$currStack[sim_node()] - 4;
  sim_log_debug(54U, "terra", "VM::push(): newStack=%d, value=%d (0x%04x), ProgEnd=%d\n", TerraVMC$currStack[sim_node()], value, value, TerraVMC$ProgEnd[sim_node()]);
  if (TerraVMC$currStack[sim_node()] > TerraVMC$ProgEnd[sim_node()]) {
    * (uint32_t *)(TerraVMC$CEU_data[sim_node()] + TerraVMC$currStack[sim_node()]) = value;
    }
  else 
#line 195
    {
      TerraVMC$evtError(E_STKOVF);

      sim_log_debug(55U, "terra", "VM::push(): Stack Overflow - VM execution stopped\n");
      TerraVMC$haltedFlag[sim_node()] = TRUE;
      TerraVMC$VMCustom$reset();
    }
}

#line 117
static void TerraVMC$evtError(uint8_t ecode)
#line 117
{
  evtData_t evtData;

#line 119
  sim_log_debug(50U, "terra", "ERROR VM::evtError: error code=%d\n", ecode);

  __nesc_hton_uint8(TerraVMC$ExtDataSysError[sim_node()].nxdata, ecode);
  evtData.evtId = I_ERROR_ID;
  evtData.auxId = ecode;
  evtData.data = &TerraVMC$ExtDataSysError[sim_node()];
  TerraVMC$evtQ$enqueue(evtData);
  evtData.evtId = I_ERROR;
  evtData.auxId = 0;
  TerraVMC$evtQ$enqueue(evtData);
  if (TerraVMC$procFlag[sim_node()] == FALSE) {
#line 129
    TerraVMC$procEvent$postTask();
    }
#line 130
  TerraVMC$TViewer("error", ecode, 0);
}

# 168 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static void SensActP$SA$setActuator(uint8_t id, uint16_t val)
#line 168
{
  sim_log_debug(491U, "terra", "SA.setActuator(%d)\n", id);
  switch (id) {
      case AID_LEDS: SensActP$A_LEDS$set((uint8_t )val);
#line 171
      SensActP$TViewer("leds", 3, val);
#line 171
      break;
      case AID_LED0: (val & 0x0001) == 1 ? SensActP$A_LEDS$led0On() : SensActP$A_LEDS$led0Off();
#line 172
      SensActP$TViewer("leds", 0, val & 0x0001);
#line 172
      break;
      case AID_LED1: (val & 0x0001) == 1 ? SensActP$A_LEDS$led1On() : SensActP$A_LEDS$led1Off();
#line 173
      SensActP$TViewer("leds", 1, val & 0x0001);
#line 173
      break;
      case AID_LED2: (val & 0x0001) == 1 ? SensActP$A_LEDS$led2On() : SensActP$A_LEDS$led2Off();
#line 174
      SensActP$TViewer("leds", 2, val & 0x0001);
#line 174
      break;
      case AID_LED0_TOGGLE: SensActP$A_LEDS$led0Toggle();
#line 175
      SensActP$TViewer("leds", 0, 3);
#line 175
      break;
      case AID_LED1_TOGGLE: SensActP$A_LEDS$led1Toggle();
#line 176
      SensActP$TViewer("leds", 1, 3);
#line 176
      break;
      case AID_LED2_TOGGLE: SensActP$A_LEDS$led2Toggle();
#line 177
      SensActP$TViewer("leds", 2, 3);
#line 177
      break;
    }
}

# 74 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static void LedsP$Leds$led0On(void )
#line 74
{
  LedsP$Led0$clr();
  sim_log_debug(501U, "LedsC", "LEDS: Led""0"" %s.\n", LedsP$Led0$get() ? "off" : "on");
#line 76
  ;
}

static void LedsP$Leds$led0Off(void )
#line 79
{
  LedsP$Led0$set();
  sim_log_debug(502U, "LedsC", "LEDS: Led""0"" %s.\n", LedsP$Led0$get() ? "off" : "on");
#line 81
  ;
}






static void LedsP$Leds$led1On(void )
#line 89
{
  LedsP$Led1$clr();
  sim_log_debug(504U, "LedsC", "LEDS: Led""1"" %s.\n", LedsP$Led1$get() ? "off" : "on");
#line 91
  ;
}

static void LedsP$Leds$led1Off(void )
#line 94
{
  LedsP$Led1$set();
  sim_log_debug(505U, "LedsC", "LEDS: Led""1"" %s.\n", LedsP$Led1$get() ? "off" : "on");
#line 96
  ;
}






static void LedsP$Leds$led2On(void )
#line 104
{
  LedsP$Led2$clr();
  sim_log_debug(507U, "LedsC", "LEDS: Led""2"" %s.\n", LedsP$Led2$get() ? "off" : "on");
#line 106
  ;
}

static void LedsP$Leds$led2Off(void )
#line 109
{
  LedsP$Led2$set();
  sim_log_debug(508U, "LedsC", "LEDS: Led""2"" %s.\n", LedsP$Led2$get() ? "off" : "on");
#line 111
  ;
}

# 221 "TerraVMC.nc"
static float TerraVMC$popf(void )
#line 221
{
  TerraVMC$currStack[sim_node()] = TerraVMC$currStack[sim_node()] + 4;
  return * (float *)(TerraVMC$CEU_data[sim_node()] + TerraVMC$currStack[sim_node()] - 4);
}

#line 203
static void TerraVMC$pushf(float value)
#line 203
{
  TerraVMC$currStack[sim_node()] = TerraVMC$currStack[sim_node()] - 4;
  sim_log_debug(56U, "terra", "VM::pushf(): newStack=%d, value=%f (0x%08x), ProgEnd=%d\n", TerraVMC$currStack[sim_node()], value, * (uint32_t *)&value, TerraVMC$ProgEnd[sim_node()]);
  if (TerraVMC$currStack[sim_node()] > TerraVMC$ProgEnd[sim_node()]) {
    * (float *)(TerraVMC$CEU_data[sim_node()] + TerraVMC$currStack[sim_node()]) = value;
    }
  else 
#line 208
    {
      TerraVMC$evtError(E_STKOVF);

      sim_log_debug(57U, "terra", "VM::pushf(): Stack Overflow - VM execution stopped\n");
      TerraVMC$haltedFlag[sim_node()] = TRUE;
      TerraVMC$VMCustom$reset();
    }
}

#line 136
static uint8_t TerraVMC$getPar8(uint8_t p_len)
#line 136
{
  uint8_t temp = (uint8_t )__nesc_ntoh_uint8(TerraVMC$CEU_data[sim_node()][TerraVMC$PC[sim_node()]].nxdata);

#line 138
  TerraVMC$PC[sim_node()]++;
  sim_log_debug(51U, "terra", "VM::getPar8: PC=%d, p_len=%d, value=%d\n", TerraVMC$PC[sim_node()] - 1, p_len, temp);
  return temp;
}

# 69 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC$Random$rand32(void )
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
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC$seed[sim_node()];
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC$seed[sim_node()] = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 1691 "TerraVMC.nc"
static void *TerraVMC$VMCustom$getRealAddr(uint16_t Maddr)
#line 1691
{
  sim_log_debug(219U, "terra", "VM::VMCustom.getRealAddr(): Maddr=%d,RealMEM=%x\n", Maddr, TerraVMC$MEM[sim_node()] + Maddr);
  return TerraVMC$MEM[sim_node()] + Maddr;
}

# 262 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static void VMCustomP$VM$procOutEvt(uint8_t id, uint32_t value)
#line 262
{
  sim_log_debug(477U, "terra", "Custom::procOutEvt(): id=%d\n", id);
  switch (id) {

      case O_LEDS: VMCustomP$proc_leds(id, value);
#line 266
      break;
      case O_LED0: VMCustomP$proc_led0(id, value);
#line 267
      break;
      case O_LED1: VMCustomP$proc_led1(id, value);
#line 268
      break;
      case O_LED2: VMCustomP$proc_led2(id, value);
#line 269
      break;
      case O_TEMP: VMCustomP$proc_req_temp(id, value);
#line 270
      break;
      case O_PHOTO: VMCustomP$proc_req_photo(id, value);
#line 271
      break;
      case O_VOLTS: VMCustomP$proc_req_volts(id, value);
#line 272
      break;
      case O_SEND: VMCustomP$proc_send(id, value);
#line 273
      break;
      case O_SEND_ACK: VMCustomP$proc_send_ack(id, value);
#line 274
      break;
      case O_PORT_A: VMCustomP$proc_set_port_a(id, value);
#line 275
      break;
      case O_PORT_B: VMCustomP$proc_set_port_b(id, value);
#line 276
      break;
      case O_CFG_PORT_A: VMCustomP$proc_cfg_port_a(id, value);
#line 277
      break;
      case O_CFG_PORT_B: VMCustomP$proc_cfg_port_b(id, value);
#line 278
      break;
      case O_REQ_PORT_A: VMCustomP$proc_req_port_a(id, value);
#line 279
      break;
      case O_REQ_PORT_B: VMCustomP$proc_req_port_b(id, value);
#line 280
      break;
      case O_CFG_INT_A: VMCustomP$proc_cfg_int_a(id, value);
#line 281
      break;
      case O_CFG_INT_B: VMCustomP$proc_cfg_int_b(id, value);
#line 282
      break;
      case O_CUSTOM_A: VMCustomP$proc_req_custom_a(id, value);
#line 283
      break;
      case O_REQ_MIC: VMCustomP$proc_req_mic(id, value);
#line 284
      break;
      case O_BEEP: VMCustomP$proc_beep(id, value);
#line 285
      break;
      case O_CUSTOM: VMCustomP$proc_req_custom(id, value);
#line 286
      break;
    }
}

# 124 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/common/SensActP.nc"
static void SensActP$SA$reqSensor(uint8_t reqSource, uint8_t id)
#line 124
{
  sim_log_debug(490U, "terra", "SA.reqSensor(): reSource=%d, id=%d\n", reqSource, id);

  switch (id) {
      case SID_TEMP: SensActP$S_TEMP$read();
#line 128
      SensActP$insertSReq(reqSource, id);
#line 128
      SensActP$TViewer("sensor", SID_TEMP, 0);
#line 128
      break;
      case SID_PHOTO: SensActP$S_PHOTO$read();
#line 129
      SensActP$insertSReq(reqSource, id);
#line 129
      SensActP$TViewer("sensor", SID_PHOTO, 0);
#line 129
      break;
      case SID_LEDS: __nesc_hton_uint16(SensActP$dLeds[sim_node()].nxdata, SensActP$A_LEDS$get());
#line 130
      SensActP$SA$Ready(reqSource, TID_SENSOR_DONE | SID_LEDS);
#line 130
      break;
      case SID_VOLT: SensActP$S_VOLT$read();
#line 131
      SensActP$insertSReq(reqSource, id);
#line 131
      SensActP$TViewer("sensor", SID_VOLT, 0);
#line 131
      break;
      case SID_IN1: __nesc_hton_uint16(SensActP$dIn1[sim_node()].nxdata, SensActP$getPinX(SID_IN1) == TRUE ? 1 : 0);
#line 132
      SensActP$SA$Ready(reqSource, TID_SENSOR_DONE | SID_IN1);
#line 132
      break;
      case SID_IN2: __nesc_hton_uint16(SensActP$dIn2[sim_node()].nxdata, SensActP$getPinX(SID_IN2) == TRUE ? 1 : 0);
#line 133
      SensActP$SA$Ready(reqSource, TID_SENSOR_DONE | SID_IN2);
#line 133
      break;
    }
}

#line 68
static void SensActP$insertSReq(uint8_t reqSource, uint8_t sensorId)
#line 68
{
  uint8_t i;
  bool foundFlag = FALSE;

#line 71
  if (SensActP$initFlag[sim_node()] == FALSE) {
#line 71
      for (i = 0; i < SENSOR_COUNT + 4; i++) SensActP$sensorsReqs[sim_node()][i] = 0;
#line 71
      SensActP$initFlag[sim_node()] = TRUE;
    }
#line 72
  for (i = 0; i < SENSOR_COUNT + 4 && foundFlag == FALSE; i++) {
      if (SensActP$sensorsReqs[sim_node()][i] == sensorId + reqSource * (1 << SENSOR_CTL_BIT)) {
          foundFlag = TRUE;
        }
    }
  if (foundFlag == FALSE) {
      for (i = 0; i < SENSOR_COUNT + 4; i++) {
          if (SensActP$sensorsReqs[sim_node()][i] == 0) {
              SensActP$sensorsReqs[sim_node()][i] = (uint8_t )(sensorId + reqSource * (1 << SENSOR_CTL_BIT));
              return;
            }
        }
    }
}

# 81 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static void VMCustomP$proc_send_x(uint16_t id, uint16_t addr, uint8_t ack)
#line 81
{
  usrMsg_t *usrMsg;
  uint8_t reqRetryAck;

#line 84
  usrMsg = (usrMsg_t *)VMCustomP$VM$getRealAddr(addr);
  sim_log_debug(456U, "terra", "Custom::proc_sendx(): id=%d, target=%d, addr=%d, realAddr=%x, ack=%d\n", id, __nesc_ntoh_uint16(usrMsg->target.nxdata), addr, usrMsg, ack);

  reqRetryAck = ack ? 1 << REQ_ACK_BIT : 0;
  VMCustomP$BSRadio$send(AM_USRMSG, __nesc_ntoh_uint16(usrMsg->target.nxdata), usrMsg, sizeof(usrMsg_t ), reqRetryAck);
}

# 171 "TerraVMC.nc"
static uint8_t TerraVMC$getBits(uint8_t data, uint8_t stBit, uint8_t endBit)
#line 171
{
  uint8_t ret = 0;
  uint8_t pos;

#line 174
  for (pos = stBit; pos <= endBit; pos++) ret += (data & (1 << pos)) == 0 ? 0 : 1 << (pos - stBit);
  return ret;
}

#line 142
static uint16_t TerraVMC$getPar16(uint8_t p_len)
#line 142
{
  uint16_t temp = 0;
#line 143
  uint16_t temp2;
  uint8_t idx;

#line 145
  for (idx = 0; idx < p_len; idx++) {

      if (idx < sizeof(uint16_t )) {
          temp2 = (uint8_t )__nesc_ntoh_uint8(TerraVMC$CEU_data[sim_node()][TerraVMC$PC[sim_node()]].nxdata);
          temp = temp + (temp2 << (p_len - 1 - idx) * 8);
        }
      TerraVMC$PC[sim_node()]++;
    }
  sim_log_debug(52U, "terra", "VM::getPar16: PC=%d, p_len=%d, value=%d\n", TerraVMC$PC[sim_node()] - idx, p_len, temp);
  return temp;
}

#line 180
static uint32_t TerraVMC$unit2val(uint32_t val, uint8_t unit)
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

#line 514
static void TerraVMC$ceu_wclock_enable(int gte, s32 us, TerraVMC$tceu_nlbl lbl)
#line 514
{
  TerraVMC$tceu_wclock *tmr = (TerraVMC$tceu_wclock *)(TerraVMC$MEM[sim_node()] + TerraVMC$wClock0[sim_node()] + gte * sizeof(TerraVMC$tceu_wclock ));
  s32 dt = us - (&TerraVMC$CEU_[sim_node()])->wclk_late;

  dt = dt < 0 ? 0 : dt;

  sim_log_debug(70U, "terra", "CEU::ceu_wclock_enable(): gate=%d, time=%d, lbl=%d, dt=%ld, wClock0=%d\n", gte, us, lbl, dt, TerraVMC$wClock0[sim_node()]);

  tmr->togo = dt;
  __nesc_hton_uint16((* (nx_uint16_t *)& tmr->lbl).nxdata, lbl);

  if (TerraVMC$ceu_wclock_lt(tmr)) {
      TerraVMC$ceu_out_wclock(dt);
    }
}

#line 504
static int TerraVMC$ceu_wclock_lt(TerraVMC$tceu_wclock *tmr)
#line 504
{
  sim_log_debug(69U, "terra", "CEU::ceu_wclock_lt(): wclk_cur=%ld, togo=%d, cur.togo=%d\n", (&TerraVMC$CEU_[sim_node()])->wclk_cur ? (&TerraVMC$CEU_[sim_node()])->wclk_cur->togo : 0, (unsigned int )tmr->togo, (&TerraVMC$CEU_[sim_node()])->wclk_cur ? (unsigned int )(&TerraVMC$CEU_[sim_node()])->wclk_cur->togo : 5555);

  if ((! (&TerraVMC$CEU_[sim_node()])->wclk_cur || (! (&TerraVMC$CEU_[sim_node()])->wclk_cur || (&TerraVMC$CEU_[sim_node()])->wclk_cur->togo == 0)) || (! (&TerraVMC$CEU_[sim_node()])->wclk_cur || tmr->togo < (&TerraVMC$CEU_[sim_node()])->wclk_cur->togo)) {
      (&TerraVMC$CEU_[sim_node()])->wclk_cur = tmr;
      return 1;
    }
  return 0;
}

# 253 "BasicServicesP.nc"
static void BasicServicesP$BSTimerVM$startOneShot(uint32_t dt)
#line 253
{
  sim_log_debug(343U, "terra", "BS::BSTimerVM.startOneShot() dt=%ld, getdt=%ld, isRunning=%s\n", dt, BasicServicesP$TimerVM$getdt(), BasicServicesP$TimerVM$isRunning() ? "TRUE" : "FALSE");
  if (BasicServicesP$TimerVM$isRunning()) {
#line 255
    BasicServicesP$TimerVM$stop();
    }
#line 256
  BasicServicesP$TimerVM$startOneShot(dt);
}

# 156 "TerraVMC.nc"
static uint32_t TerraVMC$getPar32(uint8_t p_len)
#line 156
{
  uint32_t temp = 0L;
#line 157
  uint32_t temp2;
  uint8_t idx;

#line 159
  for (idx = 0; idx < p_len; idx++) {

      if (idx < sizeof(uint32_t )) {
          temp2 = (uint8_t )__nesc_ntoh_uint8(TerraVMC$CEU_data[sim_node()][TerraVMC$PC[sim_node()]].nxdata);
          temp = temp + (temp2 << (p_len - 1 - idx) * 8);
        }
      TerraVMC$PC[sim_node()]++;
    }
  sim_log_debug(53U, "terra", "VM::getPar32: PC=%d, p_len=%d, value=%d\n", TerraVMC$PC[sim_node()] - idx, p_len, temp);
  return temp;
}

#line 242
static void TerraVMC$setMVal(uint32_t buffer, uint16_t Maddr, uint8_t fromTp, uint8_t toTp)
#line 242
{
  if (fromTp == F32) {
      float value = * (float *)&buffer;

#line 245
      switch (toTp) {
          case U8: __nesc_hton_uint8((* (nx_uint8_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (uint8_t )value);
#line 246
          return;
          case U16: __nesc_hton_uint16((* (nx_uint16_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (uint16_t )value);
#line 247
          return;
          case U32: __nesc_hton_uint32((* (nx_uint32_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (uint32_t )value);
#line 248
          return;
          case F32: * (nx_float *)(TerraVMC$MEM[sim_node()] + Maddr) = (float )value;
          case S8: __nesc_hton_int8((* (nx_int8_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (int8_t )value);
#line 250
          return;
          case S16: __nesc_hton_int16((* (nx_int16_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (int16_t )value);
#line 251
          return;
          case S32: __nesc_hton_int32((* (nx_int32_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (int32_t )value);
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
              case U8: __nesc_hton_uint8((* (nx_uint8_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (uint8_t )value);
#line 258
              return;
              case U16: __nesc_hton_uint16((* (nx_uint16_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (uint16_t )value);
#line 259
              return;
              case U32: __nesc_hton_uint32((* (nx_uint32_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (uint32_t )value);
#line 260
              return;
              case F32: * (nx_float *)(TerraVMC$MEM[sim_node()] + Maddr) = (float )value;
              case S8: __nesc_hton_int8((* (nx_int8_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (int8_t )value);
#line 262
              return;
              case S16: __nesc_hton_int16((* (nx_int16_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (int16_t )value);
#line 263
              return;
              case S32: __nesc_hton_int32((* (nx_int32_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (int32_t )value);
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
              case U8: __nesc_hton_uint8((* (nx_uint8_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (uint8_t )value);
#line 269
              return;
              case U16: __nesc_hton_uint16((* (nx_uint16_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (uint16_t )value);
#line 270
              return;
              case U32: __nesc_hton_uint32((* (nx_uint32_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (uint32_t )value);
#line 271
              return;
              case F32: * (nx_float *)(TerraVMC$MEM[sim_node()] + Maddr) = (float )value;
              case S8: __nesc_hton_int8((* (nx_int8_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (int8_t )value);
#line 273
              return;
              case S16: __nesc_hton_int16((* (nx_int16_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (int16_t )value);
#line 274
              return;
              case S32: __nesc_hton_int32((* (nx_int32_t *)(TerraVMC$MEM[sim_node()] + Maddr)).nxdata, (int32_t )value);
#line 275
              return;
            }
        }
    }
  sim_log_debug(59U, "terra", "ERROR VM::setMVal(): Invalid fromTp=%d, toTp=%d\n", fromTp, toTp);
}

#line 474
static void TerraVMC$ceu_trigger(TerraVMC$tceu_noff off, uint8_t auxId)
{
  int i;
  uint8_t slotSize;
#line 477
  uint8_t evtId;
#line 477
  uint8_t slotAuxId;
  int n = * (char *)((&TerraVMC$CEU_[sim_node()])->p_mem + off) & 0x7f;

#line 479
  evtId = * (char *)((&TerraVMC$CEU_[sim_node()])->p_mem + off - 1);
  slotSize = * (char *)((&TerraVMC$CEU_[sim_node()])->p_mem + off) & 0x80 ? 3 : 2;
  sim_log_debug(67U, "terra", "CEU::ceu_trigger(): evtId=%d, auxId=%d, slotSize=%d, gate addr=%d, nGates=%d\n", evtId, auxId, slotSize, off, n);
  for (i = 0; i < n; i++) {

      if (slotSize == 2) {
          TerraVMC$ceu_spawn((TerraVMC$tceu_nlbl *)((&TerraVMC$CEU_[sim_node()])->p_mem + off + 1 + i * slotSize));
        }
      else 
#line 486
        {
          slotAuxId = * (char *)((&TerraVMC$CEU_[sim_node()])->p_mem + off + 1 + i * slotSize);
          sim_log_debug(68U, "terra", "CEU::ceu_trigger(): testauxId -> slotAuxId=%d, auxId=%d\n", slotAuxId, auxId);
          if (slotAuxId == auxId) {
              TerraVMC$ceu_spawn((TerraVMC$tceu_nlbl *)((&TerraVMC$CEU_[sim_node()])->p_mem + off + 2 + i * slotSize));
            }
        }
    }
}

#line 465
static void TerraVMC$ceu_spawn(TerraVMC$tceu_nlbl *lbl)
{

  if (__nesc_ntoh_uint16((* (nx_uint16_t *)lbl).nxdata) != TerraVMC$Inactive) {
      TerraVMC$ceu_track_ins((&TerraVMC$CEU_[sim_node()])->stack, 0xFF, 0, __nesc_ntoh_uint16((* (nx_uint16_t *)lbl).nxdata));
      __nesc_hton_uint16((* (nx_uint16_t *)lbl).nxdata, TerraVMC$Inactive);
    }
}

# 212 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      sim_log_debug(422U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              sim_log_debug(423U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(424U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          sim_log_debug(425U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          sim_log_debug(426U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
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
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 463 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 463
{
  sim_log_debug(443U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 465
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP$schedule_new_compare();
      }
  }
}

#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void )
#line 267
{
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_compare();
    }
  if (HplAtm128Timer0AsyncP$Timer0$getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_compare();

#line 273
      HplAtm128Timer0AsyncP$configure_compare(newEvent);

      HplAtm128Timer0AsyncP$compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

# 97 "/opt/tinyos-2.1.2/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 97
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 99
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 100 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
  void INTERRUPT_16(void )
#line 100
{
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP$Timer0$overflow();
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = FALSE;
}

#line 508
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt)
#line 508
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP$shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP$clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP$last_zero()) % (1 << HplAtm128Timer0AsyncP$shiftFromScale());

  sim_log_debug(446U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 94
  void INTERRUPT_15(void )
#line 94
{

  HplAtm128Timer0AsyncP$Compare$fired();
}

#line 231
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt)
#line 231
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t compareVal = HplAtm128Timer0AsyncP$Compare$get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP$shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP$clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP$last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP$clock_to_sim(1 << HplAtm128Timer0AsyncP$shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(435U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 73 "/home/branco/gitspace/Terra/TerraVM/src/interfaces/Timer.nc"
static void BasicServicesP$sendTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, dt);
#line 73
}
#line 73
# 37 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$get(void *Data)
#line 37
{
  sim_log_debug(418U, "terra", "dataQ[%hhu]::get(%x[%d]). Size and FlagFree before %hhu : %s\n", 1, Data, sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataType ), /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[sim_node()], /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ[sim_node()] == TRUE ? "TRUE" : "FALSE");

  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[sim_node()] <= 0) {
#line 40
      /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ[sim_node()] = TRUE;
#line 40
      return FAIL;
    }
  memcpy(Data, (void *)&/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qData[sim_node()][/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qHead[sim_node()]], sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataType ));
  /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qHead[sim_node()]++;
#line 43
  /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qHead[sim_node()] = (uint8_t )(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qHead[sim_node()] % 10);
  /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[sim_node()]--;
  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[sim_node()] <= 0) {
#line 45
    /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ[sim_node()] = TRUE;
    }
#line 46
  return SUCCESS;
}

#line 60
static error_t /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataQueue$read(void *Data)
#line 60
{
  sim_log_debug(420U, "terra", "dataQ[%hhu]::read(). Size and FlagFree before %hhu : %s\n", 1, /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[sim_node()], /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ[sim_node()] == TRUE ? "TRUE" : "FALSE");

  if (/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[sim_node()] <= 0) {
#line 63
    return FAIL;
    }
  memcpy(Data, (void *)&/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qData[sim_node()][/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qHead[sim_node()]], sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$dataType ));
  return SUCCESS;
}

# 964 "BasicServicesP.nc"
static void BasicServicesP$sendRadioN(void )
#line 964
{
  error_t err;

#line 966
  sim_log_debug(384U, "terra", "BS::sendRadioN(): AM=%hhu to %d, reqAck=%s\n", __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata), __nesc_ntoh_uint16(BasicServicesP$tempOutputOutQ[sim_node()].sendToMote.nxdata), (__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].reqAck.nxdata) & (1 << REQ_ACK_BIT)) > 0 ? "TRUE" : "FALSE");
  memcpy(BasicServicesP$RadioPacket$getPayload(&BasicServicesP$sendBuff[sim_node()], BasicServicesP$RadioPacket$maxPayloadLength()), & BasicServicesP$tempOutputOutQ[sim_node()].Data, __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].DataSize.nxdata));




  if ((__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].reqAck.nxdata) & (1 << REQ_ACK_BIT)) > 0) {
      if (BasicServicesP$RadioAck$requestAck(&BasicServicesP$sendBuff[sim_node()]) != SUCCESS) {
#line 973
        sim_log_debug(385U, "terra", "BS::sendRadioN()(): requestAck() error!\n");
        }
    }
  else 
#line 974
    {
      if (BasicServicesP$RadioAck$noAck(&BasicServicesP$sendBuff[sim_node()]) != SUCCESS) {
#line 975
        sim_log_debug(386U, "terra", "BS::sendRadioN()(): requestNoAck() error!\n");
        }
    }
  if (__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].RFPower.nxdata) > 0) {
#line 978
    BasicServicesP$AMAux$setPower(&BasicServicesP$sendBuff[sim_node()], __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].RFPower.nxdata));
    }
#line 979
  err = BasicServicesP$RadioSender_send(__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata), __nesc_ntoh_uint16(BasicServicesP$tempOutputOutQ[sim_node()].sendToMote.nxdata), &BasicServicesP$sendBuff[sim_node()], __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].DataSize.nxdata));
  if (err != SUCCESS) {
      sim_log_debug(387U, "terra", "BS::sendRadioN(): Error %hhu in sending Message AM=%hhu to node=%d via radio\n", err, __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata), __nesc_ntoh_uint16(BasicServicesP$tempOutputOutQ[sim_node()].sendToMote.nxdata));
      BasicServicesP$sendTimer$startOneShot(BasicServicesP$reSendDelay[sim_node()]);
    }
  else 
#line 983
    {
      BasicServicesP$TViewer("radio", __nesc_ntoh_uint16(BasicServicesP$tempOutputOutQ[sim_node()].sendToMote.nxdata), 0);
    }
}

# 274 "/opt/tinyos-2.1.2/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg)
#line 274
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 277
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return noise;
}

#line 126
static double CpmModelC$noise_hash_generation(void )
#line 126
{
  double CT = CpmModelC$timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(305U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, quotient);
    }
  sim_log_debug(306U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 1051 "BasicServicesP.nc"
static void BasicServicesP$RadioSender$sendDone(am_id_t id, message_t *msg, error_t error)
#line 1051
{
  bool doneStatus;
#line 1052
  bool reqRetry;
#line 1052
  bool reqAck;

  if (id > AM_RESERVED_END) {
      BasicServicesP$outQ$read(&BasicServicesP$tempOutputOutQ[sim_node()]);
      doneStatus = error == SUCCESS;
      reqAck = (__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].reqAck.nxdata) & (1 << REQ_ACK_BIT)) > 0;
      reqRetry = (__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].reqAck.nxdata) & (1 << REQ_RETRY_BIT)) > 0;
      if (doneStatus && reqAck) {
#line 1059
        doneStatus = (uint8_t )BasicServicesP$RadioAck$wasAcked(msg);
        }
#line 1060
      if (doneStatus) {
          sim_log_debug(393U, "terra", "BS::sendDone(): SUCCESS SendCounter=%hhu\n", BasicServicesP$sendCounter[sim_node()]);
          BasicServicesP$outQ$get(&BasicServicesP$tempOutputOutQ[sim_node()]);
          BasicServicesP$sendCounter[sim_node()] = 0;
          BasicServicesP$sendTimer$startOneShot(BasicServicesP$reSendDelay[sim_node()]);
          if (__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata) >= AM_CUSTOM_START && __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata) <= AM_CUSTOM_END) {
              sim_log_debug(394U, "terra", "BS::sendDone(): UsrMsg err=%d ack=%d, \n", error, BasicServicesP$RadioAck$wasAcked(msg));
              if (reqAck == TRUE) {
                BasicServicesP$BSRadio$sendDoneAck(__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata), msg, BasicServicesP$tempOutputOutQ[sim_node()].Data, error, BasicServicesP$RadioAck$wasAcked(msg));
                }
              else {
#line 1070
                BasicServicesP$BSRadio$sendDone(__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata), msg, BasicServicesP$tempOutputOutQ[sim_node()].Data, error);
                }
            }
        }
      else 
#line 1072
        {
          sim_log_debug(395U, "terra", "BS::sendDone(): FAIL\n");
          if (BasicServicesP$sendCounter[sim_node()] < MAX_SEND_RETRIES) {
              sim_log_debug(396U, "terra", "BS::sendDone(): FAIL-Retry SendCounter=%hhu\n", BasicServicesP$sendCounter[sim_node()]);
              BasicServicesP$sendTimer$startOneShot(BasicServicesP$reSendDelay[sim_node()]);
            }
          else 
#line 1077
            {
              sim_log_debug(397U, "terra", "BS::sendDone(): FAIL-Discard SendCounter=%hhu\n", BasicServicesP$sendCounter[sim_node()]);
              BasicServicesP$outQ$get(&BasicServicesP$tempOutputOutQ[sim_node()]);
              BasicServicesP$sendCounter[sim_node()] = 0;
              BasicServicesP$sendTimer$startOneShot(BasicServicesP$reSendDelay[sim_node()]);
              if (__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata) >= AM_CUSTOM_START && __nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata) <= AM_CUSTOM_END) {
                  sim_log_debug(398U, "terra", "BS::sendDone(): FAIL-UsrMsg err=%d ack=%d, \n", error, BasicServicesP$RadioAck$wasAcked(msg));
                  if (reqAck == TRUE) {
                    BasicServicesP$BSRadio$sendDoneAck(__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata), msg, BasicServicesP$tempOutputOutQ[sim_node()].Data, error, FALSE);
                    }
                  else {
                    BasicServicesP$BSRadio$sendDone(__nesc_ntoh_uint8(BasicServicesP$tempOutputOutQ[sim_node()].AM_ID.nxdata), msg, BasicServicesP$tempOutputOutQ[sim_node()].Data, error);
                    }
                }
            }
        }
    }
}

# 140 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static error_t TossimPacketModelC$PacketAcknowledgements$wasAcked(message_t *ack)
#line 140
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(ack);

#line 142
  return __nesc_ntoh_uint8(meta->ack.nxdata);
}

# 340 "/home/branco/gitspace/Terra/TerraVM/src/platforms/TinyOS/Net/VMCustomP.nc"
static void VMCustomP$BSRadio$sendDoneAck(uint8_t am_id, message_t *msg, void *dataMsg, error_t error, bool wasAcked)
#line 340
{
  sim_log_debug(483U, "terra", "Custom::BSRadio.sendDoneAck(): AM_ID = %d, error=%d, ack=%d\n", am_id, error, wasAcked);
  if (am_id == AM_USRMSG) {
      __nesc_hton_uint8(VMCustomP$ExtDataWasAcked[sim_node()].nxdata, (uint8_t )wasAcked);
      VMCustomP$VM$queueEvt(I_SEND_DONE_ACK_ID, __nesc_ntoh_uint8(((usrMsg_t *)dataMsg)->type.nxdata), &VMCustomP$ExtDataWasAcked[sim_node()]);
      VMCustomP$VM$queueEvt(I_SEND_DONE_ACK, 0, &VMCustomP$ExtDataWasAcked[sim_node()]);
    }
  else 
#line 346
    {
      sim_log_debug(484U, "terra", "Custom::BSRadio.sendDoneAck(): Discarting sendDoneAck AM_ID = %d\n", am_id);
    }
}

#line 330
static void VMCustomP$BSRadio$sendDone(uint8_t am_id, message_t *msg, void *dataMsg, error_t error)
#line 330
{
  sim_log_debug(481U, "terra", "Custom::BSRadio.sendDone(): AM_ID = %d, error=%d\n", am_id, error);
  if (am_id == AM_USRMSG) {
      __nesc_hton_uint8(VMCustomP$ExtDataSendDoneError[sim_node()].nxdata, (uint8_t )error);
      VMCustomP$VM$queueEvt(I_SEND_DONE_ID, __nesc_ntoh_uint8(((usrMsg_t *)dataMsg)->type.nxdata), &VMCustomP$ExtDataSendDoneError[sim_node()]);
      VMCustomP$VM$queueEvt(I_SEND_DONE, 0, &VMCustomP$ExtDataSendDoneError[sim_node()]);
    }
  else 
#line 336
    {
      sim_log_debug(482U, "terra", "Custom::BSRadio.sendDone(): Discarting sendDone AM_ID = %d\n", am_id);
    }
}

# 248 "/opt/tinyos-2.1.2/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC$shouldReceive(double SNR)
#line 248
{
  double prr = CpmModelC$prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 251
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 255
        prr = 0.0;
        }
    }
#line 257
  return prr;
}

# 307 "/opt/tinyos-2.1.2/tos/lib/tossim/TossimPacketModelC.nc"
static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg)
#line 307
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      return TossimPacketModelC$Packet$shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 216 "/opt/tinyos-2.1.2/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r)
#line 216
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC$sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 37 "/home/branco/gitspace/Terra/TerraVM/src/system/dataQueueP.nc"
static error_t /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataQueue$get(void *Data)
#line 37
{
  sim_log_debug(413U, "terra", "dataQ[%hhu]::get(%x[%d]). Size and FlagFree before %hhu : %s\n", 0, Data, sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataType ), /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[sim_node()], /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ[sim_node()] == TRUE ? "TRUE" : "FALSE");

  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[sim_node()] <= 0) {
#line 40
      /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ[sim_node()] = TRUE;
#line 40
      return FAIL;
    }
  memcpy(Data, (void *)&/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qData[sim_node()][/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qHead[sim_node()]], sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$dataType ));
  /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qHead[sim_node()]++;
#line 43
  /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qHead[sim_node()] = (uint8_t )(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qHead[sim_node()] % 5);
  /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[sim_node()]--;
  if (/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[sim_node()] <= 0) {
#line 45
    /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ[sim_node()] = TRUE;
    }
#line 46
  return SUCCESS;
}

# 85 "/home/branco/gitspace/Terra/TerraVM/src/system/QueueC.nc"
static /*TerraVMAppC.evtQ*/QueueC$0$queue_t /*TerraVMAppC.evtQ*/QueueC$0$Queue$dequeue(void )
#line 85
{
  /*TerraVMAppC.evtQ*/QueueC$0$queue_t t = /*TerraVMAppC.evtQ*/QueueC$0$Queue$head();

#line 87
  sim_log_debug(520U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*TerraVMAppC.evtQ*/QueueC$0$size[sim_node()]);
  if (!/*TerraVMAppC.evtQ*/QueueC$0$Queue$empty()) {
      /*TerraVMAppC.evtQ*/QueueC$0$head[sim_node()]++;
      if (/*TerraVMAppC.evtQ*/QueueC$0$head[sim_node()] == 6) {
#line 90
        /*TerraVMAppC.evtQ*/QueueC$0$head[sim_node()] = 0;
        }
#line 91
      /*TerraVMAppC.evtQ*/QueueC$0$size[sim_node()]--;
      /*TerraVMAppC.evtQ*/QueueC$0$printQueue();
    }
  return t;
}

# 1143 "BasicServicesP.nc"
static void BasicServicesP$sendReqProgBlock(reqProgBlock_t *Data)
#line 1143
{
  sim_log_debug(403U, "terra", "BS::sendReqProgBlock(): insert in outQueue --- BlkId=%d\n", __nesc_ntoh_uint16(Data->blockId.nxdata));
  memcpy(& BasicServicesP$tempInputOutQ[sim_node()].Data, Data, sizeof(reqProgBlock_t ));
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].AM_ID.nxdata, AM_REQPROGBLOCK);
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].DataSize.nxdata, sizeof(reqProgBlock_t ));
  __nesc_hton_uint16(BasicServicesP$tempInputOutQ[sim_node()].sendToMote.nxdata, __nesc_ntoh_uint16(BasicServicesP$ProgMoteSource[sim_node()].nxdata));
  __nesc_hton_uint8(BasicServicesP$tempInputOutQ[sim_node()].reqAck.nxdata, 0);
  if (BasicServicesP$outQ$put(&BasicServicesP$tempInputOutQ[sim_node()]) != SUCCESS) {
      sim_log_debug(404U, "terra", "BS::sendReqProgBlock(): outQueue is full! Losting a message.\n");
    }
}

# 118 "/home/branco/gitspace/Terra/TerraVM/src/system/vmBitVectorC.nc"
static bool /*BasicServicesC.Bitmap*/vmBitVectorC$0$BitVector$isAllBitSet(void )
{
  uint16_t elnum;

#line 121
  for (elnum = 0; elnum < /*BasicServicesC.Bitmap*/vmBitVectorC$0$ARRAY_SIZE; elnum++) 
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 122
      {
#line 122
        if (/*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[sim_node()][elnum] != 0xff) {
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
static void TerraVMC$BSUpload$start(bool resetFlag)
#line 1781
{
  uint8_t i;
#line 1782
  uint8_t size;

#line 1783
  __nesc_hton_uint16(TerraVMC$MoteID[sim_node()].nxdata, TOS_NODE_ID);
  sim_log_debug(226U, "terra", "VM::BSUpload.start(%s)\n", resetFlag ? "TRUE" : "FALSE");
  if (resetFlag == TRUE) {

      size = TerraVMC$evtQ$size();
      for (i = 0; i < size; i++) TerraVMC$evtQ$dequeue();
    }
  TerraVMC$haltedFlag[sim_node()] = FALSE;


  TerraVMC$VMCustom$reset();
  TerraVMC$TViewer("error", 0, 0);

  TerraVMC$ceu_boot();
}

# 289 "BasicServicesP.nc"
static uint16_t BasicServicesP$getNextEmptyBlock(void )
#line 289
{
  uint16_t i;

#line 291
  for (i = 0; i < CURRENT_MAX_BLOCKS; i++) {
      if (!BasicServicesP$BM$get(i)) {
#line 292
        return i;
        }
    }
#line 294
  return CURRENT_MAX_BLOCKS;
}

# 90 "/opt/tinyos-2.1.2/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_euid(int mote)
#line 90
{
  long long int result;
  int tmp = sim_node();

#line 93
  sim_set_node(mote);
  result = SimMoteP$SimMote$getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 99
{
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  SimMoteP$SimMote$setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 115
{
  int result;
  int tmpID = sim_node();

#line 118
  sim_set_node(mote);
  result = SimMoteP$SimMote$getVariableInfo(name, ptr, len);
  sim_log_debug(284U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 125
{
  int tmpID = sim_node();

#line 127
  sim_set_node(mote);
  SimMoteP$startTime[sim_node()] = t;
  sim_log_debug(285U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 143
{
  int tmp = sim_node();

#line 145
  sim_set_node(mote);
  SimMoteP$SimMote$turnOn();
  sim_set_node(tmp);
}

#line 72
static void SimMoteP$SimMote$turnOn(void )
#line 72
{
  if (!SimMoteP$isOn[sim_node()]) {
      if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP$startTime[sim_node()] = sim_time();
      sim_log_debug(283U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
      SimMoteP$isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 150
  void sim_mote_turn_off(int mote)
#line 150
{
  int tmp = sim_node();

#line 152
  sim_set_node(mote);
  SimMoteP$SimMote$turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 166
{
  int tmp = sim_node();

#line 168
  sim_set_node(mote);

  if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP$bootEvent[sim_node()]->time == SimMoteP$startTime[sim_node()]) {

          SimMoteP$bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP$bootEvent[sim_node()]->time = SimMoteP$startTime[sim_node()];
  SimMoteP$bootEvent[sim_node()]->mote = mote;
  SimMoteP$bootEvent[sim_node()]->force = TRUE;
  SimMoteP$bootEvent[sim_node()]->data = (void *)0;
  SimMoteP$bootEvent[sim_node()]->handle = SimMoteP$sim_mote_boot_handle;
  SimMoteP$bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP$bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module TerraVMC */
  if (!strcmp(varname, "TerraVMC$old"))
  {
    *addr = (uintptr_t)&TerraVMC$old[__nesc_mote];
    *size = sizeof(TerraVMC$old[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$MoteID"))
  {
    *addr = (uintptr_t)&TerraVMC$MoteID[__nesc_mote];
    *size = sizeof(TerraVMC$MoteID[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$CEU_data"))
  {
    *addr = (uintptr_t)&TerraVMC$CEU_data[__nesc_mote];
    *size = sizeof(TerraVMC$CEU_data[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$PC"))
  {
    *addr = (uintptr_t)&TerraVMC$PC[__nesc_mote];
    *size = sizeof(TerraVMC$PC[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$haltedFlag"))
  {
    *addr = (uintptr_t)&TerraVMC$haltedFlag[__nesc_mote];
    *size = sizeof(TerraVMC$haltedFlag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$procFlag"))
  {
    *addr = (uintptr_t)&TerraVMC$procFlag[__nesc_mote];
    *size = sizeof(TerraVMC$procFlag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$ExtDataSysError"))
  {
    *addr = (uintptr_t)&TerraVMC$ExtDataSysError[__nesc_mote];
    *size = sizeof(TerraVMC$ExtDataSysError[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$ProgStart"))
  {
    *addr = (uintptr_t)&TerraVMC$ProgStart[__nesc_mote];
    *size = sizeof(TerraVMC$ProgStart[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$ProgEnd"))
  {
    *addr = (uintptr_t)&TerraVMC$ProgEnd[__nesc_mote];
    *size = sizeof(TerraVMC$ProgEnd[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$nTracks"))
  {
    *addr = (uintptr_t)&TerraVMC$nTracks[__nesc_mote];
    *size = sizeof(TerraVMC$nTracks[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$wClocks"))
  {
    *addr = (uintptr_t)&TerraVMC$wClocks[__nesc_mote];
    *size = sizeof(TerraVMC$wClocks[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$asyncs"))
  {
    *addr = (uintptr_t)&TerraVMC$asyncs[__nesc_mote];
    *size = sizeof(TerraVMC$asyncs[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$wClock0"))
  {
    *addr = (uintptr_t)&TerraVMC$wClock0[__nesc_mote];
    *size = sizeof(TerraVMC$wClock0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$gate0"))
  {
    *addr = (uintptr_t)&TerraVMC$gate0[__nesc_mote];
    *size = sizeof(TerraVMC$gate0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$inEvts"))
  {
    *addr = (uintptr_t)&TerraVMC$inEvts[__nesc_mote];
    *size = sizeof(TerraVMC$inEvts[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$async0"))
  {
    *addr = (uintptr_t)&TerraVMC$async0[__nesc_mote];
    *size = sizeof(TerraVMC$async0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$MEM"))
  {
    *addr = (uintptr_t)&TerraVMC$MEM[__nesc_mote];
    *size = sizeof(TerraVMC$MEM[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$currStack"))
  {
    *addr = (uintptr_t)&TerraVMC$currStack[__nesc_mote];
    *size = sizeof(TerraVMC$currStack[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TerraVMC$CEU_"))
  {
    *addr = (uintptr_t)&TerraVMC$CEU_[__nesc_mote];
    *size = sizeof(TerraVMC$CEU_[__nesc_mote]);
    return 0;
  }

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP$m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP$euid"))
  {
    *addr = (uintptr_t)&SimMoteP$euid[__nesc_mote];
    *size = sizeof(SimMoteP$euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$startTime"))
  {
    *addr = (uintptr_t)&SimMoteP$startTime[__nesc_mote];
    *size = sizeof(SimMoteP$startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$isOn"))
  {
    *addr = (uintptr_t)&SimMoteP$isOn[__nesc_mote];
    *size = sizeof(SimMoteP$isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP$bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP$bootEvent[__nesc_mote]);
    return 0;
  }

  /* Module TossimActiveMessageC */
  if (!strcmp(varname, "TossimActiveMessageC$buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimActiveMessageC$bufferPointer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$bufferPointer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC$initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC$initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$running[__nesc_mote];
    *size = sizeof(TossimPacketModelC$running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC$backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC$neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC$destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$error[__nesc_mote];
    *size = sizeof(TossimPacketModelC$error[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC$outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC$outgoing[__nesc_mote];
    *size = sizeof(CpmModelC$outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC$requestAck[__nesc_mote];
    *size = sizeof(CpmModelC$requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$receiving"))
  {
    *addr = (uintptr_t)&CpmModelC$receiving[__nesc_mote];
    *size = sizeof(CpmModelC$receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmitting"))
  {
    *addr = (uintptr_t)&CpmModelC$transmitting[__nesc_mote];
    *size = sizeof(CpmModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmissionEndTime"))
  {
    *addr = (uintptr_t)&CpmModelC$transmissionEndTime[__nesc_mote];
    *size = sizeof(CpmModelC$transmissionEndTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC$outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC$outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC$clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC$clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC$set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC$addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$addr[__nesc_mote]);
    return 0;
  }

  /* Module SerialActiveMessageC */
  if (!strcmp(varname, "SerialActiveMessageC$buffer"))
  {
    *addr = (uintptr_t)&SerialActiveMessageC$buffer[__nesc_mote];
    *size = sizeof(SerialActiveMessageC$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SerialActiveMessageC$bufferPointer"))
  {
    *addr = (uintptr_t)&SerialActiveMessageC$bufferPointer[__nesc_mote];
    *size = sizeof(SerialActiveMessageC$bufferPointer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SerialActiveMessageC$sendMsgPtr"))
  {
    *addr = (uintptr_t)&SerialActiveMessageC$sendMsgPtr[__nesc_mote];
    *size = sizeof(SerialActiveMessageC$sendMsgPtr[__nesc_mote]);
    return 0;
  }

  /* Module BasicServicesP */
  if (!strcmp(varname, "BasicServicesP$MoteID"))
  {
    *addr = (uintptr_t)&BasicServicesP$MoteID[__nesc_mote];
    *size = sizeof(BasicServicesP$MoteID[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$firstInic"))
  {
    *addr = (uintptr_t)&BasicServicesP$firstInic[__nesc_mote];
    *size = sizeof(BasicServicesP$firstInic[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$reSendDelay"))
  {
    *addr = (uintptr_t)&BasicServicesP$reSendDelay[__nesc_mote];
    *size = sizeof(BasicServicesP$reSendDelay[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$tempInputInQ"))
  {
    *addr = (uintptr_t)&BasicServicesP$tempInputInQ[__nesc_mote];
    *size = sizeof(BasicServicesP$tempInputInQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$tempInputOutQ"))
  {
    *addr = (uintptr_t)&BasicServicesP$tempInputOutQ[__nesc_mote];
    *size = sizeof(BasicServicesP$tempInputOutQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$tempOutputInQ"))
  {
    *addr = (uintptr_t)&BasicServicesP$tempOutputInQ[__nesc_mote];
    *size = sizeof(BasicServicesP$tempOutputInQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$tempOutputOutQ"))
  {
    *addr = (uintptr_t)&BasicServicesP$tempOutputOutQ[__nesc_mote];
    *size = sizeof(BasicServicesP$tempOutputOutQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$lastNewProgVersion"))
  {
    *addr = (uintptr_t)&BasicServicesP$lastNewProgVersion[__nesc_mote];
    *size = sizeof(BasicServicesP$lastNewProgVersion[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$sendBuff"))
  {
    *addr = (uintptr_t)&BasicServicesP$sendBuff[__nesc_mote];
    *size = sizeof(BasicServicesP$sendBuff[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$serialAux"))
  {
    *addr = (uintptr_t)&BasicServicesP$serialAux[__nesc_mote];
    *size = sizeof(BasicServicesP$serialAux[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$sendCounter"))
  {
    *addr = (uintptr_t)&BasicServicesP$sendCounter[__nesc_mote];
    *size = sizeof(BasicServicesP$sendCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$userRFPowerIdx"))
  {
    *addr = (uintptr_t)&BasicServicesP$userRFPowerIdx[__nesc_mote];
    *size = sizeof(BasicServicesP$userRFPowerIdx[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$ReqState"))
  {
    *addr = (uintptr_t)&BasicServicesP$ReqState[__nesc_mote];
    *size = sizeof(BasicServicesP$ReqState[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$ProgVersion"))
  {
    *addr = (uintptr_t)&BasicServicesP$ProgVersion[__nesc_mote];
    *size = sizeof(BasicServicesP$ProgVersion[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$ProgMoteSource"))
  {
    *addr = (uintptr_t)&BasicServicesP$ProgMoteSource[__nesc_mote];
    *size = sizeof(BasicServicesP$ProgMoteSource[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$ProgBlockStart"))
  {
    *addr = (uintptr_t)&BasicServicesP$ProgBlockStart[__nesc_mote];
    *size = sizeof(BasicServicesP$ProgBlockStart[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$ProgBlockLen"))
  {
    *addr = (uintptr_t)&BasicServicesP$ProgBlockLen[__nesc_mote];
    *size = sizeof(BasicServicesP$ProgBlockLen[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$loadingProgramFlag"))
  {
    *addr = (uintptr_t)&BasicServicesP$loadingProgramFlag[__nesc_mote];
    *size = sizeof(BasicServicesP$loadingProgramFlag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$ProgTimeOutCounter"))
  {
    *addr = (uintptr_t)&BasicServicesP$ProgTimeOutCounter[__nesc_mote];
    *size = sizeof(BasicServicesP$ProgTimeOutCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$DsmBlockCount"))
  {
    *addr = (uintptr_t)&BasicServicesP$DsmBlockCount[__nesc_mote];
    *size = sizeof(BasicServicesP$DsmBlockCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$lastRecNewProgVersion"))
  {
    *addr = (uintptr_t)&BasicServicesP$lastRecNewProgVersion[__nesc_mote];
    *size = sizeof(BasicServicesP$lastRecNewProgVersion[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$NewDataSeq"))
  {
    *addr = (uintptr_t)&BasicServicesP$NewDataSeq[__nesc_mote];
    *size = sizeof(BasicServicesP$NewDataSeq[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$maxSeenDataSeq"))
  {
    *addr = (uintptr_t)&BasicServicesP$maxSeenDataSeq[__nesc_mote];
    *size = sizeof(BasicServicesP$maxSeenDataSeq[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$NewDataMoteSource"))
  {
    *addr = (uintptr_t)&BasicServicesP$NewDataMoteSource[__nesc_mote];
    *size = sizeof(BasicServicesP$NewDataMoteSource[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BasicServicesP$disseminatorRoot"))
  {
    *addr = (uintptr_t)&BasicServicesP$disseminatorRoot[__nesc_mote];
    *size = sizeof(BasicServicesP$disseminatorRoot[__nesc_mote]);
    return 0;
  }

  /* Module AMAuxC */

  /* Module vmBitVectorC$0 */
  if (!strcmp(varname, "/*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits"))
  {
    *addr = (uintptr_t)&/*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[__nesc_mote];
    *size = sizeof(/*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[__nesc_mote]);
    return 0;
  }

  /* Module dataQueueP$0 */
  if (!strcmp(varname, "/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ"))
  {
    *addr = (uintptr_t)&/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ[__nesc_mote];
    *size = sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qData"))
  {
    *addr = (uintptr_t)&/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qData[__nesc_mote];
    *size = sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qData[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qHead"))
  {
    *addr = (uintptr_t)&/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qHead[__nesc_mote];
    *size = sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qTail"))
  {
    *addr = (uintptr_t)&/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qTail[__nesc_mote];
    *size = sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qTail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize"))
  {
    *addr = (uintptr_t)&/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[__nesc_mote];
    *size = sizeof(/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[__nesc_mote]);
    return 0;
  }

  /* Module dataQueueP$1 */
  if (!strcmp(varname, "/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ"))
  {
    *addr = (uintptr_t)&/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ[__nesc_mote];
    *size = sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qData"))
  {
    *addr = (uintptr_t)&/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qData[__nesc_mote];
    *size = sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qData[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qHead"))
  {
    *addr = (uintptr_t)&/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qHead[__nesc_mote];
    *size = sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qTail"))
  {
    *addr = (uintptr_t)&/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qTail[__nesc_mote];
    *size = sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qTail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize"))
  {
    *addr = (uintptr_t)&/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[__nesc_mote];
    *size = sizeof(/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP$0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC$0 */

  /* Module RandomMlcgC */
  if (!strcmp(varname, "RandomMlcgC$seed"))
  {
    *addr = (uintptr_t)&RandomMlcgC$seed[__nesc_mote];
    *size = sizeof(RandomMlcgC$seed[__nesc_mote]);
    return 0;
  }

  /* Module VMCustomP */
  if (!strcmp(varname, "VMCustomP$ExtDataCustomA"))
  {
    *addr = (uintptr_t)&VMCustomP$ExtDataCustomA[__nesc_mote];
    *size = sizeof(VMCustomP$ExtDataCustomA[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "VMCustomP$ExtDataRadioReceived"))
  {
    *addr = (uintptr_t)&VMCustomP$ExtDataRadioReceived[__nesc_mote];
    *size = sizeof(VMCustomP$ExtDataRadioReceived[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "VMCustomP$ExtDataSendDoneError"))
  {
    *addr = (uintptr_t)&VMCustomP$ExtDataSendDoneError[__nesc_mote];
    *size = sizeof(VMCustomP$ExtDataSendDoneError[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "VMCustomP$ExtDataWasAcked"))
  {
    *addr = (uintptr_t)&VMCustomP$ExtDataWasAcked[__nesc_mote];
    *size = sizeof(VMCustomP$ExtDataWasAcked[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "VMCustomP$ExtDataQReady"))
  {
    *addr = (uintptr_t)&VMCustomP$ExtDataQReady[__nesc_mote];
    *size = sizeof(VMCustomP$ExtDataQReady[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "VMCustomP$MIC_flag"))
  {
    *addr = (uintptr_t)&VMCustomP$MIC_flag[__nesc_mote];
    *size = sizeof(VMCustomP$MIC_flag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "VMCustomP$MIC_buf"))
  {
    *addr = (uintptr_t)&VMCustomP$MIC_buf[__nesc_mote];
    *size = sizeof(VMCustomP$MIC_buf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "VMCustomP$MIC_count"))
  {
    *addr = (uintptr_t)&VMCustomP$MIC_count[__nesc_mote];
    *size = sizeof(VMCustomP$MIC_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "VMCustomP$MIC_usPeriod"))
  {
    *addr = (uintptr_t)&VMCustomP$MIC_usPeriod[__nesc_mote];
    *size = sizeof(VMCustomP$MIC_usPeriod[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "VMCustomP$MIC_gain"))
  {
    *addr = (uintptr_t)&VMCustomP$MIC_gain[__nesc_mote];
    *size = sizeof(VMCustomP$MIC_gain[__nesc_mote]);
    return 0;
  }

  /* Module SensActP */
  if (!strcmp(varname, "SensActP$dTemp"))
  {
    *addr = (uintptr_t)&SensActP$dTemp[__nesc_mote];
    *size = sizeof(SensActP$dTemp[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SensActP$dPhoto"))
  {
    *addr = (uintptr_t)&SensActP$dPhoto[__nesc_mote];
    *size = sizeof(SensActP$dPhoto[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SensActP$dLeds"))
  {
    *addr = (uintptr_t)&SensActP$dLeds[__nesc_mote];
    *size = sizeof(SensActP$dLeds[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SensActP$dVolt"))
  {
    *addr = (uintptr_t)&SensActP$dVolt[__nesc_mote];
    *size = sizeof(SensActP$dVolt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SensActP$dIn1"))
  {
    *addr = (uintptr_t)&SensActP$dIn1[__nesc_mote];
    *size = sizeof(SensActP$dIn1[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SensActP$dIn2"))
  {
    *addr = (uintptr_t)&SensActP$dIn2[__nesc_mote];
    *size = sizeof(SensActP$dIn2[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SensActP$sensorsReqs"))
  {
    *addr = (uintptr_t)&SensActP$sensorsReqs[__nesc_mote];
    *size = sizeof(SensActP$sensorsReqs[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SensActP$initFlag"))
  {
    *addr = (uintptr_t)&SensActP$initFlag[__nesc_mote];
    *size = sizeof(SensActP$initFlag[__nesc_mote]);
    return 0;
  }

  /* Module dataSensorP */
  if (!strcmp(varname, "dataSensorP$initialized"))
  {
    *addr = (uintptr_t)&dataSensorP$initialized[__nesc_mote];
    *size = sizeof(dataSensorP$initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "dataSensorP$file"))
  {
    *addr = (uintptr_t)&dataSensorP$file[__nesc_mote];
    *size = sizeof(dataSensorP$file[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "dataSensorP$lastReg"))
  {
    *addr = (uintptr_t)&dataSensorP$lastReg[__nesc_mote];
    *size = sizeof(dataSensorP$lastReg[__nesc_mote]);
    return 0;
  }

  /* Module LedsP */

  /* Module dataQueueP$2 */
  if (!strcmp(varname, "/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ"))
  {
    *addr = (uintptr_t)&/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ[__nesc_mote];
    *size = sizeof(/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qData"))
  {
    *addr = (uintptr_t)&/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qData[__nesc_mote];
    *size = sizeof(/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qData[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qHead"))
  {
    *addr = (uintptr_t)&/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qHead[__nesc_mote];
    *size = sizeof(/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qTail"))
  {
    *addr = (uintptr_t)&/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qTail[__nesc_mote];
    *size = sizeof(/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qTail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize"))
  {
    *addr = (uintptr_t)&/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[__nesc_mote];
    *size = sizeof(/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[__nesc_mote]);
    return 0;
  }

  /* Module QueueC$0 */
  if (!strcmp(varname, "/*TerraVMAppC.evtQ*/QueueC$0$queue"))
  {
    *addr = (uintptr_t)&/*TerraVMAppC.evtQ*/QueueC$0$queue[__nesc_mote];
    *size = sizeof(/*TerraVMAppC.evtQ*/QueueC$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TerraVMAppC.evtQ*/QueueC$0$head"))
  {
    *addr = (uintptr_t)&/*TerraVMAppC.evtQ*/QueueC$0$head[__nesc_mote];
    *size = sizeof(/*TerraVMAppC.evtQ*/QueueC$0$head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TerraVMAppC.evtQ*/QueueC$0$tail"))
  {
    *addr = (uintptr_t)&/*TerraVMAppC.evtQ*/QueueC$0$tail[__nesc_mote];
    *size = sizeof(/*TerraVMAppC.evtQ*/QueueC$0$tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TerraVMAppC.evtQ*/QueueC$0$size"))
  {
    *addr = (uintptr_t)&/*TerraVMAppC.evtQ*/QueueC$0$size[__nesc_mote];
    *size = sizeof(/*TerraVMAppC.evtQ*/QueueC$0$size[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module TerraVMC */
  memset((void *)&TerraVMC$old[__nesc_mote], 0, sizeof TerraVMC$old[__nesc_mote]);
  memset((void *)&TerraVMC$MoteID[__nesc_mote], 0, sizeof TerraVMC$MoteID[__nesc_mote]);
  memset((void *)&TerraVMC$CEU_data[__nesc_mote], 0, sizeof TerraVMC$CEU_data[__nesc_mote]);
  memset((void *)&TerraVMC$PC[__nesc_mote], 0, sizeof TerraVMC$PC[__nesc_mote]);
  TerraVMC$haltedFlag[__nesc_mote] = TRUE;
  TerraVMC$procFlag[__nesc_mote] = FALSE;
  memset((void *)&TerraVMC$ExtDataSysError[__nesc_mote], 0, sizeof TerraVMC$ExtDataSysError[__nesc_mote]);
  memset((void *)&TerraVMC$ProgStart[__nesc_mote], 0, sizeof TerraVMC$ProgStart[__nesc_mote]);
  memset((void *)&TerraVMC$ProgEnd[__nesc_mote], 0, sizeof TerraVMC$ProgEnd[__nesc_mote]);
  memset((void *)&TerraVMC$nTracks[__nesc_mote], 0, sizeof TerraVMC$nTracks[__nesc_mote]);
  memset((void *)&TerraVMC$wClocks[__nesc_mote], 0, sizeof TerraVMC$wClocks[__nesc_mote]);
  memset((void *)&TerraVMC$asyncs[__nesc_mote], 0, sizeof TerraVMC$asyncs[__nesc_mote]);
  memset((void *)&TerraVMC$wClock0[__nesc_mote], 0, sizeof TerraVMC$wClock0[__nesc_mote]);
  memset((void *)&TerraVMC$gate0[__nesc_mote], 0, sizeof TerraVMC$gate0[__nesc_mote]);
  memset((void *)&TerraVMC$inEvts[__nesc_mote], 0, sizeof TerraVMC$inEvts[__nesc_mote]);
  memset((void *)&TerraVMC$async0[__nesc_mote], 0, sizeof TerraVMC$async0[__nesc_mote]);
  memset((void *)&TerraVMC$MEM[__nesc_mote], 0, sizeof TerraVMC$MEM[__nesc_mote]);
  TerraVMC$currStack[__nesc_mote] = BLOCK_SIZE * CURRENT_MAX_BLOCKS - 1 - 4;
  memcpy((void *)&TerraVMC$CEU_[__nesc_mote], (void *)&(struct TerraVMC$__nesc_unnamed4338 ){ 0, 0x01, (void *)0, 0, 0, (void *)0, 0, (void *)0, (void *)0 }, sizeof TerraVMC$CEU_[__nesc_mote]);

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP$m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_next[__nesc_mote]);
  SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP$euid[__nesc_mote], 0, sizeof SimMoteP$euid[__nesc_mote]);
  memset((void *)&SimMoteP$startTime[__nesc_mote], 0, sizeof SimMoteP$startTime[__nesc_mote]);
  memset((void *)&SimMoteP$isOn[__nesc_mote], 0, sizeof SimMoteP$isOn[__nesc_mote]);
  memset((void *)&SimMoteP$bootEvent[__nesc_mote], 0, sizeof SimMoteP$bootEvent[__nesc_mote]);

  /* Module TossimActiveMessageC */
  memset((void *)&TossimActiveMessageC$buffer[__nesc_mote], 0, sizeof TossimActiveMessageC$buffer[__nesc_mote]);
  TossimActiveMessageC$bufferPointer[__nesc_mote] = &TossimActiveMessageC$buffer[__nesc_mote];

  /* Module TossimPacketModelC */
  TossimPacketModelC$initialized[__nesc_mote] = FALSE;
  TossimPacketModelC$running[__nesc_mote] = FALSE;
  memset((void *)&TossimPacketModelC$backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC$backoffCount[__nesc_mote]);
  memset((void *)&TossimPacketModelC$neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC$neededFreeSamples[__nesc_mote]);
  TossimPacketModelC$sending[__nesc_mote] = (void *)0;
  TossimPacketModelC$transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC$sendingLength[__nesc_mote] = 0;
  memset((void *)&TossimPacketModelC$destNode[__nesc_mote], 0, sizeof TossimPacketModelC$destNode[__nesc_mote]);
  memset((void *)&TossimPacketModelC$sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC$sendEvent[__nesc_mote]);
  TossimPacketModelC$error[__nesc_mote] = 0;

  /* Module CpmModelC */
  memset((void *)&CpmModelC$outgoing[__nesc_mote], 0, sizeof CpmModelC$outgoing[__nesc_mote]);
  memset((void *)&CpmModelC$requestAck[__nesc_mote], 0, sizeof CpmModelC$requestAck[__nesc_mote]);
  CpmModelC$receiving[__nesc_mote] = 0;
  CpmModelC$transmitting[__nesc_mote] = 0;
  memset((void *)&CpmModelC$transmissionEndTime[__nesc_mote], 0, sizeof CpmModelC$transmissionEndTime[__nesc_mote]);
  CpmModelC$outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC$clearThreshold[__nesc_mote] = -72.0;

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC$set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC$addr[__nesc_mote], 0, sizeof ActiveMessageAddressC$addr[__nesc_mote]);

  /* Module SerialActiveMessageC */
  memset((void *)&SerialActiveMessageC$buffer[__nesc_mote], 0, sizeof SerialActiveMessageC$buffer[__nesc_mote]);
  SerialActiveMessageC$bufferPointer[__nesc_mote] = &SerialActiveMessageC$buffer[__nesc_mote];
  SerialActiveMessageC$sendMsgPtr[__nesc_mote] = (void *)0;

  /* Module BasicServicesP */
  memset((void *)&BasicServicesP$MoteID[__nesc_mote], 0, sizeof BasicServicesP$MoteID[__nesc_mote]);
  BasicServicesP$firstInic[__nesc_mote] = TRUE;
  memset((void *)&BasicServicesP$reSendDelay[__nesc_mote], 0, sizeof BasicServicesP$reSendDelay[__nesc_mote]);
  memset((void *)&BasicServicesP$tempInputInQ[__nesc_mote], 0, sizeof BasicServicesP$tempInputInQ[__nesc_mote]);
  memset((void *)&BasicServicesP$tempInputOutQ[__nesc_mote], 0, sizeof BasicServicesP$tempInputOutQ[__nesc_mote]);
  memset((void *)&BasicServicesP$tempOutputInQ[__nesc_mote], 0, sizeof BasicServicesP$tempOutputInQ[__nesc_mote]);
  memset((void *)&BasicServicesP$tempOutputOutQ[__nesc_mote], 0, sizeof BasicServicesP$tempOutputOutQ[__nesc_mote]);
  memset((void *)&BasicServicesP$lastNewProgVersion[__nesc_mote], 0, sizeof BasicServicesP$lastNewProgVersion[__nesc_mote]);
  memset((void *)&BasicServicesP$sendBuff[__nesc_mote], 0, sizeof BasicServicesP$sendBuff[__nesc_mote]);
  memset((void *)&BasicServicesP$serialAux[__nesc_mote], 0, sizeof BasicServicesP$serialAux[__nesc_mote]);
  memset((void *)&BasicServicesP$sendCounter[__nesc_mote], 0, sizeof BasicServicesP$sendCounter[__nesc_mote]);
  memset((void *)&BasicServicesP$userRFPowerIdx[__nesc_mote], 0, sizeof BasicServicesP$userRFPowerIdx[__nesc_mote]);
  BasicServicesP$ReqState[__nesc_mote] = ST_IDLE;
  memset((void *)&BasicServicesP$ProgVersion[__nesc_mote], 0, sizeof BasicServicesP$ProgVersion[__nesc_mote]);
  memset((void *)&BasicServicesP$ProgMoteSource[__nesc_mote], 0, sizeof BasicServicesP$ProgMoteSource[__nesc_mote]);
  memset((void *)&BasicServicesP$ProgBlockStart[__nesc_mote], 0, sizeof BasicServicesP$ProgBlockStart[__nesc_mote]);
  memset((void *)&BasicServicesP$ProgBlockLen[__nesc_mote], 0, sizeof BasicServicesP$ProgBlockLen[__nesc_mote]);
  BasicServicesP$loadingProgramFlag[__nesc_mote] = FALSE;
  BasicServicesP$ProgTimeOutCounter[__nesc_mote] = 0;
  BasicServicesP$DsmBlockCount[__nesc_mote] = 0;
  memset((void *)&BasicServicesP$lastRecNewProgVersion[__nesc_mote], 0, sizeof BasicServicesP$lastRecNewProgVersion[__nesc_mote]);
  memset((void *)&BasicServicesP$NewDataSeq[__nesc_mote], 0, sizeof BasicServicesP$NewDataSeq[__nesc_mote]);
  memset((void *)&BasicServicesP$maxSeenDataSeq[__nesc_mote], 0, sizeof BasicServicesP$maxSeenDataSeq[__nesc_mote]);
  memset((void *)&BasicServicesP$NewDataMoteSource[__nesc_mote], 0, sizeof BasicServicesP$NewDataMoteSource[__nesc_mote]);
  BasicServicesP$disseminatorRoot[__nesc_mote] = 0;

  /* Module AMAuxC */

  /* Module vmBitVectorC$0 */
  memset((void *)&/*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[__nesc_mote], 0, sizeof /*BasicServicesC.Bitmap*/vmBitVectorC$0$m_bits[__nesc_mote]);

  /* Module dataQueueP$0 */
  /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$flagFreeQ[__nesc_mote] = TRUE;
  memset((void *)&/*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qData[__nesc_mote], 0, sizeof /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qData[__nesc_mote]);
  /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qHead[__nesc_mote] = 0;
  /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qTail[__nesc_mote] = 0;
  /*BasicServicesC.inQueue.dQueue*/dataQueueP$0$qSize[__nesc_mote] = 0;

  /* Module dataQueueP$1 */
  /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$flagFreeQ[__nesc_mote] = TRUE;
  memset((void *)&/*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qData[__nesc_mote], 0, sizeof /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qData[__nesc_mote]);
  /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qHead[__nesc_mote] = 0;
  /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qTail[__nesc_mote] = 0;
  /*BasicServicesC.outQueue.dQueue*/dataQueueP$1$qSize[__nesc_mote] = 0;

  /* Module Atm128AlarmAsyncP$0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP$inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP$compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP$overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$overflow[__nesc_mote]);

  /* Module AlarmToTimerC$0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC$0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC$0 */

  /* Module RandomMlcgC */
  memset((void *)&RandomMlcgC$seed[__nesc_mote], 0, sizeof RandomMlcgC$seed[__nesc_mote]);

  /* Module VMCustomP */
  memset((void *)&VMCustomP$ExtDataCustomA[__nesc_mote], 0, sizeof VMCustomP$ExtDataCustomA[__nesc_mote]);
  memset((void *)&VMCustomP$ExtDataRadioReceived[__nesc_mote], 0, sizeof VMCustomP$ExtDataRadioReceived[__nesc_mote]);
  memset((void *)&VMCustomP$ExtDataSendDoneError[__nesc_mote], 0, sizeof VMCustomP$ExtDataSendDoneError[__nesc_mote]);
  memset((void *)&VMCustomP$ExtDataWasAcked[__nesc_mote], 0, sizeof VMCustomP$ExtDataWasAcked[__nesc_mote]);
  memset((void *)&VMCustomP$ExtDataQReady[__nesc_mote], 0, sizeof VMCustomP$ExtDataQReady[__nesc_mote]);
  memset((void *)&VMCustomP$MIC_flag[__nesc_mote], 0, sizeof VMCustomP$MIC_flag[__nesc_mote]);
  memset((void *)&VMCustomP$MIC_buf[__nesc_mote], 0, sizeof VMCustomP$MIC_buf[__nesc_mote]);
  memset((void *)&VMCustomP$MIC_count[__nesc_mote], 0, sizeof VMCustomP$MIC_count[__nesc_mote]);
  memset((void *)&VMCustomP$MIC_usPeriod[__nesc_mote], 0, sizeof VMCustomP$MIC_usPeriod[__nesc_mote]);
  memset((void *)&VMCustomP$MIC_gain[__nesc_mote], 0, sizeof VMCustomP$MIC_gain[__nesc_mote]);

  /* Module SensActP */
  memset((void *)&SensActP$dTemp[__nesc_mote], 0, sizeof SensActP$dTemp[__nesc_mote]);
  memset((void *)&SensActP$dPhoto[__nesc_mote], 0, sizeof SensActP$dPhoto[__nesc_mote]);
  memset((void *)&SensActP$dLeds[__nesc_mote], 0, sizeof SensActP$dLeds[__nesc_mote]);
  memset((void *)&SensActP$dVolt[__nesc_mote], 0, sizeof SensActP$dVolt[__nesc_mote]);
  memset((void *)&SensActP$dIn1[__nesc_mote], 0, sizeof SensActP$dIn1[__nesc_mote]);
  memset((void *)&SensActP$dIn2[__nesc_mote], 0, sizeof SensActP$dIn2[__nesc_mote]);
  memset((void *)&SensActP$sensorsReqs[__nesc_mote], 0, sizeof SensActP$sensorsReqs[__nesc_mote]);
  SensActP$initFlag[__nesc_mote] = FALSE;

  /* Module dataSensorP */
  dataSensorP$initialized[__nesc_mote] = FALSE;
  memset((void *)&dataSensorP$file[__nesc_mote], 0, sizeof dataSensorP$file[__nesc_mote]);
  memset((void *)&dataSensorP$lastReg[__nesc_mote], 0, sizeof dataSensorP$lastReg[__nesc_mote]);

  /* Module LedsP */

  /* Module dataQueueP$2 */
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$flagFreeQ[__nesc_mote] = TRUE;
  memset((void *)&/*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qData[__nesc_mote], 0, sizeof /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qData[__nesc_mote]);
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qHead[__nesc_mote] = 0;
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qTail[__nesc_mote] = 0;
  /*VMCustomC.usrDataQ.dQueue*/dataQueueP$2$qSize[__nesc_mote] = 0;

  /* Module QueueC$0 */
  memset((void *)&/*TerraVMAppC.evtQ*/QueueC$0$queue[__nesc_mote], 0, sizeof /*TerraVMAppC.evtQ*/QueueC$0$queue[__nesc_mote]);
  /*TerraVMAppC.evtQ*/QueueC$0$head[__nesc_mote] = 0;
  /*TerraVMAppC.evtQ*/QueueC$0$tail[__nesc_mote] = 0;
  /*TerraVMAppC.evtQ*/QueueC$0$size[__nesc_mote] = 0;

}
