int __fastcall sub_A821C(int result, _DWORD *a2)
{
  int v2; // r3
  bool v3; // zf
  int v4; // r2

  v2 = *(_DWORD *)(result + 20);
  v3 = a2 == 0;
  if ( a2 )
    v3 = v2 == 0;
  if ( v3 )
  {
    v4 = 0;
    result = 0;
  }
  else
  {
    v2 = *(_DWORD *)(v2 + 12);
    v4 = *(_DWORD *)(result + 12);
  }
  if ( !v3 )
  {
    *a2 = v4 - v2;
    return 1;
  }
  return result;
}
