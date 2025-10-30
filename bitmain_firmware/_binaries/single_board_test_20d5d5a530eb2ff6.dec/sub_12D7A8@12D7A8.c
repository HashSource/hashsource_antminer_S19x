bool __fastcall sub_12D7A8(int a1, int a2, int a3, int a4)
{
  int v7; // r6
  unsigned int v8; // r4
  int v9; // r2
  int v10; // t1
  const char *v11; // r3

  if ( !a3 )
    return sub_B69CC(a1, (int)"\n", 1) > 0;
  v7 = a2 - 1;
  v8 = 0;
  while ( v8 != 15 * (v8 / 0xF) || (!v8 || sub_B6C30(a1, (int)"\n") > 0) && sub_B6E94(a1, a4, 128) )
  {
    v10 = *(unsigned __int8 *)++v7;
    v9 = v10;
    v11 = (const char *)&word_1B5258;
    if ( a3 - 1 == v8 )
      v11 = &byte_1A4198;
    ++v8;
    if ( sub_B550C(a1, "%02x%s", v9, v11) <= 0 )
      break;
    if ( a3 == v8 )
      return sub_B69CC(a1, (int)"\n", 1) > 0;
  }
  return 0;
}
