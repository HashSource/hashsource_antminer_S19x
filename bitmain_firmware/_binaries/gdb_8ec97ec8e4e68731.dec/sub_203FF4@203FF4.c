_DWORD *__fastcall sub_203FF4(_DWORD *a1, const char *a2)
{
  int v3; // r4
  size_t v5; // r8
  size_t v6; // r6
  size_t v7; // r0
  void *v8; // r6
  char *v9; // r0

  v3 = dword_4893F0;
  if ( dword_4893F0 )
  {
    while ( !sub_202DE0(*(const char **)v3, a2) )
    {
      v3 = *(_DWORD *)(v3 + 8);
      if ( !v3 )
        goto LABEL_6;
    }
    v5 = strlen(*(const char **)v3);
    v6 = strlen(a2);
    v7 = strlen(*(const char **)(v3 + 4));
    v8 = sub_93028(v6 + v7 + 1 - v5);
    v9 = (char *)stpcpy(v8, *(_DWORD *)(v3 + 4));
    strcpy(v9, &a2[v5]);
    *a1 = v8;
    return a1;
  }
  else
  {
LABEL_6:
    *a1 = 0;
    return a1;
  }
}
