_DWORD *__fastcall sub_1EBD8(_DWORD *result)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i <= 7; ++i )
    result[i + 34] = dword_857E8[i];
  result[1] = 0;
  *result = 0;
  return result;
}
