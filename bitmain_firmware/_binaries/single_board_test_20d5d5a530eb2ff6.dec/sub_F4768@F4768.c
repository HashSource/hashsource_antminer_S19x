void sub_F4768()
{
  void (*v0)(void); // r3
  int v1; // r0

  if ( dword_6E1AD8 )
  {
    if ( dword_6E1AEC )
    {
      v0 = *(void (**)(void))(dword_6E1AEC + 8);
      if ( v0 )
        v0();
    }
    v1 = sub_F4728(0);
    sub_F4C00(v1);
    sub_10C574(dword_6E1ACC);
    dword_6E1ACC = 0;
    sub_10C574(dword_6E1AD0);
    dword_6E1AD0 = 0;
    sub_10C574(dword_6E1AD4);
    dword_6E1AD4 = 0;
    dword_6E1AD8 = 0;
  }
}
