void __fastcall sub_134218(int a1, int a2, int a3, int a4, int *a5)
{
  int v8; // r0
  int v9; // r4
  char *v10; // r0
  int v11; // r6
  const char *v12; // r4
  const char *v13; // r0
  unsigned __int16 *v14; // r0
  int v15; // r3
  int v16; // r0
  char *v17; // r0
  int v18; // r7
  const char *v19; // r6
  const char *v20; // r0
  char *v21; // r0
  int v22; // r7
  const char *v23; // r6
  const char *v24; // r0

  v8 = ((int (__fastcall *)(int *))loc_126C98)(a5);
  v9 = v8;
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 52) )
      return;
    v14 = (unsigned __int16 *)((int (*)(void))loc_130EFC)();
    if ( v14 )
    {
      v15 = sub_132D94(v14, a5);
      if ( v15 )
      {
LABEL_9:
        *(_DWORD *)(v9 + 52) = v15;
        return;
      }
      if ( dword_47AC88 > 0 )
      {
        v21 = sub_98B08(a3, a4);
        v22 = *(_DWORD *)(a1 + 8);
        v23 = v21;
        v24 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
        sub_F43B4(
          &off_46D334,
          "Dwarf Error: Cannot build signatured type %s referenced from DIE at 0x%x [in module %s]",
          v23,
          v22,
          v24);
      }
    }
    else if ( dword_47AC88 > 0 )
    {
      v17 = sub_98B08(a3, a4);
      v18 = *(_DWORD *)(a1 + 8);
      v19 = v17;
      v20 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
      sub_F43B4(
        &off_46D334,
        "Dwarf Error: Problem reading signatured DIE %s referenced from DIE at 0x%x [in module %s]",
        v19,
        v18,
        v20);
    }
    sub_122BC4(a5 + 8, (_DWORD *)(a1 + 8));
    v15 = v16;
    goto LABEL_9;
  }
  if ( dword_47AC88 > 0 )
  {
    v10 = sub_98B08(a3, a4);
    v11 = *(_DWORD *)(a1 + 8);
    v12 = v10;
    v13 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
    sub_F43B4(
      &off_46D334,
      "Dwarf Error: Cannot find signatured DIE %s referenced from DIE at 0x%x [in module %s]",
      v12,
      v11,
      v13);
  }
  sub_122BC4(a5 + 8, (_DWORD *)(a1 + 8));
}
