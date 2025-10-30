int __fastcall sub_84458(int a1)
{
  int *v2; // r0
  glob_t pglob; // [sp+14h] [bp-38h] BYREF
  void *v7; // [sp+38h] [bp-14h]
  int v8; // [sp+3Ch] [bp-10h]
  char **gl_pathv; // [sp+40h] [bp-Ch]
  size_t gl_pathc; // [sp+44h] [bp-8h]

  v8 = 0;
  *(_DWORD *)(a1 + 1088) = sub_8B878(sub_841E8);
  if ( *(_DWORD *)(a1 + 1088) )
  {
    v8 = glob((const char *)(a1 + 40), 7, 0, &pglob);
    if ( v8 != 3 )
    {
      if ( v8 )
      {
        v2 = _errno_location();
        sub_8CD10(2, "src/rotater.c", 200, "glob err, rc=[%d], errno[%d]", v8, *v2);
        return -1;
      }
      gl_pathv = pglob.gl_pathv;
      gl_pathc = pglob.gl_pathc;
      while ( gl_pathc-- )
      {
        v7 = sub_84254(a1, *gl_pathv);
        if ( v7 )
        {
          v8 = sub_8BDEC(*(_DWORD *)(a1 + 1088), sub_84414, v7);
          if ( v8 )
          {
            sub_8CD10(2, "src/rotater.c", 219, "zc_arraylist_sortadd fail");
            globfree(&pglob);
            return -1;
          }
        }
        else
        {
          sub_8CD10(1, "src/rotater.c", 211, "not the expect pattern file");
        }
        ++gl_pathv;
      }
    }
    globfree(&pglob);
    return 0;
  }
  sub_8CD10(2, "src/rotater.c", 191, "zc_arraylist_new fail");
  return -1;
}
