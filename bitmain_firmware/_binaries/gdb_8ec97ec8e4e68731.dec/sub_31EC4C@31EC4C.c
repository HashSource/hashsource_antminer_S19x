char *__fastcall sub_31EC4C(unsigned int a1, char *s1)
{
  char *v2; // r4
  int v4; // r3
  char *v5; // r5
  int v6; // r3
  int v7; // t1
  char *v8; // r4
  int v9; // r3
  int v10; // t1

  v2 = s1;
  if ( !strncmp(s1, "NAN", 3u) )
  {
    sub_31E858(a1, "NaN");
    return v2 + 3;
  }
  else
  {
    if ( !strncmp(v2, "INF", 3u) )
    {
      v8 = v2 + 3;
      sub_31E858(a1, "Inf");
      return v8;
    }
    if ( !strncmp(v2, "NINF", 4u) )
    {
      sub_31E858(a1, "-Inf");
      return v2 + 4;
    }
    else
    {
      v4 = (unsigned __int8)*v2;
      if ( v4 == 78 )
      {
        ++v2;
        sub_31E858(a1, (char *)&word_3C1464);
        v4 = (unsigned __int8)*v2;
      }
      if ( (word_438898[v4] & 0x100) != 0 )
      {
        v5 = v2 + 1;
        sub_31E858(a1, (char *)&word_41A83C);
        sub_31EC14(__SPAIR64__((unsigned int)v2, a1), 1u);
        sub_31E858(a1, ".");
        v6 = (unsigned __int8)v2[1];
        if ( (word_438898[v6] & 0x100) != 0 )
        {
          do
          {
            sub_31EC14(__SPAIR64__((unsigned int)v5, a1), 1u);
            v7 = (unsigned __int8)*++v5;
            v6 = v7;
          }
          while ( (word_438898[v7] & 0x100) != 0 );
        }
        if ( v6 == 80 )
        {
          v8 = v5 + 1;
          sub_31E858(a1, "p");
          v9 = (unsigned __int8)v5[1];
          if ( v9 == 78 )
          {
            v8 = v5 + 2;
            sub_31E858(a1, (char *)&word_3C1464);
            v9 = (unsigned __int8)v5[2];
          }
          if ( (word_438898[v9] & 4) != 0 )
          {
            do
            {
              sub_31EC14(__SPAIR64__((unsigned int)v8, a1), 1u);
              v10 = (unsigned __int8)*++v8;
            }
            while ( (word_438898[v10] & 4) != 0 );
          }
          return v8;
        }
      }
      return 0;
    }
  }
}
