int __fastcall sub_1C1D4(int a1, int a2, int *a3)
{
  int v3; // r5
  int v5; // r0
  int v6; // r6
  int v7; // r0
  _BOOL4 v8; // r0
  int v10; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( dword_B0F4C && *(_BYTE *)(dword_B0F4C + 28) )
  {
    v3 = *(_DWORD *)(dword_B0F4C + 4 * a1);
    v5 = (*(int (__fastcall **)(int))(v3 + 188))(v3);
    v6 = v5;
    if ( !dword_B413C )
      v6 = v5 - 40;
    v7 = (*(int (__fastcall **)(int))(v3 + 196))(v3);
    if ( dword_B0F50 > v6 || dword_B0F58 < v6 || dword_B0F54 > v7 )
      return -2;
    v8 = dword_B0F5C >= v7;
    if ( !a3 )
      v8 = 0;
    if ( v8 )
    {
      *a3 = v6;
      return 0;
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
      snprintf(s, 0x800u, "No work mode voltage, chain = %d, mode = %d.\n", a1, a2);
      sub_3AF5C(4, s, 0, v10);
    }
    return -1;
  }
}
