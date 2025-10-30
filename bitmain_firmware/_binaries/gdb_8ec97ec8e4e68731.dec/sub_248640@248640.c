void __fastcall sub_248640(_DWORD *a1)
{
  int v1; // r0
  int v2; // r1
  size_t v3; // r8
  int v4; // r0
  int v5; // r0
  __int64 v6; // r0
  void *v7; // r0
  _DWORD *v8; // r0
  void *src; // [sp+4h] [bp-1Ch]

  if ( !a1[5] )
  {
    if ( (int)a1[8] >= 0 )
    {
      if ( (int)a1[7] > 20 )
        sub_946E0("Expression is too complicated.");
      return;
    }
    sub_94700((int)"tracepoint.c", 628, "expression has min height < 0");
  }
  sub_94700((int)"tracepoint.c", 623, "expression is malformed");
  v1 = sub_230574((int)&dword_4899A0);
  if ( v2 < 0 )
  {
    sub_1780B4();
    sub_26BB80(*v8);
  }
  else
  {
    v3 = v1;
    sub_1780B4();
    v5 = sub_1721F4(*(_DWORD **)(v4 + 88), v3);
    v6 = sub_26BB80(v5);
    v7 = (void *)sub_26BCB8(v6, HIDWORD(v6));
    memcpy(v7, src, v3);
    if ( src )
      free(src);
  }
}
