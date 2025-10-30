int __fastcall sub_118CF4(int *a1, int a2, _DWORD *a3, void *a4, void *s2)
{
  int *v7; // r0
  _DWORD *v8; // r3
  int *v9; // r4
  void **v10; // r0
  int *v11; // r7
  _DWORD *v12; // r3
  int v13; // r4
  size_t v14; // r2
  int v16; // r2
  int v17; // r0
  int v18[2]; // [sp+4h] [bp-8h] BYREF

  v7 = sub_118844(a1, a2, a3);
  if ( !v7 )
    return 0;
  v8 = (_DWORD *)v7[1];
  v9 = v7;
  if ( !v8 )
    return 0;
  if ( *v8 )
  {
    if ( *v8 == 1 )
    {
      v11 = (int *)v8[1];
      if ( v11 )
        goto LABEL_11;
    }
  }
  else if ( v8[1] )
  {
    return 0;
  }
  v10 = sub_10BFCC();
  v11 = (int *)v10;
  if ( !v10 )
    return 0;
  if ( a2 == 1 )
  {
    sub_10B9F0((int)v10, (int)sub_117A78);
  }
  else if ( a2 == 2 )
  {
    sub_10B9F0((int)v10, (int)sub_117C04);
  }
  v12 = (_DWORD *)v9[1];
  *v12 = 1;
  v12[1] = v11;
LABEL_11:
  if ( a2 == 1 )
  {
    v14 = 4;
    v13 = 4;
  }
  else
  {
    if ( a2 != 2 )
    {
      v13 = 0;
      goto LABEL_19;
    }
    v14 = 16;
    v13 = 16;
  }
  if ( memcmp(a4, s2, v14) > 0 )
    return 0;
LABEL_19:
  v16 = sub_117988((unsigned __int8 *)a4, (unsigned __int8 *)s2, v13);
  if ( v16 < 0 )
    v17 = sub_118618(v18, (char *)a4, (char *)s2, v13);
  else
    v17 = sub_118584(v18, (char *)a4, v16, v13);
  if ( !v17 )
    return 0;
  if ( sub_10BD3C(v11, v18[0]) )
    return 1;
  sub_118570(v18[0]);
  return 0;
}
