int __fastcall sub_F3604(_DWORD *a1, int a2, unsigned int a3)
{
  int v4; // r0
  unsigned int v7; // r9
  unsigned int v8; // r4
  int v9; // r1
  int v10; // r4
  int v12; // [sp+Ch] [bp-8h] BYREF

  v4 = a1[7];
  v12 = 0;
  if ( !v4 )
  {
    v10 = a1[3];
    if ( !v10 )
      return v10;
    v4 = sub_F3F4C(0, 0, 0, a1[15]);
    a1[7] = v4;
    if ( !v4 )
      goto LABEL_8;
  }
  v7 = sub_F40F4(v4, &v12);
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = a1[9];
      v9 = a2;
      if ( v8 >= a3 )
        v8 = a3;
      a2 += v8;
      if ( !sub_F347C(a1, v9, v8, 0, v12, v7) )
        break;
      a3 -= v8;
      if ( !a3 )
        goto LABEL_12;
    }
LABEL_8:
    v10 = 0;
    goto LABEL_9;
  }
LABEL_12:
  v10 = 1;
LABEL_9:
  if ( v12 )
    sub_F412C(a1[7], v12);
  return v10;
}
