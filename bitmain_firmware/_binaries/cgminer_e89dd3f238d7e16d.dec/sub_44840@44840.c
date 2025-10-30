int __fastcall sub_44840(int a1, int a2)
{
  char v4[8]; // [sp+14h] [bp-808h] BYREF
  _DWORD *v5; // [sp+814h] [bp-8h]

  v5 = *(_DWORD **)(a1 + 36);
  if ( a2 == v5[59] )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      snprintf(v4, 0x800u, "%s %d duplicate share detected as HW error", *(const char **)(v5[1] + 8), v5[2]);
      sub_1DB6C(6, v4, 0);
    }
    return 0;
  }
  else
  {
    v5[59] = a2;
    return 1;
  }
}
