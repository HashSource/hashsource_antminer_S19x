int __fastcall sub_1C05C(int a1, int a2, int *a3)
{
  int v4; // r6
  int v6; // r0
  int v7; // r7
  int v8; // r0
  _BOOL4 v9; // r0
  int v10; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( dword_B3CC0 && *(_BYTE *)(dword_B3CC0 + 28) )
  {
    v4 = *(_DWORD *)(dword_B3CC0 + 4 * a1);
    v6 = (*(int (__fastcall **)(int))(v4 + 188))(v4);
    v7 = v6;
    if ( !dword_B6EB4 )
      v7 = v6 - 40;
    v8 = (*(int (__fastcall **)(int))(v4 + 196))(v4);
    if ( v7 < dword_B3CC4 || v7 > dword_B3CCC || v8 < dword_B3CC8 )
      return -2;
    v9 = v8 <= dword_B3CD0;
    if ( !a3 )
      v9 = 0;
    if ( v9 )
    {
      *a3 = v7;
      return 0;
    }
    else
    {
      return -2;
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "No work mode voltage, chain = %d, mode = %d.\n", a1, a2);
      sub_3B6AC(4, s, 0, v10);
    }
    return -1;
  }
}
