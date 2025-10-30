_DWORD *__fastcall sub_16C5A4(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r5
  _DWORD *v8; // r6
  _DWORD *v9; // r0
  _DWORD *v10; // r4

  v6 = ((int (__fastcall *)(const char *))loc_10C35C)("file");
  if ( !v6 )
    return 0;
  v7 = v6;
  v8 = sub_16BC20(a1);
  if ( !v8 )
    return 0;
  v9 = sub_E0740((void *)0x20);
  v10 = v9;
  if ( v9 )
  {
    *v9 = v7;
    v9[1] = v8;
    v9[2] = a2;
    v9[3] = a3;
    v9[4] = 0;
    v9[5] = 0;
    return v10;
  }
  sub_D0048(44, 127, 65, (int)"crypto/store/store_lib.c", 656);
  (*(void (__fastcall **)(_DWORD *))(v7 + 36))(v8);
  return 0;
}
