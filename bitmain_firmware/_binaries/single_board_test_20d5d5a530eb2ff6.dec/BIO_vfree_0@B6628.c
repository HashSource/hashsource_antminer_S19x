int __fastcall BIO_vfree_0(int result)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  int (__fastcall *v4)(int, int); // r6
  _DWORD *v5; // r4
  int (__fastcall *v6)(int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD); // r5
  void (__fastcall *v7)(_DWORD *); // r3

  if ( !result )
    return result;
  v1 = (unsigned int *)(result + 48);
  do
    v2 = __ldrex(v1);
  while ( __strex(v2 - 1, v1) );
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 > 0 )
      return 1;
  }
  else
  {
    __dmb(0xBu);
  }
  v4 = *(int (__fastcall **)(int, int))(result + 4);
  v5 = (_DWORD *)result;
  v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(result + 8);
  if ( v4 )
  {
    if ( !v6 )
    {
      result = v4(result, 1);
      goto LABEL_13;
    }
LABEL_20:
    result = v6(result, 1, 0, 0, 0, 0, 1, 0);
LABEL_13:
    if ( result <= 0 )
      return result;
    goto LABEL_14;
  }
  if ( v6 )
    goto LABEL_20;
LABEL_14:
  if ( *v5 )
  {
    v7 = *(void (__fastcall **)(_DWORD *))(*v5 + 40);
    if ( v7 )
      v7(v5);
  }
  sub_DC2BC(12, v5, v5 + 18);
  sub_10C574(v5[19]);
  CRYPTO_free(v5, "crypto/bio/bio_lib.c", 138);
  return 1;
}
