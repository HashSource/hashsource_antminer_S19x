int __fastcall sub_1789B4(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r5
  _DWORD *v8; // r0
  _DWORD *v9; // r10
  _DWORD *v10; // r0
  __int64 v11; // r6
  _DWORD *v12; // r9
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r9
  __int64 v18; // r0
  int v19; // r0
  int v20; // r6
  _DWORD *v21; // r0
  int v22; // r3
  _DWORD *v23; // r0
  __int64 v25; // r0
  __int64 v26; // kr00_8
  int v27; // r0
  __int64 v28; // r0
  int v29; // [sp+Ch] [bp-4h] BYREF

  v4 = a2 + 16 * a3;
  v5 = *a1;
  v8 = (_DWORD *)sub_26BC70(*a1);
  v9 = (_DWORD *)sub_171258(v8);
  v10 = *(_DWORD **)(v4 + 8);
  v11 = *(unsigned __int16 *)(v4 + 14) - 2;
  if ( !v10 )
    v10 = (_DWORD *)((int (__fastcall *)(int))loc_172524)(a4);
  v12 = sub_1700C0(v10);
  if ( *(_DWORD **)(v12[6] + 20) != v9 )
  {
    v13 = sub_2616BC(v5);
    v14 = sub_2647C8(v12, v13);
    v5 = sub_26210C(v14);
    v15 = (_DWORD *)sub_26BC70(v5);
    v9 = (_DWORD *)sub_171258(v15);
  }
  v16 = sub_173244(v9, &v29);
  v17 = ((int (__fastcall *)(int, int, _DWORD, _DWORD, int, int))loc_26F358)(v5, v29, 0, 0, v16, v29);
  v18 = sub_26BC70(v17);
  if ( **(_BYTE **)(v18 + 24) == 1
    && (v18 = sub_26BC70(v17), **(_BYTE **)(*(_DWORD *)(*(_DWORD *)(v18 + 24) + 20) + 24) == 2) )
  {
    v25 = sub_26210C(v17);
    v20 = sub_25CE0C(v25, HIDWORD(v25), v11, HIDWORD(v11));
  }
  else
  {
    v19 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_25CA94)(v17, HIDWORD(v18), v11, HIDWORD(v11));
    v20 = sub_26210C(v19);
  }
  v21 = (_DWORD *)sub_26BC70(v20);
  v22 = **(char **)(sub_171258(v21) + 24);
  if ( v22 == 3 )
  {
    v26 = sub_26BC80(v5);
    v27 = sub_26F824(v20, 0);
    v28 = sub_26EB1C(v27);
    sub_26BC88(v5, HIDWORD(v28), v26 + v28, (unsigned __int64)(v26 + v28) >> 32);
    if ( !sub_26BF4C(v5) )
    {
      sub_26BF58(v5, 1);
      ((void (__fastcall *)(int))loc_26E00C)(v5);
    }
    v20 = sub_26F824(v20, 2);
  }
  else if ( v22 != 1 )
  {
    sub_946E0("I'm confused:  virtual function table has bad type");
  }
  v23 = sub_1700C0(*(_DWORD **)(v4 + 4));
  sub_26BC78(v20, v23);
  *a1 = v5;
  return v20;
}
