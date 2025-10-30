int __fastcall sub_12408(_DWORD *a1)
{
  int v2; // r2
  int v3; // r0
  _DWORD *v4; // r1
  int v5; // r3

  a1[2] = 3;
  *a1 = 0;
  v2 = sub_13828(64);
  a1[1] = v2;
  if ( !v2 )
    return -1;
  v3 = a1[2];
  v4 = a1 + 3;
  a1[4] = a1 + 3;
  a1[3] = a1 + 3;
  a1[6] = a1 + 5;
  a1[5] = a1 + 5;
  if ( 1 << v3 )
  {
    v5 = 0;
    do
    {
      *(_DWORD *)(v2 + v5 + 4) = v4;
      *(_DWORD *)(v2 + v5) = v4;
      v5 += 8;
    }
    while ( v5 != 8 * (1 << v3) );
  }
  return 0;
}
