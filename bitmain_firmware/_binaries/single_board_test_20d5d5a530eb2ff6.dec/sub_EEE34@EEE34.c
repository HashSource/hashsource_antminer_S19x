bool __fastcall sub_EEE34(
        int a1,
        int a2,
        _DWORD *a3,
        char *a4,
        int a5,
        int (__fastcall *a6)(char *, int, int, char *),
        char *a7)
{
  int v8; // r1
  char v13[84]; // [sp+18h] [bp-54h] BYREF

  v8 = *(_DWORD *)(a2 + 12);
  if ( v8 && *(_DWORD *)(v8 + 100) )
  {
    sub_B5560(v13, 0x50u, "%s PRIVATE KEY", *(const char **)(v8 + 12));
    return sub_EDD48((int (__fastcall *)(int, char **))i2d_PrivateKey, v13, a1, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    sub_D0048(9, 147, 110, (int)"crypto/pem/pem_pkey.c", 114);
    return 0;
  }
}
