int __fastcall sub_205444(int a1)
{
  __int64 v1; // r0
  const char *v2; // r0
  int v3; // r3
  const char *v4; // r5
  int v5; // r4
  int v7; // [sp+Ch] [bp-8h] BYREF

  v7 = 0;
  sub_25B0DC(&v7, a1);
  if ( !v7 || (v2 = *(const char **)v7) == 0 || !*(_DWORD *)(v7 + 4) )
    sub_946E0("Incorrect usage, too few arguments in command");
  if ( *(_DWORD *)(v7 + 8) )
    sub_946E0("Incorrect usage, too many arguments in command");
  if ( !*v2 )
LABEL_20:
    sub_946E0("First argument must be at least one character long", HIDWORD(v1));
  sub_202C74(v2);
  if ( !v7 )
  {
LABEL_19:
    v1 = sub_94700(
           (int)"utils.h",
           203,
           "%s: Assertion `%s' failed.",
           "char* gdb_argv::operator[](int)",
           "m_argv != NULL");
    goto LABEL_20;
  }
  sub_202C74(*(const char **)(v7 + 4));
  v3 = v7;
  if ( !v7 )
  {
LABEL_18:
    sub_94700((int)"utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
    goto LABEL_19;
  }
  v4 = *(const char **)v7;
  v5 = dword_4893F0;
  if ( !dword_4893F0 )
    goto LABEL_16;
  while ( j_strcmp(*(const char **)v5, v4) )
  {
    v5 = *(_DWORD *)(v5 + 8);
    if ( !v5 )
      goto LABEL_13;
  }
  sub_202F3C((void **)v5);
LABEL_13:
  v3 = v7;
  if ( !v7 )
  {
    sub_94700((int)"utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
    goto LABEL_18;
  }
  v4 = *(const char **)v7;
LABEL_16:
  sub_2053D4((int)v4, *(_DWORD *)(v3 + 4));
  sub_2033DC();
  return sub_31DAD0(v7);
}
