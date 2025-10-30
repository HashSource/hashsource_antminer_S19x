_BYTE *__fastcall sub_1FDA0(_BYTE *result, int a2, int a3)
{
  _BYTE *v3; // r2
  _BYTE *v5; // [sp+Ch] [bp-10h]
  int i; // [sp+14h] [bp-8h]

  v5 = result;
  for ( i = 0; i < a3; ++i )
  {
    *v5 = a0123456789abcd[*(_BYTE *)(a2 + i) >> 4];
    v3 = v5 + 1;
    v5 += 2;
    *v3 = a0123456789abcd[*(_BYTE *)(a2 + i) & 0xF];
  }
  *v5 = 0;
  return result;
}
