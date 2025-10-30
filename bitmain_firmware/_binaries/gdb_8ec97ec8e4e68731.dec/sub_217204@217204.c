int __fastcall sub_217204(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // r9
  int v12; // r11
  char *v13; // r10
  const char *v14; // r0
  char *v16; // [sp+1Ch] [bp-18h]
  char *v17; // [sp+20h] [bp-14h]
  const char *v18; // [sp+24h] [bp-10h]
  int v19; // [sp+28h] [bp-Ch] BYREF
  int v20; // [sp+2Ch] [bp-8h]

  v19 = a2;
  v20 = a3;
  v11 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v12 = *(_DWORD *)sub_242FC8(v11);
  v18 = (const char *)sub_1B87CC(a1);
  v17 = sub_98EEC((int)&v19);
  v16 = sub_98EEC((int)&a5);
  v13 = sub_98EEC((int)&a7);
  v14 = (const char *)((int (__fastcall *)(int))loc_21A644)(a9);
  sub_25A418(v12, "qf->expand_symtabs_matching (%s, %s, %s, %s, %s)\n", v18, v17, v16, v13, v14);
  return (*(int (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)(*(_DWORD *)v11 + 40) + 48))(
           a1,
           v19,
           v20,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9);
}
