int __fastcall sub_126CC(_DWORD *a1)
{
  int result; // r0
  int v3; // r5
  _DWORD *v4; // r2
  int v5; // r1
  int v6; // r5
  int v7; // r3

  result = sub_123C8((int)a1);
  v3 = 1 << a1[2];
  if ( v3 )
  {
    v5 = a1[1];
    v6 = 8 * v3;
    v7 = 0;
    v4 = a1 + 3;
    do
    {
      *(_DWORD *)(v5 + v7 + 4) = v4;
      *(_DWORD *)(v5 + v7) = v4;
      v7 += 8;
    }
    while ( v7 != v6 );
  }
  else
  {
    v4 = a1 + 3;
  }
  a1[4] = v4;
  a1[3] = v4;
  a1[6] = a1 + 5;
  a1[5] = a1 + 5;
  *a1 = 0;
  return result;
}
