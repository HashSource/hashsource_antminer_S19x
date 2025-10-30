int __fastcall sub_B73EC(int result)
{
  int v1; // r5

  if ( *(int *)(result + 24) > 0 && dword_48968C == 2 && (!dword_478204 || *(_DWORD *)(dword_487668 + 68)) )
  {
    v1 = dword_46DC04;
    sub_22F048(result);
    result = sub_259858(asc_37839C);
    if ( !v1 )
      result = sub_22EF7C(result);
    dword_478204 = 1;
  }
  return result;
}
