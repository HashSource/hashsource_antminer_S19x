int __fastcall sub_246A8(int a1, unsigned int a2, unsigned int a3, int a4)
{
  float v4; // s0
  int i; // r5
  unsigned int v9; // r3
  float v10; // s19
  unsigned int v11; // r5
  float v12; // s17
  float v13; // s15
  float v14; // s16
  int j; // r9
  int k; // r4
  int result; // r0
  int v18; // r3
  int v19; // r0
  _DWORD *v20; // r10
  _BOOL4 v21; // r3
  int v22; // r9
  _DWORD *v23; // r10
  _BOOL4 v24; // r3
  int v25; // r9
  int v26; // r3
  int v28; // r3
  int v29; // r3
  unsigned int v31; // [sp+1Ch] [bp-828h]
  __int64 v32; // [sp+24h] [bp-820h]
  int v33; // [sp+2Ch] [bp-818h]
  _BYTE v34[4]; // [sp+34h] [bp-810h] BYREF
  __int64 v35; // [sp+38h] [bp-80Ch] BYREF
  char s[2052]; // [sp+40h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n", a2, a3, v4);
    sub_3B6AC(4, s, 0, v26);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
      sub_28314(i, 1);
  }
  if ( a2 >= a3 )
    v9 = a2 - a3;
  else
    v9 = a3 - a2;
  v31 = (unsigned int)(((float)((float)v9 + v4) - 0.01) / v4);
  if ( v31 )
  {
    v11 = 1;
    v12 = (float)a3;
    v32 = 0x100000000LL;
    do
    {
      v35 = 0;
      v13 = (float)v11;
      v10 = (float)a2;
      if ( a2 >= a3 )
      {
        v14 = v10 - (float)(v13 * v4);
        if ( v14 < v12 )
          v14 = (float)a3;
      }
      else
      {
        v14 = v10 + (float)(v13 * v4);
        if ( v14 > v12 )
          v14 = (float)a3;
      }
      for ( j = 0; j != 4; ++j )
      {
        if ( sub_26C0C(j) )
        {
          sub_791C0(&v35, v34, 0);
          BYTE6(v35) = v34[0];
          sub_283A0(j, 1, 0, a1, v35, HIDWORD(v35));
          if ( (unsigned int)dword_B308C > 4 )
          {
            snprintf(s, 0x800u, "chain = %d set freq to %.2f", j, v14);
            sub_3B6AC(4, s, 0, v18);
          }
          dword_B3DE4[j] = (int)v14;
          dword_B3DF4[j] = (int)v14;
        }
      }
      if ( a2 >= a3 )
        goto LABEL_19;
      if ( sub_18678() == 3 )
      {
        v19 = sub_191B8();
        v20 = (_DWORD *)(unsigned __int16)&dword_9CD8D0;
        if ( (unsigned int)dword_B308C <= 3 )
          HIWORD(v20) = (unsigned int)&dword_9CD8D0 >> 16;
        v33 = v19;
        if ( (unsigned int)dword_B308C > 3 )
        {
          HIWORD(v20) = 156;
          snprintf(s, 0x800u, "inc freq get min board temp: %d, bringup temp:%d", v19, *v20);
          sub_3B6AC(3, s, 0, v28);
        }
        if ( (int)*v20 <= 34 )
        {
          if ( v33 > 33 && v14 >= 300.0 )
          {
            v22 = sub_273A8();
            goto LABEL_45;
          }
        }
        else if ( v14 >= 200.0 || (v33 > 33 ? (v21 = v14 >= 300.0) : (v21 = 0), v21) )
        {
          v22 = sub_273A8() - 80;
LABEL_45:
          LOWORD(v23) = (unsigned __int16)&dword_533B38;
          v24 = v31 != v11;
          if ( (_DWORD)v32 )
            v24 = 0;
          HIWORD(v23) = (unsigned int)&dword_533B38 >> 16;
          if ( v24 )
            LODWORD(v32) = sub_8F588(v22 - *v23 + v31 - v11, v31 - v11);
          v25 = v22 - ++HIDWORD(v32) * v32;
          if ( (unsigned int)dword_B308C > 3 )
          {
            snprintf(s, 0x800u, "relax voltage %d avg:%d, idx:%d", v25, (_DWORD)v32, HIDWORD(v32));
            sub_3B6AC(3, s, 0, v29);
          }
          if ( v25 >= *v23 )
            sub_223A0(v25);
        }
      }
      else if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "not support");
        sub_3B6AC(3, s, 0, "not support");
      }
LABEL_19:
      ++v11;
      usleep(1000 * a4);
    }
    while ( v31 >= v11 );
  }
  for ( k = 0; k != 4; ++k )
  {
    result = sub_26C0C(k);
    if ( result )
    {
      dword_B3DE4[k] = a3;
      dword_B3DF4[k] = a3;
    }
  }
  return result;
}
