int __fastcall sub_457E8(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r12
  _DWORD *v4; // r3
  _DWORD *v5; // r2

  *a1 = 0;
  a1[2] = 3;
  v2 = (_DWORD *)sub_4774C(64);
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
    v5 = (_DWORD *)((char *)v2 + (8 << v3));
    do
    {
      v2[1] = v4;
      *v2 = v4;
      v2 += 2;
    }
    while ( v2 != v5 );
  }
  return 0;
}
