int __fastcall sub_1B27C0(int *a1, char *s, int a3, int a4)
{
  int v8; // r7
  size_t v9; // r0

  switch ( a4 )
  {
    case 1:
    case 2:
    case 7:
    case 8:
      goto LABEL_6;
    case 4:
    case 9:
      v8 = *(_DWORD *)(*a1 + 156);
      if ( v8 != -1 )
        goto LABEL_3;
      sub_94700((int)"minsyms.c", 1100, "sect_index_data not initialized");
LABEL_6:
      v8 = *(_DWORD *)(*a1 + 152);
      if ( v8 != -1 )
        goto LABEL_3;
      sub_94700((int)"minsyms.c", 1096, "sect_index_text not initialized");
LABEL_8:
      LOWORD(v8) = -1;
LABEL_3:
      v9 = strlen(s);
      return sub_1B25B4(a1, s, v9, 1, a3, a4, v8);
    case 5:
    case 10:
      v8 = *(_DWORD *)(*a1 + 160);
      goto LABEL_3;
    default:
      goto LABEL_8;
  }
}
