int __fastcall sub_55D14(int a1)
{
  int v2; // r1
  bool v3; // zf
  unsigned int v4; // r3
  int v5; // r0
  _BYTE *v6; // r5
  int result; // r0
  unsigned int v8[513]; // [sp+0h] [bp-804h] BYREF

  v2 = dword_246360;
  v3 = byte_1AECC5 == 0;
  v4 = bswap32(bswap32(*(_DWORD *)(a1 + 68)) + 1);
  v5 = *(_DWORD *)(a1 + 240) + 1;
  *(_DWORD *)(a1 + 68) = v4;
  *(_DWORD *)(a1 + 240) = v5;
  *(_DWORD *)(a1 + 248) = 0;
  dword_246360 = v2 + 1;
  if ( !v3 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    strcpy((char *)v8, "Successfully rolled work");
    sub_47AB4(7, (const char *)v8, 0);
  }
  v6 = *(_BYTE **)(a1 + 308);
  if ( v6 )
  {
    sub_49940(v8, *(unsigned __int8 **)(a1 + 308), 4);
    v8[0] = bswap32(bswap32(v8[0]) + 1);
    sub_4981C(v6, (int)v8, 4);
  }
  result = sub_55C64();
  *(_DWORD *)(a1 + 340) = result;
  return result;
}
