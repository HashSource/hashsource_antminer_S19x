signed int __fastcall sub_2845C4(int a1)
{
  int v2; // r4
  signed int result; // r0
  struct termios termios_p; // [sp+Ch] [bp-40h] BYREF

  v2 = fileno((FILE *)dword_48AAAC);
  sub_283F6C(v2);
  *_errno_location() = 0;
  result = sub_284090(v2, &termios_p);
  if ( result >= 0 )
    return sub_283FF4(a1, termios_p.c_cc[2], termios_p.c_cc[3], termios_p.c_cc[14], termios_p.c_cc[15]);
  return result;
}
