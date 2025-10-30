int __fastcall sub_32154(unsigned __int64 a1, char *a2, size_t a3, int a4)
{
  double v4; // r0
  double v6; // r0
  double v7; // d16
  __int64 v11; // [sp+20h] [bp-64h]
  __int64 v12; // [sp+20h] [bp-64h]
  __int64 v13; // [sp+20h] [bp-64h]
  __int64 v14; // [sp+20h] [bp-64h]
  __int64 v15; // [sp+20h] [bp-64h]
  __int16 v16; // [sp+28h] [bp-5Ch] BYREF
  int v17; // [sp+2Ch] [bp-58h]
  __int64 v18; // [sp+30h] [bp-54h]
  unsigned __int64 v19; // [sp+38h] [bp-4Ch]
  unsigned __int64 v20; // [sp+40h] [bp-44h]
  unsigned __int64 v21; // [sp+48h] [bp-3Ch]
  unsigned __int64 v22; // [sp+50h] [bp-34h]
  unsigned __int64 v23; // [sp+58h] [bp-2Ch]
  double v24; // [sp+60h] [bp-24h]
  char v25; // [sp+6Fh] [bp-15h]
  double v26; // [sp+70h] [bp-14h]

  v24 = 1000.0;
  v23 = 1000;
  v22 = 1000000;
  v21 = 1000000000;
  v20 = 1000000000000LL;
  v19 = 1000000000000000LL;
  v18 = 1000000000000000000LL;
  v16 = 0;
  v25 = 1;
  if ( a1 < 0xDE0B6B3A7640000LL )
  {
    if ( a1 < v19 )
    {
      if ( a1 < v20 )
      {
        if ( a1 < v21 )
        {
          if ( a1 < v22 )
          {
            v4 = sub_68E74(a1, HIDWORD(a1));
            if ( a1 >= v23 )
            {
              v26 = v4 / v24;
              v16 = 75;
            }
            else
            {
              v26 = v4;
              v25 = 0;
            }
          }
          else
          {
            v15 = sub_68EE0(a1, HIDWORD(a1), v23, HIDWORD(v23));
            v4 = sub_68E74(v15, HIDWORD(v15));
            v26 = v4 / v24;
            v16 = 77;
          }
        }
        else
        {
          v14 = sub_68EE0(a1, HIDWORD(a1), v22, HIDWORD(v22));
          v4 = sub_68E74(v14, HIDWORD(v14));
          v26 = v4 / v24;
          v16 = 71;
        }
      }
      else
      {
        v13 = sub_68EE0(a1, HIDWORD(a1), v21, HIDWORD(v21));
        v4 = sub_68E74(v13, HIDWORD(v13));
        v26 = v4 / v24;
        v16 = 84;
      }
    }
    else
    {
      v12 = sub_68EE0(a1, HIDWORD(a1), v20, HIDWORD(v20));
      v4 = sub_68E74(v12, HIDWORD(v12));
      v26 = v4 / v24;
      v16 = 80;
    }
  }
  else
  {
    v11 = sub_68EE0(a1, HIDWORD(a1), v19, HIDWORD(v19));
    v4 = sub_68E74(v11, HIDWORD(v11));
    v26 = v4 / v24;
    v16 = 69;
  }
  if ( a4 )
  {
    if ( v26 <= 0.0 )
    {
      v7 = 0.0;
    }
    else
    {
      v6 = log10(v4);
      floor(v6);
      v7 = v26;
    }
    v17 = (int)((double)(a4 - 1) - v7);
    return snprintf(a2, a3, "%*.*f%s", a4 + 1, v17, v26, (const char *)&v16);
  }
  else if ( v25 )
  {
    return snprintf(a2, a3, "%.3g%s", v26, (const char *)&v16);
  }
  else
  {
    return snprintf(a2, a3, "%d%s", (unsigned int)v26, (const char *)&v16);
  }
}
