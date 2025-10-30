int __fastcall sub_E0FD8(int a1, int a2)
{
  int v2; // r5
  unsigned int v6; // r3
  void *v7; // r0
  int i; // r4
  size_t v9; // r6
  int v10; // r0
  int v11; // lr
  void *v12; // r0
  int v13; // r0
  int v14; // lr
  size_t v15; // r1
  int v16; // r6

  if ( dword_6E1A7C )
    return 0;
  dword_6E1A80 = sub_10C510(a1);
  if ( !dword_6E1A80 )
    return 0;
  memset(&dword_6E1A54, 0, 0x28u);
  if ( !a1 )
    sub_BC328("assertion failed: size > 0", "crypto/mem_sec.c", 392);
  if ( ((a1 - 1) & a1) != 0 )
    sub_BC328("assertion failed: (size & (size - 1)) == 0", "crypto/mem_sec.c", 393);
  if ( a2 <= 0 )
    sub_BC328("assertion failed: minsize > 0", "crypto/mem_sec.c", 394);
  if ( ((a2 - 1) & a2) != 0 )
    sub_BC328("assertion failed: (minsize & (minsize - 1)) == 0", "crypto/mem_sec.c", 395);
  for ( ; a2 <= 7; a2 *= 2 )
    ;
  dword_6E1A6C = a2;
  dword_6E1A60 = a1;
  v6 = 2 * sub_189090(a1, a2);
  v7 = (void *)(v6 >> 3);
  dword_6E1A78 = v6;
  if ( !(v6 >> 3) )
    goto LABEL_37;
  for ( i = 0; ; ++i )
  {
    v6 >>= 1;
    if ( !v6 )
      break;
  }
  v9 = (size_t)&dword_6E1A54;
  dword_6E1A68 = i;
  dword_6E1A64 = (int)sub_E0740((void *)(4 * i));
  if ( !dword_6E1A64 )
    sub_BC328("assertion failed: sh.freelist != NULL", "crypto/mem_sec.c", 417);
  dword_6E1A70 = (int)sub_E0740((void *)((unsigned int)dword_6E1A78 >> 3));
  if ( !dword_6E1A70 )
    sub_BC328("assertion failed: sh.bittable != NULL", "crypto/mem_sec.c", 422);
  dword_6E1A74 = (int)sub_E0740((void *)((unsigned int)dword_6E1A78 >> 3));
  if ( !dword_6E1A74 )
    sub_BC328("assertion failed: sh.bitmalloc != NULL", "crypto/mem_sec.c", 427);
  v10 = sysconf(30);
  if ( v10 <= 0 )
  {
    v11 = 0x2000;
  }
  else
  {
    v9 = v10;
    v11 = 2 * v10;
  }
  if ( v10 <= 0 )
    v9 = 4096;
  dword_6E1A58 = v11 + dword_6E1A60;
  v12 = mmap(0, v11 + dword_6E1A60, 3, 34, -1, 0);
  dword_6E1A54 = (int)v12;
  if ( v12 != (void *)-1 )
  {
    dword_6E1A5C = (int)v12 + v9;
    sub_E080C((int)v12 + v9, 0, dword_6E1A70);
    sub_E08C0((unsigned int *)dword_6E1A64, (unsigned int *)dword_6E1A5C);
    v13 = mprotect((void *)dword_6E1A54, v9, 0);
    v2 = dword_6E1A60;
    v14 = -v9;
    v15 = v9;
    if ( v13 < 0 )
      v2 = 2;
    v16 = dword_6E1A60 - 1 + 2 * v9;
    if ( v13 >= 0 )
      v2 = 1;
    if ( mprotect((void *)((v16 & v14) + dword_6E1A54), v15, 0) < 0 )
      v2 = 2;
    if ( mlock((const void *)dword_6E1A5C, dword_6E1A60) < 0 )
      v2 = 2;
    if ( madvise((void *)dword_6E1A5C, dword_6E1A60, 16) < 0 )
      v2 = 2;
    dword_6E1A7C = 1;
    return v2;
  }
  v7 = (void *)dword_6E1A64;
LABEL_37:
  CRYPTO_free(v7);
  CRYPTO_free((void *)dword_6E1A70);
  CRYPTO_free((void *)dword_6E1A74);
  if ( dword_6E1A54 != -1 )
  {
    if ( dword_6E1A58 )
      munmap((void *)dword_6E1A54, dword_6E1A58);
  }
  memset(&dword_6E1A54, 0, 0x28u);
  sub_10C574(dword_6E1A80);
  dword_6E1A80 = 0;
  return 0;
}
