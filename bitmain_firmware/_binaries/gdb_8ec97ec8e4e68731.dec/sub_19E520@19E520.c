int __fastcall sub_19E520(int result, int a2, int a3)
{
  int v3; // r3
  int v4; // r0
  _DWORD *v5; // r3

  if ( *(_WORD *)(result + 4) )
  {
    v3 = result;
    v4 = *(_DWORD *)(result + 20);
    v5 = *(_DWORD **)(v3 + 24);
    if ( a3 )
      return sub_255F50(v4, a2, v5[6], v5[7], a2);
    else
      return sub_255F50(v4, a2, v5[2], v5[3], a2);
  }
  return result;
}
