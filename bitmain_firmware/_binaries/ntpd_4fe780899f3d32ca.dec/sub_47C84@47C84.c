__int16 *__fastcall sub_47C84(int a1, int a2)
{
  int **v3; // r4
  int v4; // r3
  __int16 *result; // r0

  v3 = *(int ***)(a2 + 84);
  v4 = **v3;
  if ( v4 )
    **v3 = v4 - 1;
  else
    sub_394A0((__int16 *)a2, 1);
  result = (__int16 *)write((int)v3[7], ":PTIME:TCODE?\r", 0xEu);
  if ( result != (__int16 *)&byte_9[5] )
    return sub_394A0((__int16 *)a2, 3);
  v3[194] = (int *)((char *)v3[194] + 1);
  return result;
}
