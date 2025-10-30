int __fastcall sub_203434(int a1)
{
  int v1; // r4
  const char *v2; // r6
  int v3; // r7
  int v4; // r5
  int v5; // r7
  int v7; // [sp+4h] [bp-8h] BYREF

  v7 = 0;
  v1 = dword_4893F0;
  sub_25B0DC(&v7, a1);
  if ( v7 )
  {
    v2 = *(const char **)v7;
    if ( *(_DWORD *)v7 )
    {
      if ( *(_DWORD *)(v7 + 4) )
        sub_946E0("Incorrect usage, too many arguments in command");
      if ( !v1 )
        goto LABEL_19;
      goto LABEL_5;
    }
  }
  if ( !sub_25A3E4("Delete all source path substitution rules? ") )
    sub_946E0("Canceled");
  if ( v1 )
  {
    v2 = 0;
LABEL_5:
    v3 = 0;
    do
    {
      v4 = *(_DWORD *)(v1 + 8);
      if ( !v2 || !j_strcmp(v2, *(const char **)v1) )
      {
        sub_202F3C((void **)v1);
        v3 = 1;
      }
      v1 = v4;
    }
    while ( v4 );
    if ( v2 )
      v5 = v3 ^ 1;
    else
      v5 = 0;
    if ( !v5 )
      goto LABEL_14;
LABEL_19:
    sub_946E0("No substitution rule defined for `%s'", v2);
  }
LABEL_14:
  sub_2033DC();
  return sub_31DAD0(v7);
}
