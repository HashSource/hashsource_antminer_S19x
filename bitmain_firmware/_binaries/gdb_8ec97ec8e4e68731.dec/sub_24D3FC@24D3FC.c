void __fastcall sub_24D3FC(void ***a1)
{
  void **v1; // r4
  void **v3; // r3

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1[2] )
    {
      free(v1[2]);
      v3 = *a1;
      v1[2] = 0;
      if ( !v3 )
        return;
      v1 = v3;
    }
    free(v1);
  }
}
