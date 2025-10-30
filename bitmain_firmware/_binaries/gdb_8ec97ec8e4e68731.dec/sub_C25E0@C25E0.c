int __fastcall sub_C25E0(int result, int a2, struct obstack *a3)
{
  _DWORD *v3; // r3
  int v5; // r4
  __int64 v6; // r0

  v3 = *(_DWORD **)(result + 20);
  if ( v3 )
  {
    *v3 = a2;
  }
  else
  {
    v5 = result;
    HIDWORD(v6) = a3;
    LODWORD(v6) = result + 20;
    result = sub_C2100(v6);
    **(_DWORD **)(v5 + 20) = a2;
  }
  return result;
}
