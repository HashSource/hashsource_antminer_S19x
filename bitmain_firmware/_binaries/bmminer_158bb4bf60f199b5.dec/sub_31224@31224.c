int __fastcall sub_31224(int a1, int a2, int a3)
{
  _BYTE v6[4]; // [sp+14h] [bp-808h] BYREF
  char s[4]; // [sp+18h] [bp-804h] BYREF
  int v8; // [sp+1Ch] [bp-800h]

  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "chain = %d, freq = %d\n", a1, a3);
    sub_47AB4(3, s, 0);
  }
  *(_DWORD *)s = 0;
  v8 = 0;
  sub_74E08(s, v6, 0);
  BYTE2(v8) = v6[0];
  return sub_1B1F4(a1, 1, 0, a2, *(int *)s, v8);
}
