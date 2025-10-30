int sub_62058()
{
  double v0; // d0
  float v1; // s15
  unsigned __int8 v4[32]; // [sp+814h] [bp-40h] BYREF
  _DWORD v5[2]; // [sp+834h] [bp-20h] BYREF
  __int16 v6; // [sp+83Ch] [bp-18h]
  float v7; // [sp+840h] [bp-14h]
  int v8; // [sp+844h] [bp-10h]
  int i; // [sp+848h] [bp-Ch]
  unsigned __int16 j; // [sp+84Ch] [bp-8h]
  __int16 v11; // [sp+84Eh] [bp-6h]

  v8 = 0;
  v1 = v0;
  v7 = v1;
  v5[0] = -2096584107;
  v5[1] = 0;
  v6 = 0;
  memset(v4, 0, sizeof(v4));
  v11 = 0;
  if ( byte_536354 )
  {
    if ( byte_5364B8 )
    {
      sub_61B14();
      v7 = *(float *)&v0;
      if ( *(float *)&v0 < 0.0 )
        return -1;
    }
  }
  for ( i = 0; i <= 3; ++i )
    *((_BYTE *)&v5[1] + i) = *((_BYTE *)&v7 + i);
  for ( j = 2; j <= 7u; j += 2 )
  {
    v11 += *((unsigned __int8 *)v5 + j);
    v11 += *((unsigned __int8 *)v5 + j + 1) << 8;
  }
  v6 = v11;
  return sub_61724(dword_536348, (unsigned __int8 *)v5, 0xAu, v4, 0xAu);
}
