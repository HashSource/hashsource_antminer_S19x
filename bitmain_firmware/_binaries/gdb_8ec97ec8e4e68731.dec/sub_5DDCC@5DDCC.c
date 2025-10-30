int __fastcall sub_5DDCC(int a1, const char **a2, int a3)
{
  int v3; // r0
  int v4; // r5
  bool v5; // r7
  int v6; // r6
  int v7; // r4
  _DWORD *v9; // r0
  int v11; // r1

  if ( a3 > 1 )
    sub_946E0("-stack-info-depth: Usage: [MAX_DEPTH]");
  if ( a3 != 1 )
  {
    v3 = sub_15F70C(a1, a2);
    v4 = v3;
    if ( v3 )
    {
      v5 = 0;
      v6 = -1;
      goto LABEL_5;
    }
LABEL_17:
    v7 = 0;
    goto LABEL_11;
  }
  v6 = strtol(*a2, 0, 10);
  v3 = sub_15F70C(v6, v11);
  v4 = v3;
  if ( !v3 )
    goto LABEL_17;
  v5 = v6 != -1;
  if ( v6 <= 0 && v6 != -1 )
    goto LABEL_17;
LABEL_5:
  v7 = 0;
  do
  {
    sub_258BD4(v3);
    ++v7;
    v3 = ((int (__fastcall *)(int))loc_15FA88)(v4);
    v4 = v3;
    if ( !v3 )
      break;
  }
  while ( v7 < v6 || !v5 );
LABEL_11:
  v9 = (_DWORD *)sub_242FDC(v3);
  return sub_257504(*v9, "depth", v7);
}
