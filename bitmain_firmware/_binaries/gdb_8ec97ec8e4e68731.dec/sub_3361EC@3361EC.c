int __fastcall sub_3361EC(char *a1, char *a2, unsigned int a3)
{
  size_t v4; // r0
  int v5; // r4
  size_t v7; // r0
  size_t v8; // r4
  size_t v9; // r0
  size_t v10; // r6
  size_t v11; // r7
  unsigned int v12; // r0
  _BOOL4 v13; // r2
  bool v14; // cf
  size_t v15; // r0
  size_t v16; // r2
  wchar_t *v17; // r4
  wchar_t *v18; // r0
  wint_t *v19; // r8
  size_t v20; // r2
  wchar_t *v21; // r4
  char *s; // [sp+8h] [bp-2Ch] BYREF
  char *src; // [sp+Ch] [bp-28h] BYREF
  mbstate_t ps; // [sp+10h] [bp-24h] BYREF

  src = a1;
  s = a2;
  if ( _ctype_get_mb_cur_max() != 1 )
  {
    ps.__wch = 0;
    ps.__count = 0;
    v7 = mbsrtowcs(0, (const char **)&src, 0, &ps);
    v8 = v7 + 1;
    if ( v7 != -1 )
    {
      if ( !mbsinit(&ps) )
        _assert_fail("mbsinit (&ps)", "../.././gnulib/import/fnmatch.c", 0x125u, "gnu_fnmatch");
      v9 = mbsrtowcs(0, (const char **)&s, 0, &ps);
      v10 = v9 + 1;
      v11 = v9;
      if ( v9 != -1 )
      {
        if ( !mbsinit(&ps) )
          _assert_fail("mbsinit (&ps)", "../.././gnulib/import/fnmatch.c", 0x129u, "gnu_fnmatch");
        v12 = v8 + v10;
        v13 = __CFADD__(v8, v10);
        if ( !v13 && v12 <= 0x3FFFFFFF )
        {
          v14 = v12 >= 0x7D0;
          v15 = 4 * v12;
          if ( !v14 )
          {
            v16 = v8;
            v17 = (wchar_t *)&(&s)[v8];
            mbsrtowcs((wchar_t *)&s, (const char **)&src, v16, &ps);
            if ( mbsinit(&ps) )
            {
              mbsrtowcs(v17, (const char **)&s, v10, &ps);
              return sub_3345D8((wint_t *)&s, v17, (unsigned int)&v17[v11], (a3 >> 2) & 1, a3);
            }
LABEL_19:
            _assert_fail("mbsinit (&ps)", "../.././gnulib/import/fnmatch.c", 0x143u, "gnu_fnmatch");
          }
          v18 = (wchar_t *)malloc(v15);
          v19 = (wint_t *)v18;
          if ( v18 )
          {
            v20 = v8;
            v21 = &v18[v8];
            mbsrtowcs(v18, (const char **)&src, v20, &ps);
            if ( mbsinit(&ps) )
            {
              mbsrtowcs(v21, (const char **)&s, v10, &ps);
              v5 = sub_3345D8(v19, v21, (unsigned int)&v21[v11], (a3 >> 2) & 1, a3);
              free(v19);
              return v5;
            }
            goto LABEL_19;
          }
        }
        v5 = -1;
        *_errno_location() = 12;
        return v5;
      }
    }
  }
  v4 = strlen(s);
  return sub_335718(src, s, (unsigned int)&s[v4], (a3 >> 2) & 1, a3);
}
