int __fastcall sub_5CFCC(int a1, _DWORD *a2, int a3)
{
  int v5; // r5
  const char *v6; // r1
  int *i; // r4

  v5 = *(_DWORD *)sub_242FDC(a1);
  if ( a3 )
  {
    if ( a3 != 1 )
      sub_946E0("Usage: -file-list-shared-libraries [REGEXP]");
    a3 = *a2;
    if ( *a2 )
    {
      v6 = (const char *)re_comp(*a2);
      if ( v6 )
        sub_946E0("Invalid regexp: %s", v6);
    }
  }
  sub_200C00(1);
  sub_2578AC(v5, 1);
  for ( i = *(int **)(dword_487D2C + 48); i; i = (int *)*i )
  {
    if ( *((_BYTE *)i + 520) && (!a3 || re_exec(i + 130)) )
    {
      sub_2578AC(v5, 0);
      sub_6274C(v5, i);
      sub_25734C(v5, 0);
    }
  }
  return sub_25734C(v5, 1);
}
