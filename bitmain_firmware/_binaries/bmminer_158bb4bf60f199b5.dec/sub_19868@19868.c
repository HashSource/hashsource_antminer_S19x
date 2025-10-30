int sub_19868()
{
  double v0; // d0
  int v1; // r6
  int v2; // r4
  int v3; // r7
  unsigned __int8 v4; // r0
  int v5; // r8
  double v6; // d15
  unsigned int v7; // r3
  int v8; // r3
  unsigned int v10; // r9
  unsigned int v11; // s28
  unsigned int v12; // s30
  double v13; // d14
  double v14; // d15
  float v15; // s14
  unsigned int v16; // [sp+1Ch] [bp-810h] BYREF
  unsigned int v17; // [sp+20h] [bp-80Ch]
  unsigned int v18; // [sp+24h] [bp-808h]
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * v2 + 4) != 1 )
        goto LABEL_2;
      v17 = 0;
      ++v1;
      v18 = 0;
      v16 = 0;
      v4 = sub_71F68((unsigned __int8)v2, &v16, 3);
      v5 = v4;
      if ( v4 )
      {
        v6 = 0.0;
      }
      else
      {
        v10 = v16;
        v11 = v17;
        v12 = v18;
        strcpy(s, "Received an voltage response.\n");
        sub_47AB4(5, s, 0);
        v13 = (double)v11 * 3.3;
        v14 = (double)v12 * 3.3 * 0.0009765625;
        snprintf(s, 0x800u, "an0 = %f, an2 %f, an6 %f.\n", (double)v10 * 3.3 * 0.0009765625, v13 * 0.0009765625, v14);
        sub_47AB4(5, s, v5);
        if ( v14 >= 2.3599999 && v14 <= 2.6400001 )
        {
          v15 = v14 / 2.5;
          snprintf(s, 0x800u, "v_an2 = %f\n", v13 / (float)(v15 * 1024.0));
          sub_47AB4(5, s, v5);
          v6 = v13 / (float)(v15 * 1024.0) * 7.5999999;
          snprintf(s, 0x800u, "v_10 = %f\n", v6);
          sub_47AB4(5, s, v5);
        }
        else
        {
          v6 = 0.0;
          strcpy(s, "Ref an vol too high or too low.\n");
          sub_47AB4(5, s, 0);
        }
      }
      v7 = dword_9E31C;
      if ( (unsigned int)dword_9E31C > 4 )
        break;
      if ( fabs(v6 - v0) > 0.5 )
        goto LABEL_9;
LABEL_2:
      if ( ++v2 == 16 )
        goto LABEL_12;
    }
    snprintf(s, 0x800u, "chain = %d, voltage = %f\n", v2, v6);
    sub_47AB4(4, s, 0);
    v7 = dword_9E31C;
    if ( fabs(v6 - v0) <= 0.5 )
    {
      if ( (unsigned int)dword_9E31C > 4 )
      {
        snprintf(s, 0x800u, "chain[%d] target_vol = %.2f, actural_vol = %.2f, check voltage passed.\n", v2, v0, v6);
        sub_47AB4(4, s, 0);
      }
      goto LABEL_2;
    }
LABEL_9:
    if ( v7 <= 3 )
    {
      v3 = -1;
      goto LABEL_2;
    }
    v8 = v2++;
    snprintf(s, 0x800u, "chain[%d] target_vol = %.2f, actural_vol = %.2f, more than 0.5v diff.\n", v8, v0, v6);
    v3 = -1;
    sub_47AB4(3, s, 0);
  }
  while ( v2 != 16 );
LABEL_12:
  if ( !v1 )
    return -1;
  return v3;
}
