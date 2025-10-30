int __fastcall sub_8749C(int a1, void *a2, int a3, int *a4, int a5)
{
  char *v11; // [sp+1Ch] [bp-18h] BYREF
  int v12; // [sp+20h] [bp-14h]
  int v13; // [sp+24h] [bp-10h]
  size_t n; // [sp+28h] [bp-Ch]
  char *s; // [sp+2Ch] [bp-8h]

  s = (char *)(a1 + 1);
  v11 = strrchr((const char *)(a1 + 1), 34);
  if ( v11 )
  {
    n = v11 - s;
    if ( a3 - 1 >= (unsigned int)(v11 - s) )
    {
      memcpy(a2, s, n);
      if ( sub_8D28C(a2, a3) )
      {
        sub_8CD10(2, "src/rule.c", 528, "zc_str_replace_env fail");
        return -1;
      }
      else if ( strchr((const char *)a2, 37) )
      {
        v13 = sub_8B878(sub_8A5D4);
        if ( a4 )
        {
          for ( s = (char *)a2; ; s = v11 )
          {
            if ( !*s )
            {
              *a4 = v13;
              return 0;
            }
            v12 = sub_8A644(s, &v11, a5);
            if ( !v12 )
            {
              sub_8CD10(2, "src/rule.c", 546, "zlog_spec_new fail");
              goto LABEL_19;
            }
            if ( sub_8BC74(v13, v12) )
              break;
          }
          sub_8CD10(2, "src/rule.c", 551, "zc_arraylist_add fail");
LABEL_19:
          if ( v13 )
            sub_8B980(v13);
          if ( v12 )
            sub_8A5D4(v12);
          return -1;
        }
        else
        {
          sub_8CD10(2, "src/rule.c", 539, "zc_arraylist_new fail");
          return -1;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      sub_8CD10(2, "src/rule.c", 521, "file_path too long %ld > %ld", n, a3 - 1);
      return -1;
    }
  }
  else
  {
    sub_8CD10(2, "src/rule.c", 516, "matching \" not found in conf line[%s]", (const char *)a1);
    return -1;
  }
}
