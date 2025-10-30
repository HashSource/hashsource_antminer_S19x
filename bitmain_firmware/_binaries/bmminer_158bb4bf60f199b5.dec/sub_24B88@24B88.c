int sub_24B88()
{
  int v0; // r4
  int v2; // r5
  int v3; // r2
  int i; // r4
  int v5; // r0
  int v6; // r4
  int v7; // r0
  int v8; // r9
  int v9; // r4
  int v10; // r3
  _BYTE *v11; // r3
  int v12; // r12
  int v13; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( sub_3C4FC(0) )
  {
    if ( (dword_9C294 == 1 || !dword_9C294 && sub_344E0()) && !sub_188E0() )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        v0 = -1;
        strcpy(s, "Miner data load failed, exit.\n");
        sub_47AB4(3, s, 0);
        return v0;
      }
      return -1;
    }
    v2 = 0;
    v3 = dword_A0D68;
    for ( i = 0; i != 16; ++i )
    {
      while ( *(_DWORD *)(v3 + 4 * i + 4) != 1 )
      {
        if ( ++i == 16 )
          goto LABEL_13;
      }
      v5 = sub_18AE0(i);
      v2 += v5;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "product_id[%d] = %d\n", i, v5);
        sub_47AB4(3, s, 0);
      }
      v3 = dword_A0D68;
    }
LABEL_13:
    v6 = *(unsigned __int8 *)(v3 + 12935);
    v7 = sub_772E8(v2);
    if ( v7 * v6 == v2 )
    {
      if ( v7 != 255 )
      {
        dword_9C2A4 = v7;
        sub_2306C();
        if ( dword_242F4C > 0 )
        {
          v8 = 0;
          v9 = 0;
          do
          {
            v10 = *(_DWORD *)(dword_244048 + 4 * v9);
            if ( **(_BYTE **)(v10 + 164) )
            {
              v11 = *(_BYTE **)(v10 + 172);
              v12 = (unsigned __int8)*v11;
              if ( *v11 )
              {
                ++v8;
              }
              else if ( (unsigned int)dword_9E31C > 3 )
              {
                strcpy(s, "Blank worker exists.\n");
                sub_47AB4(3, s, v12);
              }
            }
            ++v9;
          }
          while ( v9 < dword_242F4C );
          if ( v8 )
          {
            v0 = sub_13C54(0xFA0u, 1);
            if ( !v0 )
            {
              if ( (unsigned int)dword_9E31C > 3 )
              {
                strcpy(s, "Fan check passed.\n");
                sub_47AB4(3, s, 0);
              }
              v0 = sub_22AB8();
              if ( !v0 || *(_BYTE *)(dword_A0D68 + 12935) && dword_9C294 )
              {
                sub_21690();
                v0 = sub_19E90();
                if ( !v0 )
                {
                  if ( (unsigned int)dword_9E31C > 3 )
                  {
                    snprintf(s, 0x800u, "Enter %ds sleep to make sure power release finish.\n", 30);
                    sub_47AB4(3, s, 0);
                  }
                  sub_19E7C();
                  sleep(0x1Eu);
                  sub_19E68();
                  v0 = sub_1A300();
                  if ( !v0 )
                  {
                    v13 = sub_6F7C4(33792);
                    sub_6FD34(v13);
                    sub_4A804(10);
                    sub_21E78(115200);
                    sub_4A804(10);
                    v0 = sub_239C4();
                    if ( !v0 || *(_BYTE *)(dword_A0D68 + 12935) && dword_9C294 )
                    {
                      v0 = sub_1A420();
                      if ( !v0 )
                      {
                        sub_24904();
                        dword_1AEA10 = 0;
                        dword_1AEA18 = 0;
                        dword_1AEA14 = 0;
                      }
                    }
                  }
                }
              }
            }
            return v0;
          }
        }
        if ( (unsigned int)dword_9E31C > 3 )
        {
          v0 = -1;
          strcpy(s, "No valid pools, please configure them first!\n");
          sub_47AB4(3, s, 0);
          return v0;
        }
        return -1;
      }
    }
    else if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "Product id are different.\n");
      sub_47AB4(3, s, 0);
    }
    sub_31794(15, 255);
    dword_9C2A4 = 255;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      v0 = -1;
      strcpy(s, "product id is invalid\n");
      sub_47AB4(3, s, 0);
      return v0;
    }
    return -1;
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    return -1;
  strcpy(s, "board adapt failed, exit\n");
  sub_47AB4(3, s, 0);
  return -1;
}
