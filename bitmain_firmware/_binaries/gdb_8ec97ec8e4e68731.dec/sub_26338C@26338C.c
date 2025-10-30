int __fastcall sub_26338C(int a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r0
  int v9; // r4
  int v10; // r2
  void *v11; // r9
  int v12; // r5
  int v13; // r6
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  int *v17; // r0
  __int64 v19; // r0

  v8 = (_DWORD *)sub_26BC70(a1);
  v9 = sub_171258(v8);
  v10 = **(char **)(v9 + 24);
  if ( (unsigned __int8)(v10 - 18) <= 1u )
  {
    v12 = sub_26EA24(a1);
  }
  else
  {
    if ( v10 != 1 )
      return 0;
    v11 = sub_92E28();
    v12 = sub_26210C(a1);
    sub_92E40((int)v11);
  }
  v13 = sub_FC6D8(v12, a2, a3, a4);
  if ( v13 )
  {
    v14 = sub_26BC70(v12);
    v15 = (_DWORD *)((int (__fastcall *)(int, int, int, _DWORD))loc_170478)(
                      *(_DWORD *)(v14 + 16) & 1,
                      (*(_DWORD *)(v14 + 16) >> 1) & 1,
                      v13,
                      0);
    v16 = **(char **)(v9 + 24);
    if ( (unsigned __int8)(v16 - 18) <= 1u )
    {
      sub_170220();
LABEL_17:
      JUMPOUT(0x16FB94);
    }
    if ( v16 == 1 )
    {
      sub_1700C0(v15);
      goto LABEL_17;
    }
    v19 = sub_94700((int)"valops.c", 3641, "Unexpected value type.");
    if ( HIDWORD(v19) != 1 )
    {
      sub_339E78(v19);
      sub_92E60();
    }
    v17 = (int *)sub_339E78(v19);
    if ( v17[1] != 8 )
      sub_92F1C(*v17, v17[1], v17[2]);
    sub_339EF8(v17);
  }
  return 0;
}
