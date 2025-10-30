_DWORD *__fastcall sub_3CD04(_DWORD *result)
{
  _DWORD *v1; // r2
  _DWORD *v2; // r3
  int v3; // t1

  v1 = &unk_B3194;
  v2 = result + 33;
  do
  {
    v3 = v1[1];
    ++v1;
    v2[1] = v3;
    ++v2;
  }
  while ( v2 != result + 41 );
  result[1] = 0;
  *result = 0;
  return result;
}
