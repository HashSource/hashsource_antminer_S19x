int __fastcall sub_11042C(int result, int a2)
{
  int v2; // r3
  int v3; // r2

  v2 = result;
  if ( result )
  {
    result = 1;
    if ( a2 )
      v3 = 255;
    else
      v3 = -1;
    *(_DWORD *)(v2 + 4) = v3;
  }
  return result;
}
