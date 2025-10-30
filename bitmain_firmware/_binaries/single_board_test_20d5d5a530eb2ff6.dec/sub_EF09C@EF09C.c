int __fastcall sub_EF09C(_DWORD *a1, int *a2, int (__fastcall *a3)(_BYTE *, int, _DWORD, char *), char *a4)
{
  int result; // r0
  int v6; // r4
  char *s1; // [sp+10h] [bp-14h] BYREF
  void *v8; // [sp+14h] [bp-10h] BYREF
  void *v9; // [sp+18h] [bp-Ch] BYREF
  int v10; // [sp+1Ch] [bp-8h] BYREF

  s1 = 0;
  v8 = 0;
  v9 = 0;
  result = sub_EEBE4((int *)&v9, &v10, &s1, (int)"DH PARAMETERS", a1, a3, a4);
  if ( result )
  {
    v8 = v9;
    if ( !strcmp(s1, "X9.42 DH PARAMETERS") )
      v6 = sub_BF258(a2, &v8, v10);
    else
      v6 = sub_BF210(a2, &v8, v10);
    if ( !v6 )
      sub_D0048(9, 141, 13, (int)"crypto/pem/pem_pkey.c", 228);
    CRYPTO_free(s1);
    CRYPTO_free(v9);
    return v6;
  }
  return result;
}
