int __fastcall sub_15DBFC(int *a1)
{
  int v1; // r3
  int *v2; // r4
  int v3; // r5
  int v4; // r0
  int v5; // r5
  void *v6; // r6
  int v7; // r0
  int v8; // r3
  int *v10; // r0
  int v11; // r6
  int v12; // r5
  char *v13; // r0
  __int64 v14; // r0
  int *v15; // r0
  int v16; // r3
  _DWORD *v17; // r0
  _DWORD *v18; // r0

  v1 = a1[7];
  v2 = a1;
  if ( !v1 )
    goto LABEL_8;
  while ( v1 != 1 )
  {
    if ( v1 == 3 )
    {
      sub_92F64(9, "PC not available");
      goto LABEL_13;
    }
    if ( v1 != 2 )
      sub_94700((int)"frame.c", 938, "unexpected prev_pc status: %d", v1);
    a1 = (int *)sub_92F64(10, "PC not saved");
LABEL_8:
    v4 = sub_15DB40(a1);
    if ( ((int (__fastcall *)(int))loc_169988)(v4) )
    {
      v5 = sub_15DB40(v2);
      v6 = sub_92E28();
      v3 = ((int (__fastcall *)(int, int *))loc_1699D4)(v5, v2);
      v7 = sub_92E40((int)v6);
      v2[8] = v3;
      v8 = dword_487724;
      v2[7] = 1;
      if ( !v8 )
        return v3;
      v10 = (int *)sub_242FC8(v7);
      v11 = *v2;
      v12 = *v10;
      v13 = sub_98B08(v2[8], 0);
      sub_2594B0(v12, "{ frame_unwind_pc (this_frame=%d) -> %s }\n", v11, v13);
      v1 = v2[7];
    }
    else
    {
LABEL_13:
      v14 = sub_94700((int)"frame.c", 928, "No unwind_pc method");
      if ( HIDWORD(v14) != 1 )
      {
        sub_339E78(v14);
        sub_92E60();
      }
      v15 = (int *)sub_339E78(v14);
      v16 = v15[1];
      if ( v16 == 9 )
      {
        v2[7] = 3;
        if ( dword_487724 )
        {
          v18 = (_DWORD *)sub_242FC8(v15);
          v15 = (int *)sub_2594B0(*v18, "{ frame_unwind_pc (this_frame=%d) -> <unavailable> }\n", *v2);
        }
      }
      else
      {
        if ( v16 != 10 )
          sub_92F1C(*v15, v15[1], v15[2]);
        v2[7] = 2;
        if ( dword_487724 )
        {
          v17 = (_DWORD *)sub_242FC8(v15);
          v15 = (int *)sub_2594B0(*v17, "{ frame_unwind_pc (this_frame=%d) -> <not saved> }\n", *v2);
        }
      }
      sub_339EF8(v15);
      v1 = v2[7];
    }
  }
  return v2[8];
}
