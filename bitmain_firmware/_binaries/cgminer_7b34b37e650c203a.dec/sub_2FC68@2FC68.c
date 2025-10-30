int __fastcall sub_2FC68(int a1)
{
  int v2; // r1
  bool v3; // zf
  unsigned int v4; // r3
  int v5; // r0
  _BYTE *v6; // r5
  int result; // r0
  unsigned int v8[513]; // [sp+0h] [bp-804h] BYREF

  v2 = dword_767E0;
  v3 = byte_68BD5 == 0;
  v4 = bswap32(bswap32(*(_DWORD *)(a1 + 68)) + 1);
  v5 = *(_DWORD *)(a1 + 240) + 1;
  *(_DWORD *)(a1 + 68) = v4;
  *(_DWORD *)(a1 + 240) = v5;
  *(_DWORD *)(a1 + 248) = 0;
  dword_767E0 = v2 + 1;
  if ( !v3 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    strcpy((char *)v8, "Successfully rolled work");
    sub_20F58(7, (const char *)v8, 0);
  }
  v6 = *(_BYTE **)(a1 + 308);
  if ( v6 )
  {
    sub_22CD8(v8, *(unsigned __int8 **)(a1 + 308), 4);
    v8[0] = bswap32(bswap32(v8[0]) + 1);
    sub_22BB4(v6, (int)v8, 4);
  }
  result = sub_2FBB8();
  *(_DWORD *)(a1 + 340) = result;
  return result;
}
