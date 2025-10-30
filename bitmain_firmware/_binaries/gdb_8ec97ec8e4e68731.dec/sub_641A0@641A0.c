int __fastcall sub_641A0(int a1, int a2, int a3)
{
  int *v5; // r0
  int v6; // r10
  int v7; // r6
  int v8; // r9
  int v9; // r9
  int v10; // r0
  int v12; // r8
  int v13; // r5
  const char *v14; // t1
  int v15; // r0
  int v16; // r4
  int v17; // r0

  v5 = (int *)sub_242FDC(a1);
  v6 = *v5;
  v7 = sub_B894C(v5);
  v8 = ((int (*)(void))loc_166E9C)();
  v9 = v8 + ((int (__fastcall *)(int))loc_166F48)(v7);
  sub_2578AC(v6, 1);
  if ( a3 )
  {
    if ( a3 > 0 )
    {
      v12 = a2 - 4;
      v13 = 0;
      do
      {
        v14 = *(const char **)(v12 + 4);
        v12 += 4;
        v15 = strtol(v14, 0, 10);
        v16 = v15;
        if ( (v9 <= v15) | ((unsigned int)v15 >> 31) )
          sub_946E0("bad register number");
        if ( ((int (__fastcall *)(int, int))loc_1677C0)(v7, v15)
          && *(_BYTE *)((int (__fastcall *)(int, int))loc_1677C0)(v7, v16) )
        {
          v17 = ((int (__fastcall *)(int, int))loc_1677C0)(v7, v16);
          sub_2575E8(v6, 0, v17);
        }
        else
        {
          sub_2575E8(v6, 0, "");
        }
        ++v13;
      }
      while ( a3 != v13 );
    }
  }
  else if ( v9 > 0 )
  {
    do
    {
      while ( !((int (__fastcall *)(int, int))loc_1677C0)(v7, a3)
           || !*(_BYTE *)((int (__fastcall *)(int, int))loc_1677C0)(v7, a3) )
      {
        sub_2575E8(v6, 0, "");
        if ( v9 == ++a3 )
          return sub_25734C(v6, 1);
      }
      v10 = ((int (__fastcall *)(int, int))loc_1677C0)(v7, a3);
      sub_2575E8(v6, 0, v10);
      ++a3;
    }
    while ( v9 != a3 );
  }
  return sub_25734C(v6, 1);
}
