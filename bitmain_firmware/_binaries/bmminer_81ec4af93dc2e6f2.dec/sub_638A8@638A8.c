unsigned int sub_638A8()
{
  double v1; // d0
  char v3[2048]; // [sp+Ch] [bp-840h] BYREF
  float v4; // [sp+80Ch] [bp-40h]
  unsigned __int8 s[32]; // [sp+810h] [bp-3Ch] BYREF
  int v6; // [sp+830h] [bp-1Ch] BYREF
  __int16 v7; // [sp+834h] [bp-18h]
  unsigned int v9; // [sp+83Ch] [bp-10h]
  __int16 v10; // [sp+842h] [bp-Ah]
  int i; // [sp+844h] [bp-8h]

  v6 = 50637397;
  v7 = 772;
  memset(s, 0, sizeof(s));
  v10 = 0;
  v9 = 0;
  if ( sub_62DA0(dword_531538, (unsigned __int8 *)&v6, 6u, s, 0xAu) )
  {
    strcpy(v3, "Get power set_volt value failed\n");
    sub_3AF5C(3, v3, 0, (int)v3);
    return 0;
  }
  else
  {
    for ( i = 0; i <= 3; ++i )
      s[i - 4] = s[i + 4];
    v9 = (unsigned int)((float)(v4 * 100.0) + 0.00001);
    if ( byte_531544 && byte_5316A8 )
    {
      v1 = (double)v9 / 100.0;
      sub_63438();
      return (unsigned int)(float)(*(float *)&v1 * 100.0);
    }
    else
    {
      return v9;
    }
  }
}
