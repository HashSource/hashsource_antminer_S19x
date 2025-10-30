int __fastcall sub_2616BC(int a1)
{
  int v1; // r4
  _DWORD *v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r4
  _DWORD *v6; // r0
  _DWORD *v7; // r5
  int v8; // r6
  int v9; // r0
  int v10; // r5
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  __int64 v13; // r0
  int v15; // r5
  __int64 v16; // r0
  _DWORD *v17; // r7
  _DWORD *v18; // r0
  int v19; // r0
  _DWORD *v20; // r6
  int v21; // r1

  v1 = a1;
  v2 = (_DWORD *)sub_26BC70(a1);
  v3 = sub_171258(v2);
  v4 = **(char **)(v3 + 24);
  if ( (unsigned __int8)(v4 - 18) <= 1u )
  {
    v15 = v3;
    v16 = sub_26BFE0(v1);
    if ( !sub_26BFB8(v1, HIDWORD(v16), v16, HIDWORD(v16), 8 * *(_DWORD *)(v15 + 20), 0) )
    {
      v17 = sub_1700C0(*(_DWORD **)(*(_DWORD *)(v15 + 24) + 20));
      v18 = (_DWORD *)sub_26BD30(v1);
      v19 = sub_171258(v18);
      v20 = sub_1700C0(*(_DWORD **)(*(_DWORD *)(v19 + 24) + 20));
      v10 = sub_26C4E0(v1, v21);
      sub_26BC78(v10, v17);
      sub_26D370(v10, v20);
      return v10;
    }
    v1 = sub_26EA24(v1);
    v4 = **(char **)(v15 + 24);
  }
  if ( v4 != 7 )
  {
    v5 = sub_2615A8(v1);
    if ( *(_DWORD *)nullsub_31(v5) != 1 )
      sub_946E0("Attempt to take address of value not located in memory.");
    v6 = (_DWORD *)sub_26BC70(v5);
    v7 = sub_1700C0(v6);
    v8 = ((int (__fastcall *)(int))loc_26C09C)(v5);
    v9 = sub_26BFE0(v5);
    v10 = sub_26DC9C(v7, v8 + v9);
    v11 = (_DWORD *)sub_26BD30(v5);
    v12 = sub_1700C0(v11);
    sub_26D370(v10, v12);
    v13 = sub_26BFE0(v5);
    sub_26BFF8(v10, HIDWORD(v13), v13, HIDWORD(v13));
    return v10;
  }
  return sub_261670(v1);
}
