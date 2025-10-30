unsigned int __fastcall sub_28CCC8(unsigned int result, char *a2)
{
  int v2; // r9
  int v3; // r6
  bool v4; // zf
  int v6; // r5
  int v7; // r7
  int v8; // r7
  int v9; // r1
  int v10; // r12
  const char *v11; // r0
  char *v12; // r6
  char *v13; // r5
  int v14; // t1
  char *v15; // r8
  char *v16; // r5
  int v17; // t1

  if ( dword_48AE2C )
  {
    if ( dword_48AE2C == dword_48AE44 )
      v2 = dword_48AE14;
    else
      v2 = 0;
    if ( dword_48AE2C == dword_48AE44 )
      v2 -= dword_48AE1C;
  }
  else
  {
    v2 = dword_48AE14;
    if ( dword_48AE14 && dword_48AE10 > dword_490144 )
      v2 = dword_48AE1C;
  }
  v3 = dword_48AE04;
  v4 = dword_48AE04 == 0;
  if ( !dword_48AE04 )
    v4 = result == 0;
  if ( !v4 )
  {
    v6 = result;
    result = _ctype_get_mb_cur_max();
    if ( result <= 1 || dword_48BB60 )
    {
      v8 = v6;
      goto LABEL_23;
    }
    v7 = dword_48AE08;
    if ( dword_48AE08 == v6 )
    {
      result = memcmp(a2, (const void *)dword_48AE0C, v6);
      if ( !result )
      {
        v8 = dword_48AE10;
        dword_48AE48 = 1;
        goto LABEL_23;
      }
    }
    else if ( dword_48AE08 < v6 && dword_48AE0C && !memcmp(a2, (const void *)dword_48AE0C, dword_48AE08) )
    {
      result = sub_28C428(a2, v7, v6, 1);
      dword_48AE48 = 1;
      v8 = result + dword_48AE10;
      goto LABEL_23;
    }
    result = sub_28C428(a2, 0, v6, 1);
    v8 = result;
    if ( dword_48AE20 < v6
      || dword_48AE10 >= dword_490144
      && (result = dword_48AE44, dword_48AE2C == dword_48AE44)
      && ((result = dword_48AE14, dword_48AE14 >= v8) ? (v10 = v8) : (v10 = dword_48AE14),
          v2 <= v10 && dword_48AE20 - dword_48AE2C * dword_490144 - dword_48AE14 < v6) )
    {
      v8 -= v2;
      dword_48AE48 = 1;
    }
LABEL_23:
    if ( v8 == v3 )
      return result;
    result = _ctype_get_mb_cur_max();
    if ( result <= 1 )
    {
      v9 = dword_48AE04;
    }
    else
    {
      v9 = dword_48AE04;
      if ( !dword_48BB60 )
        goto LABEL_27;
    }
    v9 -= v2;
LABEL_27:
    if ( !v8 || v8 + 1 < dword_48AE04 - v8 || dword_4707A0 && dword_490144 == v9 )
    {
      result = tputs((const char *)dword_490140, 1, (int (*)(int))sub_293B80);
      v3 = 0;
      dword_48AE04 = 0;
    }
    if ( v3 < v8 )
    {
      result = _ctype_get_mb_cur_max();
      if ( result <= 1 || dword_48BB60 )
      {
        if ( v3 < v6 )
        {
          v12 = &a2[v3 - 1];
          v13 = &a2[v6 - 1];
          do
          {
            v14 = (unsigned __int8)*++v12;
            result = IO_putc(v14, (_IO_FILE *)dword_48AAB0);
          }
          while ( v12 != v13 );
        }
      }
      else
      {
        v11 = (const char *)dword_490110;
        if ( dword_490110 )
        {
          while ( 1 )
          {
            ++v3;
            result = tputs(v11, 1, (int (*)(int))sub_293B80);
            if ( v8 == v3 )
              break;
            v11 = (const char *)dword_490110;
          }
        }
        else
        {
          result = tputs((const char *)dword_490140, 1, (int (*)(int))sub_293B80);
          if ( v6 > 0 )
          {
            v15 = a2 - 1;
            v16 = &v15[v6];
            do
            {
              v17 = (unsigned __int8)*++v15;
              result = IO_putc(v17, (_IO_FILE *)dword_48AAB0);
            }
            while ( v16 != v15 );
          }
        }
      }
    }
    else if ( v3 > v8 )
    {
      result = sub_29451C(v3 - v8);
    }
    dword_48AE04 = v8;
  }
  return result;
}
