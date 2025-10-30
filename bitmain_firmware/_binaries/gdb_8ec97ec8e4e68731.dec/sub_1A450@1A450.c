bool __fastcall sub_1A450(int a1, unsigned int a2)
{
  int v3; // r6
  unsigned int i; // r9
  int v5; // r0
  bool v6; // zf
  int v7; // r4
  unsigned int v8; // r5
  unsigned int v10; // r10
  __int16 v11; // r0
  int v12; // r4
  __int16 v13; // r0
  bool v14; // zf
  unsigned int v15; // [sp+4h] [bp-Ch] BYREF
  unsigned int v16; // [sp+8h] [bp-8h] BYREF
  _BYTE v17[2]; // [sp+Ch] [bp-4h] BYREF
  _BYTE v18[2]; // [sp+Eh] [bp-2h] BYREF

  v3 = ((int (*)(void))loc_165C28)();
  if ( sub_C37B8(a2, 0, &v15, &v16) && v16 > a2 )
  {
    for ( i = a2; ; i = v10 )
    {
      if ( sub_230020(i, v17, 2) )
        return 0;
      v5 = sub_15C250(v17, 2, v3);
      v6 = v5 == 18167;
      if ( v5 != 18167 )
        v6 = (v5 & 0xFF80) == 18176;
      v7 = v5;
      if ( v6 )
        goto LABEL_9;
      v10 = i + 2;
      if ( (unsigned __int16)v5 == 18109 || (v5 & 0xFF80) == 0xB000 || (v5 & 0xFE00) == 0xBC00 )
      {
        if ( (v5 & 0xFF00) == 0xBD00 )
          goto LABEL_9;
      }
      else
      {
        if ( sub_1829C(v5) != 4 || sub_230020(i + 2, v17, 2) )
          return 0;
        v10 = i + 4;
        v11 = sub_15C250(v17, 2, v3);
        if ( v7 == 59581 )
        {
          if ( v11 < 0 )
          {
            v8 = a2 - 4;
            if ( v8 < v15 )
              return 0;
LABEL_27:
            if ( sub_230020(v8, v17, 4) )
              return 0;
            v12 = sub_15C250(v17, 2, v3);
            v13 = sub_15C250(v18, 2, v3);
            if ( v13 == 18109 || (v13 & 0xFF80) == 0xB000 )
              return 1;
            v14 = v12 == 59581;
            if ( v12 != 59581 )
              v14 = (v13 & 0xFE00) == 48128;
            if ( v14 )
              return 1;
            if ( v12 == 63581 )
              return (v13 & 0xFFF) == 2820;
            if ( (v12 & 0xFFBF) != 0xECBD )
              return 0;
            return (v13 & 0xE00) == 2560;
          }
        }
        else if ( v7 == 63581 )
        {
          if ( (v11 & 0xFFF) != 0xB04 )
            return 0;
          if ( (v11 & 0xF000) == 0xF000 )
          {
LABEL_9:
            v8 = a2 - 4;
            if ( v8 < v15 )
              return 0;
            goto LABEL_27;
          }
        }
        else if ( (v7 & 0xFFBF) != 0xECBD || (v11 & 0xE00) != 0xA00 )
        {
          return 0;
        }
      }
      if ( v10 >= v16 )
        return 0;
    }
  }
  return 0;
}
