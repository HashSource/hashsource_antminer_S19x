int __fastcall sub_333160(int *a1, int a2)
{
  int v4; // r2
  int v5; // r12
  int v7; // r1
  unsigned int v8; // r3
  int v9; // r5
  unsigned int v10; // r3
  int v11; // r1
  int v12; // r0
  int v13; // r2
  int v14; // r3
  int v15; // r2
  char v17; // r2
  bool v18; // zf
  int v19; // r3
  char v20; // r2
  int v21; // [sp+0h] [bp-14h] BYREF
  int v22; // [sp+4h] [bp-10h]
  int v23; // [sp+8h] [bp-Ch]
  int v24; // [sp+Ch] [bp-8h]

  v4 = a1[2];
  v5 = *a1;
  v7 = a1[1];
  v8 = a1[3];
  v21 = v5;
  v22 = v7;
  v23 = v4;
  v9 = (v8 >> 26) & 0x1F;
  v24 = v8;
  sub_331280(a2);
  v10 = v24;
  v11 = dword_439D94[v9];
  if ( v24 < 0 )
    *(_BYTE *)(a2 + 8) = 0x80;
  v12 = dword_439E14[v9];
  if ( v12 == 3 )
  {
    v17 = *(_BYTE *)(a2 + 8);
    if ( !v11 )
    {
      *(_BYTE *)(a2 + 8) = v17 | 0x40;
      return a2;
    }
    v18 = (v10 & 0x2000000) == 0;
    v19 = v10 & 0x3FFF;
    if ( v18 )
      v20 = v17 | 0x20;
    else
      v20 = v17 | 0x10;
    v24 = v19;
    *(_BYTE *)(a2 + 8) = v20;
    if ( !v19 )
      goto LABEL_9;
    goto LABEL_20;
  }
  v13 = ((v10 >> 14) & 0xFFF) - 6144;
  v14 = v10 & 0x3FFF;
  *(_DWORD *)(a2 + 4) = v13 - 32 + (v12 << 12);
  if ( !v11 )
  {
    v24 = v14;
    if ( !v14 )
    {
LABEL_9:
      if ( v23 )
      {
        v15 = 10;
      }
      else if ( v22 )
      {
        v15 = 7;
      }
      else
      {
        if ( !v21 )
          return a2;
        v15 = 4;
      }
      goto LABEL_6;
    }
LABEL_20:
    v15 = 11;
    goto LABEL_6;
  }
  v15 = 12;
  v24 = v14 | (v11 << 14);
LABEL_6:
  sub_332C84((int *)a2, (int)&v21, v15);
  return a2;
}
