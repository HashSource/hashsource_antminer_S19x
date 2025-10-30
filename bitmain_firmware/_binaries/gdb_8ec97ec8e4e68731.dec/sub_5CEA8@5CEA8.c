int __fastcall sub_5CEA8(int a1, int a2, int a3)
{
  int v5; // r5
  _DWORD *i; // r9
  _DWORD *j; // r8
  _DWORD *k; // r4
  int v9; // r0
  int v10; // r0

  v5 = *(_DWORD *)sub_242FDC(a1);
  if ( !sub_60344("-file-list-exec-source-files", a3, a2) )
    sub_946E0("-file-list-exec-source-files: Usage: No args");
  sub_2578AC(v5, 1);
  for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
  {
    for ( j = (_DWORD *)i[5]; j; j = (_DWORD *)*j )
    {
      for ( k = (_DWORD *)j[3]; k; k = (_DWORD *)*k )
      {
        sub_2578AC(v5, 0);
        v9 = ((int (__fastcall *)(_DWORD *))loc_2043D4)(k);
        sub_2575E8(v5, "file", v9);
        v10 = sub_204308(k);
        sub_2575E8(v5, "fullname", v10);
        sub_25734C(v5, 0);
      }
    }
  }
  sub_215390(sub_5CD6C, 0, 1);
  return sub_25734C(v5, 1);
}
