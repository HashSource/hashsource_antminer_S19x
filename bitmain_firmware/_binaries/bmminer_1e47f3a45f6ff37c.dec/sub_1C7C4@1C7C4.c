int __fastcall sub_1C7C4(int a1, int a2)
{
  int v4; // r6
  int v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r4
  int *v10; // r9
  int v11; // r4
  int v12; // r0
  int v13; // r8
  unsigned int v14; // r3
  unsigned int v15; // r3
  int v16; // [sp+4h] [bp-888h] BYREF
  char s[128]; // [sp+8h] [bp-884h] BYREF
  char v18[2040]; // [sp+88h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  v16 = 128;
  if ( dword_B3CC0 && *(_BYTE *)(dword_B3CC0 + 28) )
  {
    if ( a2 )
    {
      v4 = *(_DWORD *)(dword_B3CC0 + 4 * a1);
      if ( (*(int (__fastcall **)(int))(v4 + 24))(v4) == 5 )
      {
        v10 = (int *)(a2 + 8);
        v11 = 0;
        *(_WORD *)a2 = (*(int (__fastcall **)(int))(v4 + 244))(v4);
        *(_WORD *)(a2 + 2) = (*(int (__fastcall **)(int))(v4 + 252))(v4);
        *(_BYTE *)(a2 + 4) = (*(int (__fastcall **)(int))(v4 + 260))(v4);
        *(_BYTE *)(a2 + 1032) = (*(int (__fastcall **)(int))(v4 + 276))(v4) == 1;
        (*(void (__fastcall **)(int, char *, int *))(v4 + 268))(v4, s, &v16);
        v12 = (*(unsigned __int8 (__fastcall **)(int))(v4 + 284))(v4);
        v13 = -25 * (unsigned __int8)v12 - 80;
        do
        {
          v14 = (unsigned __int8)s[v11 >> 1];
          if ( (v11 & 1) != 0 )
            v15 = v14 >> 4;
          else
            v15 = v14 & 0xF;
          if ( *(_WORD *)(a2 + 2) )
          {
            *v10 = *(unsigned __int16 *)(a2 + 2) + *(unsigned __int8 *)(a2 + 4) * v15;
          }
          else
          {
            v12 = (*(int (__fastcall **)(int))(v4 + 196))(v4);
            *v10 = v12;
          }
          ++v11;
          ++v10;
          if ( !dword_B6EB4 )
            *(v10 - 1) += v13;
          v12 = sub_42B0C(v12);
          if ( v12 )
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
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(v18, 0x800u, "eeprom is not init, chain = %d\n", a1);
      sub_3B6AC(4, v18, 0, v6);
    }
    return -1;
  }
}
