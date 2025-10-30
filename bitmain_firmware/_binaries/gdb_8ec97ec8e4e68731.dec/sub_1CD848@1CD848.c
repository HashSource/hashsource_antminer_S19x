_DWORD *__fastcall sub_1CD848(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // r3
  int v10; // r3
  int v11; // r2
  int v12; // r2
  int v13; // r0
  int v14; // r1
  int v15; // [sp+4h] [bp-Ch] BYREF
  int v16; // [sp+8h] [bp-8h]
  int v17; // [sp+Ch] [bp-4h]

  v15 = a2;
  v16 = a3;
  v17 = a4;
  if ( a2 == 1 )
  {
    if ( a5 == 1 )
      goto LABEL_10;
    sub_1CD6BC(&v15, &a5);
    v8 = v15;
    if ( v15 == 1 )
    {
      if ( a5 == 1 )
        goto LABEL_10;
LABEL_5:
      *a1 = 0;
      a1[1] = 0;
      a1[2] = 0;
      return a1;
    }
  }
  else
  {
    v8 = a2;
  }
  if ( v8 != 2 )
    goto LABEL_5;
  if ( a5 == 1 )
  {
    v12 = v17;
    v13 = a7;
    v14 = v16;
    *a1 = 2;
    a1[1] = v14;
    a1[2] = v12 - v13;
    return a1;
  }
  if ( a5 != 2 || v16 != a6 )
    goto LABEL_5;
LABEL_10:
  v10 = v17;
  v11 = a7;
  *(_QWORD *)a1 = 0xFFFFFFFF00000001LL;
  a1[2] = v10 - v11;
  return a1;
}
