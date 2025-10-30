int __fastcall sub_85AB4(unsigned int a1, _DWORD *a2, int a3, int a4)
{
  int result; // r0
  char *v9; // r11
  int v10; // r4
  int v11; // r3
  int v12; // r12
  char *v13; // [sp+Ch] [bp-10h]

  result = 2092;
  if ( a1 == 1 )
  {
    v13 = &ao_strs_strtable[dword_1083EC + 203];
    if ( (a2[4] & 0x1000000) == 0 )
      goto LABEL_5;
    goto LABEL_24;
  }
  if ( a1 <= 0xF )
    return result;
  v13 = byte_99528;
  fprintf((FILE *)option_usage_fp, off_B953C, *(_DWORD *)(a1 + 28), a2[13], a2[6]);
  if ( (a2[4] & 0x1000000) != 0 )
LABEL_24:
    fprintf((FILE *)option_usage_fp, off_B95D8, v13);
LABEL_5:
  if ( a4 <= 1 )
    fprintf((FILE *)option_usage_fp, off_B95D0, v13);
  else
    fprintf((FILE *)option_usage_fp, off_B95CC, v13);
  if ( a1 == 1 )
    v9 = &ao_strs_strtable[dword_1083EC + 210];
  else
    v9 = "\t";
  v10 = a3 + 8;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v10 - 8);
    v12 = *(_DWORD *)(v10 - 4);
    if ( v12 == 0x80000000 )
    {
      fprintf((FILE *)option_usage_fp, off_B95C8, v9, v11);
    }
    else if ( v11 == 0x80000000 )
    {
      fprintf((FILE *)option_usage_fp, off_B95DC, v9, *(_DWORD *)(v10 - 4));
    }
    else if ( v12 == 0x7FFFFFFF )
    {
      fprintf((FILE *)option_usage_fp, off_B95C4, v9);
    }
    else
    {
      fprintf((FILE *)option_usage_fp, off_B95C0, v9);
    }
    --a4;
    v10 += 8;
    if ( a4 <= 0 )
      break;
    fputs(off_B95D4, (FILE *)option_usage_fp);
  }
  result = fputc(10, (FILE *)option_usage_fp);
  if ( a1 > 0xF )
    return (*(int (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
  return result;
}
