unsigned __int8 *__fastcall sub_13F240(unsigned __int8 *result)
{
  unsigned __int8 v1; // r7
  unsigned __int8 v2; // r6
  unsigned __int8 v3; // r5
  unsigned __int8 v4; // r4
  unsigned __int8 v5; // r1
  unsigned __int8 v6; // r2
  unsigned __int8 v7; // r3

  v1 = byte_1CDC70[result[1]];
  v2 = byte_1CDC70[result[2]];
  v3 = byte_1CDC70[result[3]];
  v4 = byte_1CDC70[result[4]];
  v5 = byte_1CDC70[result[5]];
  v6 = byte_1CDC70[result[6]];
  v7 = byte_1CDC70[result[7]];
  *result = byte_1CDC70[*result];
  result[1] = v1;
  result[2] = v2;
  result[3] = v3;
  result[4] = v4;
  result[5] = v5;
  result[6] = v6;
  result[7] = v7;
  return result;
}
