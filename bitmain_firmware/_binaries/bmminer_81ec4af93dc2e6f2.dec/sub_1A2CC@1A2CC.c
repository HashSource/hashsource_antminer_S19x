int __fastcall sub_1A2CC(int a1, int a2, int *a3)
{
  int (__fastcall **v3)(_DWORD); // r5
  int v5; // r8
  int v6; // r6
  unsigned __int8 v7; // r0
  _BOOL4 v8; // r3
  int result; // r0
  int v10; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( dword_B0F4C && *(_BYTE *)(dword_B0F4C + 28) )
  {
    v3 = *(int (__fastcall ***)(_DWORD))(dword_B0F4C + 4 * a1);
    v5 = v3[47](v3);
    v6 = v3[49](v3);
    v7 = v3[71](v3);
    if ( dword_B0F50 > v5 || dword_B0F58 < v5 || dword_B0F54 > v6 )
      return -2;
    v8 = dword_B0F5C >= v6;
    if ( !a3 )
      v8 = 0;
    if ( v8 )
    {
      *a3 = v6;
      if ( !dword_B413C )
        *a3 = v6 - 80 - 25 * v7;
      result = sub_40F20();
      if ( result )
      {
        result = 0;
        *a3 -= 55;
      }
    }
    else
    {
      return -2;
    }
  }
  else
  {
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(s, 0x800u, "No work mode freq, chain = %d, mode = %d.\n", a1, a2);
      sub_3AF5C(4, s, 0, v10);
    }
    return -1;
  }
  return result;
}
