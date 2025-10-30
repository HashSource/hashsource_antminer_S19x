int __fastcall sub_C5C18(int a1)
{
  int *v2; // r0
  _DWORD *v3; // r5
  int v4; // r4
  int v5; // r6
  const char *v6; // r1
  int v7; // r2
  const char *v8; // r3
  const char *v9; // r1
  char *v10; // r0
  int v11; // r0

  v2 = (int *)sub_242FDC(a1);
  v3 = *(_DWORD **)(a1 + 8);
  v4 = *v2;
  v5 = v3[34];
  sub_B74C8(v3[6]);
  sub_CE288(v4);
  if ( v3[5] )
    v6 = "Catchpoint ";
  else
    v6 = "Temporary catchpoint ";
  sub_257380(v4, v6, "Temporary catchpoint ", "Catchpoint ");
  if ( !sub_2573F0(v4) )
    sub_257504(v4, "bkptno", v3[6]);
  if ( v5 )
  {
    v8 = " (exception rethrown), ";
    v9 = " (exception caught), ";
    if ( v5 != 2 )
      v9 = " (exception rethrown), ";
  }
  else
  {
    v9 = " (exception thrown), ";
  }
  sub_257380(v4, v9, v7, v8);
  if ( sub_2573F0(v4) )
  {
    v10 = sub_9835C(0);
    sub_2575E8(v4, "reason", v10);
    v11 = sub_CD274(v3[5]);
    sub_2575E8(v4, "disp", v11);
    sub_257504(v4, "bkptno", v3[6]);
  }
  return 0;
}
