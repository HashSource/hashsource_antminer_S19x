int __fastcall sub_219790(_DWORD *a1, int a2)
{
  __int64 v3; // r0
  _DWORD *v4; // r3

  if ( *a1 )
    return *(_DWORD *)(*a1 + 4 * a2);
  v3 = sub_94700((int)"utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
  v4 = *(_DWORD **)v3;
  *v4 = HIDWORD(v3);
  return 1;
}
