int __fastcall sub_C5060(char *s2)
{
  int v2; // r0

  v2 = strcmp("B-163", s2);
  if ( v2 )
  {
    if ( !strcmp("B-233", s2) )
    {
      v2 = 1;
    }
    else if ( !strcmp("B-283", s2) )
    {
      v2 = 2;
    }
    else if ( !strcmp("B-409", s2) )
    {
      v2 = 3;
    }
    else if ( !strcmp("B-571", s2) )
    {
      v2 = 4;
    }
    else if ( !strcmp("K-163", s2) )
    {
      v2 = 5;
    }
    else if ( !strcmp("K-233", s2) )
    {
      v2 = 6;
    }
    else if ( !strcmp("K-283", s2) )
    {
      v2 = 7;
    }
    else if ( !strcmp("K-409", s2) )
    {
      v2 = 8;
    }
    else if ( !strcmp("K-571", s2) )
    {
      v2 = 9;
    }
    else if ( !strcmp("P-192", s2) )
    {
      v2 = 10;
    }
    else if ( !strcmp("P-224", s2) )
    {
      v2 = 11;
    }
    else if ( !strcmp("P-256", s2) )
    {
      v2 = 12;
    }
    else if ( !strcmp("P-384", s2) )
    {
      v2 = 13;
    }
    else
    {
      if ( strcmp("P-521", s2) )
        return 0;
      v2 = 14;
    }
  }
  return *((_DWORD *)&unk_20562C + 2 * v2 + 329);
}
