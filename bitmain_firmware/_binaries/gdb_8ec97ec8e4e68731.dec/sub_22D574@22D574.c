int __fastcall sub_22D574(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  int result; // r0
  const char *v6; // r0
  __int64 v7; // r0

  v4 = sub_183A88(a2, a3, a4);
  if ( !v4 || (result = *(_DWORD *)(v4 + 32)) == 0 )
  {
    v6 = (const char *)off_489AAC(&dword_4899A0, a2, a3, a4);
    v7 = sub_94700((int)"target.c", 2678, "Can't determine the current address space of thread %s\n", v6);
    return sub_22D5E8(v7, HIDWORD(v7));
  }
  return result;
}
