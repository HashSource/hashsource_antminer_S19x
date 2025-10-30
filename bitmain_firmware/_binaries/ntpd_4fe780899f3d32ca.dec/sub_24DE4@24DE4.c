void __fastcall sub_24DE4(_WORD *a1)
{
  _WORD *v2; // r4
  void *v3; // r0

  if ( a1 )
  {
    if ( (a1[1] & 0x80) == 0 )
    {
      v2 = a1;
      do
      {
        v3 = (void *)*((_DWORD *)v2 + 1);
        v2 += 4;
        free(v3);
      }
      while ( (v2[1] & 0x80) == 0 );
    }
    free(a1);
  }
}
