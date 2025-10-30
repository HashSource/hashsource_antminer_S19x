int __fastcall sub_331CD4(int *a1, int a2)
{
  int v3; // r4
  unsigned int v4; // r2
  int v5; // r12
  int v6; // r0
  int v7; // r1
  int v8; // r2
  char v10; // r3
  char v11; // r3
  int v12; // [sp+4h] [bp-8h] BYREF

  v12 = *a1;
  v3 = ((unsigned int)v12 >> 26) & 0x1F;
  sub_331280(a2);
  v4 = v12;
  v5 = dword_439D94[v3];
  if ( v12 < 0 )
    *(_BYTE *)(a2 + 8) = 0x80;
  v6 = dword_439E14[v3];
  if ( v6 == 3 )
  {
    v10 = *(_BYTE *)(a2 + 8);
    if ( v5 )
    {
      if ( (v4 & 0x2000000) != 0 )
        v11 = v10 | 0x10;
      else
        v11 = v10 | 0x20;
      v12 = v4 & 0xFFFFF;
      *(_BYTE *)(a2 + 8) = v11;
      if ( (v4 & 0xFFFFF) == 0 )
        return a2;
      goto LABEL_9;
    }
    *(_BYTE *)(a2 + 8) = v10 | 0x40;
  }
  else
  {
    v7 = v4 & 0xFFFFF;
    if ( !v5 )
      v12 = v4 & 0xFFFFF;
    *(_DWORD *)(a2 + 4) = ((v4 >> 20) & 0x3F) - 101 + (v6 << 6);
    if ( v5 )
    {
      v12 = v7 | (v5 << 20);
      sub_332C84(a2, &v12, 3);
      return a2;
    }
    if ( v7 )
    {
LABEL_9:
      if ( ((unsigned int)&loc_FFC00 & v4) != 0 )
        v8 = 2;
      else
        v8 = 1;
      sub_332C84(a2, &v12, v8);
    }
  }
  return a2;
}
