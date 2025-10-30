unsigned int __fastcall sub_146D4(_DWORD *a1)
{
  int v1; // r2
  int v2; // r12

  if ( !a1 || *a1 != 1114990113 )
    sub_1073C();
  v1 = a1[4];
  if ( (unsigned int)(a1[3] - v1) <= 5 )
    sub_1073C();
  v2 = a1[1];
  a1[4] = v1 + 6;
  return _byteswap_ulong(*(_DWORD *)(v2 + v1 + 2));
}
