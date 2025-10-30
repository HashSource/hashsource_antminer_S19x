int __fastcall sub_1A7F20(int a1, char *a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v10; // r5
  size_t v11; // r0

  switch ( a5 )
  {
    case 1:
      v10 = a6[38];
      if ( v10 == -1 )
      {
        sub_94700((int)"mdebugread.c", 2272, "sect_index_text not initialized");
        goto LABEL_6;
      }
      break;
    case 2:
LABEL_6:
      v10 = a6[39];
      if ( v10 == -1 )
      {
        sub_94700((int)"mdebugread.c", 2275, "sect_index_data not initialized");
        goto LABEL_8;
      }
      break;
    case 3:
LABEL_8:
      v10 = a6[40];
      break;
    case 13:
      v10 = sub_2128F0(a6, ".sdata");
      break;
    case 14:
      v10 = sub_2128F0(a6, ".sbss");
      break;
    case 15:
      v10 = sub_2128F0(a6, ".rdata");
      break;
    case 22:
      v10 = sub_2128F0(a6, ".init");
      break;
    case 24:
      v10 = sub_2128F0(a6, ".xdata");
      break;
    case 25:
      v10 = sub_2128F0(a6, ".pdata");
      break;
    case 26:
      v10 = sub_2128F0(a6, ".fini");
      break;
    case 27:
      v10 = sub_2128F0(a6, ".rconst");
      break;
    default:
      v10 = -1;
      break;
  }
  v11 = strlen(a2);
  return sub_1B25B4(a1, a2, v11, 1, a3, a4, v10);
}
