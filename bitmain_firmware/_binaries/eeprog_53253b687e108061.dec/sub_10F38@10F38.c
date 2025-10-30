int __fastcall sub_10F38(int a1, int a2, int a3, int a4)
{
  int v4; // r6
  int v8; // r0
  char v9; // r5
  int v10; // r0
  int v11; // r11

  v4 = a2;
  v8 = sub_11360(a1, (unsigned __int16)a2);
  if ( v8 < 0 )
    sub_10E48("read error", 125);
  if ( a4 )
    printf("\n %.4x|  %.2x ", v4, v8);
  else
    IO_putc(v8, (_IO_FILE *)stdout);
  v9 = 1;
  while ( --a3 )
  {
    while ( 1 )
    {
      v10 = sub_11340(a1);
      v11 = v10;
      if ( v10 < 0 )
        sub_10E48("read error", 133);
      if ( !a4 )
        break;
      ++v4;
      if ( (v9 & 0xF) != 0 )
      {
        if ( (v9 & 7) == 0 )
          printf("  ");
      }
      else
      {
        printf("\n %.4x|  ", v4);
      }
      printf("%.2x ", v11);
      --a3;
      ++v9;
      if ( !a3 )
        goto LABEL_12;
    }
    IO_putc(v10, (_IO_FILE *)stdout);
  }
LABEL_12:
  if ( a4 )
    puts("\n");
  fflush((FILE *)stdout);
  return 0;
}
