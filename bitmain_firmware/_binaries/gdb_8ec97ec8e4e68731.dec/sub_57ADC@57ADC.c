int __fastcall sub_57ADC(int result, int **a2, int a3)
{
  int **v3; // r4
  int v5; // r5
  int v6; // r10
  int *v7; // r1
  char *v8; // r2
  const char *v9; // r2
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int *v14; // r3
  int v15; // r2
  const char *v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r2
  int v20; // r3
  int v21; // r2
  int v22; // r3

  v3 = a2;
  if ( a2 )
  {
    v5 = result;
    v6 = 2 * a3;
    if ( a3 )
      goto LABEL_20;
LABEL_4:
    v7 = v3[2];
    if ( v7 )
    {
      while ( v7 != (int *)2 )
      {
        if ( v7 == (int *)1 )
        {
          v8 = "loop_break";
          goto LABEL_23;
        }
        if ( v7 == (int *)3 )
        {
          sub_257694(v5, 0, "while %s", (const char *)v3[1]);
          goto LABEL_25;
        }
        if ( v7 == (int *)9 )
        {
          sub_2575E8(v5, 0, v3[1]);
          goto LABEL_25;
        }
        if ( v7 == (int *)4 )
        {
          sub_257694(v5, 0, "if %s", (const char *)v3[1]);
          sub_257380(v5, &word_356638, v19, v20);
          sub_57ADC(v5, *v3[6], a3 + 1);
          if ( v3[5] == (int *)2 )
          {
            if ( a3 )
              sub_257374(v5, v6);
            sub_2575E8(v5, 0, "else");
            sub_257380(v5, &word_356638, v21, v22);
            sub_57ADC(v5, v3[6][1], a3 + 1);
          }
          goto LABEL_27;
        }
        if ( v7 == (int *)5 )
        {
          v16 = (const char *)v3[1];
          if ( *v16 )
            sub_257694(v5, 0, "commands %s", v16);
          else
            sub_2575E8(v5, *(unsigned __int8 *)v16, "commands");
LABEL_25:
          sub_257380(v5, &word_356638, v12, v13);
          v14 = v3[6];
          v15 = a3 + 1;
LABEL_26:
          sub_57ADC(v5, *v14, v15);
LABEL_27:
          if ( a3 )
            sub_257374(v5, v6);
          v8 = "end";
          goto LABEL_23;
        }
        if ( v7 == (int *)6 )
        {
          v9 = "python";
LABEL_33:
          sub_2575E8(v5, 0, v9);
          sub_257380(v5, &word_356638, v17, v18);
          v14 = v3[6];
          v15 = 0;
          goto LABEL_26;
        }
        if ( v7 == (int *)7 )
        {
          v9 = "compile expression";
          goto LABEL_33;
        }
        if ( v7 == (int *)8 )
        {
          sub_2575E8(v5, 0, "guile");
          goto LABEL_25;
        }
LABEL_18:
        v3 = (int **)*v3;
        if ( !v3 )
          return result;
        if ( !a3 )
          goto LABEL_4;
LABEL_20:
        result = sub_257374(v5, v6);
        v7 = v3[2];
        if ( !v7 )
        {
          v8 = (char *)v3[1];
          goto LABEL_23;
        }
      }
      v8 = "loop_continue";
    }
    else
    {
      v8 = (char *)v3[1];
    }
LABEL_23:
    sub_2575E8(v5, 0, v8);
    result = sub_257380(v5, &word_356638, v10, v11);
    goto LABEL_18;
  }
  return result;
}
