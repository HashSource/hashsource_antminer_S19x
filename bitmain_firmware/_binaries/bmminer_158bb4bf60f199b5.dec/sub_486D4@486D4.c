_DWORD *__fastcall sub_486D4(_DWORD *result)
{
  _DWORD *v1; // r2
  _DWORD *v2; // r3
  int v3; // t1

  v1 = &unk_9E420;
  v2 = result + 34;
  do
  {
    v3 = v1[1];
    ++v1;
    *v2++ = v3;
  }
  while ( v2 != result + 42 );
  result[1] = 0;
  *result = 0;
  return result;
}
