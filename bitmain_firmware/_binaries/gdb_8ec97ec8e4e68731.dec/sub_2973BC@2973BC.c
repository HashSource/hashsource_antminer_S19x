int sub_2973BC()
{
  size_t v0; // r0
  char *v1; // r0
  char *v2; // r0
  int v3; // r6
  const char *v4; // r9
  int v5; // r0
  int v6; // r10
  char *v7; // r0
  int i; // r4
  int v9; // r3
  int j; // r0
  size_t v11; // r0
  char *v12; // r0

  v0 = strlen((const char *)dword_48AAD4);
  v1 = (char *)sub_93028(v0 + 1);
  v2 = strcpy(v1, (const char *)dword_48AAD4);
  v3 = dword_48B6E0;
  v4 = v2;
  v5 = sub_2978A8(v2);
  v6 = v5;
  if ( dword_490158 == v5 )
    v7 = (char *)sub_297958(v5);
  else
    v7 = (char *)sub_297918(v5);
  for ( i = (int)v7; v7; i = (int)v7 )
  {
    v9 = *(_DWORD *)(i + 8);
    if ( v9 )
    {
      if ( v9 == v3 )
        v3 = 0;
      for ( j = sub_297354(i); dword_48B6E0; j = sub_2924E0(j) )
        ;
      if ( *(_DWORD *)i )
        free(*(void **)i);
      v11 = strlen((const char *)dword_48AAD4);
      v12 = (char *)sub_93028(v11 + 1);
      v7 = strcpy(v12, (const char *)dword_48AAD4);
      *(_DWORD *)(i + 8) = 0;
      *(_DWORD *)i = v7;
    }
    v7 = (char *)sub_297958(v7);
  }
  dword_48B6E0 = v3;
  sub_2978B8(v6);
  sub_2950FC(v4, 0);
  sub_27F3E4();
  return sub_297758(v4);
}
