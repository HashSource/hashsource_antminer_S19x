char *__fastcall sub_7FA00(const char *a1, _DWORD *a2)
{
  int *v3; // r0
  char *dest; // [sp+10h] [bp-Ch]
  size_t v8; // [sp+14h] [bp-8h]

  if ( a1 )
  {
    if ( a2 )
    {
      v8 = strlen(a1);
      if ( v8 <= 0x400 )
      {
        dest = (char *)calloc(1u, 0x450u);
        if ( dest )
        {
          strcpy(dest, a1);
          *((_DWORD *)dest + 257) = v8;
          if ( sub_7F770((int)dest, a2) )
          {
            sub_8CD10(2, "src/category.c", 135, "zlog_category_fit_rules fail");
            sub_7F644(dest);
            return 0;
          }
          else
          {
            sub_7F53C((const void **)dest, 0);
            return dest;
          }
        }
        else
        {
          v3 = _errno_location();
          sub_8CD10(2, "src/category.c", 129, "calloc fail, errno[%d]", *v3);
          return 0;
        }
      }
      else
      {
        sub_8CD10(2, "src/category.c", 124, "name[%s] too long", a1);
        return 0;
      }
    }
    else
    {
      sub_8CD10(2, "src/category.c", 120, "rules is null or 0");
      return 0;
    }
  }
  else
  {
    sub_8CD10(2, "src/category.c", 119, "name is null or 0");
    return 0;
  }
}
