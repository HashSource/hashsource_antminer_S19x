int __fastcall sub_1C364(int a1, unsigned __int16 a2)
{
  int v4; // r4
  void (__fastcall *v5)(int, char *, int *, _BYTE *); // r6
  int result; // r0
  int v7; // r4
  int v8; // r3
  int v9; // r3
  int v10; // [sp+0h] [bp-908h] BYREF
  _BYTE v11[4]; // [sp+4h] [bp-904h] BYREF
  char s[256]; // [sp+8h] [bp-900h] BYREF
  char v13[2048]; // [sp+108h] [bp-800h] BYREF

  memset(s, 0, sizeof(s));
  if ( dword_B3CC0 && *(_BYTE *)(dword_B3CC0 + 28) )
  {
    v4 = *(_DWORD *)(dword_B3CC0 + 4 * a1);
    if ( !dword_B6EB4 )
      a2 += 40;
    (*(void (__fastcall **)(_DWORD, _DWORD))(v4 + 192))(*(_DWORD *)(dword_B3CC0 + 4 * a1), a2);
    v5 = *(void (__fastcall **)(int, char *, int *, _BYTE *))(v4 + 16);
    v10 = 256;
    v5(v4, s, &v10, v11);
    result = sub_5B398(a1, v11[0], s, v10);
    v7 = result;
    if ( result )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(v13, 0x800u, "Write sweep result fail for chain %d.\n", a1);
        sub_3B6AC(3, v13, 0, v9);
        return v7;
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(v13, 0x800u, "No work mode voltage, chain = %d.\n", a1);
      sub_3B6AC(4, v13, 0, v8);
    }
    return -1;
  }
  return result;
}
