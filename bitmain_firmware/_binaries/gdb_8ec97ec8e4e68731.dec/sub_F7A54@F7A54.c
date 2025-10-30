void __fastcall sub_F7A54(int a1, _DWORD *a2, int a3, char *s)
{
  int v6; // r5
  unsigned int v7; // r4
  size_t v8; // r10
  char *v9; // r0
  const char *v10; // r6
  void *ptr; // [sp+Ch] [bp-8h] BYREF

  v6 = 1;
  v7 = 0;
  v8 = strlen(s);
  while ( 1 )
  {
    if ( !v7 )
      goto LABEL_3;
    v9 = sub_99A4C(v7);
    v10 = v9;
    if ( v9 )
    {
      if ( strcmp(v9, "?") )
      {
        if ( !strncasecmp(v10, s, v8) )
        {
          ptr = (void *)sub_327254(v10);
          sub_F6C90(a2, &ptr, 0, 0, 0);
          if ( ptr )
            break;
        }
      }
    }
    if ( v6 == 152 )
      return;
LABEL_3:
    ++v7;
    ++v6;
  }
  free(ptr);
  if ( v6 != 152 )
    goto LABEL_3;
}
