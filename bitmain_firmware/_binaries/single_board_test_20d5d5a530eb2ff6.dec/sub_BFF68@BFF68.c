int __fastcall sub_BFF68(int a1, int a2, int *a3, int a4)
{
  int v5; // r3
  int v8; // r2
  int v9; // r0
  int v10; // r6
  _BOOL4 v11; // r4
  int v13; // [sp+Ch] [bp-10h] BYREF
  int v14; // [sp+10h] [bp-Ch] BYREF
  int v15; // [sp+14h] [bp-8h] BYREF

  if ( !a3 )
    return sub_B6C30(a1, (int)"\n") > 0;
  v5 = a3[2];
  v8 = *a3;
  v13 = v5;
  v9 = sub_C07B4(0, &v13, v8);
  v10 = v9;
  if ( !v9 )
    return sub_10D840(a1, a3, a4);
  sub_C082C(v9, &v14, &v15);
  v11 = sub_B69CC(a1, (int)"\n", 1) == 1
     && sub_12D850(a1, "r:   ", v14, 0, a4)
     && sub_12D850(a1, "s:   ", v15, 0, a4) != 0;
  sub_C0804(v10);
  return v11;
}
