int __fastcall sub_11351C(int a1, char *s, unsigned int a3)
{
  bool v3; // zf
  int v5; // r5
  size_t v7; // r4
  size_t v8; // r2
  void **v10; // r4
  int v11; // r8
  unsigned __int8 *v12; // r5

  v3 = s == 0;
  if ( s )
    v3 = a3 == 0;
  v5 = s == 0;
  if ( v3 )
  {
    if ( !s || (v7 = strlen(s)) == 0 )
    {
      v10 = (void **)1;
      sub_10BFDC(*(_DWORD *)(a1 + 36), (void (__fastcall *)(int))sub_113300);
      *(_DWORD *)(a1 + 36) = 0;
      return (int)v10;
    }
  }
  else
  {
    v7 = a3;
    if ( a3 <= 1 )
      v8 = 1;
    else
      v8 = a3 - 1;
    if ( memchr(s, 0, v8) )
      return 0;
  }
  v11 = v7 - 1;
  if ( s[v7 - 1] )
    v11 = v7;
  if ( !v11 )
    v5 |= 1u;
  sub_10BFDC(*(_DWORD *)(a1 + 36), (void (__fastcall *)(int))sub_113300);
  *(_DWORD *)(a1 + 36) = 0;
  if ( v5 )
    return 1;
  v12 = sub_E9EF4((unsigned __int8 *)s, v11);
  if ( !v12 )
    return 0;
  v10 = *(void ***)(a1 + 36);
  if ( !v10 )
  {
    v10 = sub_10BFCC();
    *(_DWORD *)(a1 + 36) = v10;
    if ( !v10 )
    {
      CRYPTO_free(v12);
      return (int)v10;
    }
  }
  if ( !sub_10BD3C((int *)v10, (int)v12) )
  {
    CRYPTO_free(v12);
    v10 = (void **)sub_10C010(*(_DWORD *)(a1 + 36));
    if ( !v10 )
    {
      sub_10BDB4(*(void ***)(a1 + 36));
      *(_DWORD *)(a1 + 36) = 0;
      return (int)v10;
    }
    return 0;
  }
  return 1;
}
