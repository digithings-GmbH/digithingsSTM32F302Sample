__attribute__((optimize("O0"))) /* Because of recursive MemSet in while is this nessesary */
void * memset (void *dest, int val, unsigned int len) {
  unsigned char* ptr = (unsigned char*)dest;
  while (len-- > 0) {
    *ptr++ = val;
  }
  return dest;
}
