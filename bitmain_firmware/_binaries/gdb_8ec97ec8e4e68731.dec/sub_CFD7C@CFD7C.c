int __fastcall sub_CFD7C(int result)
{
  _DWORD *v1; // r3
  int v2; // r1
  _DWORD *v3; // r2
  bool v4; // zf

  v1 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    do
    {
      v2 = v1[3];
      v3 = (_DWORD *)v1[2];
      v4 = v2 == 10;
      if ( v2 != 10 )
        v4 = v2 == 13;
      if ( v4 && v1[28] == result )
        v1[5] = 1;
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
