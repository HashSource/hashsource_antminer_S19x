_DWORD *__fastcall sub_2CFE38(_DWORD *a1, int a2, int a3)
{
  int v3; // r7
  int v4; // r4
  char v9[4]; // [sp+14h] [bp-1Ch] BYREF
  char ptr[24]; // [sp+18h] [bp-18h] BYREF

  v3 = a3 & 0x1F;
  v4 = (int)&a1[5 * (a3 & 0x1F) + 33];
  if ( *a1 == a2 && a1[v3 + 1] == a3 )
    return &a1[5 * (a3 & 0x1F) + 33];
  if ( !sub_2CDA08(a2, *(_DWORD *)(a2 + 160) + 72, 1u, a3, (unsigned int)&a1[5 * (a3 & 0x1F) + 33], ptr, v9) )
    return 0;
  if ( *a1 != a2 )
  {
    memset(a1 + 1, -1, 0x80u);
    *a1 = a2;
  }
  a1[v3 + 1] = a3;
  return (_DWORD *)v4;
}
