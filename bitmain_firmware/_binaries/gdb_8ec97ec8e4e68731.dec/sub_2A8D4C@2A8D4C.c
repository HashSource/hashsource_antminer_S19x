int __fastcall sub_2A8D4C(int a1)
{
  bool v2; // zf
  int result; // r0
  int v4; // r2
  int v5; // r12
  int v6; // r1
  int v7; // r2

  v2 = fclose(*(FILE **)(a1 + 8)) == 0;
  result = 1;
  if ( !v2 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(1);
    result = 0;
  }
  v4 = *(_DWORD *)(a1 + 16);
  v5 = dword_48BBE4;
  *(_DWORD *)(v4 + 20) = *(_DWORD *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(v6 + 16) = v4;
  if ( a1 == v5 )
  {
    if ( a1 == v6 )
      v4 = 0;
    else
      dword_48BBE4 = v6;
    if ( a1 == v6 )
      dword_48BBE4 = v4;
  }
  v7 = dword_48BBE8;
  *(_DWORD *)(a1 + 8) = 0;
  dword_48BBE8 = v7 - 1;
  return result;
}
