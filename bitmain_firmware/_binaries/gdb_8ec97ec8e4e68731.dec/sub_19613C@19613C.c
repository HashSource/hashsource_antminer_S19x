int __fastcall sub_19613C(_DWORD *a1, unsigned int a2)
{
  unsigned int v5; // r2
  bool v6; // cc
  unsigned int *v7; // r0
  unsigned int *v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // r3

  if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(a2 + 32) >> 3)) != 8 )
    return 1;
  v5 = **(char **)(sub_171258(*(_DWORD **)(a2 + 24)) + 24);
  v6 = v5 > 0x18;
  if ( v5 != 24 )
    v6 = (unsigned __int8)(v5 - 3) > 1u;
  if ( !v6 )
  {
    v7 = (unsigned int *)sub_324030(*a1, a2, 1);
    if ( !*v7 )
    {
      *v7 = a2;
      v8 = (unsigned int *)a1[1];
      if ( !v8 )
        goto LABEL_14;
      v9 = v8[1];
      v10 = *v8;
      if ( v9 == *v8 )
        goto LABEL_14;
      while ( v9 <= v10 )
      {
        v8 = (unsigned int *)sub_94700(
                               (int)"linespec.c",
                               3593,
                               "%s: Assertion `%s' failed.",
                               "symbol** VEC_symbolp_quick_push(VEC_symbolp*, symbolp, const char*, unsigned int)",
                               "quick_push");
LABEL_14:
        v8 = sub_99FE0(v8, 1);
        v10 = *v8;
        v9 = v8[1];
        a1[1] = v8;
      }
      *v8 = v10 + 1;
      v8[v10 + 2] = a2;
    }
  }
  return 1;
}
