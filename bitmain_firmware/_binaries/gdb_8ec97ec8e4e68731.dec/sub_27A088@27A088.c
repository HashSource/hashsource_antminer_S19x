__int64 __fastcall sub_27A088(_DWORD *a1, int a2, char *a3)
{
  void *v5; // r6
  void *v6; // r0
  const char **v7; // r4
  const char **v8; // r8
  int v9; // r2
  int v10; // r4
  int v12; // r3
  int (__fastcall *v13)(int, int); // r8
  int v14; // r0
  int *v15; // r0
  int *v16; // r0
  int *v17; // r0
  __int64 v18; // r0
  int v19; // r8
  int v20; // r0
  int v21; // r0
  int v22; // [sp+Ch] [bp-Ch]
  const char **v23[2]; // [sp+10h] [bp-8h] BYREF

  v5 = sub_92E28();
  v6 = sub_21D6B0(v23, a3, 0, 1, 0);
  v7 = v23[0];
  if ( v23[0] && *((_DWORD *)off_46DBB8 + 4 * (*((unsigned __int8 *)v23[0] + 32) >> 3)) == 10 )
  {
    if ( dword_48AA50 )
    {
      v17 = (int *)sub_242FC8();
      sub_2594B0(*v17, "gcc_symbol_address \"%s\": full symbol\n", a3);
    }
    v12 = *((_DWORD *)v7[6] + 6);
    v10 = *(_DWORD *)v7[2];
    if ( (*(_BYTE *)(v12 + 2) & 4) == 0 )
      goto LABEL_8;
    goto LABEL_13;
  }
  v6 = sub_1B1BE8((int *)v23, a3);
  v8 = v23[0];
  if ( v23[0] )
  {
    if ( dword_48AA50 )
    {
      v16 = (int *)sub_242FC8();
      sub_2594B0(*v16, "gcc_symbol_address \"%s\": minimal symbol\n", a3);
    }
    v9 = *((__int16 *)v8 + 11);
    if ( v9 != -1 )
    {
      v10 = (int)&v8[2][*(_DWORD *)&v23[1][36][4 * v9]];
      if ( ((_BYTE)v8[8] & 0xF) != 2 )
      {
LABEL_8:
        sub_92E40((int)v5);
        return (unsigned int)v10;
      }
LABEL_13:
      v13 = *(int (__fastcall **)(int, int))off_46D9C8;
      v14 = sub_16F654((int)v6);
      v10 = v13(v14, v10);
      goto LABEL_8;
    }
    v18 = sub_94700((int)"compile/compile-c-symbols.c", 517, "Section index is uninitialized");
    v19 = v18;
    v10 = 0;
    v22 = HIDWORD(v18);
    sub_92E40((int)v5);
    if ( v22 != 1 )
    {
      sub_339E78(v19);
      sub_92E60();
    }
    v20 = sub_339E78(v19);
    v21 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)(*a1 + 4) + 96))(*a1, *(_DWORD *)(v20 + 8));
    sub_339EF8(v21);
    if ( !dword_48AA50 )
      return (unsigned int)v10;
  }
  else
  {
    sub_92E40((int)v5);
    v10 = dword_48AA50;
    if ( !dword_48AA50 )
      return (unsigned int)v10;
  }
  v15 = (int *)sub_242FC8();
  sub_2594B0(*v15, "gcc_symbol_address \"%s\": failed\n", a3);
  return 0;
}
