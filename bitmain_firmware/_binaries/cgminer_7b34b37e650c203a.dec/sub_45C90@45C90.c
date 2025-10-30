int __fastcall sub_45C90(_DWORD *a1)
{
  _DWORD *v2; // r2
  int result; // r0
  _DWORD *v4; // r3
  _DWORD *v5; // r1

  sub_45778((int)a1);
  v2 = a1 + 3;
  result = a1[2];
  if ( 1 << result )
  {
    v4 = (_DWORD *)a1[1];
    v5 = (_DWORD *)((char *)v4 + (8 << result));
    do
    {
      v4[1] = v2;
      *v4 = v2;
      v4 += 2;
    }
    while ( v4 != v5 );
  }
  a1[4] = v2;
  a1[3] = v2;
  a1[6] = a1 + 5;
  a1[5] = a1 + 5;
  *a1 = 0;
  return result;
}
