int __fastcall sub_985D4(_DWORD *a1, const char *a2)
{
  int v3; // r3
  int v5; // r12
  __int16 *v6; // r1
  _BYTE *v8; // r0
  int v9; // r3
  int v10; // t1

  if ( a2 && (v3 = *(unsigned __int8 *)a2, *a2) )
  {
    if ( v3 == 126 )
    {
      sub_980FC(a1, a2);
      return (int)a1;
    }
    else if ( v3 == 47 )
    {
      *a1 = sub_327254(a2);
      return (int)a1;
    }
    else
    {
      v5 = *(unsigned __int8 *)(dword_48A4F8 + strlen((const char *)dword_48A4F8) - 1);
      v6 = (__int16 *)"";
      if ( v5 != 47 )
        v6 = &word_398974;
      *a1 = sub_31E27C(dword_48A4F8, v6, a2);
      return (int)a1;
    }
  }
  else
  {
    v8 = (_BYTE *)sub_94700(
                    (int)"common/pathstuff.c",
                    132,
                    "%s: Assertion `%s' failed.",
                    "gdb::unique_xmalloc_ptr<char> gdb_abspath(const char*)",
                    "path != NULL && path[0] != '\\0'");
    v9 = (unsigned __int8)*v8;
    if ( *v8 )
    {
      while ( v9 != 47 )
      {
        v10 = (unsigned __int8)*++v8;
        v9 = v10;
        if ( !v10 )
          return v9;
      }
      return 1;
    }
    else
    {
      return v9;
    }
  }
}
