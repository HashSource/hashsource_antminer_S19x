const unsigned __int16 **__fastcall sub_2CE3C(const unsigned __int16 **result, unsigned __int8 *a2)
{
  int v2; // r8
  size_t v4; // r6
  int v5; // r4
  int v6; // t1
  bool v7; // zf
  _BYTE *v8; // r2
  int v9; // t1
  bool v10; // zf
  _BYTE src[40]; // [sp+4h] [bp-28h] BYREF

  v2 = (int)result;
  v4 = 0;
  while ( 1 )
  {
    v6 = *a2++;
    v5 = v6;
    v7 = v6 == 35;
    if ( v6 != 35 )
      v7 = v5 == 0;
    if ( v7 )
      break;
    while ( 1 )
    {
      result = _ctype_b_loc();
      if ( ((*result)[v5] & 0x800) == 0 )
        break;
      v8 = &src[v4 + 36];
      v4 = (v4 + 1) & 0x1F;
      *(v8 - 36) = v5;
      if ( v4 )
        break;
      result = (const unsigned __int16 **)sub_782A0(v2, src, 0x20u);
      v9 = *a2++;
      v5 = v9;
      v10 = v9 == 35;
      if ( v9 != 35 )
        v10 = v5 == 0;
      if ( v10 )
        goto LABEL_11;
    }
  }
LABEL_11:
  if ( v4 )
    return (const unsigned __int16 **)sub_782A0(v2, src, v4);
  return result;
}
