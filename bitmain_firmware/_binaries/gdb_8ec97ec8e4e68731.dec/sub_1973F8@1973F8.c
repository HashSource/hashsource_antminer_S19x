int __fastcall sub_1973F8(_DWORD **a1, unsigned int a2)
{
  _DWORD *v2; // r4
  unsigned int *v3; // r0
  unsigned int v5; // r2
  unsigned int v6; // r3
  _DWORD *v8; // r0

  v8 = (_DWORD *)**a1;
  if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(a2 + 32) >> 3)) != 10 && !*(_DWORD *)(*v8 + 24) )
    return 1;
  v2 = v8;
  v3 = (unsigned int *)v8[2];
  if ( !v3 || (v5 = v3[1], v6 = *v3, v5 == *v3) )
  {
    v3 = sub_99FE0(v3, 1);
    v6 = *v3;
    v5 = v3[1];
    v2[2] = v3;
  }
  if ( v5 <= v6 )
  {
    sub_94700(
      (int)"linespec.c",
      216,
      "%s: Assertion `%s' failed.",
      "symbol** VEC_symbolp_quick_push(VEC_symbolp*, symbolp, const char*, unsigned int)",
      "quick_push");
    JUMPOUT(0x1973F4);
  }
  *v3 = v6 + 1;
  v3[v6 + 2] = a2;
  return 1;
}
