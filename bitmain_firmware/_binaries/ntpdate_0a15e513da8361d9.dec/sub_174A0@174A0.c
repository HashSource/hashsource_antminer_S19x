bool __fastcall sub_174A0(_DWORD *a1, const char *a2)
{
  void *v4; // r0
  void *v5; // r0
  void *v7; // r0

  if ( !a1 || *a1 != 1281582695 )
    sub_10C38();
  if ( a2 && *a2 )
  {
    v4 = (void *)a1[8];
    if ( v4 )
      free(v4);
    v5 = sub_9BF0(a2);
    a1[8] = v5;
    return v5 == 0;
  }
  else
  {
    v7 = (void *)a1[8];
    if ( v7 )
      free(v7);
    a1[8] = 0;
    return 0;
  }
}
