int __fastcall sub_31140(int a1, unsigned int a2, int a3)
{
  int v3; // r11
  int v4; // r4
  int v5; // r0
  char v6; // r3
  int v8; // r4
  int v9; // r0
  char v10; // r3
  unsigned __int8 v11; // r9
  char *v12; // r7
  unsigned int v13; // r8
  int v14; // r3
  char *v15; // r4
  int v16; // r0
  int v17; // r7
  int v18; // r5
  char *v19; // r8
  int v20; // r3
  int v21; // r12
  int v22; // r0
  int v23; // r6
  int v24; // r1
  int v25; // r3
  const char *v26; // r1
  FILE *v27; // r0
  FILE *v28; // r4
  int v29; // r0
  char *v30; // r4
  int v31; // r3
  int v32; // r3
  int i; // [sp+24h] [bp-1030h]
  unsigned int v34; // [sp+2Ch] [bp-1028h]
  int v35; // [sp+30h] [bp-1024h]
  unsigned int v37; // [sp+38h] [bp-101Ch]
  int ptr; // [sp+4Ch] [bp-1008h] BYREF
  _BYTE s[1024]; // [sp+50h] [bp-1004h] BYREF
  char v42[1024]; // [sp+450h] [bp-C04h] BYREF
  char v43[2052]; // [sp+850h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  memset(v42, 0, sizeof(v42));
  v3 = 0;
  ptr = 0;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
    {
      if ( !a1 )
        a2 = sub_2FFBC(i, 0);
      v4 = 3;
      while ( 1 )
      {
        v5 = sub_38B38(i, 76, v42);
        v6 = v4 - 1;
        if ( v5 )
          break;
        v4 = (unsigned __int8)(v4 - 1);
        if ( !v6 )
          return 0;
      }
      if ( !v4 )
        return 0;
      v8 = 3;
      while ( 1 )
      {
        v9 = sub_38B38(i, 140, s);
        v10 = v8 - 1;
        if ( v9 )
          break;
        v8 = (unsigned __int8)(v8 - 1);
        if ( !v10 )
          return 0;
      }
      if ( !v8 )
        return 0;
      v11 = 0;
      v35 = 0;
      while ( 1 )
      {
        if ( v11 >= sub_26A44() )
          goto LABEL_9;
        v16 = sub_26A54();
        v17 = 4 * v11;
        sub_8FA94(v11, v16);
        v18 = i << 8;
        v19 = &byte_B4128[1024 * i + 4 * v11];
        v20 = *(_DWORD *)&v42[v17];
        v21 = *((_DWORD *)v19 + 23);
        v22 = *((_DWORD *)v19 + 791);
        v23 = *(_DWORD *)&s[v17] - v20;
        v37 = v20 - v22;
        v34 = v23 - v21;
        if ( !v24 )
          v3 = 0;
        if ( (unsigned int)dword_B308C <= 4 )
        {
          if ( !v21 )
            goto LABEL_19;
        }
        else
        {
          snprintf(v43, 0x800u, "chain[%d] asic[%d] [%d] %d-%d [%d] %d-%d", i, v11, v23 - v21, v23, v21, v37, v20, v22);
          sub_3B6AC(4, v43, 0, v25);
          if ( !*((_DWORD *)v19 + 23) )
            goto LABEL_19;
        }
        if ( (double)v34 < (double)(int)(a2 * sub_26A84()) * 0.7 * (double)a3 * 0.000244140625
          || (double)v37 > (double)a3 * ((double)(int)(a2 * sub_26A84()) * 0.3) * 0.000244140625 )
        {
          break;
        }
        if ( v34 <= 5 * ((int)(a3 * a2 * sub_26A84()) / 4096) )
        {
LABEL_19:
          if ( v3 > sub_26A54() / 2 )
            goto LABEL_32;
          goto LABEL_20;
        }
        if ( (unsigned int)dword_B308C > 3 )
          goto LABEL_47;
LABEL_31:
        v3 = (unsigned __int8)(v3 + 1);
        v35 = (unsigned __int8)(v35 + 1);
        if ( v3 > sub_26A54() / 2 )
        {
LABEL_32:
          if ( (unsigned int)dword_B308C > 3 )
          {
            snprintf(v43, 0x800u, "bad asic num: %d %d", v3, v35);
            sub_3B6AC(3, v43, 0, v32);
          }
          if ( access("/config/min_boot", 0) )
            LOWORD(v26) = 18644;
          else
            LOWORD(v26) = 18648;
          HIWORD(v26) = 9;
          v27 = fopen("/config/min_boot", v26);
          v28 = v27;
          if ( v27 )
          {
            if ( fread(&ptr, 1u, 4u, v27) != 4 )
            {
              ptr = 5;
              goto LABEL_41;
            }
            ptr += 5;
            if ( ptr <= 29 )
            {
LABEL_41:
              fseek(v28, 0, 0);
              fwrite(&ptr, 1u, 4u, v28);
            }
            fclose(v28);
            return 0;
          }
          return 0;
        }
LABEL_20:
        if ( v35 > sub_26A54() )
          goto LABEL_32;
        v12 = &v43[v17 + 2048];
        v13 = v23 + *((_DWORD *)v12 - 768);
        if ( v13 >= ~(5 * ((int)(a3 * a2 * sub_26A84()) / 4096)) )
        {
          v29 = sub_26AB4();
          sub_7A7B0((unsigned __int8)i, v29 * v11);
          v30 = &byte_B4128[4 * v18 + 4 * v11];
          *((_DWORD *)v30 + 23) = 0;
          *((_DWORD *)v30 + 791) = 0;
        }
        else
        {
          v14 = *((_DWORD *)v12 - 768);
          v15 = &byte_B4128[4 * v18 + 4 * v11];
          *((_DWORD *)v15 + 23) = v23;
          *((_DWORD *)v15 + 791) = v14;
        }
        ++v11;
      }
      if ( (unsigned int)dword_B308C <= 3 )
        goto LABEL_31;
LABEL_47:
      snprintf(v43, 0x800u, "chain[%d] asic[%d] [%d] [%d]", i, v11, v34, v37);
      sub_3B6AC(3, v43, 0, v31);
      goto LABEL_31;
    }
LABEL_9:
    ;
  }
  return 1;
}
