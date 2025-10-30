int __fastcall sub_107078(int a1, int a2, void *a3, _DWORD *dest)
{
  int v5; // r5
  int v7; // r4
  void *v8; // r0
  void *v9; // r4

  v5 = *(_DWORD *)(a1 + 20);
  if ( a2 == 4097 )
  {
    v7 = sub_C4BE8((int)a3);
    if ( !v7 )
    {
      sub_D0048(53, 109, 108, (int)"crypto/sm2/sm2_pmeth.c", 173);
      return 0;
    }
    sub_C64B8(*(_DWORD *)v5);
    *(_DWORD *)v5 = v7;
    return 1;
  }
  if ( a2 <= 4097 )
  {
    if ( a2 != 7 )
    {
      if ( a2 == 13 )
      {
        *dest = *(_DWORD *)(v5 + 4);
        return 1;
      }
      if ( a2 == 1 )
      {
        *(_DWORD *)(v5 + 4) = dest;
        return 1;
      }
      return -2;
    }
    return 1;
  }
  if ( a2 == 4107 )
  {
    if ( (int)a3 <= 0 )
    {
      CRYPTO_free(*(void **)(v5 + 8));
      *(_DWORD *)(v5 + 8) = 0;
    }
    else
    {
      v8 = CRYPTO_malloc(a3);
      v9 = v8;
      if ( !v8 )
      {
        sub_D0048(53, 109, 65, (int)"crypto/sm2/sm2_pmeth.c", 200);
        return 0;
      }
      memcpy(v8, dest, (size_t)a3);
      CRYPTO_free(*(void **)(v5 + 8));
      *(_DWORD *)(v5 + 8) = v9;
    }
    *(_DWORD *)(v5 + 12) = a3;
    *(_DWORD *)(v5 + 16) = 1;
    return 1;
  }
  if ( a2 <= 4107 )
  {
    if ( a2 == 4098 )
    {
      if ( *(_DWORD *)v5 )
      {
        sub_C6288(*(_DWORD *)v5, (int)a3);
        return 1;
      }
      else
      {
        sub_D0048(53, 109, 109, (int)"crypto/sm2/sm2_pmeth.c", 182);
        return 0;
      }
    }
    return -2;
  }
  if ( a2 != 4108 )
  {
    if ( a2 == 4109 )
    {
      *dest = *(_DWORD *)(v5 + 12);
      return 1;
    }
    return -2;
  }
  memcpy(dest, *(const void **)(v5 + 8), *(_DWORD *)(v5 + 12));
  return 1;
}
