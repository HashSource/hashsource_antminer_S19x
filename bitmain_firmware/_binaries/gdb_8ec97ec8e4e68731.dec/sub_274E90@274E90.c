void __fastcall sub_274E90(int a1, int a2, int *a3, _DWORD *a4)
{
  const char *v6; // r6
  void *v7; // r0
  bool v8; // zf
  void *v9; // r0
  int v10; // r0
  void *ptr; // [sp+Ch] [bp-4h] BYREF

  v6 = (const char *)sub_273FA0(a4, "href")[1];
  sub_273C78(a1, "Processing XInclude of \"%s\"", v6);
  if ( a3[2] > 30 )
  {
    sub_273CF8(a1, "Maximum XInclude depth (%d) exceeded", 30);
    goto LABEL_8;
  }
  ((void (__fastcall *)(void **, const char *, int))a3[3])(&ptr, v6, a3[4]);
  if ( !ptr )
  {
    v10 = sub_273CF8(a1, "Could not load XML document \"%s\"", v6);
    sub_274F94(v10);
    return;
  }
  if ( !sub_274D48(*a3, *(struct XML_ParserStruct **)(a1 + 4), (const char *)ptr, a3[3], a3[4], a3[2] + 1) )
  {
LABEL_8:
    sub_273CF8(a1, "Parsing \"%s\" failed", v6);
    v9 = ptr;
    if ( ptr )
      free(ptr);
    sub_338FFC(v9);
  }
  v7 = ptr;
  v8 = ptr == 0;
  ++a3[1];
  if ( !v8 )
    free(v7);
}
