int __fastcall sub_68F94(int a1, int a2)
{
  bool v2; // zf
  int v5; // r1
  int result; // r0
  __int64 v7; // r0

  v2 = a2 == 0;
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 36) - 4);
  if ( v2 )
  {
    result = sub_259314(125, v5);
    goto LABEL_4;
  }
  if ( a2 == 1 )
  {
    result = sub_259314(93, v5);
LABEL_4:
    *(_BYTE *)(a1 + 24) = 0;
    return result;
  }
  v7 = sub_94700("mi/mi-out.c", 233, "bad switch");
  return sub_68FEC(v7, HIDWORD(v7));
}
