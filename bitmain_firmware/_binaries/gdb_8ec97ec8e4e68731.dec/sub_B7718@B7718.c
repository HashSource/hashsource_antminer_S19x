int __fastcall sub_B7718(int result)
{
  int v1; // r5

  if ( dword_48968C == 2 && (!dword_478210 || *(_DWORD *)(dword_487668 + 68)) )
  {
    v1 = dword_46DC04;
    sub_22F048(result);
    result = sub_259858(asc_3784F0);
    if ( !v1 )
      result = sub_22EF7C(result);
    dword_478210 = 1;
  }
  return result;
}
