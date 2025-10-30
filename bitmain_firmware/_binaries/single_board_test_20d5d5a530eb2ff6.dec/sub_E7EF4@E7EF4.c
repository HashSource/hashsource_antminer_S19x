int __fastcall sub_E7EF4(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // r0
  void *v9; // r0

  memcpy(a1, (const void *)a2, 0x98u);
  if ( a3 )
    a1[2] = a3;
  if ( a4 )
    a1[3] = a4;
  result = 1;
  if ( *(_DWORD *)(a2 + 64) )
  {
    v9 = CRYPTO_malloc((void *)(16 * *(_DWORD *)(a2 + 24)));
    a1[16] = v9;
    if ( v9 )
    {
      memcpy(v9, *(const void **)(a2 + 64), 16 * (*(_DWORD *)(a2 + 20) + 1));
      return 1;
    }
    else
    {
      sub_D0048(15, 121, 65, (int)"crypto/modes/ocb128.c", 206);
      return 0;
    }
  }
  return result;
}
