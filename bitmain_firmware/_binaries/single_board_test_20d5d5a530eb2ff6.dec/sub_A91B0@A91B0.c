int __fastcall sub_A91B0(_DWORD *a1, int a2, int a3)
{
  int v3; // r3
  int v6; // r3
  int v8; // r0
  _BOOL4 v9; // r5
  int v10; // r0

  v3 = a1[31];
  if ( *(_DWORD *)(v3 + 216) )
  {
    if ( sub_D16D8(*(_DWORD *)(v3 + 216), a2, a3) )
      return 1;
    v6 = 369;
    goto LABEL_5;
  }
  if ( a3 >= 0 )
  {
    v8 = sub_B69CC(*(_DWORD *)(v3 + 212), a2, a3);
    v9 = a3 != v8;
    if ( v8 <= 0 )
      v10 = v9 | 1;
    else
      v10 = v9;
    if ( !v10 )
      return 1;
    v6 = 362;
LABEL_5:
    sub_95494(a1, 80, 587, 68, (int)"ssl/s3_enc.c", v6);
    return 0;
  }
  sub_95494(a1, 80, 587, 237, (int)"ssl/s3_enc.c", 356);
  return 0;
}
