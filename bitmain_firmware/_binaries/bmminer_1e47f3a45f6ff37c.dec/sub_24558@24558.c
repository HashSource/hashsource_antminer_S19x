int __fastcall sub_24558(int a1, int a2, int a3)
{
  int v5; // r3
  _BYTE v7[4]; // [sp+14h] [bp-808h] BYREF
  char s[4]; // [sp+18h] [bp-804h] BYREF
  int v9; // [sp+1Ch] [bp-800h]

  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "chain = %d, freq = %d\n", a1, a3);
    sub_3B6AC(3, s, 0, v5);
  }
  *(_DWORD *)s = 0;
  v9 = 0;
  sub_791C0(s, v7, 0);
  BYTE2(v9) = v7[0];
  return sub_283A0(a1, 1, 0, a2, *(_DWORD *)s, v9);
}
