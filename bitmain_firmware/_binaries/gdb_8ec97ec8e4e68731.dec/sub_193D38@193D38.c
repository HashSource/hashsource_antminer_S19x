void sub_193D38()
{
  const char *v0; // r5
  int v1; // r0
  int v2; // lr
  const char *v3; // r6
  char *v4; // r4
  int v5; // r5
  const char **v6; // t1
  int *v7; // r1
  void *v8; // r4
  int v9; // r0
  int v10; // r0
  int v11; // [sp-4h] [bp-4h]

  v0 = (const char *)dword_4879FC;
  if ( !strcmp((const char *)dword_4879FC, "on") )
  {
    v1 = 2;
    dword_4879EC = 2;
    dword_4879E8 = 1;
    goto LABEL_3;
  }
  if ( !strcmp(v0, "warn") )
  {
    dword_4879EC = 1;
    v1 = 1;
    dword_4879E8 = 1;
    goto LABEL_3;
  }
  v1 = strcmp(v0, "off");
  if ( !v1 )
  {
    dword_4879EC = 0;
    dword_4879E8 = 1;
LABEL_3:
    if ( off_46D5A4[0][3] != (char *)v1 )
      sub_946B0("the current range check setting does not match the language.\n");
    return;
  }
  if ( strcmp(v0, "auto") )
  {
    sub_94700((int)"language.c", 282, "Unrecognized range check setting: \"%s\"", v0);
    v11 = v2;
    v3 = (const char *)dword_487A00;
    v4 = (char *)&off_46D5A8;
    if ( !strcmp((const char *)dword_487A00, "local") )
    {
      v3 = "auto";
      dword_487A00 = (int)"auto";
    }
    while ( 1 )
    {
      v6 = *(const char ***)v4;
      v4 += 4;
      v5 = (int)v6;
      if ( !strcmp(*v6, v3) )
        break;
      if ( v4 == aWarningTheCurr )
      {
        sub_94700((int)"language.c", 210, "Couldn't find language `%s' in known languages list.", v3);
        goto LABEL_22;
      }
    }
    if ( *(_DWORD *)(v5 + 8) != 1 )
    {
      dword_487A04 = 1;
      off_46D5A4[0] = (char **)v5;
      sub_193C2C();
      dword_487A08 = *v7;
      __asm { POP             {R4-R8,PC} }
    }
    dword_487A04 = 0;
    v8 = sub_92E28();
    v9 = sub_15F7E8(0);
    v5 = sub_160314(v9);
    v10 = sub_92E40((int)v8);
    if ( v5 )
    {
LABEL_22:
      off_46D5A4[0] = off_46D5A4[v5 + 1];
      sub_193C2C();
    }
    else
    {
      sub_212714(v10);
    }
    dword_487A08 = (int)off_46D5A4[0];
    __asm { POP             {R4-R8,PC} }
  }
  dword_4879E8 = 0;
  sub_193C2C();
}
