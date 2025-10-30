int __fastcall sub_D17AC(unsigned __int8 *a1, int a2, int a3, unsigned __int8 *a4)
{
  int v6; // r6
  int v7; // r0
  __int64 v8; // r0
  int v9; // r0
  int result; // r0
  unsigned __int8 *v11; // [sp+4h] [bp-4h] BYREF

  v11 = a1;
  if ( !a1 )
    sub_51E9C("a breakpoint number");
  v6 = sub_5ADBC(&v11, a2, a3, a4);
  if ( !v6 )
    sub_946E0("bad breakpoint number: '%s'", (const char *)a1);
  if ( !*v11 )
    sub_946E0("Second argument (specified ignore-count) is missing.");
  v7 = sub_14CC6C(v11);
  v8 = sub_26EB1C(v7);
  v9 = sub_26725C(v8, HIDWORD(v8));
  result = sub_D16C4(v6, v9, a2);
  if ( a2 )
    return sub_259F10((const char *)&word_356638);
  return result;
}
