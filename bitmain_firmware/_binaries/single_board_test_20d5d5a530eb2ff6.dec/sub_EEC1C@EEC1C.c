int __fastcall sub_EEC1C(
        int (__fastcall *a1)(int, void **, int),
        int a2,
        _DWORD *a3,
        int a4,
        int (__fastcall *a5)(_BYTE *, int, _DWORD, char *),
        char *a6)
{
  int result; // r0
  int v9; // r4
  void *v10; // [sp+14h] [bp-Ch] BYREF
  void *v11; // [sp+18h] [bp-8h] BYREF
  int v12; // [sp+1Ch] [bp-4h] BYREF

  v10 = 0;
  v11 = 0;
  result = sub_EEBE4((int *)&v11, &v12, 0, a2, a3, a5, a6);
  if ( result )
  {
    v10 = v11;
    v9 = a1(a4, &v10, v12);
    if ( !v9 )
      sub_D0048(9, 103, 13, (int)"crypto/pem/pem_oth.c", 33);
    CRYPTO_free(v11);
    return v9;
  }
  return result;
}
