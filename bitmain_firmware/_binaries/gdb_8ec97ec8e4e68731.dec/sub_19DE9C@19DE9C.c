int __fastcall sub_19DE9C(int a1, int *a2, int *a3, int a4)
{
  int v6; // r12
  int v8; // lr
  int v9; // r4
  unsigned int v11; // r5
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r5
  int v15; // lr
  int v16; // r5
  int v18; // r8
  int v19; // r9
  int v20; // r10
  _DWORD *v21; // r0
  int v22; // r8
  int v23; // r0
  int v24; // r3
  int v25; // r3
  int v26; // r8
  const char *v27; // r1
  int v28; // r0
  int v29; // r1
  __int64 v30; // r0
  int v31; // r4
  _DWORD *v32; // r0
  __int64 v33; // r0
  int v34; // r0
  int v35; // r4
  int v36; // [sp+Ch] [bp-4h] BYREF

  v6 = *a3 + 1;
  v8 = a2[4 * v6];
  if ( v8 != 23 )
  {
    if ( v8 != 74 )
      return sub_14E83C(a1, a2, a3, a4);
    *a3 = v6;
    v11 = a4 - 1;
    v12 = sub_14DB3C(a2, a3, a4);
    v9 = v12;
    if ( v11 > 1 )
    {
      v9 = sub_26EA24(v12);
      v13 = (_DWORD *)sub_26BC70(v9);
      v14 = sub_171258(v13);
      if ( sub_19E8AC() )
      {
        v15 = *(_DWORD *)(*(_DWORD *)(v14 + 24) + 24);
        v36 = v9;
        v16 = *(_DWORD *)(v15 + 36);
        v9 = sub_2624C8(&v36, 0, "_m2_high", 0, "unbounded structure missing _m2_high field");
        if ( v16 != (unsigned int)sub_26BC70(v9) )
          return sub_2647C8(v16, v9);
      }
    }
    return v9;
  }
  *a3 = v6;
  v18 = sub_14DB3C(a2, a3, a4);
  v19 = sub_14DB3C(a2, a3, a4);
  if ( a4 != 1 )
  {
    v20 = sub_26EA24(v18);
    v21 = (_DWORD *)sub_26BC70(v20);
    v22 = sub_171258(v21);
    v23 = sub_19E8AC();
    v24 = *(_DWORD *)(v22 + 24);
    if ( v23 )
    {
      v25 = *(_DWORD *)(v24 + 24);
      v36 = v20;
      v26 = *(_DWORD *)(v25 + 12);
      if ( v26 && **(_BYTE **)(v26 + 24) == 1 )
      {
        v31 = sub_2624C8(&v36, 0, "_m2_contents", 0, "unbounded structure missing _m2_contents field");
        if ( v26 != (unsigned int)sub_26BC70(v31) )
          v31 = sub_2647C8(v26, v31);
        v32 = (_DWORD *)sub_26BC70(v31);
        sub_171258(v32);
        v33 = sub_26EB1C(v19);
        v34 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_25CA94)(v31, HIDWORD(v33), v33, HIDWORD(v33));
        return sub_26210C(v34);
      }
      else
      {
        sub_946B0("internal error: unbounded array structure is unknown");
        return sub_14E83C(a1, a2, a3, a4);
      }
    }
    else
    {
      if ( *(_BYTE *)v24 != 2 )
      {
        v27 = *(const char **)(v24 + 8);
        if ( v27 )
          sub_946E0("cannot subscript something of type `%s'", v27);
        sub_946E0("cannot subscript requested type");
      }
      if ( a4 == 2 )
      {
        v35 = *(_DWORD *)(v24 + 20);
        nullsub_31(v20);
        return sub_260DBC(v35);
      }
      else
      {
        v30 = sub_26EB1C(v19);
        return sub_25CE0C(v20, HIDWORD(v30), v30, HIDWORD(v30));
      }
    }
  }
  sub_1780B4();
  return sub_26DAF4(*(_DWORD *)(v28 + 12), v29, 1, 0);
}
