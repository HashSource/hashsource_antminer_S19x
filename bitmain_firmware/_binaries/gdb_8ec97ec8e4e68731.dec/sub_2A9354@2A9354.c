__int64 __fastcall sub_2A9354(int a1)
{
  int v2; // r0

  if ( dword_48BBE4 == a1 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    if ( v2 )
      return j_ftello64(v2);
  }
  else
  {
    v2 = sub_2A90F8((int *)a1, 1);
    if ( v2 )
      return j_ftello64(v2);
  }
  return *(_QWORD *)(a1 + 24);
}
