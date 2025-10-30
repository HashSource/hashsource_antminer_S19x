_DWORD *__fastcall sub_C9A0(_DWORD *result, int a2)
{
  _DWORD *v2; // r4
  int v4; // r2

  if ( result )
  {
    v2 = (_DWORD *)*result;
    if ( *result )
    {
      while ( 1 )
      {
        v4 = v2[4];
        if ( v4 == 363 )
          break;
LABEL_4:
        if ( v4 < 364 )
        {
          if ( v4 == 275 )
          {
            result = (_DWORD *)sub_38810(13, a2, 0);
            goto LABEL_20;
          }
          if ( v4 >= 276 )
          {
            if ( v4 == 328 )
            {
              result = (_DWORD *)sub_38810(9, a2, 0);
              goto LABEL_20;
            }
            if ( v4 == 362 )
            {
              result = (_DWORD *)sub_38810(28, a2, 0);
              goto LABEL_20;
            }
          }
          else
          {
            if ( v4 == 263 )
            {
              result = (_DWORD *)sub_38810(3, a2, 0);
              goto LABEL_20;
            }
            if ( v4 == 268 )
            {
              result = (_DWORD *)sub_38810(1, a2, 0);
              goto LABEL_20;
            }
          }
        }
        else
        {
          if ( v4 == 412 )
          {
            result = (_DWORD *)sub_38810(11, a2, 0);
            goto LABEL_20;
          }
          if ( v4 <= 412 )
          {
            if ( v4 == 380 )
            {
              result = (_DWORD *)sub_38810(8, a2, 0);
              goto LABEL_20;
            }
            if ( v4 == 385 )
            {
              result = (_DWORD *)sub_38810(32, a2, 0);
              goto LABEL_20;
            }
          }
          else
          {
            switch ( v4 )
            {
              case 436:
                result = (_DWORD *)sub_38810(30, a2, 0);
                goto LABEL_20;
              case 437:
                result = (_DWORD *)sub_38810(31, a2, 0);
                goto LABEL_20;
              case 435:
                result = (_DWORD *)sub_38810(29, a2, 0);
                goto LABEL_20;
            }
          }
        }
        result = (_DWORD *)sub_64E00(3, "can not apply enable/disable token %d, unknown", v4);
        v2 = (_DWORD *)*v2;
        if ( !v2 )
          return result;
      }
      while ( 1 )
      {
        result = (_DWORD *)sub_38810(10, a2, 0);
LABEL_20:
        v2 = (_DWORD *)*v2;
        if ( !v2 )
          break;
        v4 = v2[4];
        if ( v4 != 363 )
          goto LABEL_4;
      }
    }
  }
  return result;
}
