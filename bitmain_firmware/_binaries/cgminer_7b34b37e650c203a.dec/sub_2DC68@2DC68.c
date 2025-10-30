int __fastcall sub_2DC68(int a1, int a2)
{
  _DWORD *v2; // r3
  int result; // r0
  char s[2056]; // [sp+8h] [bp-808h] BYREF

  v2 = *(_DWORD **)(a1 + 36);
  if ( v2[59] == a2 )
  {
    if ( byte_74500 || (result = (unsigned __int8)byte_68BD4, byte_68BD4) || dword_67DB4 > 5 )
    {
      snprintf(s, 0x800u, "%s %d duplicate share detected as HW error", *(const char **)(v2[1] + 8), v2[2]);
      sub_20F58(6, s, 0);
      return 0;
    }
  }
  else
  {
    v2[59] = a2;
    return 1;
  }
  return result;
}
