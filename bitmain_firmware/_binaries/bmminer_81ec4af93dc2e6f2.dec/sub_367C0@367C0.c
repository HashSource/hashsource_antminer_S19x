void __fastcall sub_367C0(void ***a1, const char *a2, const char *a3, int a4)
{
  void **v4; // r5

  v4 = *a1;
  if ( *a1 )
  {
    sub_36784(*a1);
    free(v4);
    *a1 = 0;
  }
  else if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
  {
    sub_353B0(a2, a3, a4);
  }
}
