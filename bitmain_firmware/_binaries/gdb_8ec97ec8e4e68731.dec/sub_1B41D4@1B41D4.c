int __fastcall sub_1B41D4(_BYTE *a1)
{
  int v1; // r0
  int v2; // r0
  unsigned int v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  __int64 v6; // r0
  int v7; // r4
  int v8; // r0
  unsigned int v9; // r4
  unsigned int v10; // r0
  unsigned __int8 v12; // [sp+3h] [bp-11h] BYREF
  int v13; // [sp+4h] [bp-10h] BYREF
  void *ptr; // [sp+8h] [bp-Ch] BYREF
  int v15; // [sp+Ch] [bp-8h] BYREF

  v12 = 0;
  if ( !a1 || !*a1 )
    sub_946E0("The 'print-object' command requires an argument (an Objective-C object)", a1);
  sub_1C42A8(&ptr, a1);
  v15 = 0;
  sub_1780B4();
  v2 = sub_14C9EC(*(_DWORD *)(v1 + 152), (int *)ptr, &v15, 0);
  v13 = v2;
  if ( ptr )
  {
    free(ptr);
    v2 = v13;
  }
  v3 = sub_26EB1C(v2);
  sub_FA844(v3, (int)&v12, 1);
  v4 = sub_2611C4("_NSPrintForDebugger", 0);
  if ( !v4 )
    sub_946E0("Unable to locate _NSPrintForDebugger in child process");
  v5 = sub_17E6EC(v4, 0, 1, (char *)&v13);
  v6 = sub_26EB1C(v5);
  v7 = v6;
  if ( !(_DWORD)v6 )
    sub_946E0("object returns null description", HIDWORD(v6));
  v8 = sub_FA844(v6, (int)&v12, 1);
  if ( v12 )
  {
    v9 = v7 + 1;
    do
    {
      sub_258BD4(v8);
      sub_259F10("%c", v12);
      v10 = v9++;
      v8 = sub_FA844(v10, (int)&v12, 1);
    }
    while ( v12 );
  }
  else
  {
    sub_259F10("<object returns empty description>");
  }
  return sub_259F10((const char *)&word_356638);
}
