int __fastcall sub_283A0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  size_t v6; // r0
  int *v7; // r4
  int result; // r0
  int v9; // r8
  int v10; // r5
  bool v11; // zf
  __int16 *v12; // r7
  int v13; // r12
  __int16 *v14; // r3
  char v15; // t1
  int v16; // r9
  __int16 *v17; // r8
  int v18; // r12
  __int16 *v19; // r2
  char v20; // t1
  int v21; // r0
  char v22; // t1
  int v23; // r3
  int v24; // r9
  int v25; // r2
  int v26; // r3
  char v27; // t1
  int v28; // r2
  int v29; // r3
  int v30; // r3
  int v31; // r0
  int v32; // r3
  int v33; // [sp+0h] [bp-83Ch]
  int v35; // [sp+10h] [bp-82Ch]
  int v36; // [sp+14h] [bp-828h]
  int v37; // [sp+14h] [bp-828h]
  _WORD v41[2]; // [sp+2Ch] [bp-810h]
  __int16 v42; // [sp+30h] [bp-80Ch] BYREF
  char v43; // [sp+32h] [bp-80Ah]
  char v44; // [sp+33h] [bp-809h] BYREF
  int v45; // [sp+34h] [bp-808h] BYREF
  char s[2040]; // [sp+38h] [bp-804h] BYREF

  v42 = 1795;
  v45 = 0;
  v43 = 31;
  v41[0] = *(_WORD *)"\b`";
  v6 = sub_26A44();
  v7 = (int *)calloc(v6, 4u);
  if ( !v7 )
    return 0;
  v9 = 0;
  pthread_mutex_lock(stru_535CF8);
  v10 = 5;
  do
  {
    while ( 1 )
    {
      if ( !sub_26C0C(v9) )
        goto LABEL_20;
      v11 = a1 == 255;
      if ( a1 != 255 )
        v11 = v9 == a1;
      if ( !v11 )
        goto LABEL_20;
      if ( a2 )
      {
        v11 = v10 == 0;
        v10 = (unsigned __int8)(v10 - 1);
        if ( !v11 )
        {
          v36 = *((unsigned __int8 *)v41 + a4);
          do
          {
            v12 = &v42;
            sub_79458((unsigned __int8)v9, a4, a5, a6, &v45);
            v13 = v45;
            v14 = &v42;
            do
            {
              v15 = *(_BYTE *)v14;
              v14 = (__int16 *)((char *)v14 + 1);
              v13 &= ~(1 << v15);
            }
            while ( v14 != (__int16 *)&v44 );
            v45 = v13;
            if ( sub_38B38(a1, v36, v7) )
            {
              v24 = 1;
              do
              {
                if ( v24 >= sub_26A44() )
                {
                  v26 = *v7;
                  do
                  {
                    v27 = *(_BYTE *)v12;
                    v12 = (__int16 *)((char *)v12 + 1);
                    v26 &= ~(1 << v27);
                  }
                  while ( v12 != (__int16 *)&v44 );
                  v28 = v45;
                  *v7 = v26;
                  if ( v28 != v26 )
                  {
                    if ( (unsigned int)dword_B308C <= 3 )
                      goto LABEL_17;
                    snprintf(s, 0x800u, "chain[%d] check pll config err, times %d", a1, v10);
                    goto LABEL_44;
                  }
                  goto LABEL_20;
                }
                v25 = v7[v24];
                v24 = (unsigned __int8)(v24 + 1);
              }
              while ( v25 == *v7 );
              if ( (unsigned int)dword_B308C > 3 )
              {
                snprintf(s, 0x800u, "chain[%d] pll not the same, times %d", a1, v10);
LABEL_44:
                sub_3B6AC(3, s, 0, v29);
              }
            }
            else if ( (unsigned int)dword_B308C > 3 )
            {
              snprintf(s, 0x800u, "chain[%d] get pll config err, times %d", a1, v10);
              sub_3B6AC(3, s, 0, v30);
            }
LABEL_17:
            usleep(0x186A0u);
            v11 = v10 == 0;
            v10 = (unsigned __int8)(v10 - 1);
          }
          while ( !v11 );
        }
        goto LABEL_19;
      }
      v11 = v10 == 0;
      v10 = (unsigned __int8)(v10 - 1);
      if ( !v11 )
        break;
LABEL_19:
      v10 = 255;
LABEL_20:
      if ( ++v9 == 4 )
        goto LABEL_21;
    }
    v35 = (unsigned __int8)v9;
    v37 = v9;
    v16 = *((unsigned __int8 *)v41 + a4);
    while ( 1 )
    {
      v17 = &v42;
      LOWORD(v33) = a6;
      sub_794A0(v35, a3, a4, a5, v33, &v45);
      v18 = v45;
      v19 = &v42;
      do
      {
        v20 = *(_BYTE *)v19;
        v19 = (__int16 *)((char *)v19 + 1);
        v18 &= ~(1 << v20);
      }
      while ( v19 != (__int16 *)&v44 );
      v45 = v18;
      v21 = sub_39018(v16, a3, a1);
      do
      {
        v22 = *(_BYTE *)v17;
        v17 = (__int16 *)((char *)v17 + 1);
        v21 &= ~(1 << v22);
      }
      while ( v17 != (__int16 *)&v44 );
      v23 = v45;
      *v7 = v21;
      if ( v21 == v23 )
        break;
      if ( (unsigned int)dword_B308C > 3 )
      {
        sub_26AB4();
        v31 = sub_8F800(a3);
        snprintf(s, 0x800u, "chain[%d] asic[%d] check pll config err", a1, v31);
        sub_3B6AC(3, s, 0, v32);
      }
      usleep(0x186A0u);
      v11 = v10 == 0;
      v10 = (unsigned __int8)(v10 - 1);
      if ( v11 )
      {
        v9 = v37;
        goto LABEL_19;
      }
    }
    v9 = v37 + 1;
  }
  while ( v37 != 3 );
LABEL_21:
  pthread_mutex_unlock(stru_535CF8);
  free(v7);
  result = v10;
  if ( v10 )
    return 1;
  return result;
}
