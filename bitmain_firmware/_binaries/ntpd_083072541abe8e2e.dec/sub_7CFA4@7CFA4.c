int __fastcall sub_7CFA4(int result, int a2, int a3, _DWORD *a4)
{
  int v4; // r8
  FILE *v6; // r4
  int v8; // r8
  int v9; // r2
  int v10; // r3
  FILE *v11; // r0
  const char *v12; // r1
  const char *v13; // r3
  int *v14; // r9
  const char *v15; // r2
  int v16; // r5
  int *v17; // r9
  int i; // r1
  int v19; // t1
  bool v20; // nf
  int v21; // r5
  const char *v22; // r2
  char *v23; // r5
  unsigned int v24; // r9
  unsigned int v25; // t1
  bool v26; // cc
  int v27; // r10
  int v28; // r11
  const char *v29; // r3
  const char *v30; // r0
  int v31; // r3
  const char *v32; // r0

  v4 = a2 - 1;
  v6 = (FILE *)result;
  if ( a2 - 1 >= 0 )
  {
    do
    {
      IO_putc(32, v6);
      --v4;
      result = IO_putc(32, v6);
    }
    while ( v4 != -1 );
  }
  v8 = a4[1];
  switch ( *a4 )
  {
    case 1:
      v22 = (const char *)a4[1];
      v23 = (char *)a4 + 7;
      fprintf(v6, "<%s>", v22);
      break;
    case 2:
    case 4:
      if ( !a3 )
        goto LABEL_4;
      v27 = *(_DWORD *)(a3 + 16);
      v28 = *(_DWORD *)(a3 + 24);
      if ( *a4 == 2 )
        v29 = "keyword";
      else
        v29 = "set-membership";
      fprintf(v6, "<%s type=%s>", (const char *)a4[1], v29);
      (*(void (__fastcall **)(int, int))(a3 + 40))(3, a3);
      v30 = *(const char **)(a3 + 24);
      if ( v30 )
      {
        fputs(v30, v6);
        if ( *a4 != 2 )
          free(*(void **)(a3 + 24));
      }
      v31 = _stack_chk_guard;
      *(_DWORD *)(a3 + 24) = v28;
      *(_DWORD *)(a3 + 16) = v27;
      return fprintf(v6, "</%s>\n", a4[1], v31);
    case 3:
      if ( a4[2] )
        v13 = "true";
      else
        v13 = "false";
      return fprintf(v6, "<%1$s type=boolean>%2$s</%1$s>\n", a4[1], v13);
    case 5:
LABEL_4:
      v9 = a4[1];
      v10 = a4[2];
      v11 = v6;
      v12 = "<%1$s type=integer>0x%2$lX</%1$s>\n";
      return fprintf(v11, v12, v9, v10);
    case 6:
      v14 = (int *)a4[2];
      if ( !v14 )
        return result;
      if ( *v14 <= 0 )
      {
LABEL_6:
        v10 = 2124;
        v9 = a4[1];
        v11 = v6;
        v12 = "<%s/>\n";
      }
      else
      {
        v15 = (const char *)a4[1];
        v16 = *v14 - 1;
        v17 = v14 + 2;
        fprintf(v6, "<%s type=nested>\n", v15);
        for ( i = ++dword_B8164; ; i = dword_B8164 )
        {
          --v16;
          v19 = *v17++;
          sub_7CFA4(v6, i, 0, v19);
          if ( v16 == -1 )
            break;
        }
        v21 = dword_B8164 - 2;
        v20 = dword_B8164 - 2 < 0;
        --dword_B8164;
        if ( !v20 )
        {
          do
          {
            IO_putc(32, v6);
            --v21;
            IO_putc(32, v6);
          }
          while ( v21 != -1 );
        }
        v10 = _stack_chk_guard;
        v9 = v8;
        v11 = v6;
        v12 = "</%s>\n";
      }
      return fprintf(v11, v12, v9, v10);
    default:
      goto LABEL_6;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v25 = (unsigned __int8)*++v23;
      v24 = v25;
      v26 = v25 > 0x26;
      if ( v25 == 38 )
        goto LABEL_35;
      if ( !v26 )
        break;
      if ( v24 == 62 )
        goto LABEL_35;
      if ( v24 > 0x3E )
      {
        if ( v24 >= 0x7F )
          goto LABEL_35;
      }
      else if ( v24 == 60 )
      {
        goto LABEL_35;
      }
LABEL_33:
      IO_putc(v24, v6);
    }
    if ( !v24 )
    {
      v10 = _stack_chk_guard;
      v9 = v8;
      v12 = "</%s>\n";
      v11 = v6;
      return fprintf(v11, v12, v9, v10);
    }
    if ( v24 > 0x1F )
      goto LABEL_33;
LABEL_35:
    IO_putc(38, v6);
    switch ( v24 )
    {
      case '&':
        v32 = (const char *)&unk_9F384;
        goto LABEL_47;
      case '<':
        v32 = (const char *)&off_9F394;
        goto LABEL_47;
      case '>':
        v32 = (const char *)&unk_9F3A4;
        goto LABEL_47;
      case '"':
        v32 = (const char *)&unk_9F3B4;
        goto LABEL_47;
      case '\'':
        v32 = (const char *)&unk_9F3C4;
LABEL_47:
        fputs(v32 + 8, v6);
        break;
      default:
        fprintf(v6, "#x%02X;", v24);
        break;
    }
  }
}
