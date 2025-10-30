int __fastcall sub_45314(int result)
{
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r5
  const char *v4; // r0

  if ( *(_DWORD *)(result + 56) )
  {
    v1 = (_DWORD *)result;
    v2 = sub_98F68(result);
    result = sub_452CC(v2);
    if ( !result )
    {
      if ( dword_47202C )
      {
        v3 = *(_DWORD *)sub_242FC8(0);
        v4 = (const char *)sub_23095C(*v1, v1[1], v1[2]);
        result = sub_2594B0(v3, "MCIS: Clearing bogus flag for %s\n", v4);
      }
      v1[14] = 0;
    }
  }
  return result;
}
