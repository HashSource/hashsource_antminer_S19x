int __fastcall sub_332D3C(int *a1, int a2)
{
  unsigned int v2; // r3
  int v4; // r4
  unsigned int v5; // r0
  int v6; // r1
  int v7; // r12
  int v8; // r2
  int v9; // r3
  int v10; // r2
  char v12; // r3
  char v13; // r3
  int v14; // [sp+0h] [bp-Ch] BYREF
  int v15; // [sp+4h] [bp-8h]

  v2 = a1[1];
  v4 = (v2 >> 26) & 0x1F;
  v14 = *a1;
  v15 = v2;
  sub_331280(a2);
  v5 = v15;
  if ( v15 < 0 )
    *(_BYTE *)(a2 + 8) = 0x80;
  v6 = dword_43ADE8[v4 - 1013];
  v7 = *(_DWORD *)&byte_438DF0[4 * v4 + 4004];
  if ( v6 == 3 )
  {
    v12 = *(_BYTE *)(a2 + 8);
    if ( !v7 )
    {
      *(_BYTE *)(a2 + 8) = v12 | 0x40;
      return a2;
    }
    if ( (v5 & 0x2000000) != 0 )
      v13 = v12 | 0x10;
    else
      v13 = v12 | 0x20;
    v15 = v5 & 0x3FFFF;
    *(_BYTE *)(a2 + 8) = v13;
    if ( (v5 & 0x3FFFF) == 0 )
      goto LABEL_9;
LABEL_19:
    if ( (v5 & 0x3FF00) != 0 )
      v10 = 5;
    else
      v10 = 4;
    goto LABEL_6;
  }
  v8 = v5 & 0x3FFFF;
  *(_DWORD *)(a2 + 4) = (unsigned __int8)(v5 >> 18) - 398 + (v6 << 8);
  if ( v7 )
  {
    v9 = v8 | (v7 << 18);
    v10 = 6;
    v15 = v9;
    goto LABEL_6;
  }
  v15 = v5 & 0x3FFFF;
  if ( v8 )
    goto LABEL_19;
LABEL_9:
  if ( !v14 )
    return a2;
  if ( (v14 & 0xC0000000) != 0 )
    v10 = 4;
  else
    v10 = 3;
LABEL_6:
  sub_332C84((int *)a2, (int)&v14, v10);
  return a2;
}
