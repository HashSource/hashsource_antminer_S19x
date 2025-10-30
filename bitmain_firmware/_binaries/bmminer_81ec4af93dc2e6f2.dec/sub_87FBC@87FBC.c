_DWORD *__fastcall sub_87FBC(int a1, int a2, int a3, size_t a4)
{
  int *v4; // r0
  _DWORD *v11; // [sp+1Ch] [bp-8h]

  v11 = calloc(1u, 0x20u);
  if ( v11 )
  {
    *v11 = a1;
    v11[1] = sub_8032C();
    if ( v11[1] )
    {
      v11[2] = sub_7F0D0(a4);
      if ( v11[2] )
      {
        v11[3] = sub_8A3A4(1025, 1025, 0);
        if ( v11[3] )
        {
          v11[4] = sub_8A3A4(1025, 1025, 0);
          if ( v11[4] )
          {
            v11[5] = sub_8A3A4(1025, 1025, 0);
            if ( v11[5] )
            {
              v11[6] = sub_8A3A4(a2, a3, "...\n");
              if ( v11[6] )
              {
                v11[7] = sub_8A3A4(a2, a3, "...\n");
                if ( v11[7] )
                  return v11;
                sub_89984(2, "src/thread.c", 114, "zlog_buf_new fail");
              }
              else
              {
                sub_89984(2, "src/thread.c", 108, "zlog_buf_new fail");
              }
            }
            else
            {
              sub_89984(2, "src/thread.c", 102, "zlog_buf_new fail");
            }
          }
          else
          {
            sub_89984(2, "src/thread.c", 96, "zlog_buf_new fail");
          }
        }
        else
        {
          sub_89984(2, "src/thread.c", 90, "zlog_buf_new fail");
        }
      }
      else
      {
        sub_89984(2, "src/thread.c", 84, "zlog_event_new fail");
      }
    }
    else
    {
      sub_89984(2, "src/thread.c", 78, "zlog_mdc_new fail");
    }
    sub_87E68((int)v11);
    return 0;
  }
  v4 = _errno_location();
  sub_89984(2, "src/thread.c", 70, "calloc fail, errno[%d]", *v4);
  return 0;
}
