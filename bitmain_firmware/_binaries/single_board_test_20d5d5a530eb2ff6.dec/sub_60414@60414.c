int sub_60414()
{
  unsigned int v0; // r10
  char *v1; // r2

  if ( *(_DWORD *)(dword_223680 + 64) )
  {
    v0 = 1;
    do
    {
      while ( 1 )
      {
        v1 = byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264239 + v0] ? "O" : "X";
        printf("[%02d] %s   ", v0, v1);
        if ( (v0++ & 7) == 0 )
          break;
        if ( *(_DWORD *)(dword_223680 + 64) < v0 )
          return sub_16298(10);
      }
      putchar(10);
    }
    while ( *(_DWORD *)(dword_223680 + 64) >= v0 );
  }
  return sub_16298(10);
}
