int __fastcall sub_A86B4(int a1)
{
  int v1; // r4
  bool v2; // zf
  int result; // r0

  v1 = a1;
  if ( a1 && (*(_BYTE *)(*(_DWORD *)(a1 + 24) + 2) & 8) == 0 )
    v1 = sub_A28F8(a1);
  v2 = !sub_A0CFC(v1);
  result = v1;
  if ( !v2 )
    return sub_A8678(v1);
  return result;
}
