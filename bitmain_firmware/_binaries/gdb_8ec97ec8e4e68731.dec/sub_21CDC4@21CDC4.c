int __fastcall sub_21CDC4(int result, int a2, int a3)
{
  int v3; // r4
  bool v4; // zf

  v3 = result;
  v4 = a3 == 0;
  if ( a3 )
    v4 = *(_DWORD *)(a2 + 84) == 0;
  if ( v4 )
  {
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
  }
  else
  {
    sub_21CC54((const char ***)result, (const char **)a2, a3);
    return v3;
  }
  return result;
}
