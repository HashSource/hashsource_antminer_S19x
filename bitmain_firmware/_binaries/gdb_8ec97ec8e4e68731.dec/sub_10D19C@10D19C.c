int __fastcall sub_10D19C(int result)
{
  _DWORD *v1; // r4
  int v2; // r5
  const char *v3; // r0

  v1 = (_DWORD *)dword_4872C0;
  if ( dword_4872C0 )
  {
    v2 = result;
    do
    {
      sub_25A44C(v1, v2);
      sub_2594B0(v2, ":");
      sub_2594B0(v2, " id=");
      sub_15C6C8(v2, v1[1], v1[2], v1[3], v1[4], v1[5]);
      v3 = (const char *)sub_23095C(v1[6], v1[7], v1[8]);
      sub_2594B0(v2, ", ptid=%s", v3);
      result = sub_2594B0(v2, (const char *)&word_356638);
      v1 = (_DWORD *)*v1;
    }
    while ( v1 );
  }
  return result;
}
