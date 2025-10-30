int __fastcall sub_1E3454(int *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r3
  int v10; // r4
  void *v11; // r0
  int v13; // r7
  int v14; // r0
  bool v15; // cc
  int v16; // r2
  _BOOL4 v17; // r1

  v4 = sub_16F654((int)a1);
  v5 = ((int (__fastcall *)(int))loc_1E2770)(v4);
  v6 = dword_488C94;
  v7 = sub_16F654(v5);
  v8 = ((int (__fastcall *)(int))loc_1E2770)(v7);
  if ( *a2 )
  {
    v9 = *a1;
    if ( *a1 <= 0 )
    {
      v10 = 0x4000;
      goto LABEL_6;
    }
  }
  else
  {
    v13 = v8;
    v14 = sub_1E2890(v8);
    v9 = *a1;
    v15 = v14 <= *a1;
    if ( v14 > *a1 )
      v15 = v9 <= 0;
    if ( v15 )
      v9 = v14;
    if ( !*(_DWORD *)(v6 + 12) )
    {
      v16 = *(_DWORD *)(v13 + 8);
      v17 = v16 < v9;
      if ( v16 <= 0 )
        v17 = 0;
      if ( v17 )
        v9 = *(_DWORD *)(v13 + 8);
    }
  }
  if ( v9 < 20 )
    v10 = 20;
  else
    v10 = v9;
LABEL_6:
  if ( *(_DWORD *)(v6 + 4) <= v10 )
  {
    v11 = *(void **)v6;
    *(_DWORD *)(v6 + 4) = 2 * v10;
    *(_DWORD *)v6 = sub_93050(v11, 2 * v10);
  }
  return v10;
}
