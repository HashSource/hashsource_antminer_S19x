bool __fastcall sub_75548(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  bool v3; // zf
  int v4; // lr
  int v5; // r12
  int v7; // r3
  int v8; // lr
  bool v9; // zf
  _BOOL4 v10; // r3
  unsigned __int8 *v11; // r8
  unsigned __int8 *v12; // r5
  unsigned int v13; // r6
  unsigned int v14; // r10

  v3 = a1 == 0;
  if ( a1 )
    v3 = a2 == 0;
  v4 = !v3;
  if ( v3 )
    sub_6FC54((int)"./../lib/isc/netaddr.c", 78, v4, "a != ((void *)0) && b != ((void *)0)");
  v5 = *a1;
  if ( *a1 != *a2 )
    return 0;
  v7 = a2[5];
  v8 = a1[5];
  v9 = v8 == v7;
  if ( v8 != v7 )
    v9 = v7 == 0;
  v10 = !v9;
  if ( !v9 )
    return 0;
  if ( v5 == 2 )
  {
    v11 = (unsigned __int8 *)(a1 + 1);
    v12 = (unsigned __int8 *)(a2 + 1);
    v13 = 32;
    v14 = 4;
  }
  else
  {
    if ( v5 != 10 )
      return v10;
    v11 = (unsigned __int8 *)(a1 + 1);
    v12 = (unsigned __int8 *)(a2 + 1);
    v13 = 128;
    v14 = 16;
  }
  if ( v13 >= a3 )
    v13 = a3;
  if ( v13 >> 3 && memcmp(v11, v12, v13 >> 3) )
    return 0;
  if ( (v13 & 7) == 0 )
    return 1;
  if ( v14 <= v13 >> 3 )
    sub_6FC54((int)"./../lib/isc/netaddr.c", 116, 2, "nbytes < ipabytes");
  return ((v11[v13 >> 3] ^ v12[v13 >> 3]) & (255 << (8 - (v13 & 7)))) == 0;
}
