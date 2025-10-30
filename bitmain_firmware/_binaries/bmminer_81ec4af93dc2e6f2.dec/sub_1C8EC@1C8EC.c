int __fastcall sub_1C8EC(int a1, int a2)
{
  int v4; // r7
  int v6; // r3
  int v7; // r5
  int v8; // r6
  int v9; // r5
  _DWORD *v10; // r5
  int v11; // r4
  int v12; // r9
  unsigned int v13; // r3
  unsigned int v14; // r3
  int v15; // [sp+4h] [bp-888h] BYREF
  char s[128]; // [sp+8h] [bp-884h] BYREF
  char v17[2040]; // [sp+88h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  v15 = 128;
  if ( dword_B0F4C && *(_BYTE *)(dword_B0F4C + 28) )
  {
    if ( a2 )
    {
      v4 = *(_DWORD *)(dword_B0F4C + 4 * a1);
      if ( (*(int (__fastcall **)(int))(v4 + 24))(v4) == 5 )
      {
        *(_WORD *)a2 = (*(int (__fastcall **)(int))(v4 + 244))(v4);
        *(_WORD *)(a2 + 2) = (*(int (__fastcall **)(int))(v4 + 252))(v4);
        *(_BYTE *)(a2 + 4) = (*(int (__fastcall **)(int))(v4 + 260))(v4);
        v10 = (_DWORD *)(a2 + 8);
        *(_BYTE *)(a2 + 1032) = (*(int (__fastcall **)(int))(v4 + 276))(v4) == 1;
        v11 = 0;
        (*(void (__fastcall **)(int, char *, int *))(v4 + 268))(v4, s, &v15);
        v12 = -80 - 25 * (*(unsigned __int8 (__fastcall **)(int))(v4 + 284))(v4);
        do
        {
          v13 = (unsigned __int8)s[v11 >> 1];
          if ( (v11 & 1) != 0 )
            v14 = v13 >> 4;
          else
            v14 = v13 & 0xF;
          if ( *(_WORD *)(a2 + 2) )
            *v10 = *(unsigned __int16 *)(a2 + 2) + *(unsigned __int8 *)(a2 + 4) * v14;
          else
            *v10 = (*(int (__fastcall **)(int))(v4 + 196))(v4);
          ++v11;
          ++v10;
          if ( !dword_B413C )
            *(v10 - 1) += v12;
          if ( sub_40F20() )
            *(v10 - 1) -= 55;
        }
        while ( v11 != 256 );
      }
      else if ( (*(int (__fastcall **)(int))(v4 + 24))(v4) == 4 )
      {
        v7 = a2 + 1024;
        v8 = a2 + 4;
        v9 = v7 + 4;
        do
        {
          *(_DWORD *)(v8 + 4) = (*(int (__fastcall **)(int))(v4 + 196))(v4);
          v8 += 4;
        }
        while ( v8 != v9 );
      }
    }
    return 0;
  }
  else
  {
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(v17, 0x800u, "eeprom is not init, chain = %d\n", a1);
      sub_3AF5C(4, v17, 0, v6);
    }
    return -1;
  }
}
