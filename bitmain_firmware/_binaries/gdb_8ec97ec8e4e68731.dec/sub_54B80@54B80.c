void __fastcall sub_54B80(int a1, const char **a2, char *s, int a4)
{
  size_t v8; // r0
  const char *v9; // r4
  size_t v10; // r8
  const char *v11; // t1
  const char *v12; // t1
  void *ptr; // [sp+Ch] [bp-4h] BYREF

  v8 = strlen(s);
  v9 = *a2;
  if ( *a2 )
  {
    v10 = v8;
    do
    {
      while ( 1 )
      {
        if ( !strncmp(v9, s, v10) )
        {
          sub_F574C(&ptr, v9, s, a4);
          sub_F6C90(a1, &ptr, 0);
          if ( ptr )
            break;
        }
        v11 = a2[1];
        ++a2;
        v9 = v11;
        if ( !v11 )
          return;
      }
      free(ptr);
      v12 = a2[1];
      ++a2;
      v9 = v12;
    }
    while ( v12 );
  }
}
