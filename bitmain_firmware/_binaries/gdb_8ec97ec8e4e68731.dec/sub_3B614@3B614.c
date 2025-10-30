struct termios *__fastcall sub_3B614(int a1)
{
  struct termios *v2; // r4
  struct termios *v4; // r0

  v2 = (struct termios *)sub_93028(60);
  if ( tcgetattr(*(_DWORD *)(a1 + 4), v2) < 0 )
  {
    v4 = v2;
    v2 = 0;
    free(v4);
  }
  return v2;
}
