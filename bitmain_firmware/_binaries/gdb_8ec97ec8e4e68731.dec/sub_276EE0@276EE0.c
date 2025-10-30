int __fastcall sub_276EE0(const char *a1, int a2, int a3)
{
  int v3; // r5
  int v5; // r6
  __int64 v6; // r0
  int v7; // r0
  _DWORD *v8; // r5
  _BYTE v9[8]; // [sp+Ch] [bp-34h] BYREF
  int v10[5]; // [sp+14h] [bp-2Ch] BYREF
  void *ptr; // [sp+28h] [bp-18h] BYREF
  int v12; // [sp+2Ch] [bp-14h]
  _BYTE v13[16]; // [sp+30h] [bp-10h] BYREF

  v12 = 0;
  v13[0] = 0;
  ptr = v13;
  if ( !sub_274D48((int)&ptr, (struct XML_ParserStruct *)"target description", a1, a2, a3, 0) )
  {
    sub_946B0("Could not load XML target description; ignoring");
LABEL_3:
    v3 = 0;
    goto LABEL_4;
  }
  v5 = sub_33A4A8(ptr, v12, -955291385);
  v6 = sub_347674(v5, dword_48AA2C);
  v7 = sub_2771EC(&dword_48AA28, HIDWORD(v6), &ptr, v5);
  if ( v7 && *(_DWORD *)v7 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)v7 + 28);
  }
  else
  {
    memset(&v10[1], 0, 16);
    v10[0] = (int)sub_236588();
    v8 = sub_2365D4(v10[0]);
    if ( sub_274C9C(
           (struct XML_ParserStruct *)"target description",
           (int)"gdb-target.dtd",
           (int)&off_3F8CEC,
           (const char *)ptr,
           (struct XML_ParserStruct *)v10) )
    {
      sub_946B0("Could not load XML target description; ignoring");
      sub_92620(v8);
      goto LABEL_3;
    }
    sub_277398(v9, &dword_48AA28, 0, &ptr, v10);
    sub_92640(v8);
    v3 = v10[0];
  }
LABEL_4:
  if ( ptr != v13 )
    sub_339E64(ptr);
  return v3;
}
