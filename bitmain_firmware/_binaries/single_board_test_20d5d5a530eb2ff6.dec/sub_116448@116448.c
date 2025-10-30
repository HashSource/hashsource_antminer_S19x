int __fastcall sub_116448(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0
  _DWORD *v8; // r2
  int v9; // r3

  result = sub_B28F8(*(_DWORD **)a1, a2, a3, a4);
  if ( result )
  {
    if ( a5 )
    {
      CRYPTO_free(*(void **)(*(_DWORD *)(a1 + 4) + 8));
      v8 = *(_DWORD **)(a1 + 4);
      v9 = v8[3];
      v8[2] = a5;
      *v8 = a6;
      v8[3] = v9 & 0xFFFFFFF0 | 8;
    }
    return 1;
  }
  return result;
}
