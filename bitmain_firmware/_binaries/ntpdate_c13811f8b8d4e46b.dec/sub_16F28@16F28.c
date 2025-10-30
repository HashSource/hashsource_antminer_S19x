bool __fastcall sub_16F28(_DWORD *a1, const char *a2)
{
  void *v3; // r0
  void *v4; // r0
  const char *v6; // [sp+4h] [bp-10h]

  if ( !a1 || *a1 != 1281582695 )
    sub_1073C();
  v3 = (void *)a1[8];
  if ( a2 && *a2 )
  {
    if ( v3 )
    {
      v6 = a2;
      free(v3);
      a2 = v6;
    }
    v4 = sub_97E0(a2);
    a1[8] = v4;
    return v4 == 0;
  }
  else
  {
    if ( v3 )
      free(v3);
    a1[8] = 0;
    return 0;
  }
}
