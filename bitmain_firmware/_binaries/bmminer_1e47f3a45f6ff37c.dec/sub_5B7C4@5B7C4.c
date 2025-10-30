int __fastcall sub_5B7C4(const char *a1, unsigned __int8 *a2, int a3)
{
  int result; // r0
  int v4; // r3
  int v5; // [sp+Ch] [bp-818h]
  _DWORD v6[3]; // [sp+18h] [bp-80Ch] BYREF
  unsigned int i; // [sp+818h] [bp-Ch]
  unsigned __int8 *v8; // [sp+81Ch] [bp-8h]

  v5 = a3;
  v8 = a2;
  snprintf((char *)v6, 0x800u, "Dumping %u %s bytes from %p:\n", a3, a1, a2);
  result = sub_3B6AC(2, (const char *)v6, 0, (int)v6);
  while ( v5 > 0 )
  {
    for ( i = 0; i <= 0xF; ++i )
    {
      if ( v5 <= i )
        v6[0] = &unk_202020;
      else
        snprintf((char *)v6, 0x800u, "%02x ", v8[i]);
      sub_3B6AC(2, (const char *)v6, 0, (int)v6);
    }
    for ( i = 0; i <= 0xF; ++i )
    {
      if ( v5 <= i )
      {
        LOWORD(v6[0]) = 32;
        sub_3B6AC(2, (const char *)v6, 0, (int)v6);
      }
      else
      {
        if ( v8[i] <= 0x1Fu || v8[i] > 0x7Eu )
          v4 = 46;
        else
          v4 = v8[i];
        snprintf((char *)v6, 0x800u, "%c", v4);
        sub_3B6AC(2, (const char *)v6, 0, (int)v6);
      }
    }
    LOWORD(v6[0]) = 10;
    result = sub_3B6AC(2, (const char *)v6, 0, (int)v6);
    v8 += 16;
    if ( v5 <= 16 )
      break;
    v5 -= 16;
  }
  return result;
}
