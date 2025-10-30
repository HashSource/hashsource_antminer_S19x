char *__fastcall sub_80700(const char *a1, int a2)
{
  int *v3; // r0
  char *dest; // [sp+14h] [bp-8h]

  if ( a1 )
  {
    if ( a2 )
    {
      dest = (char *)calloc(1u, 0x408u);
      if ( dest )
      {
        if ( strlen(a1) <= 0x400 )
        {
          strcpy(dest, a1);
          *((_DWORD *)dest + 257) = a2;
          sub_80608((const void **)dest, 0);
          return dest;
        }
        else
        {
          sub_89984(2, "src/record.c", 41, "name[%s] is too long", a1);
          sub_8068C(dest);
          return 0;
        }
      }
      else
      {
        v3 = _errno_location();
        sub_89984(2, "src/record.c", 36, "calloc fail, errno[%d]", *v3);
        return 0;
      }
    }
    else
    {
      sub_89984(2, "src/record.c", 32, "output is null or 0");
      return 0;
    }
  }
  else
  {
    sub_89984(2, "src/record.c", 31, "name is null or 0");
    return 0;
  }
}
