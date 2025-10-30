int __fastcall sub_C5D24(int result, int a2, int a3)
{
  int v3; // r3
  int v5; // r4
  int v6; // r2
  int v7; // r3

  v3 = *(_DWORD *)(result + 144);
  if ( v3 )
  {
    v5 = result;
    sub_257380(a2, "\tmatching: ", a3, v3);
    sub_2575E8(a2, "regexp", *(_DWORD *)(v5 + 140));
    return sub_257380(a2, &word_356638, v6, v7);
  }
  return result;
}
