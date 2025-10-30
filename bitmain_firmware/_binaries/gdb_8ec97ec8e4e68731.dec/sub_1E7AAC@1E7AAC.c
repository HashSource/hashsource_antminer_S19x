int __fastcall sub_1E7AAC(int a1, int a2, int a3)
{
  int v3; // r6
  int v4; // r0
  const char *v5; // r0
  int v6; // r4
  int v8; // r0
  int v9; // lr
  int v10; // r0
  int v11; // r5
  int v12; // r0
  __int64 v13; // kr00_8
  int v14; // r0
  _DWORD v15[5]; // [sp-18h] [bp-40h] BYREF
  int v16; // [sp-4h] [bp-2Ch]
  int v17; // [sp+4h] [bp-24h]
  int v18; // [sp+8h] [bp-20h]
  int v19; // [sp+Ch] [bp-1Ch]
  int *v20; // [sp+14h] [bp-14h] BYREF
  int v21; // [sp+18h] [bp-10h]
  int v22; // [sp+1Ch] [bp-Ch] BYREF
  int v23; // [sp+20h] [bp-8h]
  int v24; // [sp+24h] [bp-4h]

  v17 = a1;
  v18 = a2;
  v19 = a3;
  v20 = &v22;
  v21 = 0;
  v22 = a1;
  v23 = a2;
  v24 = a3;
  v4 = ((int (__fastcall *)(int, int (__fastcall *)(int, int, int, int), int **))loc_1E7958)(
         dword_488CE4,
         sub_1E78D0,
         &v20);
  if ( dword_48935C )
  {
    v3 = *(_DWORD *)sub_242FC8(v4);
    v5 = (const char *)sub_23095C(v22, v23, v24);
    v4 = sub_2594B0(v3, "notif: discard queued event: 'Stop' in %s\n", v5);
  }
  v6 = v21;
  if ( !dword_488CE4 )
  {
    v8 = ((int (__fastcall *)(int))loc_16318)(v4);
    v15[2] = v6;
    v15[3] = dword_4886E4;
    v15[4] = v3;
    v16 = v9;
    v10 = sub_16F654(v8);
    ((void (__fastcall *)(int))loc_1E2770)(v10);
    v11 = dword_488C94;
    if ( *(_DWORD *)(dword_488C94 + 56) )
    {
      sub_1FDE04();
      v12 = dword_475848;
      v13 = qword_47584C;
      *(_DWORD *)(v11 + 56) = 0;
      unk_4878EC = v12;
      qword_4878F0 = v13;
      sub_1839BC();
      v15[0] = v11;
      v15[1] = 0;
      ((void (__fastcall *)(int, int (__fastcall *)(int, int, int, _DWORD *), _DWORD *))loc_1E7958)(
        dword_488CE4,
        sub_1E7918,
        v15);
      if ( dword_488C6C )
        sub_1532D4(&dword_488C6C);
      v14 = sub_1F7DD4(*(_DWORD *)(v11 + 408));
      sub_24A810(v14);
    }
    __asm { POP             {R4-R6,PC} }
  }
  if ( *(_DWORD *)dword_488CE4 )
    sub_1532BC((_DWORD *)dword_488C6C);
  return v6;
}
