void __fastcall sub_2CBA8(void ***a1, const char *a2, const char *a3, int a4)
{
  void **v4; // r5

  v4 = *a1;
  if ( *a1 )
  {
    sub_2CA54(*a1);
    free(v4);
    *a1 = 0;
  }
  else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
  {
    sub_2C4F0(a2, a3, a4);
  }
}
