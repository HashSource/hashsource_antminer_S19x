int __fastcall sub_4044C(unsigned __int8 *a1)
{
  int v1; // r3
  int v4; // r8
  int v5; // r3
  size_t v6; // r8
  _DWORD *v7; // r0
  _DWORD *v8; // r6
  int v9; // r2
  int v10; // r1
  int v11; // r3
  int v12; // r2
  int v13; // r3
  char v14; // r2
  int v15; // r1
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r3
  int v20; // r0
  int v21; // lr
  __int64 v22; // r2
  int v23; // r0
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r3
  int v31; // r3
  _DWORD v32[16]; // [sp+10h] [bp-854h] BYREF
  __int64 v33; // [sp+50h] [bp-814h]
  int v34; // [sp+58h] [bp-80Ch]
  int v35; // [sp+5Ch] [bp-808h]
  char s[2052]; // [sp+60h] [bp-804h] BYREF

  if ( *a1 != 82 )
  {
    if ( !byte_4B6CA6 || !byte_5BC044 && !byte_4B6CA5 && dword_AFC2C <= 6 )
      return -1;
    snprintf(s, 0x800u, "%s: SEND_JOB_TYPE is wrong : 0x%x\n", "dhash_chip_send_job", *a1);
    sub_3AF5C(7, s, 0, v1);
    return -1;
  }
  v4 = *((_DWORD *)a1 + 1);
  if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
  {
    snprintf(s, 0x800u, "%s: len = 0x%x\n", "dhash_chip_send_job", *((_DWORD *)a1 + 1));
    sub_3AF5C(7, s, 0, v5);
  }
  v6 = v4 + 8;
  v7 = calloc(v6, 1u);
  v8 = v7;
  if ( !v7 )
  {
    if ( !byte_4B6CA6 || !byte_5BC044 && !byte_4B6CA5 && dword_AFC2C <= 6 )
      return -2;
    snprintf(s, 0x800u, "%s: malloc buffer failed.\n", "dhash_chip_send_job");
    sub_3AF5C(7, s, 0, v25);
    return -2;
  }
  memcpy(v7, a1, v6);
  if ( !byte_4B6CDC )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "only support asic boost");
      sub_3AF5C(3, s, (unsigned __int8)byte_4B6CDC, *(int *)" asic boost");
    }
    goto LABEL_44;
  }
  v9 = *((unsigned __int8 *)v8 + 80);
  v10 = dword_AFE74;
  if ( *((_BYTE *)v8 + 80) )
  {
    v12 = v8[22];
    dword_AFBE0 = v8[21];
    v11 = dword_AFBE0;
    dword_B4178 = v12;
    if ( dword_AFBE0 == dword_AFE74 )
      goto LABEL_20;
  }
  else
  {
    v11 = 1;
    dword_AFBE0 = 1;
    dword_B4178 = v9;
    if ( dword_AFE74 == 1 )
      goto LABEL_44;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "Version num %d\n", v11);
    sub_3AF5C(3, s, 0, v30);
  }
  v10 = dword_AFBE0;
  dword_AFE74 = dword_AFBE0;
LABEL_20:
  if ( ((v10 - 4) & 0xFFFFFFFB) != 0 )
  {
LABEL_44:
    free(v8);
    return 0;
  }
  v13 = dword_B4178;
  if ( dword_AFE78 != dword_B4178 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "Mask num 0x%x\n", dword_B4178);
      sub_3AF5C(3, s, 0, v31);
      v13 = dword_B4178;
      v10 = dword_AFBE0;
    }
    dword_AFE78 = v13;
    sub_3F61C(dword_4B6CC8, v10, 90);
  }
  v14 = *((_BYTE *)v8 + 9);
  if ( (v14 & 2) != 0 )
  {
    sub_5BCB8(*((unsigned __int8 *)v8 + 10));
    v14 = *((_BYTE *)v8 + 9);
  }
  v15 = *((unsigned __int16 *)v8 + 30);
  v34 = dword_9C8A1C;
  v16 = v8[3];
  v32[4] = &a1[v15 + 96];
  v17 = *((unsigned __int16 *)v8 + 33);
  v32[8] = v16;
  v18 = v8[14];
  v32[5] = v17;
  v19 = *((unsigned __int16 *)v8 + 32);
  v32[7] = v18;
  v20 = *((unsigned __int16 *)v8 + 31);
  v35 = v14 & 1;
  v32[10] = dword_B4178;
  v32[14] = v19;
  v21 = v8[4];
  v32[11] = v8 + 5;
  v32[13] = v20;
  v22 = *((_QWORD *)v8 + 9);
  v23 = v8[13];
  v32[1] = dword_AFBE0;
  v32[3] = v15;
  v32[2] = a1 + 96;
  v32[9] = v21;
  v33 = v22;
  v32[12] = 32;
  v32[6] = v23;
  v32[0] = 0;
  if ( !byte_4B6CDD )
  {
    v27 = sub_5C494();
    v28 = sub_5C4C0(v27 | 0x10000);
    v29 = sub_5B4E4(v28);
    sub_5B518(v29 | 0x80);
    byte_4B6CDD = 1;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "start to send job, mid_auto_gen = %d", v32[0]);
    sub_3AF5C(4, s, 0, v26);
  }
  sub_5ABF8(v32);
  free(v8);
  if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
  {
    snprintf(s, 0x800u, "--- %s end\n", "dhash_chip_send_job");
    sub_3AF5C(7, s, 0, v24);
  }
  sub_3D7A0(dword_4B6CD4);
  sub_3D9D4();
  return 0;
}
