int __fastcall sub_29E138(unsigned int a1, int (*a2)(int, const char *, ...), int a3, int a4)
{
  int result; // r0
  int v9; // r3
  int v10; // r4

  result = a2(a3, "%s", (&off_3FDE3C[18 * dword_4707E4 + 2])[a1 & 0xF]);
  if ( (a1 & 0xFF0) != 0 )
  {
    if ( (a1 & 0x10) != 0 )
    {
      if ( (a1 & 0x80) != 0 )
      {
        return a2(a3, "\t; <illegal shifter operand>");
      }
      else if ( a4 )
      {
        return a2(
                 a3,
                 ", %s %s",
                 off_3FDE3C[((a1 >> 5) & 3) + 666],
                 (&off_3FDE3C[18 * dword_4707E4 + 2])[(a1 >> 8) & 0xF]);
      }
      else
      {
        return a2(a3, ", %s", (&off_3FDE3C[18 * dword_4707E4 + 2])[(a1 >> 8) & 0xF]);
      }
    }
    else
    {
      v9 = (a1 >> 7) & 0x1F;
      v10 = (a1 >> 5) & 3;
      if ( !v9 )
      {
        if ( v10 == 3 )
          return a2(a3, ", rrx");
        v9 = 32;
      }
      if ( a4 )
        return a2(a3, ", %s #%d", off_3FDE3C[v10 + 666], v9);
      else
        return a2(a3, ", #%d", v9);
    }
  }
  return result;
}
