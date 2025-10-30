bool __fastcall sub_10D840(int a1, int *a2, int a3)
{
  int v4; // r8
  int v6; // r5
  int v7; // r4
  int v8; // lr
  int v9; // t1
  int v10; // r2
  bool v11; // zf

  v4 = *a2;
  if ( *a2 > 0 )
  {
    v6 = a2[2] - 1;
    v7 = 0;
    while ( 1 )
    {
      v11 = v7 == 18 * (v7 / 18);
      ++v7;
      if ( v11 && (sub_B69CC(a1, (int)"\n", 1) <= 0 || sub_B6E94(a1, a3, a3) <= 0) )
        return 0;
      v9 = *(unsigned __int8 *)++v6;
      v8 = v9;
      v10 = v9;
      if ( v4 == v7 )
        break;
      if ( sub_B550C(a1, "%02x%s", v10, (const char *)&word_1B5258) <= 0 )
        return 0;
    }
    if ( sub_B550C(a1, "%02x%s", v8, &byte_1A4198) <= 0 )
      return 0;
  }
  return sub_B69CC(a1, (int)"\n", 1) == 1;
}
