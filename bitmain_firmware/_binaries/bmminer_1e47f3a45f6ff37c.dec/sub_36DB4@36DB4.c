void __fastcall sub_36DB4(void ***a1, const char *a2, const char *a3, int a4)
{
  void **v4; // r5

  v4 = *a1;
  if ( *a1 )
  {
    sub_36D78(*a1);
    free(v4);
    *a1 = 0;
  }
  else if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
  {
    sub_359F8(a2, a3, a4);
  }
}
