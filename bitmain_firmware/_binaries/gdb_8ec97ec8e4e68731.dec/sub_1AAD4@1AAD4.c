int __fastcall sub_1AAD4(int a1)
{
  int v2; // r0
  const char *v3; // r5
  const char *v4; // r4
  size_t v5; // r8
  char *v6; // r0

  v2 = sub_B894C();
  LOWORD(v3) = (unsigned __int16)"";
  v4 = (const char *)sub_10C110(v2);
  if ( v4 )
  {
    HIWORD(v3) = (unsigned int)"" >> 16;
    v5 = 0;
    do
    {
      if ( !strncmp(v4, "reg-names-", 0xAu) )
      {
        v3 = v4 + 10;
        v5 = strcspn(v4 + 10, (const char *)&word_3D7D40);
      }
      v6 = strchr(v4, 44);
      if ( !v6 )
        break;
      v4 = v6 + 1;
    }
    while ( v6 != (char *)-1 );
  }
  else
  {
    v5 = 0;
    HIWORD(v3) = (unsigned int)"" >> 16;
  }
  return sub_2594B0(a1, "The disassembly style is \"%.*s\".\n", v5, v3);
}
