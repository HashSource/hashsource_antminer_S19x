int __fastcall sub_14790(_DWORD *a1)
{
  int v1; // r3
  unsigned __int8 *v2; // r12

  if ( !a1 || *a1 != 1114990113 )
    sub_10C38();
  v1 = a1[4];
  if ( (unsigned int)(a1[3] - v1) <= 1 )
    sub_10C38();
  v2 = (unsigned __int8 *)(a1[1] + v1);
  a1[4] = v1 + 2;
  return v2[1] | (*v2 << 8);
}
