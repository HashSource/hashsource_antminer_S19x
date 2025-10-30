int __fastcall sub_8A8D4(int a1, const char *a2, void *a3)
{
  int *v4; // r0
  int *v5; // r0
  int v10; // [sp+24h] [bp-10h]
  int v11; // [sp+28h] [bp-Ch]
  int v12; // [sp+28h] [bp-Ch]
  unsigned int maxlen; // [sp+2Ch] [bp-8h]
  int maxlenb; // [sp+2Ch] [bp-8h]
  int maxlena; // [sp+2Ch] [bp-8h]

  if ( *(_DWORD *)a1 )
  {
    maxlen = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4);
    v11 = vsnprintf(*(char **)(a1 + 4), maxlen, a2, a3);
    if ( v11 < 0 || maxlen <= v11 )
    {
      if ( v11 >= 0 )
      {
        if ( maxlen > v11 )
        {
          return 0;
        }
        else
        {
          v10 = sub_8A68C(a1, v11 - maxlen + 1);
          if ( v10 <= 0 )
          {
            if ( v10 >= 0 )
            {
              maxlena = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4);
              v12 = vsnprintf(*(char **)(a1 + 4), maxlena, a2, a3);
              if ( v12 >= 0 )
              {
                *(_DWORD *)(a1 + 4) += v12;
                return 0;
              }
              else
              {
                v5 = _errno_location();
                sub_89984(2, "src/buf.c", 252, "vsnprintf fail, errno[%d]", *v5);
                sub_89984(2, "src/buf.c", 253, "nwrite[%d], size_left[%ld], format[%s]", v12, maxlena, a2);
                return -1;
              }
            }
            else
            {
              sub_89984(2, "src/buf.c", 243, "zlog_buf_resize fail");
              return -1;
            }
          }
          else
          {
            sub_89984(2, "src/buf.c", 234, "conf limit to %ld, can't extend, so truncate", *(_DWORD *)(a1 + 20));
            maxlenb = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4);
            vsnprintf(*(char **)(a1 + 4), maxlenb, a2, a3);
            *(_DWORD *)(a1 + 4) += maxlenb - 1;
            sub_8A5EC((_DWORD *)a1);
            return 1;
          }
        }
      }
      else
      {
        v4 = _errno_location();
        sub_89984(2, "src/buf.c", 226, "vsnprintf fail, errno[%d]", *v4);
        sub_89984(2, "src/buf.c", 227, "nwrite[%d], size_left[%ld], format[%s]", v11, maxlen, a2);
        return -1;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4) += v11;
      return 0;
    }
  }
  else
  {
    sub_89984(2, "src/buf.c", 214, "pre-use of zlog_buf_resize fail, so can't convert");
    return -1;
  }
}
