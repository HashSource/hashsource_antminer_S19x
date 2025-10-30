int __fastcall sub_14124C(int a1)
{
  char *v2; // r4
  int *v3; // r0
  int v4; // r8
  int *v5; // r5
  int v6; // r1
  void *v7; // r0
  void *v8; // r7
  char *v10; // r0

  v2 = (char *)sub_C1D04((_DWORD *)a1, 0);
  v3 = _errno_location();
  v4 = *v3;
  if ( !v2 )
  {
    sub_D0048(37, 102, 111, (int)"crypto/dso/dso_dlfcn.c", 105);
    goto LABEL_10;
  }
  v5 = v3;
  if ( (*(_DWORD *)(a1 + 12) & 0x20) != 0 )
    v6 = 258;
  else
    v6 = 2;
  v7 = dlopen(v2, v6);
  v8 = v7;
  if ( !v7 )
  {
    sub_D0048(37, 102, 103, (int)"crypto/dso/dso_dlfcn.c", 118);
    v10 = dlerror();
    sub_D1240(4, "filename(", v2, "): ", v10);
LABEL_10:
    CRYPTO_free(v2);
    return 0;
  }
  *v5 = v4;
  if ( sub_10BD3C(*(int **)(a1 + 4), (int)v7) )
  {
    *(_DWORD *)(a1 + 32) = v2;
    return 1;
  }
  else
  {
    sub_D0048(37, 102, 105, (int)"crypto/dso/dso_dlfcn.c", 128);
    CRYPTO_free(v2);
    dlclose(v8);
    return 0;
  }
}
