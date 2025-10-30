int __fastcall sub_CCB78(int a1)
{
  int v1; // r0
  bool v2; // zf

  v1 = **(_DWORD **)(a1 + 12);
  v2 = v1 == 1034;
  if ( v1 != 1034 )
    v2 = v1 == 1087;
  if ( v2 )
    return 32;
  if ( v1 == 1035 )
    return 56;
  return 57;
}
