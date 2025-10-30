int __fastcall sub_FCBEC(const char *a1, const char *a2, int a3)
{
  size_t v5; // r4
  size_t v6; // r8
  int result; // r0
  _DWORD savedregs[8]; // [sp+0h] [bp-1Ch] BYREF

  v5 = a3 + sub_100308(&a2[a3]);
  if ( a2[v5] != 58 || (result = sub_FCBEC(a1, a2, v5 + 2)) == 0 )
  {
    v6 = strlen(a1);
    strncpy((char *)savedregs, a2, v5);
    *(_WORD *)((char *)savedregs + v5) = *(_WORD *)"::";
    memcpy((char *)savedregs + v5 + 2, a1, v6 + 1);
    return ((int (__fastcall *)(_DWORD *))loc_21DA00)(savedregs);
  }
  return result;
}
