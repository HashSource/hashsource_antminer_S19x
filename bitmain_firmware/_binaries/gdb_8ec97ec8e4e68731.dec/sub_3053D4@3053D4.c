int __fastcall sub_3053D4(_DWORD *a1)
{
  int v2; // r6
  _DWORD *v3; // r5
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r0

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  v2 = sub_305068((int)a1);
  if ( v2 )
    return -2;
  v3 = (_DWORD *)a1[7];
  a1[5] = 0;
  a1[2] = 0;
  v4 = v3[6];
  v5 = v3[2];
  a1[6] = 0;
  a1[11] = 2;
  v3[4] = v5;
  v3[5] = 0;
  if ( v4 >= 0 )
  {
    if ( v4 != 2 )
    {
      if ( v4 )
        v6 = 42;
      else
        v6 = 113;
      goto LABEL_10;
    }
LABEL_15:
    v3[1] = 57;
    v7 = sub_30C694(0, 0, 0);
    goto LABEL_11;
  }
  v3[6] = -v4;
  if ( v4 == -2 )
    goto LABEL_15;
  v6 = 42;
LABEL_10:
  v3[1] = v6;
  v7 = sub_30C0D0(0, 0, 0);
LABEL_11:
  a1[12] = v7;
  v3[10] = 0;
  sub_30B210(v3);
  return v2;
}
