int __fastcall sub_CAEC8(int a1)
{
  _DWORD *v2; // r0
  int result; // r0
  int v4; // r3

  v2 = (_DWORD *)sub_242FDC(a1);
  result = sub_2573F0(*v2);
  if ( !result )
  {
    v4 = *(_DWORD *)(a1 + 12);
    if ( v4 == 28 )
    {
      sub_259F10("Fast tracepoint");
      goto LABEL_8;
    }
    if ( v4 != 29 )
    {
      if ( v4 == 27 )
      {
        sub_259F10("Tracepoint");
LABEL_8:
        sub_259F10(" %d", *(_DWORD *)(a1 + 24));
        return sub_C89B4(a1);
      }
      sub_94700((int)"breakpoint.c", 12959, "unhandled tracepoint type %d", v4);
    }
    sub_259F10("Static tracepoint");
    goto LABEL_8;
  }
  return result;
}
