int __fastcall sub_11378C(int a1, char *s, unsigned int a3)
{
  bool v3; // zf
  char *v6; // r5
  int v7; // r7
  void *v8; // r4

  v3 = a3 == 16;
  if ( a3 != 16 )
    v3 = (a3 & 0xFFFFFFFB) == 0;
  if ( !v3 )
    return 0;
  v6 = s;
  v7 = a1 + 60;
  if ( s )
  {
    v8 = (void *)a3;
    if ( !a3 )
      v8 = (void *)strlen(s);
    v6 = (char *)sub_E9E68(v6, v8);
    if ( !v6 )
      return 0;
  }
  else
  {
    v8 = 0;
  }
  CRYPTO_free(*(void **)(a1 + 56));
  *(_DWORD *)(a1 + 56) = v6;
  if ( v7 )
    *(_DWORD *)(a1 + 60) = v8;
  return 1;
}
