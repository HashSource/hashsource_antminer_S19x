_DWORD *__fastcall sub_1F520(_DWORD *result)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i <= 7; ++i )
    result[i + 34] = dword_86980[i];
  result[1] = 0;
  *result = 0;
  return result;
}
