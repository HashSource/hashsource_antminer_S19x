int __fastcall sub_262F4(int a1)
{
  int v1; // r4
  char *v3; // r7
  int v4; // r0
  int result; // r0
  int v6; // r3
  char *v7; // r3
  int v8; // r2
  int v9; // r3
  char *v10; // r3
  int v11; // r2
  int v12; // r3
  char *v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // lr
  int v19; // r3
  int v20; // r8
  char *v21; // r2
  _DWORD *v22; // r2
  char *v23; // r3
  int v24; // r2
  int v25; // r3
  unsigned int v26; // lr
  unsigned int v27; // r7
  unsigned int v28; // r0
  int v29; // r4
  unsigned int i; // r3
  char *v31; // r2
  _DWORD *v32; // r2
  char *v33; // r3
  int v34; // r2
  int v35; // r3
  char s[4]; // [sp+8h] [bp-20h] BYREF
  int v37; // [sp+Ch] [bp-1Ch]
  int v38; // [sp+10h] [bp-18h]
  int v39; // [sp+14h] [bp-14h]
  int v40; // [sp+18h] [bp-10h]
  int v41; // [sp+1Ch] [bp-Ch]
  int v42; // [sp+20h] [bp-8h]
  int v43; // [sp+24h] [bp-4h]
  _DWORD vars0[8]; // [sp+28h] [bp+0h] BYREF

  v1 = 0;
  v41 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  sub_6FBF4(a1);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  v3 = &byte_2333A8[264784 * a1];
  v4 = (unsigned __int8)v3[265808];
  if ( !v3[265808] )
  {
    sub_1F650(1, "Pattern: OK");
    if ( !v3[1034] )
    {
      sub_1F650(2, "EEPROM:  NG");
      if ( !*(_BYTE *)(dword_223680 + 88) )
        return 11;
      if ( v3[1037] )
      {
        sub_1F650(3, "Ctr_Sensor:OK");
        return 11;
      }
LABEL_68:
      sub_1F650(3, "Ctr_Sensor:NG");
      return 10;
    }
    sub_1F650(2, "EEPROM:  OK");
    if ( *(_BYTE *)(dword_223680 + 88) )
    {
      if ( !v3[1037] )
        goto LABEL_68;
      sub_1F650(3, "Ctr_Sensor:OK");
    }
    v37 = 0;
    *(_DWORD *)s = 0;
    v38 = 0;
    v39 = 0;
    sprintf(s, "Level:  %d", *(_DWORD *)&byte_2333A8[(_DWORD)&loc_40A50 * a1 + 1056]);
    sub_1F650(0, s);
    return 0;
  }
  if ( v4 == 1 )
  {
    sub_1F650(1, "Pattern: OK");
    v16 = dword_223680;
    v17 = *(_DWORD *)(dword_223680 + 64);
    if ( v17 )
    {
      v18 = 0;
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = &v3[v19];
        v19 = (unsigned __int8)(v19 + 1);
        if ( !v21[265528] )
        {
          v20 = (unsigned __int8)(v20 + 1);
          v22 = &vars0[v18];
          if ( v18 <= 3 )
          {
            v18 = (unsigned __int8)(v18 + 1);
            *(v22 - 4) = v1;
          }
        }
        v1 = (unsigned __int8)v19;
      }
      while ( v17 > (unsigned __int8)v19 );
      if ( v20 )
      {
        *(_DWORD *)s = 0;
        v37 = 0;
        v38 = 0;
        v39 = 0;
        switch ( v20 )
        {
          case 1:
            sprintf(s, "B_A: %d", v40);
            break;
          case 2:
            sprintf(s, "B_A: %d %d", v40, v41);
            break;
          case 3:
            sprintf(s, "B_A: %d %d %d", v40, v41, v42);
            break;
          default:
            sprintf(s, "B_A: %d %d %d %d", v40, v41, v42, v43);
            break;
        }
        sub_1F650(3, s);
        v16 = dword_223680;
      }
    }
    else
    {
      v20 = 0;
    }
    if ( *(_BYTE *)(v16 + 89) )
    {
      v33 = &byte_2333A8[264784 * a1];
      v34 = (unsigned __int8)v33[1034];
      v35 = (unsigned __int8)v33[1035];
      if ( v34 )
      {
        if ( !v35 )
        {
          v1 = 10;
          sub_1F650(2, "EE: OK   P_S: NG");
          goto LABEL_52;
        }
        sub_1F650(2, "EE: OK   P_S: OK");
        goto LABEL_96;
      }
      v1 = 11;
      if ( v35 )
        sub_1F650(2, "EE: NG   P_S: OK");
      else
        sub_1F650(2, "EE: NG   P_S: NG");
    }
    else if ( *(_BYTE *)(v16 + 88) )
    {
      v23 = &byte_2333A8[264784 * a1];
      v24 = (unsigned __int8)v23[1034];
      v25 = (unsigned __int8)v23[1037];
      if ( v24 )
      {
        if ( !v25 )
        {
          v1 = 10;
          sub_1F650(2, "EE: OK   C_S: NG");
          goto LABEL_52;
        }
        sub_1F650(2, "EE: OK   C_S: OK");
        goto LABEL_96;
      }
      v1 = 11;
      if ( v25 )
        sub_1F650(2, "EE: NG   C_S: OK");
      else
        sub_1F650(2, "EE: NG   C_S: NG");
    }
    else
    {
      if ( byte_2333A8[264784 * a1 + 1034] )
      {
        sub_1F650(2, "EEPROM:  OK");
LABEL_96:
        v1 = 0;
        v37 = 0;
        *(_DWORD *)s = 0;
        v38 = 0;
        v39 = 0;
        sprintf(s, "Level:  %d", *(_DWORD *)&byte_2333A8[(_DWORD)&loc_40A50 * a1 + 1056] + 100);
        sub_1F650(0, s);
        goto LABEL_52;
      }
      v1 = 11;
      sub_1F650(2, "EEPROM:  NG");
    }
LABEL_52:
    if ( v20 )
      return ((*(_DWORD *)&byte_2333A8[264784 * a1 + 1056] + 100) << 8) | 7;
    return v1;
  }
  if ( v4 == 240 )
  {
    if ( v3[1034] )
      sub_1F650(1, "EEPROM:  OK");
    else
      sub_1F650(1, "EEPROM:  NG");
    v6 = dword_223680;
    if ( *(_BYTE *)(dword_223680 + 89) )
    {
      if ( *(_BYTE *)(dword_223680 + 90) )
      {
        if ( !*(_BYTE *)(dword_223680 + 88) )
          goto LABEL_31;
      }
      else
      {
        if ( byte_2333A8[264784 * a1 + 1035] )
          sub_1F650(1, "PIC Sensor: OK");
        else
          sub_1F650(1, "PIC Sensor: NG");
        v6 = dword_223680;
        if ( !*(_BYTE *)(dword_223680 + 88) )
        {
LABEL_23:
          if ( *(_BYTE *)(v6 + 89) )
            goto LABEL_31;
          goto LABEL_24;
        }
      }
    }
    else if ( !*(_BYTE *)(dword_223680 + 88) )
    {
LABEL_24:
      if ( !*(_BYTE *)(v6 + 90) )
        goto LABEL_57;
      if ( byte_2333A8[264784 * a1 + 1036] )
        sub_1F650(1, "ASIC Sensor:  OK");
      else
        sub_1F650(1, "ASIC Sensor:  NG");
      v10 = &byte_2333A8[264784 * a1];
      v11 = (unsigned __int8)v10[1037];
      v12 = (unsigned __int8)v10[1036];
      if ( v11 )
      {
        if ( v12 )
          sub_1F650(1, "P_S: OK  A_S: OK");
        else
          sub_1F650(1, "P_S: OK  A_S: NG");
      }
      else if ( v12 )
      {
        sub_1F650(1, "P_S: NG  A_S: OK");
      }
      else
      {
        sub_1F650(1, "P_S: NG  A_S: NG");
      }
      v6 = dword_223680;
      if ( !*(_BYTE *)(dword_223680 + 89) )
        goto LABEL_58;
LABEL_31:
      if ( *(_BYTE *)(v6 + 90) )
      {
        v13 = &byte_2333A8[264784 * a1];
        v14 = (unsigned __int8)v13[1035];
        v15 = (unsigned __int8)v13[1036];
        if ( v14 )
        {
          if ( v15 )
            sub_1F650(1, "P_S: OK  A_S: OK");
          else
            sub_1F650(1, "P_S: OK  A_S: NG");
          v6 = dword_223680;
          goto LABEL_58;
        }
        if ( v15 )
        {
          sub_1F650(1, "P_S: NG  A_S: OK");
          v6 = dword_223680;
          goto LABEL_58;
        }
        sub_1F650(1, "P_S: NG  A_S: NG");
      }
LABEL_57:
      v6 = dword_223680;
LABEL_58:
      v26 = *(_DWORD *)(v6 + 64);
      if ( v26 )
      {
        v27 = 0;
        v28 = 0;
        v29 = 0;
        for ( i = 0; i < v26; v27 = i )
        {
          v31 = &byte_2333A8[(_DWORD)&loc_40A50 * a1 + i];
          i = (unsigned __int8)(i + 1);
          if ( !v31[265528] )
          {
            v29 = (unsigned __int8)(v29 + 1);
            v32 = &vars0[v28];
            if ( v28 <= 3 )
            {
              v28 = (unsigned __int8)(v28 + 1);
              *(v32 - 4) = v27;
            }
          }
        }
        if ( v29 )
        {
          *(_DWORD *)s = 0;
          v37 = 0;
          v38 = 0;
          v39 = 0;
          sprintf(s, "B_A:  %d  pcs", v29);
          sub_1F650(2, s);
          *(_DWORD *)s = 0;
          v37 = 0;
          v38 = 0;
          v39 = 0;
          switch ( v29 )
          {
            case 1:
              sprintf(s, "%d", v40);
              break;
            case 2:
              sprintf(s, "%d  %d", v40, v41);
              break;
            case 3:
              sprintf(s, "%d  %d  %d", v40, v41, v42);
              break;
            default:
              sprintf(s, "%d %d %d %d", v40, v41, v42, v43);
              break;
          }
          sub_1F650(3, s);
        }
      }
      return 8;
    }
    v7 = &byte_2333A8[264784 * a1];
    v8 = (unsigned __int8)v7[1037];
    v9 = (unsigned __int8)v7[1034];
    if ( v8 )
    {
      if ( v9 )
        sub_1F650(1, "EROM:OK CS:OK");
      else
        sub_1F650(1, "EROM:NG CS:OK");
      v6 = dword_223680;
    }
    else
    {
      if ( v9 )
        sub_1F650(1, "EROM:OK CS:NG");
      else
        sub_1F650(1, "EROM:NG CS:NG");
      v6 = dword_223680;
    }
    goto LABEL_23;
  }
  if ( v4 != 255 )
    return v1;
  result = 4;
  if ( byte_5FE78C )
  {
    sub_1F650(1, "Find Dummy Data");
    return 4;
  }
  return result;
}
