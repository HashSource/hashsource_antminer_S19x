int __fastcall sub_15AEA8(int a1, int a2)
{
  int v2; // r3
  __int64 v3; // r0

  v2 = **(char **)(a2 + 24);
  if ( v2 == 1 || (unsigned __int8)(v2 - 18) <= 1u )
  {
    sub_170040(a2);
    JUMPOUT(0x1688AC);
  }
  v3 = sub_94700((int)"findvar.c", 157, "extract_typed_address: type is not a pointer or reference");
  return sub_15AF04(v3, HIDWORD(v3));
}
