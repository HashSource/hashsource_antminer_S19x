int __fastcall sub_2418C(int a1, unsigned int a2, unsigned int a3, int a4)
{
  float v4; // s0
  unsigned int v5; // r7
  int i; // r4
  unsigned int v8; // r3
  float v9; // s19
  float v10; // s17
  unsigned int v11; // r11
  float v12; // s15
  float v13; // s16
  int j; // r4
  int k; // r4
  int result; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r7
  int v21; // r6
  int *v22; // r4
  _BOOL4 v23; // r3
  int v24; // r6
  int v25; // r3
  int v26; // r3
  _BOOL4 v27; // r7
  int v28; // r3
  unsigned int v30; // [sp+18h] [bp-82Ch]
  unsigned int v32; // [sp+20h] [bp-824h]
  int v33; // [sp+28h] [bp-81Ch]
  int v34; // [sp+2Ch] [bp-818h]
  _BYTE v35[4]; // [sp+34h] [bp-810h] BYREF
  int v36; // [sp+38h] [bp-80Ch] BYREF
  int v37; // [sp+3Ch] [bp-808h]
  char s[2052]; // [sp+40h] [bp-804h] BYREF

  v5 = a3;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n", a2, a3, v4);
    sub_3AF5C(4, s, 0, v25);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
      sub_27D94(i, 1);
  }
  if ( a2 < v5 )
    v8 = v5 - a2;
  else
    v8 = a2;
  if ( a2 >= v5 )
    v8 -= v5;
  v32 = (unsigned int)(((float)((float)v8 + v4) - 0.01) / v4);
  if ( v32 )
  {
    v30 = v5;
    v9 = (float)a2;
    v10 = (float)v5;
    v34 = 1;
    v11 = 1;
    v33 = 0;
    while ( 1 )
    {
      v12 = (float)v11;
      v36 = 0;
      v37 = 0;
      if ( a2 >= v30 )
      {
        v13 = v9 - (float)(v12 * v4);
        if ( v10 > v13 )
          v13 = v10;
      }
      else
      {
        v13 = v9 + (float)(v12 * v4);
        if ( v10 < v13 )
          v13 = v10;
      }
      for ( j = 0; j != 4; ++j )
      {
        if ( sub_266F0(j) )
        {
          sub_75D54(&v36, v35, 0);
          BYTE2(v37) = v35[0];
          sub_27E18(j, 1, 0, a1, v36, v37);
          if ( (unsigned int)off_AFC24 > 4 )
          {
            snprintf(s, 0x800u, "chain = %d set freq to %.2f", j, v13);
            sub_3AF5C(4, s, 0, v17);
          }
          dword_B1070[j] = (int)v13;
          dword_B1080[j] = (int)v13;
        }
      }
      if ( a2 >= v30 )
        goto LABEL_21;
      if ( sub_1829C() == 3 )
      {
        v18 = sub_18D7C();
        v19 = v18;
        if ( (unsigned int)off_AFC24 > 3 )
        {
          snprintf(s, 0x800u, "inc freq get min board temp: %d, bringup temp:%d", v18, dword_9C8A18);
          sub_3AF5C(3, s, 0, v26);
        }
        if ( dword_9C8A18 > 34 )
        {
          if ( v13 >= 200.0 || (v19 > 33 ? (v27 = v13 >= 300.0) : (v27 = 0), v27) )
          {
            v21 = sub_26E54() - 80;
            goto LABEL_45;
          }
        }
        else if ( v19 > 33 && v13 >= 300.0 )
        {
          v21 = sub_26E54();
LABEL_45:
          LOWORD(v22) = (unsigned __int16)&dword_4B6CAC;
          v23 = v32 != v11;
          if ( v33 )
            v23 = 0;
          HIWORD(v22) = (unsigned int)&dword_4B6CAC >> 16;
          if ( v23 )
            v33 = sub_8C218(v21 - *v22 + v32 - v11, v32 - v11);
          v24 = v21 - ++v34 * v33;
          if ( (unsigned int)off_AFC24 > 3 )
          {
            snprintf(s, 0x800u, "relax voltage %d avg:%d, idx:%d", v24, v33, v34);
            sub_3AF5C(3, s, 0, v28);
          }
          if ( *v22 <= v24 )
            sub_21E80(v24);
        }
      }
      else if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "not support");
        sub_3AF5C(3, s, 0, "not support");
      }
LABEL_21:
      ++v11;
      usleep(1000 * a4);
      if ( v32 < v11 )
      {
        v5 = v30;
        break;
      }
    }
  }
  for ( k = 0; k != 4; ++k )
  {
    result = sub_266F0(k);
    if ( result )
    {
      dword_B1070[k] = v5;
      dword_B1080[k] = v5;
    }
  }
  return result;
}
