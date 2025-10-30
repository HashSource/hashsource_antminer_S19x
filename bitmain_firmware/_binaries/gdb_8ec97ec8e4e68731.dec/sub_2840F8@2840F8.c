void sub_2840F8()
{
  FILE *v0; // r0
  int v1; // r5

  if ( dword_48ABE8 )
  {
    sub_290E24();
    v0 = (FILE *)dword_48AAAC;
    if ( !dword_48AAAC )
      v0 = (FILE *)stdout;
    v1 = fileno(v0);
    if ( dword_490118 )
      sub_29468C(0);
    fflush((FILE *)dword_48AAB0);
    if ( sub_283FA4(v1, &termios_p) >= 0 )
    {
      dword_48ABE8 = 0;
      dword_48AAA0 &= ~4u;
    }
    sub_290E74();
  }
}
