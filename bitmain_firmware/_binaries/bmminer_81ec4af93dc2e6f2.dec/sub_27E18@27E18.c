int __fastcall sub_27E18(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r7
  size_t v8; // r0
  _DWORD *v9; // r11
  int result; // r0
  bool v11; // zf
  int v12; // r6
  int v13; // r5
  int v14; // r4
  int v15; // r7
  int v16; // r2
  unsigned int v17; // r3
  int v18; // r3
  int v19; // r8
  int v20; // r4
  unsigned int v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r3
  int v25; // [sp+0h] [bp-844h]
  int v26; // [sp+Ch] [bp-838h]
  int v28; // [sp+14h] [bp-830h]
  int v29; // [sp+18h] [bp-82Ch]
  int v30; // [sp+18h] [bp-82Ch]
  char *format; // [sp+24h] [bp-820h]
  _WORD v34[2]; // [sp+34h] [bp-810h]
  char v35; // [sp+39h] [bp-80Bh]
  char v36; // [sp+3Ah] [bp-80Ah]
  int v37; // [sp+3Ch] [bp-808h] BYREF
  char s[2048]; // [sp+40h] [bp-804h] BYREF

  v6 = 0;
  v35 = 7;
  v36 = 31;
  v34[0] = 24584;
  v37 = 0;
  v8 = sub_26540();
  v9 = calloc(v8, 4u);
  if ( !v9 )
    return 0;
  v26 = 5;
  pthread_mutex_lock(stru_530E6C);
  do
  {
    if ( !sub_266F0(v6) )
      goto LABEL_24;
    v11 = a1 == 255;
    if ( a1 != 255 )
      v11 = v6 == a1;
    if ( !v11 )
      goto LABEL_24;
    v12 = (unsigned __int8)(v26 - 1);
    if ( a2 )
    {
      if ( !v26 )
        goto LABEL_23;
      format = (char *)v6;
      v28 = (unsigned __int8)v6;
      v29 = *((unsigned __int8 *)v34 + a4);
      sub_76008((unsigned __int8)v6, a4, a5, a6, &v37);
      while ( 1 )
      {
        v13 = 1 << v35;
        v26 = (unsigned __int8)v12;
        v14 = 1 << v36;
        v37 &= 0xFFFFFFF7 & ~(1 << v35) & ~(1 << v36);
        if ( sub_384FC(a1, v29, v9) )
        {
          v15 = 1;
          while ( v15 < sub_26540() )
          {
            v16 = v9[v15];
            v15 = (unsigned __int8)(v15 + 1);
            if ( v16 != *v9 )
            {
              if ( (unsigned int)off_AFC24 <= 3 )
                goto LABEL_13;
              snprintf(s, 0x800u, "chain[%d] pll not the same, times %d", a1, v12);
              goto LABEL_36;
            }
          }
          v17 = ~(v14 | v13) & 0xFFFFFFF7 & *v9;
          v11 = v17 == v37;
          *v9 = v17;
          if ( v11 )
          {
            v6 = (int)format;
            goto LABEL_24;
          }
          if ( (unsigned int)off_AFC24 <= 3 )
            goto LABEL_13;
          snprintf(s, 0x800u, "chain[%d] check pll config err, times %d", a1, v12);
        }
        else
        {
          if ( (unsigned int)off_AFC24 <= 3 )
            goto LABEL_13;
          snprintf(s, 0x800u, "chain[%d] get pll config err, times %d", a1, v12);
        }
LABEL_36:
        sub_3AF5C(3, s, 0, v18);
LABEL_13:
        --v12;
        usleep((__useconds_t)&off_186A0);
        if ( v12 == -1 )
        {
          v6 = (int)format;
          goto LABEL_23;
        }
        sub_76008(v28, a4, a5, a6, &v37);
      }
    }
    if ( v26 )
    {
      v26 = (unsigned __int8)(v26 - 1);
      v30 = *((unsigned __int8 *)v34 + a4);
      while ( 1 )
      {
        LOWORD(v25) = a6;
        sub_76058((unsigned __int8)v6, a3, a4, a5, v25, &v37);
        v19 = 1 << v35;
        v20 = 1 << v36;
        v37 &= 0xFFFFFFF7 & ~(1 << v35) & ~(1 << v36);
        v21 = sub_389CC(v30, a3, a1) & ~(v20 | v19) & 0xFFFFFFF7;
        v11 = v21 == v37;
        *v9 = v21;
        if ( v11 )
          break;
        if ( (unsigned int)off_AFC24 > 3 )
        {
          sub_265B0();
          v23 = sub_8C490(a3);
          snprintf(s, 0x800u, "chain[%d] asic[%d] check pll config err", a1, v23);
          sub_3AF5C(3, s, 0, v24);
        }
        usleep((__useconds_t)&off_186A0);
        v22 = (unsigned __int8)(v26 - 1);
        v26 = v22;
        if ( v22 == 255 )
          goto LABEL_23;
      }
    }
    else
    {
LABEL_23:
      v26 = 255;
    }
LABEL_24:
    ++v6;
  }
  while ( v6 != 4 );
  pthread_mutex_unlock(stru_530E6C);
  free(v9);
  result = v26;
  if ( v26 )
    return 1;
  return result;
}
