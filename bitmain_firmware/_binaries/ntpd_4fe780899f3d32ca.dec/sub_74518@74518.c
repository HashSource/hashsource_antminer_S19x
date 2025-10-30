bool __fastcall sub_74518(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  int v3; // r12
  int v4; // r12
  int v6; // r3
  int v7; // lr
  bool v8; // zf
  unsigned __int8 *v9; // r8
  unsigned __int8 *v10; // r7
  unsigned int v11; // r5
  unsigned int v12; // r10

  v3 = (int)a2;
  if ( a2 )
    v3 = 1;
  if ( !a1 )
    v3 = 0;
  if ( !v3 )
    sub_6ECC0((int)"./../lib/isc/netaddr.c", 78, 0, "a != ((void *)0) && b != ((void *)0)");
  v4 = *a1;
  if ( *a1 != *a2 )
    return 0;
  v6 = a2[5];
  v7 = a1[5];
  v8 = v7 == v6;
  if ( v7 != v6 )
    v8 = v6 == 0;
  if ( !v8 )
    return 0;
  if ( v4 == 2 )
  {
    v9 = (unsigned __int8 *)(a1 + 1);
    v10 = (unsigned __int8 *)(a2 + 1);
    v11 = 32;
    v12 = 4;
  }
  else
  {
    if ( v4 != 10 )
      return 0;
    v9 = (unsigned __int8 *)(a1 + 1);
    v10 = (unsigned __int8 *)(a2 + 1);
    v11 = 128;
    v12 = 16;
  }
  if ( a3 < v11 )
    v11 = a3;
  if ( v11 >> 3 && memcmp(v9, v10, v11 >> 3) )
    return 0;
  if ( (v11 & 7) == 0 )
    return 1;
  if ( v12 <= v11 >> 3 )
    sub_6ECC0((int)"./../lib/isc/netaddr.c", 116, 2, "nbytes < ipabytes");
  return ((v9[v11 >> 3] ^ v10[v11 >> 3]) & (255 << (8 - (v11 & 7)))) == 0;
}
