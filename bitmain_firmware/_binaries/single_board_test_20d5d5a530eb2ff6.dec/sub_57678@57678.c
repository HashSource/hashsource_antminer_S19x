_DWORD *__fastcall sub_57678(int (__fastcall *a1)(int, int), int a2, int a3, int a4, char *a5, unsigned int a6)
{
  char *v6; // r9
  size_t v9; // r6
  _DWORD *v10; // r4
  void *v11; // r0
  void *v12; // r0
  void *v13; // r0
  int v14; // r3
  void *v16; // r0

  v6 = a5;
  v9 = a6;
  if ( a1 )
    v10 = (_DWORD *)a1(a4, 28);
  else
    v10 = malloc(0x1Cu);
  if ( !v10 )
    return 0;
  *v10 = a1;
  v10[1] = a2;
  v10[2] = a3;
  v10[3] = a4;
  if ( a6 > 0x10000 )
  {
    v6 = &a5[a6 - 0x10000];
    v9 = 0x10000;
  }
  if ( a1 )
  {
    v10[4] = a1(a4, v9);
    v11 = (void *)a1(a4, 16416);
    v10[5] = v11;
    if ( v11 )
      sub_4C11C(v11, 0x4020u);
    v12 = (void *)a1(a4, (int)&loc_40036 + 2);
  }
  else
  {
    v10[4] = malloc(v9);
    v16 = malloc(0x4020u);
    v10[5] = v16;
    if ( v16 )
      sub_4C11C(v16, 0x4020u);
    v12 = malloc(0x40038u);
  }
  v10[6] = v12;
  if ( v12 )
    sub_4C11C(v12, 0x40038u);
  v13 = (void *)v10[4];
  if ( v13 && v10[5] && v10[6] )
  {
    memcpy(v13, v6, v9);
    sub_4C1BC((_DWORD *)v10[5], (char *)v10[4], v9);
    sub_56BD4(v10[6], 9);
    sub_56BFC(v10[6], v10[4], v9, v14);
    return v10;
  }
  else
  {
    sub_57610(v10);
    return 0;
  }
}
