void __fastcall sub_53084(void ***a1, const char *a2, const char *a3, int a4)
{
  void **v4; // r5

  v4 = *a1;
  if ( *a1 )
  {
    sub_52F30(*a1);
    free(v4);
    *a1 = 0;
  }
  else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
  {
    sub_52998(a2, a3, a4);
  }
}
