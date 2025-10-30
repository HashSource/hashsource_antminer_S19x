void __fastcall sub_266D40(_DWORD *a1, int a2, unsigned int a3, int a4, int a5, _DWORD *a6, int a7, int a8)
{
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r9
  int v15; // r10
  __int64 v16; // r0
  int v17; // r2
  int v18; // r3
  _DWORD dest[19]; // [sp+1Ch] [bp-4Ch] BYREF

  v11 = sub_170040((int)a1);
  v12 = ((int (__fastcall *)(int))loc_16EA14)(v11);
  if ( a5 )
  {
    if ( a6[10] == 115 )
    {
      memcpy(dest, a6, sizeof(dest));
      dest[10] = 0;
      dest[13] = 0;
      sub_2669E8(a1, 0, a3, a4, 0, a8, 0, a5, dest, (int)off_46D5A4[0]);
    }
    else
    {
      v14 = v12;
      v15 = sub_26E718(a5, v13);
      if ( ((int (__fastcall *)(int, unsigned int, int))loc_26B3D8)(a5, 8 * a3, 8 * a1[5]) )
      {
        sub_2666C0(a5, a8);
      }
      else if ( sub_26B3A4(a5, a1[5], a3, a4, a1[5], 0) )
      {
        sub_1C7D34((char *)(v15 + a3 * v14), (int)a1, a6, a7, a8);
      }
      else
      {
        sub_25A418(a8, "<unavailable>");
      }
    }
  }
  else
  {
    v16 = sub_94700(
            (int)"valprint.c",
            1250,
            "%s: Assertion `%s' failed.",
            "void val_print_scalar_formatted(type*, LONGEST, value*, const value_print_options*, int, ui_file*)",
            "val != NULL");
    sub_266EA4(v16, HIDWORD(v16), v17, v18, 0, a6);
  }
}
