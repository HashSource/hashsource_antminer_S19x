int __fastcall sub_147544(int result, int a2, int a3, int (__fastcall *a4)(int))
{
  int v4; // r3
  int v5; // r4
  int v6; // r5
  _BOOL4 v7; // r3

  v4 = *(_DWORD *)(result + 24);
  if ( !a2 || (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    v6 = result;
    result = sub_147398(result);
    v7 = v5 == 0;
    if ( !a4 )
      v7 = 0;
    if ( v7 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v6 + 24) + 4) )
        return a4(a3);
    }
  }
  return result;
}
