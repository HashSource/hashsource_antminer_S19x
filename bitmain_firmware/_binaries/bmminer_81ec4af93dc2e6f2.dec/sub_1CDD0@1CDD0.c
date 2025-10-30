int __fastcall sub_1CDD0(int a1, char a2)
{
  int v4; // r4
  char v5; // r0
  int v6; // r0
  void (__fastcall *v7)(int, char *, int *, _BYTE *); // r4
  int v8; // r4
  int v10; // r3
  int v11; // r3
  int v12; // [sp+0h] [bp-90Ch] BYREF
  _BYTE v13[4]; // [sp+4h] [bp-908h] BYREF
  char s[256]; // [sp+8h] [bp-904h] BYREF
  char v15[2052]; // [sp+108h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  if ( dword_B0F4C && *(_BYTE *)(dword_B0F4C + 28) )
  {
    v4 = *(_DWORD *)(dword_B0F4C + 4 * a1);
    v5 = (*(int (__fastcall **)(int))(v4 + 284))(v4);
    (*(void (__fastcall **)(int, _DWORD))(v4 + 288))(v4, (unsigned __int8)(a2 + v5));
    v6 = v4;
    v7 = *(void (__fastcall **)(int, char *, int *, _BYTE *))(v4 + 20);
    v12 = 256;
    v7(v6, s, &v12, v13);
    v8 = sub_5A3FC(a1, v13[0], s, v12);
    if ( !v8 || (unsigned int)off_AFC24 <= 3 )
      return v8;
    snprintf(v15, 0x800u, "Write sweep result fail for chain %d.\n", a1);
    sub_3AF5C(3, v15, 0, v11);
    return v8;
  }
  else
  {
    if ( (unsigned int)off_AFC24 <= 4 )
      return -1;
    snprintf(v15, 0x800u, "eeprom is not init, chain = %d\n", a1);
    sub_3AF5C(4, v15, 0, v10);
    return -1;
  }
}
