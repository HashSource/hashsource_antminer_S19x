int __fastcall sub_9CB40(int a1, int a2, int *a3)
{
  unsigned int v3; // r4
  bool v4; // r3

  if ( a2 )
  {
    v3 = a2 - 768;
    v4 = a2 > 65276;
    if ( a2 == 256 )
      v4 = 1;
    if ( a2 <= 65280 && v4 )
    {
      if ( a1 == 0x10000 )
      {
        if ( v3 <= 4 )
          goto LABEL_10;
      }
      else if ( a1 == 0x1FFFF )
      {
LABEL_10:
        *a3 = a2;
        return 1;
      }
    }
    else
    {
      if ( v3 > 4 )
        return 0;
      if ( a1 == 0x10000 )
        goto LABEL_10;
    }
    return 1;
  }
  else
  {
    *a3 = 0;
    return 1;
  }
}
