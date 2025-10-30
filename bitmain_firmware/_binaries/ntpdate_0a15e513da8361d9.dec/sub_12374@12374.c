int __fastcall sub_12374(int *a1, int a2)
{
  int v3; // r0
  size_t v6; // r8
  signed int v7; // r4
  signed int v8; // r0
  _BYTE v9[12]; // [sp+0h] [bp-40h] BYREF
  char buf[48]; // [sp+Ch] [bp-34h] BYREF

  if ( !a1 )
    sub_10C38();
  v3 = *a1;
  if ( *a1 != 2 && v3 != 10 || !inet_ntop(v3, a1 + 1, buf, 0x2Eu) )
    return 25;
  v6 = strlen(buf);
  if ( v6 > 0x2D )
    sub_10C38();
  if ( *a1 != 10 )
  {
    v7 = 0;
    goto LABEL_10;
  }
  v7 = a1[5];
  if ( v7 )
  {
    v8 = sub_FA7C((int)v9, 0xCu, "%%%u", v7);
    if ( v8 >= 0 )
    {
      if ( v8 > 11 )
        sub_10C38();
      v7 = v8;
      goto LABEL_10;
    }
    return 25;
  }
LABEL_10:
  if ( v7 + v6 > *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12) )
    return 19;
  sub_14E40(a2, buf, v6);
  sub_14E40(a2, v9, v7);
  return 0;
}
