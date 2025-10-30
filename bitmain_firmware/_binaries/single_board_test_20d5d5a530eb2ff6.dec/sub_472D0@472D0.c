int __fastcall sub_472D0(int result)
{
  _DWORD *v1; // r2
  int v2; // r1

  v1 = (_DWORD *)result;
  if ( result )
  {
    result = dword_705588;
    v2 = *(_DWORD *)&byte_70558C;
    *v1 = dword_705588;
    v1[1] = v2;
  }
  return result;
}
