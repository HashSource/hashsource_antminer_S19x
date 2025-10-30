int sub_33760()
{
  float v0; // s19
  int v1; // r0
  int v2; // r4
  int v3; // r0
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int i; // r4
  int v8; // r9
  int v9; // s18
  int v10; // r0
  int v11; // r10
  int v12; // r3
  int v13; // r3
  int v14; // s20
  int v15; // r10
  int j; // r9
  void *v17; // r3
  int v18; // r5
  int v19; // r0
  int v20; // r0
  int v22; // r6
  int v23; // r5
  float *v24; // r4
  int v25; // r0
  float v26; // s16
  int v27; // r3
  float v29; // s17
  char v30; // r0
  int v31; // r0
  float *v32; // r6
  float *v33; // r5
  int v34; // r3
  int v35; // r0
  int v36; // r3
  int v37; // r3
  int v38; // r7
  int v39; // r4
  int v40; // r4
  int v41; // r5
  int v42; // [sp+4h] [bp-1858h]
  int v43; // [sp+10h] [bp-184Ch]
  int v44; // [sp+14h] [bp-1848h]
  int v45; // [sp+18h] [bp-1844h]
  int v46; // [sp+2Ch] [bp-1830h]
  int v47; // [sp+30h] [bp-182Ch]
  unsigned __int8 v48; // [sp+3Ah] [bp-1822h]
  _BYTE v49[4]; // [sp+3Ch] [bp-1820h] BYREF
  int v50; // [sp+40h] [bp-181Ch] BYREF
  int v51; // [sp+44h] [bp-1818h]
  struct timeval v52; // [sp+48h] [bp-1814h] BYREF
  struct timeval v53; // [sp+50h] [bp-180Ch] BYREF
  char v54[2040]; // [sp+58h] [bp-1804h] BYREF
  _BYTE v55[4100]; // [sp+858h] [bp-1004h] BYREF

  v0 = flt_AFBFC;
  v48 = (unsigned int)sub_40D98() >> 16;
  v52.tv_sec = 0;
  v52.tv_usec = 0;
  v53.tv_sec = 0;
  v53.tv_usec = 0;
  memset(v55, 0, 0x1000u);
  v1 = sub_18D7C();
  v2 = v1;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v54, 0x800u, "get board temp:%d", v1);
    sub_3AF5C(3, v54, 0, v34);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      v35 = sub_274BC();
      snprintf(v54, 0x800u, "waiting board temp come to %d", v35);
      sub_3AF5C(3, v54, 0, v36);
    }
  }
  sub_30AF0();
  gettimeofday(&v52, 0);
  while ( v2 < sub_274BC() )
  {
    v2 = sub_18D7C();
    if ( (unsigned int)off_AFC24 > 3 )
    {
      v3 = sub_274BC();
      snprintf(v54, 0x800u, "waiting board temp to %d,curr temp %d", v3, v2);
      sub_3AF5C(3, v54, 0, v4);
    }
    if ( !sub_30B28(0, 0, 10) )
    {
      sub_46318(9, 0);
      sub_29B50(1);
      sub_43B4C(18, "protect machine!");
      while ( 1 )
        sleep(1u);
    }
    sleep(0xAu);
    gettimeofday(&v53, 0);
    if ( v53.tv_sec - v52.tv_sec > 119 )
    {
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(v54, 0x800u, "can not heat up to %d", v2);
        sub_3AF5C(4, v54, 0, v37);
      }
      break;
    }
  }
  v5 = sub_18D7C();
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v54, 0x800u, "get board temp:%d", v5);
    sub_3AF5C(3, v54, 0, v6);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
    {
      v31 = sub_26540();
      if ( v31 > 0 )
      {
        v32 = (float *)&v55[1024 * i];
        v33 = (float *)&v55[1024 * i + 4 * v31];
        do
          *v32++ = (float)(int)sub_2F998(i, 0);
        while ( v32 != v33 );
      }
    }
  }
  sub_27C94(255, 3, v48, 0);
  v46 = sub_26530();
  v8 = sub_26550();
  v9 = sub_32648();
  v10 = sub_32600();
  v11 = v10;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v54, 0x800u, "get sweep freq max=%d, min=%d", v9, v10);
    v10 = sub_3AF5C(4, v54, 0, v12);
  }
  if ( v9 > v11 )
  {
    v13 = (int)(((float)((float)(v9 - v11) + v0) - 0.01) / v0);
    if ( v13 > 0 )
    {
      v14 = 1;
      v43 = v11;
      v15 = v8;
      v44 = 4 * v8;
      v47 = v13 + 1;
      do
      {
        for ( j = 0; j != 4; ++j )
        {
          if ( sub_266F0(j) && v15 > 0 )
          {
            v45 = 0;
            while ( v46 <= 0 )
            {
LABEL_45:
              if ( v15 == ++v45 )
                goto LABEL_20;
            }
            v22 = 0;
            v23 = v45;
            v24 = (float *)&v55[1024 * j + 4 * v45];
            while ( 2 )
            {
              v25 = sub_32690(j, v23);
              if ( v43 < v25 && (v26 = (float)v25, (float)v25 > *v24) )
              {
                v29 = (float)v9;
                v50 = 0;
                v51 = 0;
                if ( (float)v9 >= (float)((float)v43 + (float)((float)v14 * v0)) )
                  v29 = (float)v43 + (float)((float)v14 * v0);
                sub_27D94(j, 0, (unsigned __int8)(2 * v23), (unsigned __int8)byte_4B6CCC);
                sub_75D54(&v50, v49, 0);
                if ( v26 >= v29 )
                  *v24 = (float)(int)v29;
                else
                  *v24 = v26;
                BYTE2(v51) = v49[0];
                v30 = sub_265B0();
                if ( !sub_27E18(j, 0, (unsigned __int8)(v30 * v23), (unsigned __int8)byte_4B6CCC, v50, v51) )
                {
                  sub_46318(21, 0);
                  sub_43B4C(13, "Unbalance happened, waiting!\n");
                }
                if ( (unsigned int)off_AFC24 > 4 )
                {
                  snprintf(v54, 0x800u, "middle chain = %d asic=%d set freq to %.2f", j, v23, v42, *v24);
LABEL_44:
                  sub_3AF5C(4, v54, 0, v27);
                }
              }
              else if ( (unsigned int)off_AFC24 > 4 )
              {
                snprintf(v54, 0x800u, "end chain=%d asic=%d set end freq %.2f", j, v23, v42, *v24);
                goto LABEL_44;
              }
              ++v22;
              v23 += v15;
              v24 = (float *)((char *)v24 + v44);
              if ( v46 == v22 )
                goto LABEL_45;
              continue;
            }
          }
LABEL_20:
          ;
        }
        ++v14;
        v10 = sub_3D9D4(100);
      }
      while ( v14 != v47 );
    }
  }
  sub_459D8(v10);
  sub_3D9D4(1000);
  v17 = off_AFC24;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v54, "inc_freq_matrix_thread set freq complete");
    sub_3AF5C(4, v54, 0, *(_DWORD *)"req complete");
    v17 = off_AFC24;
  }
  if ( (unsigned int)v17 > 3 )
  {
    strcpy(v54, "set voltage to work voltage");
    sub_3AF5C(3, v54, 0, *(_DWORD *)"to work voltage");
  }
  if ( dword_4B6CAC > 0 && sub_22178() != dword_4B6CAC )
  {
    v18 = sub_274DC();
    v19 = sub_18D7C();
    if ( v19 < -11 )
      v18 = 10 * ((int)((double)v18 + (double)(-12 - v19) * 2.5) / 10);
    if ( byte_AFC00 && dword_9C8A18 <= 18 )
    {
      if ( sub_1A760() )
        v38 = 40;
      else
        v38 = 20;
      v39 = sub_8C490(v18 * (dword_B02A0 - dword_9C8A18));
      if ( v18 + v38 <= v39 )
      {
        if ( sub_1A760() )
          v40 = 40;
        else
          v40 = 20;
        v39 = v18 + v40;
      }
      v41 = dword_4B6CAC;
      if ( v39 + v41 > sub_22188() )
        v20 = sub_22188();
      else
        v20 = v39 + dword_4B6CAC;
      if ( v20 > 1500 )
      {
        sub_434C0(1500);
        goto LABEL_34;
      }
    }
    else
    {
      v20 = dword_4B6CAC;
    }
    sub_434C0(v20);
  }
LABEL_34:
  byte_B13C8 = 1;
  byte_4B6E4C = 0;
  sub_459B8();
  return sub_3364C();
}
