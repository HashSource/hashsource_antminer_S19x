int __fastcall sub_69C7C(int a1, _DWORD *a2, int a3)
{
  int v5; // r4
  int v6; // r0
  int v7; // r6
  int v8; // r9
  int *v9; // r3
  int v10; // r5

  v5 = *(_DWORD *)sub_242FDC(a1);
  if ( a3 != 1 )
    sub_946E0("-symbol-list-lines: Usage: SOURCE_FILENAME");
  v6 = sub_21AB84(*a2);
  v7 = v6;
  if ( !v6 )
    sub_946E0("-symbol-list-lines: Unknown source file name.");
  v8 = sub_1B7250(*(_DWORD *)(*(_DWORD *)(v6 + 4) + 4));
  sub_2578AC(v5, 1);
  v9 = *(int **)(v7 + 8);
  if ( v9 && *v9 > 0 )
  {
    v10 = 0;
    do
    {
      sub_2578AC(v5, 0);
      sub_257630(v5, "pc", v8, *(_DWORD *)(*(_DWORD *)(v7 + 8) + 8 * v10 + 8));
      sub_257504(v5, "line", *(_DWORD *)(*(_DWORD *)(v7 + 8) + 8 * v10 + 4));
      sub_25734C(v5, 0);
      ++v10;
    }
    while ( **(_DWORD **)(v7 + 8) > v10 );
  }
  return sub_25734C(v5, 1);
}
