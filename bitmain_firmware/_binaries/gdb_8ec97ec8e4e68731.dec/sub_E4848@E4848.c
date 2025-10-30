void sub_E4848()
{
  if ( dword_4788E4 )
    free((void *)dword_4788E4);
  dword_4788E4 = 0;
  dword_4788E8 = 0;
  dword_4788EC = 0;
  dword_4788F0 = 0;
  dword_4788F4 = 0;
  dword_4788F8 = 0;
  dword_4788FC = 0;
  if ( dword_478900 )
    obstack_free(&stru_478904, 0);
  dword_478900 = 0;
  sub_E47C8();
}
