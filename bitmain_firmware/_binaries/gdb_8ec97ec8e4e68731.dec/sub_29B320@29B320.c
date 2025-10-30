int __fastcall sub_29B320(const char *a1, int a2, mbstate_t *a3)
{
  size_t v6; // r0
  int v7; // r4
  size_t v8; // r7
  size_t v9; // r0

  v6 = strlen(a1);
  if ( v6 < a2 )
    return -1;
  if ( a2 > 0 )
  {
    v7 = 0;
    v8 = v6;
    while ( 1 )
    {
      if ( a3 )
      {
        v9 = mbrtowc(0, &a1[v7], v8 - v7, a3);
        if ( v9 + 2 > 1 )
          goto LABEL_6;
        ++v7;
        a3->__count = 0;
        a3->__wch = 0;
        if ( v7 >= a2 )
          return v7 - a2;
      }
      else
      {
        v9 = _mbrlen(&a1[v7], v8 - v7, 0);
        if ( v9 + 2 <= 1 )
        {
LABEL_8:
          ++v7;
          goto LABEL_9;
        }
LABEL_6:
        if ( !v9 )
          goto LABEL_8;
        v7 += v9;
LABEL_9:
        if ( v7 >= a2 )
          return v7 - a2;
      }
    }
  }
  v7 = 0;
  return v7 - a2;
}
