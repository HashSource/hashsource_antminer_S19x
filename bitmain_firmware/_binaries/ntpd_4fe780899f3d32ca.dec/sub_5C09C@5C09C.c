int __fastcall sub_5C09C(unsigned __int8 *a1, _DWORD *a2)
{
  const unsigned __int16 **v4; // r0
  int v5; // r3
  const unsigned __int16 *v6; // r2
  int result; // r0
  int v8; // r1

  v4 = _ctype_b_loc();
  v5 = *a1;
  v6 = *v4;
  result = (*v4)[v5] & 0x800;
  if ( result )
  {
    v8 = a1[1];
    result = v6[v8] & 0x800;
    if ( (v6[v8] & 0x800) != 0 )
    {
      *a2 = v8 + 10 * (v5 - 48) - 48;
      return 1;
    }
  }
  return result;
}
