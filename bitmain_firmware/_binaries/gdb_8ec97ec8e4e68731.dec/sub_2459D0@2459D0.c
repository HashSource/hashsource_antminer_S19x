int __fastcall sub_2459D0(int a1, int a2)
{
  int v2; // r7
  const char **v4; // r5
  const char *v5; // r4
  const char *v6; // r10
  int v7; // r9
  const char *v8; // t1
  const char *v9; // t1
  int *v10; // r0
  int *v11; // r4
  void *v12; // r5
  char *v13; // r1
  const char **v15; // [sp+4h] [bp-8h] BYREF

  if ( !a1 )
    sub_51E9C("file in which to save trace data");
  v2 = 0;
  v15 = 0;
  sub_25B0DC(&v15, a1);
  v4 = v15;
  v5 = *v15;
  if ( !*v15 )
    goto LABEL_22;
  v6 = 0;
  v7 = 0;
  do
  {
    while ( !strcmp(v5, "-r") )
    {
      v9 = v4[1];
      ++v4;
      v5 = v9;
      v7 = 1;
      if ( !v9 )
        goto LABEL_10;
    }
    if ( !strcmp(v5, "-ctf") )
    {
      v2 = 1;
    }
    else
    {
      if ( *v5 == 45 )
        sub_946E0("unknown option `%s'", v5);
      v6 = v5;
    }
    v8 = v4[1];
    ++v4;
    v5 = v8;
  }
  while ( v8 );
LABEL_10:
  if ( !v6 )
LABEL_22:
    sub_51E9C("file in which to save trace data");
  if ( v2 )
    v10 = sub_103560();
  else
    v10 = (int *)sub_24755C();
  v11 = v10;
  v12 = sub_9253C((int)sub_2453A8, (int)v10);
  sub_2453C8(v6, v11, v7);
  if ( a2 )
  {
    v13 = "directory";
    if ( !v2 )
      v13 = "file";
    sub_259F10("Trace data saved to %s '%s'.\n", v13, v6);
  }
  sub_92620(v12);
  return sub_31DAD0(v15);
}
