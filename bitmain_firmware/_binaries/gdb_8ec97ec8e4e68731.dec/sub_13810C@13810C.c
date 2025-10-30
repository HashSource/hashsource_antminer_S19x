void __fastcall sub_13810C(int a1, int a2, int *a3)
{
  __int16 v3; // r3
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r7
  const char *v9; // r6
  const char *v10; // r0
  unsigned __int16 *v11; // r0
  int *v12; // [sp+Ch] [bp-8h] BYREF

  v3 = *(_WORD *)(a2 + 2);
  v6 = v3 & 0x7FFF;
  if ( v6 >= 0x10 && (v6 <= 0x15 || v6 == 7968) )
  {
    v12 = a3;
    v11 = (unsigned __int16 *)sub_12E620((int *)(a1 + 8), a2, &v12);
    sub_132D94(v11, v12);
  }
  else if ( (v3 & 0x7FFF) == 0x20 )
  {
    sub_134218(a1, a2, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), a3);
  }
  else
  {
    if ( dword_47AC88 > 0 )
    {
      v7 = sub_321640(v6);
      v8 = *(_DWORD *)(a1 + 8);
      if ( v7 )
        v9 = (const char *)v7;
      else
        v9 = "DW_FORM_<unknown>";
      v10 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
      sub_F43B4(&off_46D334, "Dwarf Error: DW_AT_signature has bad form %s in DIE at 0x%x [in module %s]", v9, v8, v10);
    }
    sub_122BC4(a3 + 8, (_DWORD *)(a1 + 8));
  }
}
