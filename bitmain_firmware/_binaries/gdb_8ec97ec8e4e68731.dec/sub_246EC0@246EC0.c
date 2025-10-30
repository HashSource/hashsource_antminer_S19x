void sub_246EC0()
{
  int v0; // r0
  int v1; // r0

  if ( dword_46DCEC >= 0 )
  {
    v0 = ps_getpid_0((int)&dword_4878EC);
    dword_4878EC = dword_475848;
    qword_4878F0 = qword_47584C;
    sub_1838B8(v0);
    close(dword_46DCEC);
    dword_46DCEC = -1;
    if ( dword_48A598 )
      free((void *)dword_48A598);
    dword_48A598 = 0;
    sub_92050((int)&dword_48A5B8);
    sub_24A810(v1);
  }
}
