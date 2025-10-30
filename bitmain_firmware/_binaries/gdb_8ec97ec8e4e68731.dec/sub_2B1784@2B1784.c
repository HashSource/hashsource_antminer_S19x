int __fastcall sub_2B1784(int a1)
{
  int v2; // r0
  int v3; // r2
  bool v4; // zf
  _DWORD *v5; // r3
  int result; // r0

  v2 = sub_2ACBF4(a1, 16);
  v5 = (_DWORD *)v2;
  v4 = v2 == 0;
  if ( v2 )
  {
    v3 = 0;
    *(_DWORD *)(a1 + 160) = v2;
    result = 1;
    v5[1] = 1;
  }
  else
  {
    result = 0;
  }
  if ( !v4 )
  {
    *v5 = v3;
    v5[2] = v3;
    v5[3] = v3;
  }
  return result;
}
