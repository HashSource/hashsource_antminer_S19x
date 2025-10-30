int __fastcall sub_179E4(int a1, int a2, unsigned int a3, int a4)
{
  int v9; // r3
  int v10; // r3
  _BOOL4 v11; // r3
  char *v12; // r3
  int v13; // r5
  int v14; // r3
  int v15; // r3
  unsigned __int8 v16; // [sp+17h] [bp-805h] BYREF
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( dword_B3C48 )
  {
    if ( sub_26C0C(a1) )
    {
      if ( sub_26AC4() )
      {
        if ( a2 >= sub_179C4() )
          goto LABEL_22;
        v11 = a3 > 1;
        if ( a4 > 1 )
          v11 = 1;
        if ( v11 )
        {
LABEL_22:
          if ( (unsigned int)dword_B308C > 3 )
          {
            snprintf(
              s,
              0x800u,
              "%s invalid param. index = %d, type = %d, model = %d on chain %d",
              "read_sensor_on_asic",
              a2,
              a4,
              a3,
              a1);
            sub_3B6AC(3, s, 0, v15);
            return 255;
          }
        }
        else
        {
          v16 = -1;
          v12 = &aReadSensorOnAs[16 * a3];
          if ( a4 )
            v13 = (unsigned __int8)v12[30];
          else
            v13 = (unsigned __int8)v12[29];
          if ( sub_17858(a1, (unsigned __int8)(*(_DWORD *)(dword_B3C4C + 4 * a2) * dword_B3C48), v13, 0, &v16) )
            return v16 - 64;
          if ( (unsigned int)dword_B308C > 3 )
          {
            snprintf(
              s,
              0x800u,
              "read temp sensor failed: chain = %d, sensor pos = %d, address = %d, reg = %d\n",
              a1,
              *(_DWORD *)(dword_B3C4C + 4 * a2),
              dword_B3C48 * *(_DWORD *)(dword_B3C4C + 4 * a2),
              v13);
            sub_3B6AC(3, s, 0, v14);
          }
        }
      }
      else if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "%s chain %d ,index %d not connected", "read_sensor_on_asic", a1, a2);
        sub_3B6AC(3, s, 0, v10);
        return 255;
      }
    }
    else if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "%s chain %d not pluged", "read_sensor_on_asic", a1);
      sub_3B6AC(4, s, 0, v9);
      return 255;
    }
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "can not read temp by asic before calibration");
    sub_3B6AC(3, s, dword_B3C48, *(_DWORD *)"");
    return 255;
  }
  return 255;
}
