int __fastcall sub_51B18(unsigned __int64 a1, char *s, size_t maxlen, int a4)
{
  double v6; // d8
  int v8; // r1
  double v9; // r0
  __int16 v10; // [sp+1Ch] [bp-4h] BYREF

  v10 = 0;
  if ( a1 <= 0xDE0B6B3A763FFFFLL )
  {
    if ( a1 <= 0x38D7EA4C67FFFLL )
    {
      if ( a1 > 0xE8D4A50FFFLL )
      {
        LODWORD(a1) = sub_77910(a1, HIDWORD(a1), 1000000000, 0);
        v10 = 84;
        v6 = (double)(int)a1 / 1000.0;
        if ( !a4 )
          return snprintf(s, maxlen, "%.3g%s", v6, (const char *)&v10);
      }
      else if ( a1 <= 0x3B9AC9FF )
      {
        if ( a1 > 0xF423F )
        {
          LODWORD(a1) = sub_77910(a1, HIDWORD(a1), 1000, 0);
          v10 = 77;
          v6 = (double)(int)a1 / 1000.0;
          if ( !a4 )
            return snprintf(s, maxlen, "%.3g%s", v6, (const char *)&v10);
        }
        else
        {
          v6 = (double)(int)a1;
          if ( a1 <= 0x3E7 )
          {
            if ( !a4 )
              return snprintf(s, maxlen, "%d%s", (_DWORD)a1, (const char *)&v10);
          }
          else
          {
            v10 = 75;
            v6 = v6 / 1000.0;
            if ( !a4 )
              return snprintf(s, maxlen, "%.3g%s", v6, (const char *)&v10);
          }
        }
      }
      else
      {
        LODWORD(a1) = sub_77910(a1, HIDWORD(a1), &unk_F4240, 0);
        v10 = 71;
        v6 = (double)(int)a1 / 1000.0;
        if ( !a4 )
          return snprintf(s, maxlen, "%.3g%s", v6, (const char *)&v10);
      }
    }
    else
    {
      LODWORD(a1) = sub_77910(a1, HIDWORD(a1), -727379968, 232);
      v10 = 80;
      v6 = (double)(int)a1 / 1000.0;
      if ( !a4 )
        return snprintf(s, maxlen, "%.3g%s", v6, (const char *)&v10);
    }
  }
  else
  {
    LODWORD(a1) = sub_77910(a1, HIDWORD(a1), -1530494976, 232830);
    v10 = 69;
    v6 = (double)(int)a1 / 1000.0;
    if ( !a4 )
      return snprintf(s, maxlen, "%.3g%s", v6, (const char *)&v10);
  }
  if ( v6 > 0.0 )
  {
    v9 = log10(*(double *)&a1);
    floor(v9);
    v8 = (int)(3.0 - v6);
  }
  else
  {
    v8 = 3;
  }
  return snprintf(s, maxlen, "%*.*f%s", a4 + 1, v8, v6, (const char *)&v10);
}
