void __fastcall sub_1F59C(_DWORD *a1)
{
  void *v2; // r0

  if ( a1 && (v2 = (void *)a1[75]) != 0 )
  {
    free(v2);
    free(a1);
  }
  else if ( (unsigned int)off_AFC24 > 3 )
  {
    sub_1F540();
  }
}
