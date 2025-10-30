int sub_636D0()
{
  double v0; // d0
  float v1; // s15
  unsigned __int8 s[32]; // [sp+814h] [bp-40h] BYREF
  _DWORD v5[2]; // [sp+834h] [bp-20h] BYREF
  __int16 v6; // [sp+83Ch] [bp-18h]
  float v7; // [sp+840h] [bp-14h]
  int i; // [sp+844h] [bp-10h]
  unsigned __int16 j; // [sp+848h] [bp-Ch]
  __int16 v10; // [sp+84Ah] [bp-Ah]
  int v11; // [sp+84Ch] [bp-8h]

  v11 = 0;
  v1 = v0;
  v7 = v1;
  v5[0] = -2096584107;
  v5[1] = 0;
  v6 = 0;
  memset(s, 0, sizeof(s));
  v10 = 0;
  if ( byte_531544 )
  {
    if ( byte_5316A8 )
    {
      sub_6318C();
      v7 = *(float *)&v0;
      if ( *(float *)&v0 < 0.0 )
        return -1;
    }
  }
  for ( i = 0; i <= 3; ++i )
    *((_BYTE *)&v5[1] + i) = *((_BYTE *)&v7 + i);
  for ( j = 2; j <= 7u; j += 2 )
  {
    v10 += *((unsigned __int8 *)v5 + j);
    v10 += *((unsigned __int8 *)v5 + j + 1) << 8;
  }
  v6 = v10;
  return sub_62DA0(dword_531538, (unsigned __int8 *)v5, 0xAu, s, 0xAu);
}
