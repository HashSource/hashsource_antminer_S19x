int *__fastcall sub_C8F94(int *a1, int a2, _DWORD *a3, int a4)
{
  unsigned __int8 *v7; // r7
  int v8; // r0
  unsigned __int8 *v9; // r6
  int v10; // r9
  int v11; // r0
  int v13; // r0
  const char *v14; // r0
  const char *v15; // r0
  int v16; // [sp+64h] [bp-8h] BYREF

  v7 = (unsigned __int8 *)(*a3 + a4);
  *a1 = 0;
  a1[1] = 0;
  v8 = sub_33C6C4(a3, 45, a4);
  if ( v8 == -1 )
  {
    v13 = sub_C8F0C(a2, v7, 0, 0);
    *a1 = v13;
    a1[1] = v13;
    return a1;
  }
  else
  {
    if ( v8 + 1 == a3[1] )
    {
      v15 = "Bad breakpoint number at or near: '%s'";
      if ( a2 )
        v15 = "Bad breakpoint location number at or near: '%s'";
      sub_946E0(v15, v7);
    }
    v9 = (unsigned __int8 *)(*a3 + v8 + 1);
    v10 = sub_C8F0C(a2, v7, 45, 0);
    *a1 = v10;
    v11 = sub_C8F0C(a2, v9, 0, (unsigned __int8 *)&v16);
    a1[1] = v11;
    if ( v10 > v11 )
    {
      v14 = "Inverted breakpoint range at '%.*s'";
      if ( a2 )
        v14 = "Inverted breakpoint location range at '%.*s'";
      sub_946E0(v14, v16 - (_DWORD)v7, v7);
    }
    return a1;
  }
}
