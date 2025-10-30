int __fastcall sub_9D388(int a1)
{
  int v1; // r0
  int v2; // r5
  int v3; // r6
  int v4; // r1
  int v5; // r4
  char *v6; // r5
  int v8; // [sp+0h] [bp-8h] BYREF
  char *s1; // [sp+4h] [bp-4h] BYREF

  v1 = sub_183688(a1);
  v2 = 0;
  v3 = sub_9D338(v1);
  v5 = sub_15F70C(v3, v4);
  do
  {
    ++v2;
    if ( !v5 )
      return 0;
    v5 = ((int (__fastcall *)(int))loc_15FA88)(v5);
  }
  while ( v2 != 3 );
LABEL_4:
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    do
    {
      sub_20DC2C(&s1, v5, &v8, 0);
      v6 = s1;
    }
    while ( !s1 );
    if ( !strcmp(s1, **(const char ***)(v3 + 4)) )
      break;
    v5 = ((int (__fastcall *)(int))loc_15FA88)(v5);
    if ( !s1 )
      goto LABEL_4;
    free(s1);
    if ( !v5 )
      return 0;
  }
  free(v6);
  sub_15E10C(v5);
  return sub_14CB9C("id.full_name");
}
