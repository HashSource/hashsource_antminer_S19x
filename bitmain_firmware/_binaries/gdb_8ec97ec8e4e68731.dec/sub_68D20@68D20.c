int __fastcall sub_68D20(int a1, const char *a2, int a3)
{
  int v6; // r5
  __int64 v8; // r0

  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 36) - 4);
  if ( !*(_BYTE *)(a1 + 24) )
    sub_68BE4(a1);
  *(_BYTE *)(a1 + 24) = 1;
  if ( a2 )
    sub_2594B0(v6, "%s=", a2);
  if ( !a3 )
    return sub_259314(123, v6);
  if ( a3 == 1 )
    return sub_259314(91, v6);
  v8 = sub_94700("mi/mi-out.c", 213, "bad switch");
  return sub_68DB8(v8, HIDWORD(v8));
}
