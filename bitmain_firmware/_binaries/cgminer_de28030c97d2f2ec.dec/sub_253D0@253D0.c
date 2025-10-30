void __fastcall sub_253D0(int a1, const char *a2)
{
  char v4[16]; // [sp+14h] [bp-820h] BYREF
  unsigned int v5; // [sp+814h] [bp-20h] BYREF
  unsigned int v6; // [sp+818h] [bp-1Ch] BYREF
  unsigned __int8 v7[12]; // [sp+81Ch] [bp-18h] BYREF
  signed int v8; // [sp+828h] [bp-Ch]
  signed int i; // [sp+82Ch] [bp-8h]

  qmemcpy(v7, "000000000", 9);
  i = 0;
  v8 = strlen(a2);
  v6 = 0;
  v5 = 16;
  if ( a2 )
  {
    for ( i = 0; i < v8; ++i )
      v7[8 - v8 + i] = a2[i];
    v7[8] = 0;
    sub_207E8(&v6, v7, 4);
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      snprintf(v4, 0x800u, "mask returned by pool is %s, swaped = 0x%x", a2, v6);
      sub_1E4EC(6, v4, 0);
    }
    v6 &= 0xE0FF1Fu;
    v6 = HIBYTE(v6) | ((v6 & 0xFF0000) >> 8) | ((v6 & 0xFF00) << 8) | (v6 << 24);
    v6 = sub_2523C(v6, &v5);
    if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
    {
      snprintf(v4, 0x800u, "real mask = 0x%x, bit_num = %d", v6, v5);
      sub_1E4EC(5, v4, 0);
    }
    if ( v6 )
    {
      *(_BYTE *)(a1 + 660) = 1;
      *(_DWORD *)(a1 + 664) = 1 << v5;
    }
    else
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
      {
        snprintf(v4, 0x800u, "Pool %d rolling mask do not match!", *(_DWORD *)a1);
        sub_1E4EC(5, v4, 0);
      }
      *(_BYTE *)(a1 + 660) = 0;
      *(_DWORD *)(a1 + 664) = 1;
    }
    *(_DWORD *)(a1 + 668) = v6;
  }
  else
  {
    *(_BYTE *)(a1 + 660) = 0;
    *(_DWORD *)(a1 + 664) = 1;
  }
}
