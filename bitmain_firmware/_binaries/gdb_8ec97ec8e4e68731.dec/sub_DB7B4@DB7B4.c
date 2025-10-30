void __fastcall sub_DB7B4(_BYTE *a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r0
  int v6; // r4
  int v7; // r5
  int v8; // r0
  _DWORD *v9; // r6
  int *v10; // r0
  int v11; // r7
  _DWORD *v12; // r9
  int v13; // r4
  int v14; // r10
  int v15; // r11
  int v16; // r0
  int v17; // r5
  int v18; // r8
  int v19; // r6
  _DWORD *v20; // r4
  int v21; // r0
  int v22; // r0
  _BYTE *v23; // [sp+44h] [bp-78h] BYREF
  int v24; // [sp+4Ch] [bp-70h] BYREF
  int v25; // [sp+50h] [bp-6Ch] BYREF
  int v26; // [sp+54h] [bp-68h] BYREF
  int v27; // [sp+58h] [bp-64h] BYREF
  void *ptr[3]; // [sp+5Ch] [bp-60h] BYREF
  _DWORD v29[5]; // [sp+68h] [bp-54h] BYREF
  int v30; // [sp+7Ch] [bp-40h] BYREF
  int v31; // [sp+80h] [bp-3Ch]
  int v32; // [sp+84h] [bp-38h]
  int v33; // [sp+88h] [bp-34h]
  int v34; // [sp+8Ch] [bp-30h]
  _DWORD s[11]; // [sp+90h] [bp-2Ch] BYREF

  v23 = a1;
  sub_187D70(0);
  v4 = sub_19DBE0(&v25, &v23, off_46D5A4[0], 0);
  v5 = sub_20DB74(v4);
  v6 = v25;
  if ( v5 )
  {
    v7 = sub_20DBB4();
    v8 = sub_20DBCC();
    sub_19B938(ptr, v6, 1, 0, v7, v8);
  }
  else
  {
    sub_19B938(ptr, v25, 1, 0, 0, 0);
  }
  v9 = ptr[0];
  if ( (char *)ptr[1] - (char *)ptr[0] != 40 )
    sub_946E0("Couldn't get information on specified line.");
  if ( *v23 )
    sub_946E0("Junk at end of arguments.");
  v10 = sub_D07B4((int *)ptr[0]);
  v11 = ((int (__fastcall *)(int *))loc_23DBE4)(v10);
  v24 = *(_DWORD *)(v11 + 20);
  v12 = sub_9253C((int)nullsub_39, 0);
  v13 = sub_15F7E8(0);
  v14 = sub_15ECB4(v13);
  sub_15F9BC(v29, v13);
  sub_15FA2C(&v30, v13);
  v15 = sub_15CD58(v30, v31, v32, v33, v34);
  if ( v15 )
  {
    memset(s, 0, 0x28u);
    v21 = ((int (__fastcall *)(int))loc_15F9E0)(v13);
    sub_21DEAC(s, v21);
    s[5] = ((int (__fastcall *)(int))loc_15F9E0)(v13);
    v22 = ((int (__fastcall *)(int))loc_1602C8)(v13);
    ((void (__fastcall *)(int *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, int, int, int, int, _DWORD *))loc_D8E08)(
      &v26,
      v22,
      s[0],
      s[1],
      s[2],
      s[3],
      s[4],
      s[5],
      s[6],
      s[7],
      s[8],
      s[9],
      v30,
      v31,
      v32,
      v33,
      v34,
      4,
      v22,
      v34,
      &s[6]);
    v15 = v26;
    sub_D8B08(v11, v30, v31, v32, v33, v34);
    sub_9253C((int)sub_17E8EC, (int)&v24);
  }
  if ( a3 )
  {
    v16 = ((int (__fastcall *)(int *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))loc_D8E08)(
            &v27,
            v14,
            *v9,
            v9[1],
            v9[2],
            v9[3],
            v9[4],
            v9[5],
            v9[6],
            v9[7],
            v9[8],
            v9[9],
            0,
            0,
            0,
            0,
            0,
            4);
    v17 = v27;
  }
  else
  {
    v16 = ((int (__fastcall *)(_DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))loc_D8E08)(
            s,
            v14,
            *v9,
            v9[1],
            v9[2],
            v9[3],
            v9[4],
            v9[5],
            v9[6],
            v9[7],
            v9[8],
            v9[9],
            v29[0],
            v29[1],
            v29[2],
            v29[3],
            v29[4],
            4);
    v17 = s[0];
  }
  v18 = sub_191770(v16);
  v19 = *(_DWORD *)(v11 + 20);
  v20 = sub_93094(1u, 0x18u);
  sub_2421FC(v20, &unk_46C0A4, v18);
  v20[3] = v19;
  v20[4] = v17;
  v20[5] = v15;
  *(_DWORD *)(v11 + 204) = v20;
  sub_92640(v12);
  sub_18BAD4(-1, 144);
  if ( ptr[0] )
    sub_339E64(ptr[0]);
  if ( v25 )
    ((void (__fastcall *)(int *))loc_19D154)(&v25);
}
