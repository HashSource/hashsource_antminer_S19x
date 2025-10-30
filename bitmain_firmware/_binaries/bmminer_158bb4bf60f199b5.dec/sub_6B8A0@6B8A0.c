int __fastcall sub_6B8A0(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD *v4; // r3
  int v5; // r2
  _DWORD *v6; // r2

  *a1 = 0;
  a1[2] = 0;
  v2 = (_DWORD *)sub_6D500(40);
  a1[1] = v2;
  if ( !v2 )
    return -1;
  v3 = a1[2];
  v4 = a1 + 3;
  a1[4] = a1 + 3;
  v5 = dword_8A954[v3];
  a1[3] = a1 + 3;
  if ( v5 )
  {
    v6 = &v2[2 * v5];
    do
    {
      v2[1] = v4;
      *v2 = v4;
      v2 += 2;
    }
    while ( v2 != v6 );
  }
  return 0;
}
