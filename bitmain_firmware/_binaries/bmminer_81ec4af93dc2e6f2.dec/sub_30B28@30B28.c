int __fastcall sub_30B28(int a1, unsigned int a2, int a3)
{
  int v3; // r9
  int v4; // r11
  char v6; // r4
  char v7; // r4
  char *v8; // r11
  unsigned int v9; // r5
  int v10; // r3
  char *v11; // r4
  int v12; // r6
  int v13; // r0
  int v14; // r1
  char *v15; // r8
  int v16; // r0
  int v17; // r3
  int v18; // r1
  int v19; // r7
  int v20; // r3
  const char *v21; // r1
  FILE *v22; // r0
  FILE *v23; // r4
  int v24; // r0
  char *v25; // r4
  int v26; // r3
  int v27; // r3
  bool v28; // nf
  unsigned __int8 v29; // [sp+24h] [bp-1030h]
  int v30; // [sp+2Ch] [bp-1028h]
  unsigned int v31; // [sp+30h] [bp-1024h]
  int v33; // [sp+38h] [bp-101Ch]
  unsigned int v34; // [sp+3Ch] [bp-1018h]
  int ptr; // [sp+4Ch] [bp-1008h] BYREF
  _DWORD s[256]; // [sp+50h] [bp-1004h] BYREF
  _DWORD v39[256]; // [sp+450h] [bp-C04h] BYREF
  char v40[2052]; // [sp+850h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  memset(v39, 0, sizeof(v39));
  v3 = 0;
  v4 = 0;
  ptr = 0;
  while ( !sub_266F0(v4) )
  {
LABEL_3:
    if ( ++v4 == 4 )
      return 1;
  }
  if ( !a1 )
    a2 = sub_2F998(v4, 0);
  v6 = 3;
  while ( 1 )
  {
    --v6;
    if ( sub_384FC(v4, 76, v39) )
      break;
    if ( !v6 )
      return 0;
  }
  v7 = 3;
  while ( 1 )
  {
    --v7;
    if ( sub_384FC(v4, 140, s) )
      break;
    if ( !v7 )
      return 0;
  }
  v30 = v4;
  v29 = 0;
  v33 = 0;
  while ( 1 )
  {
    if ( v29 >= sub_26540() )
    {
      v4 = v30;
      goto LABEL_3;
    }
    v12 = v30 << 8;
    v13 = sub_26550();
    sub_8C724(v29, v13);
    if ( !v14 )
      v3 = 0;
    v15 = &byte_B13B8[4 * v12 + 4 * v29];
    v16 = *((_DWORD *)v15 + 791);
    v17 = v39[v29];
    v18 = *((_DWORD *)v15 + 23);
    v19 = s[v29] - v17;
    v34 = v17 - v16;
    v31 = v19 - v18;
    if ( (unsigned int)off_AFC24 <= 4 )
    {
      if ( !v18 )
        goto LABEL_17;
    }
    else
    {
      snprintf(v40, 0x800u, "chain[%d] asic[%d] [%d] %d-%d [%d] %d-%d", v30, v29, v31, v19, v18, v34, v17, v16);
      sub_3AF5C(4, v40, 0, v20);
      if ( !*((_DWORD *)v15 + 23) )
        goto LABEL_17;
    }
    if ( (double)v31 < (double)(int)(a2 * sub_26580()) * 0.7 * (double)a3 * 0.000244140625
      || (double)v34 > (double)(int)(a2 * sub_26580()) * 0.3 * (double)a3 * 0.000244140625
      || 5 * ((int)(a3 * a2 * sub_26580()) / 4096) < v31 )
    {
      break;
    }
LABEL_17:
    if ( v3 > sub_26550() / 2 )
      goto LABEL_31;
LABEL_18:
    if ( v33 > sub_26550() )
      goto LABEL_31;
    v8 = &v40[4 * v29 + 2048];
    v9 = v19 + *((_DWORD *)v8 - 768);
    if ( v9 >= ~(5 * ((int)(a3 * a2 * sub_26580()) / 4096)) )
    {
      v24 = sub_265B0();
      sub_77364((unsigned __int8)v30, v29 * v24);
      v25 = &byte_B13B8[4 * v12 + 4 * v29];
      *((_DWORD *)v25 + 23) = 0;
      *((_DWORD *)v25 + 791) = 0;
    }
    else
    {
      v10 = *((_DWORD *)v8 - 768);
      v11 = &byte_B13B8[4 * v12 + 4 * v29];
      *((_DWORD *)v11 + 23) = v19;
      *((_DWORD *)v11 + 791) = v10;
    }
    ++v29;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v40, 0x800u, "chain[%d] asic[%d] [%d] [%d]", v30, v29, v31, v34);
    sub_3AF5C(3, v40, 0, v26);
  }
  v3 = (unsigned __int8)(v3 + 1);
  v33 = (unsigned __int8)(v33 + 1);
  if ( v3 <= sub_26550() / 2 )
    goto LABEL_18;
LABEL_31:
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v40, 0x800u, "bad asic num: %d %d", v3, v33);
    sub_3AF5C(3, v40, 0, v27);
  }
  if ( access("/config/min_boot", 0) )
    LOWORD(v21) = 5448;
  else
    LOWORD(v21) = 5452;
  HIWORD(v21) = 9;
  v22 = fopen("/config/min_boot", v21);
  v23 = v22;
  if ( v22 )
  {
    if ( fread(&ptr, 1u, 4u, v22) != 4 )
    {
      ptr = 5;
      goto LABEL_40;
    }
    v28 = ptr - 24 < 0;
    ptr += 5;
    if ( v28 ^ __OFSUB__(ptr, 29) | (ptr == 29) )
    {
LABEL_40:
      fseek(v23, 0, 0);
      fwrite(&ptr, 1u, 4u, v23);
    }
    fclose(v23);
    return 0;
  }
  return 0;
}
