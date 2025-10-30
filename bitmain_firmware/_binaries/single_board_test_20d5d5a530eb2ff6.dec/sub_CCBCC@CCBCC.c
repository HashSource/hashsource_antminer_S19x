int __fastcall sub_CCBCC(int a1)
{
  int v1; // r3
  bool v2; // zf

  v1 = **(_DWORD **)(a1 + 12);
  v2 = v1 == 1087;
  if ( v1 != 1087 )
    v2 = v1 == 1034;
  if ( v2 )
    return 128;
  else
    return 224;
}
