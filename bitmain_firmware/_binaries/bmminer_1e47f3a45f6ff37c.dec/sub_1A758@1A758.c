int __fastcall sub_1A758(int a1, int a2, int *a3)
{
  int result; // r0
  int (__fastcall **v5)(_DWORD); // r6
  int v6; // r8
  int v7; // r7
  int v8; // r0
  _BOOL4 v9; // r3
  int v10; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( dword_B3CC0 && *(_BYTE *)(dword_B3CC0 + 28) )
  {
    v5 = *(int (__fastcall ***)(_DWORD))(dword_B3CC0 + 4 * a1);
    v6 = v5[47](v5);
    v7 = v5[49](v5);
    v8 = v5[71](v5);
    if ( v6 < dword_B3CC4 || v6 > dword_B3CCC || v7 < dword_B3CC8 )
      return -2;
    v9 = v7 <= dword_B3CD0;
    if ( !a3 )
      v9 = 0;
    if ( v9 )
    {
      *a3 = v7;
      if ( !dword_B6EB4 )
      {
        v8 = (unsigned __int8)v8;
        *a3 = v7 - 80 - 25 * (unsigned __int8)v8;
      }
      result = sub_42B0C(v8);
      if ( result )
      {
        *a3 -= 55;
        return 0;
      }
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
      snprintf(s, 0x800u, "No work mode freq, chain = %d, mode = %d.\n", a1, a2);
      sub_3B6AC(4, s, 0, v10);
    }
    return -1;
  }
  return result;
}
