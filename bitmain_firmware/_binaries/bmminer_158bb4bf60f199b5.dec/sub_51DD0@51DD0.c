int __fastcall sub_51DD0(int a1)
{
  int v2; // r1
  char *v3; // r2
  unsigned int v4; // t1
  char v6[28]; // [sp+0h] [bp-70h] BYREF
  char v7; // [sp+1Ch] [bp-54h] BYREF
  char v8[76]; // [sp+20h] [bp-50h] BYREF
  char v9; // [sp+6Ch] [bp-4h] BYREF

  v2 = a1 - 4;
  v3 = &v7;
  do
  {
    v4 = *(_DWORD *)(v2 + 4);
    v2 += 4;
    *((_DWORD *)v3 + 1) = bswap32(v4);
    v3 += 4;
  }
  while ( v3 != &v9 );
  sub_4889C(v8, 0x50u, v6);
  return sub_4889C(v6, 0x20u, (_BYTE *)(a1 + 192));
}
