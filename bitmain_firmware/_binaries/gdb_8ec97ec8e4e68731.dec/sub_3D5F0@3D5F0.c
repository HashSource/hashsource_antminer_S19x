int __fastcall sub_3D5F0(_DWORD *a1, int a2, int a3)
{
  int v3; // r7
  int v5; // r1
  bool v6; // zf
  int v7; // r1
  unsigned int v8; // r5
  int v9; // r0
  int v10; // r10
  int v11; // r0
  int v14; // [sp+Ch] [bp-4h] BYREF

  v3 = (int)(a1 + 3);
  sub_33B48C(a1 + 3, a3);
  v5 = a1[1];
  if ( v5 == a1[2] )
  {
    sub_3E040(a1);
  }
  else
  {
    v6 = v5 == 0;
    v7 = v5 + 4;
    if ( !v6 )
      *(_DWORD *)(v7 - 4) = a2;
    a1[1] = v7;
  }
  if ( a1[4] )
  {
    v8 = 0;
    do
    {
      v9 = sub_33C874(v3, " \t\n", v8, 3u);
      if ( v9 == -1 )
        v10 = v8;
      else
        v10 = v9;
      v11 = sub_33C788(v3, " \t\n", v10, 3u);
      v8 = v11 + 1;
      if ( v11 == -1 )
        v8 = a1[4];
      else
        *(_BYTE *)(a1[3] + v11) = 0;
      v14 = a1[3] + v10;
      sub_3E130(a1, &v14);
    }
    while ( v8 < a1[4] );
  }
  v14 = 0;
  return sub_3E130(a1, &v14);
}
