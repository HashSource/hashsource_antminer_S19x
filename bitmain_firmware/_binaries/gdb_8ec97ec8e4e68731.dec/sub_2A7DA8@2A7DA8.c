int __fastcall sub_2A7DA8(int a1, int a2)
{
  int result; // r0
  _DWORD *v4; // r3
  int v5; // r2
  bool v6; // zf
  bool v7; // zf

  result = sub_2AE464(a1, 0);
  if ( result )
  {
    v4 = (_DWORD *)result;
    do
    {
      v5 = v4[1];
      v6 = v5 == 5;
      if ( v5 == 5 )
        v5 = v4[111];
      v4 = (_DWORD *)v4[110];
      if ( v6 )
        *(_DWORD *)(v5 + 24) = a2;
      v7 = v4 == 0;
      if ( v4 )
        v7 = result == (_DWORD)v4;
    }
    while ( !v7 );
  }
  return result;
}
