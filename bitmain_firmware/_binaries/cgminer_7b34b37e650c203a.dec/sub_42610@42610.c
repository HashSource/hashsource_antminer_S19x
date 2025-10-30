int __fastcall sub_42610(int a1, int a2)
{
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    snprintf(s, 0x800u, "about to send job, size is %d", a2);
    sub_20F58(5, s, 0);
  }
  return sub_44264(aBitmainUpdateJ, a1, a2, s, 0, 0);
}
