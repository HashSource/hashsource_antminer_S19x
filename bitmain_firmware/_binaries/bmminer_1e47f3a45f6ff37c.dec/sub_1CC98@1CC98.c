int __fastcall sub_1CC98(int a1, char a2)
{
  int result; // r0
  int v5; // r7
  char v6; // r0
  int v7; // r4
  int v8; // r3
  int v9; // r3
  int v10; // [sp+0h] [bp-90Ch] BYREF
  _BYTE v11[4]; // [sp+4h] [bp-908h] BYREF
  char s[256]; // [sp+8h] [bp-904h] BYREF
  char v13[2052]; // [sp+108h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  if ( dword_B3CC0 && *(_BYTE *)(dword_B3CC0 + 28) )
  {
    v5 = *(_DWORD *)(dword_B3CC0 + 4 * a1);
    v6 = (*(int (__fastcall **)(int))(v5 + 284))(v5);
    (*(void (__fastcall **)(int, _DWORD))(v5 + 288))(v5, (unsigned __int8)(a2 + v6));
    v10 = 256;
    (*(void (__fastcall **)(int, char *, int *, _BYTE *))(v5 + 20))(v5, s, &v10, v11);
    result = sub_5B398(a1, v11[0], s, v10);
    v7 = result;
    if ( result && (unsigned int)dword_B308C > 3 )
    {
      snprintf(v13, 0x800u, "Write sweep result fail for chain %d.\n", a1);
      sub_3B6AC(3, v13, 0, v9);
      return v7;
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(v13, 0x800u, "eeprom is not init, chain = %d\n", a1);
      sub_3B6AC(4, v13, 0, v8);
    }
    return -1;
  }
  return result;
}
