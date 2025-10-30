int __fastcall sub_32C0F8(int a1, int a2, int a3, int *a4)
{
  char v5; // r0
  int v7; // r1
  unsigned int v9; // r0
  unsigned int v10; // r6
  bool v11; // cc
  int v12; // r0
  int v14; // [sp+10h] [bp-8h] BYREF
  int v15; // [sp+14h] [bp-4h] BYREF

  v5 = *(_BYTE *)(a2 + 8);
  v14 = 0;
  if ( (v5 & 0x30) != 0 || (*(_BYTE *)(a3 + 8) & 0x30) != 0 )
  {
    sub_32AC0C(a1, a2, a3, a4, &v14);
  }
  else
  {
    if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 || *(_DWORD *)(a3 + 4) )
      goto LABEL_7;
    v9 = sub_327B04(a3);
    v10 = v9;
    v11 = v9 > 0x80000000;
    if ( v9 != 0x80000000 )
      v11 = v9 + 2147483646 > 1;
    if ( !v11 || (int)abs32(v9) > 2 * (*a4 + a4[1]) )
    {
LABEL_7:
      v7 = 128;
      v14 = 128;
      goto LABEL_8;
    }
    sub_32AB6C(a1, a2);
    if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
    {
      v12 = *(_DWORD *)(a1 + 4);
      v15 = 0;
      *(_DWORD *)(a1 + 4) = v12 + v10;
      sub_329598((_DWORD *)a1, a4, &v15, &v14);
    }
  }
  v7 = v14;
  if ( !v14 )
    return a1;
LABEL_8:
  sub_327DE4(a1, v7, (int)a4);
  return a1;
}
