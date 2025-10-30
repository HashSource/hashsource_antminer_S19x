void __fastcall sub_9DD64(_BYTE *a1, int a2, int *a3, int *a4, int *a5)
{
  _DWORD *v9; // r7
  unsigned __int8 *v10; // r0
  int v11; // r4
  const char *v12; // r10
  _BYTE *v13; // r0
  size_t v14; // r11
  int v15; // r10
  int v16; // r0
  int v17; // r5
  const char *v18; // r0
  const char *v19; // r10
  int v20; // r0
  int v21; // r3

  v9 = sub_9253C((int)nullsub_39, 0);
  v10 = (unsigned __int8 *)sub_9360C(a1);
  v11 = *v10;
  if ( *v10 )
  {
    v12 = (const char *)v10;
    v13 = sub_93610(v10);
    v14 = v13 - v12;
    a1 = v13;
    v11 = (int)sub_93028(v13 - v12 + 1);
    strncpy((char *)v11, v12, v14);
    *(_BYTE *)(v11 + v14) = 0;
    if ( !strcmp((const char *)v11, "if") )
    {
      a1 -= 2;
      free((void *)v11);
      v11 = 0;
    }
  }
  sub_9253C((int)sub_9AD58, v11);
  v15 = sub_9360C(a1);
  if ( !strncmp((const char *)v15, "if", 2u) )
  {
    v16 = *(unsigned __int8 *)(v15 + 2);
    v17 = v16 == 0;
    if ( isspace(v16) )
      v17 = 1;
    if ( v17 )
    {
      v18 = (const char *)sub_9360C(v15 + 2);
      v19 = v18;
      if ( !*v18 )
        sub_946E0("Condition missing after `if' keyword");
      v17 = sub_327254(v18);
      sub_9253C((int)sub_9AD58, v17);
      v15 = (int)&v19[strlen(v19)];
    }
  }
  else
  {
    v17 = 0;
  }
  if ( *(_BYTE *)v15 )
    sub_946E0("Junk at end of expression");
  sub_92640(v9);
  if ( a2 )
  {
    *a3 = 3;
    *a4 = v11;
  }
  else if ( v11 )
  {
    v20 = strcmp((const char *)v11, "unhandled");
    if ( v20 )
      *a3 = 0;
    else
      v21 = 1;
    if ( v20 )
      *a4 = v11;
    else
      *a3 = v21;
    if ( !v20 )
      *a4 = 0;
  }
  else
  {
    *a3 = 0;
    *a4 = 0;
  }
  *a5 = v17;
}
