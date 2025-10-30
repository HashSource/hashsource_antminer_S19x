int __fastcall sub_1C48C(int a1, unsigned __int16 a2)
{
  int v4; // r4
  int v5; // r4
  void (__fastcall *v6)(int, char *, int *, _BYTE *); // r6
  int v7; // r3
  int v8; // r3
  int v10; // [sp+0h] [bp-908h] BYREF
  _BYTE v11[4]; // [sp+4h] [bp-904h] BYREF
  char s[256]; // [sp+8h] [bp-900h] BYREF
  char v13[2048]; // [sp+108h] [bp-800h] BYREF

  memset(s, 0, sizeof(s));
  if ( dword_B0F4C && *(_BYTE *)(dword_B0F4C + 28) )
  {
    v5 = *(_DWORD *)(dword_B0F4C + 4 * a1);
    if ( !dword_B413C )
      a2 += 40;
    (*(void (__fastcall **)(_DWORD, _DWORD))(v5 + 192))(*(_DWORD *)(dword_B0F4C + 4 * a1), a2);
    v6 = *(void (__fastcall **)(int, char *, int *, _BYTE *))(v5 + 16);
    v10 = 256;
    v6(v5, s, &v10, v11);
    v4 = sub_5A3FC(a1, v11[0], s, v10);
    if ( v4 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(v13, 0x800u, "Write sweep result fail for chain %d.\n", a1);
        sub_3AF5C(3, v13, 0, v7);
      }
    }
  }
  else
  {
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(v13, 0x800u, "No work mode voltage, chain = %d.\n", a1);
      sub_3AF5C(4, v13, 0, v8);
      return -1;
    }
    return -1;
  }
  return v4;
}
