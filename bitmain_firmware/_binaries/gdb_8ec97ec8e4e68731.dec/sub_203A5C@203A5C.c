void __fastcall sub_203A5C(int a1, int a2)
{
  sub_243C34(a1);
  if ( a1 )
  {
    sub_203588(a1, &dword_4893F4, 1);
    sub_2033DC();
    if ( !a2 )
      return;
    goto LABEL_3;
  }
  if ( a2 && !sub_25A3E4("Reinitialize source path to empty? ") )
    goto LABEL_3;
  if ( dword_4893F4 )
    free((void *)dword_4893F4);
  sub_203548();
  if ( a2 )
LABEL_3:
    sub_203000();
}
