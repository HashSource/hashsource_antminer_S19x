int __fastcall sub_A8AAC(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r4
  int result; // r0
  int v6; // r0
  bool v7; // zf

  v2 = sub_26BC70(a1);
  if ( sub_A0C94(v2) )
  {
    v3 = sub_A8A3C(a1);
    v4 = v3;
    if ( !v3 )
      sub_946E0("Bounds unavailable for null array pointer.");
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(sub_26BC70(v3) + 24) + 20) + 20) > (unsigned int)dword_477C84 )
      sub_946E0("object size is larger than varsize-limit");
    return sub_26210C(v4);
  }
  else
  {
    v6 = sub_26BC70(a1);
    v7 = !sub_A0CFC(v6);
    result = a1;
    if ( !v7 )
      return sub_A8914();
  }
  return result;
}
