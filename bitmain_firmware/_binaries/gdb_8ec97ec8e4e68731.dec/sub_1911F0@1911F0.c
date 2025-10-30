void __fastcall sub_1911F0(int a1, _DWORD *a2, char *s, char *a4)
{
  size_t v7; // r0
  const char **v8; // r4
  int v9; // r8
  size_t v10; // r9
  const char *v11; // r5
  void *ptr[2]; // [sp+Ch] [bp-8h] BYREF

  v7 = strlen(s);
  v8 = (const char **)dword_4879C4;
  v9 = dword_4879C8;
  if ( dword_4879C4 != dword_4879C8 )
  {
    v10 = v7;
    do
    {
      while ( 1 )
      {
        v11 = *v8;
        if ( !strncmp(*v8, s, v10) )
        {
          sub_F574C((int *)ptr, v11, s, a4);
          sub_F6C90(a2, ptr, 0, 0, 0);
          if ( ptr[0] )
            break;
        }
        v8 += 2;
        if ( (const char **)v9 == v8 )
          return;
      }
      v8 += 2;
      free(ptr[0]);
    }
    while ( (const char **)v9 != v8 );
  }
}
