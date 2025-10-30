int __fastcall sub_1A00A8(const char *a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r0
  _DWORD *v6; // r0
  _DWORD *v8; // r0
  int v9; // r0
  int *v10; // r0
  const char *v11; // r2
  int v12; // r0
  int v13; // r4
  const char *v14; // r3
  _DWORD *v15; // r0

  v4 = (_DWORD *)sub_242F8C(a1);
  v5 = sub_25A418(*v4, "macro define %s", a1);
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    v8 = (_DWORD *)sub_242F8C(v5);
    v9 = sub_25A418(*v8, "(");
    if ( (2 * *(_DWORD *)(a2 + 4)) >> 2 > 0 )
    {
      v10 = (int *)sub_242F8C(v9);
      v11 = "";
      v12 = *v10;
      v13 = 0;
      while ( 1 )
      {
        v14 = *(const char **)(*(_DWORD *)(a2 + 8) + 4 * v13++);
        v9 = sub_25A418(v12, "%s%s", v11, v14);
        if ( (2 * *(_DWORD *)(a2 + 4)) >> 2 <= v13 )
          break;
        v12 = *(_DWORD *)sub_242F8C(v9);
        v11 = ", ";
      }
    }
    v15 = (_DWORD *)sub_242F8C(v9);
    v5 = sub_25A418(*v15, ")");
  }
  v6 = (_DWORD *)sub_242F8C(v5);
  return sub_25A418(*v6, " %s\n", *(const char **)(a2 + 12));
}
