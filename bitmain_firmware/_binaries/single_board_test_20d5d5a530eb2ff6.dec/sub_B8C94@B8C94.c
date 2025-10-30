int __fastcall sub_B8C94(int *a1, int a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3
  bool v5; // zf
  int v6; // r1

  if ( a2 < 0 )
    return 0;
  v3 = a1[1];
  v4 = a2 >> 6;
  if ( a2 >> 6 >= v3 )
    return 0;
  v6 = a2 & 0x3F;
  v5 = v6 == 0;
  if ( v6 )
  {
    v2 = *a1;
    v6 = -1 << v6;
    a1[1] = v4 + 1;
    v3 = *(_DWORD *)(v2 + 4 * v4);
  }
  else
  {
    a1[1] = v4;
  }
  if ( !v5 )
    *(_DWORD *)(v2 + 4 * v4) = v3 & ~v6;
  sub_B8ACC(a1);
  return 1;
}
