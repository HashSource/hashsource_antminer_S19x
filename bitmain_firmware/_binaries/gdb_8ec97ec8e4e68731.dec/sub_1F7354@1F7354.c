int __fastcall sub_1F7354(int a1, int a2)
{
  int v2; // r4
  const char *v3; // r5
  void *v4; // r9
  char *v5; // r0
  char *v6; // r10
  const char *v7; // r0
  int result; // r0

  v2 = a2;
  dword_489344 = (int)off_46D458;
  if ( a2 )
  {
    sub_158084();
    result = sub_1F61A4(-1, 4);
  }
  else
  {
    v3 = (const char *)(a1 + 1);
    v4 = sub_92E28();
    off_46D458 = sub_1F5F7C;
    v5 = strchr(v3, 44);
    if ( v5 )
    {
      v6 = v5 + 1;
      *v5 = 0;
    }
    else
    {
      v6 = (char *)&v3[strlen(v3)];
    }
    v7 = "open";
    do
    {
      if ( !strcmp(v7, v3) )
      {
        ((void (__fastcall *)(char *))*(&off_3DA1C0 + 2 * v2 + 1))(v6);
        goto LABEL_8;
      }
      ++v2;
      v7 = (const char *)*(&off_3DA1C0 + 2 * v2);
    }
    while ( v7 );
    sub_1F61A4(-1, 88);
LABEL_8:
    result = sub_92E40((int)v4);
  }
  off_46D458 = (int (*)())dword_489344;
  return result;
}
