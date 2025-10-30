const char *__fastcall sub_274384(struct XML_ParserStruct *a1, const XML_Char *a2, int a3, char *s2)
{
  const char *v6; // r4
  struct XML_ParserStruct *v7; // r5
  size_t v8; // r0
  enum XML_Status v9; // r4
  char *v11; // r7

  if ( s2 )
  {
    v6 = sub_274340(s2);
    if ( v6 )
    {
LABEL_3:
      v7 = XML_ExternalEntityParserCreate(a1, a2, 0);
      XML_SetElementHandler(v7, 0, 0);
      XML_SetDoctypeDeclHandler(v7, 0, 0);
      XML_SetXmlDeclHandler(v7, 0);
      XML_SetDefaultHandler(v7, 0);
      XML_SetUserData(v7, 0);
      v8 = strlen(v6);
      v9 = XML_Parse(v7, v6, v8, 1);
      XML_ParserFree(v7);
      return (const char *)v9;
    }
  }
  else
  {
    v11 = *(char **)(*(_DWORD *)a1 + 40);
    v6 = sub_274340(v11);
    if ( v6 )
      goto LABEL_3;
    sub_94700((int)"xml-support.c", 551, "could not locate built-in DTD %s", v11);
  }
  return v6;
}
