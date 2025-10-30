int __fastcall sub_28ADC(int result)
{
  int v1; // r7
  int v2; // r5
  int v3; // r6
  int v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r3
  char v9[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = result;
  if ( result )
  {
    v2 = sub_73538();
    v3 = sub_26750();
    if ( v3 > 0 )
    {
      v4 = 0;
      do
      {
        v5 = v4++;
        v6 = sub_26898(v5);
        v7 = sub_74774(v6, v6 >> 31);
        sub_739D4(v2, v7);
      }
      while ( v3 != v4 );
    }
    return sub_72C40(v1, "fan", v2);
  }
  else if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
  {
    snprintf(v9, 0x800u, "%s: input bad json param\n", "api_miner_fan_speed");
    return sub_3AF5C(3, v9, 0, v8);
  }
  return result;
}
