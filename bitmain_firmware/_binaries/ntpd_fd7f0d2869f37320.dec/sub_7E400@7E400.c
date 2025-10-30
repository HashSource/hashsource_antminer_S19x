int __fastcall sub_7E400(int result, int a2, int a3, _DWORD *a4)
{
  int v4; // r7
  FILE *v6; // r4
  int *v8; // r7
  int v9; // r9
  const char *v10; // r2
  int v11; // r5
  int *v12; // r7
  int i; // r1
  int v14; // t1
  bool v15; // nf
  int v16; // r5
  const char *v17; // r10
  char *v18; // r5
  unsigned int v19; // r2
  unsigned int v20; // t1
  bool v21; // cc
  int v22; // r7
  int v23; // r10
  const char *v24; // r3
  const char *v25; // r0
  int v26; // r3
  const char *v27; // r3
  char *v28; // r0
  int v29; // t1
  unsigned int v30; // [sp+0h] [bp-14h]

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
  switch ( *a4 )
  {
    case 1:
      v17 = (const char *)a4[1];
      v18 = (char *)a4 + 7;
      fprintf(v6, "<%s>", v17);
      break;
    case 2:
    case 4:
      if ( !a3 )
        return fprintf(v6, "<%1$s type=integer>0x%2$lX</%1$s>\n", a4[1], a4[2]);
      v22 = *(_DWORD *)(a3 + 16);
      v23 = *(_DWORD *)(a3 + 24);
      if ( *a4 == 2 )
        v24 = "keyword";
      else
        v24 = "set-membership";
      fprintf(v6, "<%s type=%s>", (const char *)a4[1], v24);
      (*(void (__fastcall **)(int, int))(a3 + 40))(3, a3);
      v25 = *(const char **)(a3 + 24);
      if ( v25 )
      {
        fputs(v25, v6);
        if ( *a4 != 2 )
          free(*(void **)(a3 + 24));
      }
      v26 = _stack_chk_guard;
      *(_DWORD *)(a3 + 24) = v23;
      *(_DWORD *)(a3 + 16) = v22;
      return fprintf(v6, "</%s>\n", a4[1], v26);
    case 3:
      if ( a4[2] )
        v27 = "true";
      else
        v27 = "false";
      return fprintf(v6, "<%1$s type=boolean>%2$s</%1$s>\n", a4[1], v27);
    case 5:
      return fprintf(v6, "<%1$s type=integer>0x%2$lX</%1$s>\n", a4[1], a4[2]);
    case 6:
      v8 = (int *)a4[2];
      v9 = a4[1];
      if ( v8 )
      {
        if ( *v8 <= 0 )
          return fprintf(v6, "<%s/>\n", a4[1]);
        v10 = (const char *)a4[1];
        v11 = *v8 - 1;
        v12 = v8 + 2;
        fprintf(v6, "<%s type=nested>\n", v10);
        for ( i = ++dword_B9164; ; i = dword_B9164 )
        {
          --v11;
          v14 = *v12++;
          sub_7E400(v6, i, 0, v14);
          if ( v11 == -1 )
            break;
        }
        v16 = dword_B9164 - 2;
        v15 = dword_B9164 - 2 < 0;
        --dword_B9164;
        if ( !v15 )
        {
          do
          {
            IO_putc(32, v6);
            --v16;
            IO_putc(32, v6);
          }
          while ( v16 != -1 );
        }
        return fprintf(v6, "</%s>\n", v9);
      }
      return result;
    default:
      return fprintf(v6, "<%s/>\n", a4[1]);
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_14:
      v20 = (unsigned __int8)*++v18;
      v19 = v20;
      v21 = v20 > 0x26;
      if ( v20 == 38 )
        goto LABEL_33;
      if ( !v21 )
        break;
      if ( v19 == 62 )
        goto LABEL_33;
      if ( v19 > 0x3E )
      {
        if ( v19 >= 0x7F )
          goto LABEL_33;
      }
      else if ( v19 == 60 )
      {
        goto LABEL_33;
      }
LABEL_31:
      IO_putc(v19, v6);
    }
    if ( !v19 )
      return fprintf(v6, "</%s>\n", v17);
    if ( v19 > 0x1F )
      goto LABEL_31;
LABEL_33:
    v30 = v19;
    IO_putc(38, v6);
    if ( v30 == 38 )
    {
      v28 = (char *)&unk_A0984;
    }
    else
    {
      v28 = (char *)&unk_A0984;
      while ( 1 )
      {
        v29 = *((_DWORD *)v28 + 4);
        v28 += 16;
        if ( v30 == v29 )
          break;
        if ( v28 == (char *)&unk_A09C4 )
        {
          fprintf(v6, "#x%02X;");
          goto LABEL_14;
        }
      }
    }
    fputs(v28 + 8, v6);
  }
}
