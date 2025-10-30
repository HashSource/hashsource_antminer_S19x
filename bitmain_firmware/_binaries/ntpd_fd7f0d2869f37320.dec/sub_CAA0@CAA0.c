_DWORD *__fastcall sub_CAA0(_DWORD *result, int a2)
{
  _DWORD *v2; // r4
  int v4; // r2

  if ( result )
  {
    v2 = (_DWORD *)*result;
    if ( *result )
    {
      do
      {
        while ( 1 )
        {
          v4 = v2[4];
          if ( v4 == 363 )
          {
            result = (_DWORD *)sub_39000(10, a2, 0);
            goto LABEL_10;
          }
          if ( v4 >= 364 )
          {
            if ( v4 == 412 )
            {
              result = (_DWORD *)sub_39000(11, a2, 0);
              goto LABEL_10;
            }
            if ( v4 <= 412 )
            {
              if ( v4 == 380 )
              {
                result = (_DWORD *)sub_39000(8, a2, 0);
                goto LABEL_10;
              }
              if ( v4 == 385 )
              {
                result = (_DWORD *)sub_39000(32, a2, 0);
                goto LABEL_10;
              }
            }
            else
            {
              switch ( v4 )
              {
                case 436:
                  result = (_DWORD *)sub_39000(30, a2, 0);
                  goto LABEL_10;
                case 437:
                  result = (_DWORD *)sub_39000(31, a2, 0);
                  goto LABEL_10;
                case 435:
                  result = (_DWORD *)sub_39000(29, a2, 0);
                  goto LABEL_10;
              }
            }
            goto LABEL_9;
          }
          if ( v4 == 275 )
          {
            result = (_DWORD *)sub_39000(13, a2, 0);
            goto LABEL_10;
          }
          if ( v4 < 276 )
            break;
          if ( v4 == 328 )
          {
            result = (_DWORD *)sub_39000(9, a2, 0);
            goto LABEL_10;
          }
          if ( v4 == 362 )
          {
            result = (_DWORD *)sub_39000(28, a2, 0);
            goto LABEL_10;
          }
LABEL_9:
          result = (_DWORD *)sub_65D40(3, "can not apply enable/disable token %d, unknown", v4);
LABEL_10:
          v2 = (_DWORD *)*v2;
          if ( !v2 )
            return result;
        }
        if ( v4 == 263 )
        {
          result = (_DWORD *)sub_39000(3, a2, 0);
          goto LABEL_10;
        }
        if ( v4 != 268 )
          goto LABEL_9;
        result = (_DWORD *)sub_39000(1, a2, 0);
        v2 = (_DWORD *)*v2;
      }
      while ( v2 );
    }
  }
  return result;
}
