int __fastcall sub_15DE14(int a1)
{
  int *v2; // r0
  int v3; // r0
  int v4; // r4
  int v5; // r6
  int v6; // r3
  int *v7; // r3
  bool v8; // zf
  int *v9; // r3
  int v10; // r3
  bool v11; // cc
  __int64 v13; // r0

  v2 = *(int **)(a1 + 76);
  if ( !v2 )
  {
    v13 = ((__int64 (*)(void))loc_15E50)();
    return sub_15DEBC(v13, HIDWORD(v13));
  }
  v3 = sub_15DBFC(v2);
  v4 = *(_DWORD *)(a1 + 76);
  v5 = v3;
  while ( 1 )
  {
    v7 = *(int **)(v4 + 16);
    if ( !v7 )
      break;
    v6 = *v7;
    if ( v6 != 2 )
      goto LABEL_7;
LABEL_4:
    v4 = *(_DWORD *)(v4 + 76);
  }
  sub_160DD4(v4, v4 + 12);
  v6 = **(_DWORD **)(v4 + 16);
  if ( v6 == 2 )
    goto LABEL_4;
LABEL_7:
  v8 = v6 == 0;
  if ( v6 )
    v8 = v6 == 3;
  if ( v8 )
  {
    v9 = *(int **)(a1 + 16);
    if ( !v9 )
    {
      sub_160DD4(a1, a1 + 12);
      v9 = *(int **)(a1 + 16);
    }
    v10 = *v9;
    v11 = v10 != 0;
    if ( v10 )
      v11 = (unsigned int)(v10 - 2) > 1;
    if ( !v11 )
      --v5;
  }
  return v5;
}
