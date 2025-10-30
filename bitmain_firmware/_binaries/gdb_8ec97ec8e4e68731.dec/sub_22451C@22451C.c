int __fastcall sub_22451C(const char *a1)
{
  int v2; // r3
  unsigned int v3; // r4
  int v4; // r9
  int v5; // r8
  int v6; // r5
  int (__fastcall *v7)(int); // r3

  if ( !dword_46DBC0 )
    goto LABEL_14;
  v2 = dword_489C88;
  if ( !dword_489C88 || !*(_DWORD *)dword_489C88 )
    goto LABEL_14;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = *(_DWORD *)(v2 + 4 * (v3 + 2));
    v7 = *(int (__fastcall **)(int))(v6 + 248);
    if ( v7 != sub_222F2C && v7(v6) )
    {
      ++v4;
      v5 = v6;
    }
    v2 = dword_489C88;
    ++v3;
  }
  while ( dword_489C88 && v3 < *(_DWORD *)dword_489C88 );
  if ( v4 != 1 || v5 == 0 )
  {
LABEL_14:
    if ( a1 )
      sub_946E0("Don't know how to %s.  Try \"help target\".", a1);
    return 0;
  }
  return v5;
}
