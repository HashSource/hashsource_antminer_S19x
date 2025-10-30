__int16 sub_22F0C()
{
  int v0; // s15
  int v1; // r0
  int v2; // r3
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = (int)((double)sub_22D44() * 0.99);
  dword_B3E0C = 1000 * (v0 / 1000);
  if ( sub_42B0C(274877907 * v0) )
  {
    if ( dword_B3E0C <= 123000 )
    {
      if ( dword_B3E0C <= 118000 )
        LOWORD(v1) = -16072;
      else
        LOWORD(v1) = -11072;
      HIWORD(v1) = 1;
      dword_B3E0C = v1;
    }
    else
    {
      v1 = 125000;
      dword_B3E0C = 125000;
    }
  }
  else
  {
    v1 = dword_B3E0C;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v4, 0x800u, "sale_hash_rate = %d\n", v1);
    sub_3B6AC(4, v4, 0, v2);
    LOWORD(v1) = dword_B3E0C;
  }
  return v1;
}
