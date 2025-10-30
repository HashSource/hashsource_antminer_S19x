void __fastcall sub_26CA90(_DWORD *a1, char *s)
{
  size_t v4; // r0
  _DWORD *v5; // r4
  size_t v6; // r8
  const char *v7; // r5
  void *ptr; // [sp+Ch] [bp-8h] BYREF

  v4 = strlen(s);
  v5 = (_DWORD *)dword_48AA0C;
  if ( dword_48AA0C )
  {
    v6 = v4;
    do
    {
      while ( 1 )
      {
        v7 = (const char *)v5[1];
        if ( !strncmp(v7, s, v6) )
        {
          ptr = (void *)sub_327254(v7);
          sub_F6C90(a1, &ptr, 0, 0, 0);
          if ( ptr )
            break;
        }
        v5 = (_DWORD *)*v5;
        if ( !v5 )
          return;
      }
      free(ptr);
      v5 = (_DWORD *)*v5;
    }
    while ( v5 );
  }
}
