int __fastcall sub_5DBAC(int a1, int a2, int a3)
{
  int v5; // r8
  int v6; // r0
  int v7; // r1
  int v8; // r4
  int v9; // r7
  int v10; // r6
  int v11; // r1
  int v12; // r0
  int v13; // r5
  int v14; // r4
  bool v15; // cc
  int v16; // r9
  int v17; // r0
  int v18; // r1
  int v21; // r7
  _DWORD *v22; // r0
  int v23; // [sp+8h] [bp+0h] BYREF
  char v24[4]; // [sp+Ch] [bp+4h] BYREF

  v5 = 0;
  v23 = 0;
  while ( 1 )
  {
    v6 = sub_602EC("-stack-list-frames", a3, a2, &off_3597F4, &v23, v24);
    if ( v6 < 0 )
      break;
    if ( !v6 )
      v5 = v23;
  }
  v8 = a3 - v23;
  if ( v8 )
  {
    if ( v8 != 2 )
      sub_946E0("-stack-list-frames: Usage: [--no-frame-filters] [FRAME_LOW FRAME_HIGH]");
    v9 = strtol(*(const char **)(a2 + 4 * v23), 0, 10);
    v10 = strtol(*(const char **)(a2 + 4 * (v23 + 1)), 0, 10);
    v12 = sub_15F70C(v10, v11);
    v13 = v12;
    v14 = v9 <= 0;
    if ( !v12 )
      v14 = 1;
    if ( v14 )
    {
      v14 = 0;
    }
    else
    {
      do
      {
        ++v14;
        v12 = ((int (__fastcall *)(int))loc_15FA88)(v13);
        v15 = v12 < 0;
        if ( v12 )
          v15 = v14 < v9;
        v13 = v12;
      }
      while ( v15 );
    }
  }
  else
  {
    v10 = -1;
    v14 = 0;
    v12 = sub_15F70C(v6, v7);
    v9 = -1;
    v13 = v12;
  }
  if ( !v13 )
    sub_946E0("-stack-list-frames: Not enough frames in stack.");
  v16 = *(_DWORD *)sub_242FDC(v12);
  v17 = sub_2578AC(v16, 1);
  if ( v5 || !dword_474834 )
    goto LABEL_34;
  if ( v9 != -1 )
    v5 = v9;
  v21 = sub_15F70C(v17, v18);
  v22 = (_DWORD *)sub_242FDC(v21);
  v17 = sub_157E7C(v21, 3, 0, *v22, v5, v10);
  if ( !dword_474834 || v17 == 3 )
  {
LABEL_34:
    do
    {
      if ( v14 > v10 && v10 != -1 )
        break;
      sub_258BD4(v17);
      sub_20DE90(v13, 1, 2, 0, 0);
      ++v14;
      v17 = ((int (__fastcall *)(int))loc_15FA88)(v13);
      v13 = v17;
    }
    while ( v17 );
  }
  return sub_25734C(v16, 1);
}
