#include <vector>
#include <htslib/bgzf.h>
#include <htslib/kstring.h>
#include <htslib/hts.h>
#include <zlib.h>

#define STRINGIFY(x) #x
#define ASSTR(x) STRINGIFY(x)
#define AT __FILE__ ":" ASSTR(__LINE__)

//angsd io
namespace aio{
  size_t fsize(const char* fname);
  int fexists(const char* str);//{///@param str Filename given as a string.
  FILE *openFile(const char* a,const char* b);
  FILE *getFILE(const char*fname,const char* mode);
  BGZF *openFileBG(const char* a,const char* b);
  htsFile *openFileHts(const char * a, const char*b);
  htsFile *openFileHtsBcf(const char * a, const char*b);
  int isNewer(const char *newer,const char *older);
  ssize_t bgzf_write(BGZF *fp, const void *data, size_t length);
  int tgets(gzFile gz,char**buf,int *l);
  void doAssert(int EXIT, int EXIT_CODE, const char* error_location, const char* format,...);
}
