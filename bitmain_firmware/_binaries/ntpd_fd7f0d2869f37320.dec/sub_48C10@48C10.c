ssize_t __fastcall sub_48C10(int a1, int a2)
{
  int **v3; // r4
  int v4; // r3
  ssize_t result; // r0

  v3 = *(int ***)(a2 + 84);
  v4 = **v3;
  if ( v4 )
    **v3 = v4 - 1;
  else
    sub_39C88(a2, 1);
  result = write((int)v3[7], ":PTIME:TCODE?\r", 0xEu);
  if ( result != 14 )
    return sub_39C88(a2, 3);
  v3[194] = (int *)((char *)v3[194] + 1);
  return result;
}
