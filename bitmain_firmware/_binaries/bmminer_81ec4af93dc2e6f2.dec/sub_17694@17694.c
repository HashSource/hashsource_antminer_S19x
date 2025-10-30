int __fastcall sub_17694(int a1, int a2, unsigned int a3, int a4)
{
  int v9; // r3
  int v11; // r3
  char *v12; // r3
  int v13; // r5
  int v14; // r3
  int v15; // r3
  unsigned __int8 v16; // [sp+17h] [bp-805h] BYREF
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( dword_B0ED8 )
  {
    if ( sub_266F0(a1) )
    {
      if ( sub_265C0() )
      {
        if ( a2 >= sub_17674() || a3 > 1 )
        {
          if ( (unsigned int)off_AFC24 <= 3 )
            return 255;
          snprintf(
            s,
            0x800u,
            "%s invalid param. index = %d, type = %d, model = %d on chain %d",
            "read_sensor_on_asic",
            a2,
            a4,
            a3,
            a1);
          sub_3AF5C(3, s, 0, v15);
          return 255;
        }
        else
        {
          v16 = -1;
          v12 = &aReadSensorOnAs[16 * a3];
          if ( a4 )
            v13 = (unsigned __int8)v12[30];
          else
            v13 = (unsigned __int8)v12[29];
          if ( !sub_174FC(a1, (unsigned __int8)(*(_DWORD *)(dword_B0EDC + 4 * a2) * dword_B0ED8), v13, 0, &v16) )
          {
            if ( (unsigned int)off_AFC24 > 3 )
            {
              snprintf(
                s,
                0x800u,
                "read temp sensor failed: chain = %d, sensor pos = %d, address = %d, reg = %d\n",
                a1,
                *(_DWORD *)(dword_B0EDC + 4 * a2),
                dword_B0ED8 * *(_DWORD *)(dword_B0EDC + 4 * a2),
                v13);
              sub_3AF5C(3, s, 0, v14);
            }
            return 255;
          }
          return v16 - 64;
        }
      }
      else
      {
        if ( (unsigned int)off_AFC24 <= 3 )
          return 255;
        snprintf(s, 0x800u, "%s chain %d ,index %d not connected", "read_sensor_on_asic", a1, a2);
        sub_3AF5C(3, s, 0, v11);
        return 255;
      }
    }
    else
    {
      if ( (unsigned int)off_AFC24 <= 4 )
        return 255;
      snprintf(s, 0x800u, "%s chain %d not pluged", "read_sensor_on_asic", a1);
      sub_3AF5C(4, s, 0, v9);
      return 255;
    }
  }
  else
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return 255;
    strcpy(s, "can not read temp by asic before calibration");
    sub_3AF5C(3, s, dword_B0ED8, *(_DWORD *)"");
    return 255;
  }
}
