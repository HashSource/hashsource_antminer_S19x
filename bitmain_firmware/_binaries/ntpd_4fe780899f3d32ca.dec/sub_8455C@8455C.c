int __fastcall sub_8455C(unsigned int a1, _DWORD *a2, int a3, int a4)
{
  bool v6; // zf
  int result; // r0
  FILE *v10; // r0
  char *v11; // r11
  int v12; // r4
  int v13; // r2
  int v14; // r3
  char *v15; // [sp+Ch] [bp-10h]

  v6 = a1 == 1;
  result = 2092;
  if ( v6 )
  {
    v15 = &ao_strs_strtable[dword_1073C8 + 203];
    v10 = (FILE *)option_usage_fp;
    if ( (a2[4] & 0x1000000) == 0 )
      goto LABEL_5;
    goto LABEL_24;
  }
  if ( a1 <= 0xF )
    return result;
  v15 = byte_97F7C;
  fprintf((FILE *)option_usage_fp, off_B8538[0], *(_DWORD *)(a1 + 28), a2[13], a2[6]);
  v10 = (FILE *)option_usage_fp;
  if ( (a2[4] & 0x1000000) != 0 )
  {
LABEL_24:
    fprintf(v10, off_B85D4[0], v15);
    v10 = (FILE *)option_usage_fp;
  }
LABEL_5:
  if ( a4 <= 1 )
    fprintf(v10, off_B85CC[0], v15);
  else
    fprintf(v10, off_B85C8[0], v15);
  if ( a1 == 1 )
    v11 = &ao_strs_strtable[dword_1073C8 + 210];
  else
    v11 = "\t";
  v12 = a3 + 8;
  while ( 1 )
  {
    v13 = *(_DWORD *)(v12 - 4);
    v14 = *(_DWORD *)(v12 - 8);
    if ( v13 == 0x80000000 )
    {
      fprintf((FILE *)option_usage_fp, off_B85C4[0], v11, v14);
    }
    else if ( v14 == 0x80000000 )
    {
      fprintf((FILE *)option_usage_fp, off_B85D8[0], v11, *(_DWORD *)(v12 - 4));
    }
    else if ( v13 == 0x7FFFFFFF )
    {
      fprintf((FILE *)option_usage_fp, off_B85C0[0], v11);
    }
    else
    {
      fprintf((FILE *)option_usage_fp, off_B85BC[0], v11);
    }
    --a4;
    v12 += 8;
    if ( a4 <= 0 )
      break;
    fputs(off_B85D0[0], (FILE *)option_usage_fp);
  }
  result = fputc(10, (FILE *)option_usage_fp);
  if ( a1 > 0xF )
    return (*(int (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
  return result;
}
