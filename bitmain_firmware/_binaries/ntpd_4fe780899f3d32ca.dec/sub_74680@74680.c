int __fastcall sub_74680(int *a1, int a2)
{
  int v3; // r0
  size_t v5; // r0
  size_t v6; // r8
  unsigned int v7; // r3
  signed int v8; // r4
  signed int v10; // r0
  _BYTE v11[12]; // [sp+0h] [bp-40h] BYREF
  char buf[48]; // [sp+Ch] [bp-34h] BYREF

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/netaddr.c", 136, 0, "netaddr != ((void *)0)");
  v3 = *a1;
  if ( *a1 != 2 && v3 != 10 || !inet_ntop(v3, a1 + 1, buf, 0x2Eu) )
    return 25;
  v5 = strlen(buf);
  v6 = v5;
  if ( v5 > 0x2D )
    sub_6ECC0((int)"./../lib/isc/netaddr.c", 163, 2, "alen < sizeof(abuf)");
  if ( *a1 != 10 )
  {
    v7 = v5;
    v8 = 0;
    goto LABEL_9;
  }
  v8 = a1[5];
  if ( v8 )
  {
    v10 = sub_6C054((int)v11, 0xCu, "%%%u", v8);
    v8 = v10;
    if ( v10 >= 0 )
    {
      if ( v10 > 11 )
        sub_6ECC0((int)"./../lib/isc/netaddr.c", 170, 2, "(unsigned int)zlen < sizeof(zbuf)");
      v7 = v6 + v10;
      goto LABEL_9;
    }
    return 25;
  }
  v7 = v5;
LABEL_9:
  if ( *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12) < v7 )
    return 19;
  sub_79DF0(a2, buf, v6);
  sub_79DF0(a2, v11, v8);
  return 0;
}
