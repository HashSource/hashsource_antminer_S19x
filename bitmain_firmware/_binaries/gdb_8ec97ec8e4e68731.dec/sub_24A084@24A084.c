int __fastcall sub_24A084(int result)
{
  int v1; // r3
  int v2; // r6
  unsigned int v3; // r5
  int v4; // r4
  __int64 v5; // r0
  char *v6; // r0

  v1 = dword_48A910;
  if ( dword_48A910 && *(_DWORD *)dword_48A910 )
  {
    v2 = result;
    v3 = 0;
    do
    {
      v4 = v1 + 40 * v3++;
      sub_2594B0(v2, "tvariable $%s", *(const char **)(v4 + 8));
      v5 = *(_QWORD *)(v4 + 16);
      if ( v5 )
      {
        v6 = sub_988AC(v5);
        sub_2594B0(v2, " = %s", v6);
      }
      result = sub_2594B0(v2, (const char *)&word_356638);
      v1 = dword_48A910;
    }
    while ( dword_48A910 && v3 < *(_DWORD *)dword_48A910 );
  }
  return result;
}
