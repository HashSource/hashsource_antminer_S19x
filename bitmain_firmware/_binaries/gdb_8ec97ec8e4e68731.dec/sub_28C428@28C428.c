int __fastcall sub_28C428(const void *a1, int a2, signed int a3, char a4)
{
  int v9; // r4
  int v10; // r3
  int v11; // r9
  bool v12; // cc
  size_t v13; // r8
  int v14; // r5
  int v15; // r0
  size_t v16; // r0
  int v17; // r9
  size_t v18; // r0
  int v19; // r4
  wchar_t pwc; // [sp+4h] [bp-2Ch] BYREF
  mbstate_t p; // [sp+8h] [bp-28h] BYREF

  if ( a3 <= a2 )
    return 0;
  if ( _ctype_get_mb_cur_max() == 1 || (v9 = dword_48BB60) != 0 )
  {
    sub_2914C8("_rl_col_width: called with MB_CUR_MAX == 1");
    return a3 - a2;
  }
  else
  {
    p.__count = 0;
    if ( a2 )
      v10 = 0;
    else
      v10 = a4 & 1;
    p.__wch = dword_48BB60;
    if ( v10 )
    {
      v11 = dword_48AE08;
      if ( a3 == dword_48AE08 )
      {
        if ( !memcmp(a1, (const void *)dword_48AE0C, a3) )
          return dword_48AE10 + dword_48AE14;
      }
      else
      {
        v12 = dword_48AE08 <= 0;
        if ( dword_48AE08 > 0 )
          v12 = a3 <= dword_48AE08;
        if ( !v12 && dword_48AE0C && !memcmp(a1, (const void *)dword_48AE0C, dword_48AE08) )
        {
          v19 = dword_48AE10 + dword_48AE14;
          return v19 + sub_28C428(a1, v11, a3, 1);
        }
      }
      v13 = a3;
    }
    else
    {
      v13 = a3;
      if ( a2 > 0 )
      {
        v17 = dword_48BB60;
        do
        {
          v18 = mbrtowc(0, (const char *)a1 + v9, v13, &p);
          if ( v18 < 0xFFFFFFFE )
          {
            if ( !v18 )
              break;
            v9 += v18;
            v13 -= v18;
          }
          else
          {
            ++v9;
            --v13;
            p.__count = v17;
            p.__wch = v17;
          }
        }
        while ( a2 > v9 );
      }
    }
    v14 = v9 - a2;
    while ( a3 > v9 )
    {
      v16 = mbrtowc(&pwc, (const char *)a1 + v9, v13, &p);
      if ( v16 < 0xFFFFFFFE )
      {
        v13 -= v16;
        if ( !v16 )
          return v9 - a3 + v14;
        v9 += v16;
        v15 = wcwidth(pwc);
        if ( v15 < 0 )
          v15 = 1;
        v14 += v15;
      }
      else
      {
        ++v9;
        --v13;
        ++v14;
        p.__count = 0;
        p.__wch = 0;
      }
    }
    return v9 - a3 + v14;
  }
}
