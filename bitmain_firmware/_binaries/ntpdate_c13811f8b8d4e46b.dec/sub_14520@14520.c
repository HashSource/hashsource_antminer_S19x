unsigned int __fastcall sub_14520(_DWORD *a1)
{
  int v1; // r2
  int v2; // lr

  if ( !a1 || *a1 != 1114990113 )
    sub_1073C();
  v1 = a1[4];
  if ( (unsigned int)(a1[3] - v1) <= 3 )
    sub_1073C();
  v2 = a1[1];
  a1[4] = v1 + 4;
  return bswap32(*(_DWORD *)(v2 + v1));
}
