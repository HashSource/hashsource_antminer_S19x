void __fastcall sub_1E7500(const char *a1)
{
  char *v2; // r8
  char *v3; // r4

  if ( dword_488CF0 )
  {
    v2 = (char *)sub_327254(dword_488CF0 + 13);
    v3 = strtok(v2, (const char *)&word_3D7D40);
    do
    {
      if ( !strcmp(v3, a1) )
      {
        free(v2);
        return;
      }
      v3 = strtok(0, (const char *)&word_3D7D40);
    }
    while ( v3 );
    free(v2);
    dword_488CF0 = sub_31E338(dword_488CF0, dword_488CF0, &word_3D7D40, a1, 0);
  }
  else
  {
    dword_488CF0 = sub_31E27C("xmlRegisters=", a1, 0);
  }
}
