int __fastcall sub_30CAC(int a1, int a2, unsigned int a3, int a4)
{
  int v6; // lr
  int v7; // r8
  size_t v8; // r9
  int v9; // r4
  int v10; // r5
  unsigned int v11; // r10
  int v12; // t1
  unsigned int v13; // r6
  unsigned int v14; // r0
  unsigned int v15; // r2
  int v16; // r12
  int v17; // r1
  unsigned int v18; // r3
  unsigned int v19; // t1
  _BYTE *v20; // r3
  _BYTE *v21; // r0
  int v22; // t1
  unsigned __int16 *v23; // r3
  unsigned int v24; // r4
  int v25; // r10
  int *v26; // r5
  int i; // r6
  int j; // r4
  unsigned int v29; // r3
  int v30; // r0
  int v31; // r9
  char *v32; // r5
  int v33; // r8
  int v34; // r4
  int *v35; // r7
  int v36; // r12
  char *v37; // r3
  int *v38; // r2
  int v39; // t1
  int *v40; // r2
  unsigned int v41; // r3
  unsigned int v42; // r1
  unsigned int v43; // t1
  unsigned int v44; // r8
  unsigned int v45; // r5
  char *v46; // r4
  unsigned int v47; // r2
  int v48; // r11
  int v50; // [sp+Ch] [bp-1C90h]
  int *v51; // [sp+Ch] [bp-1C90h]
  int v55; // [sp+18h] [bp-1C84h]
  int v56; // [sp+1Ch] [bp-1C80h]
  char *v57; // [sp+1Ch] [bp-1C80h]
  int v58; // [sp+28h] [bp-1C74h]
  int v59; // [sp+28h] [bp-1C74h]
  int v60; // [sp+2Ch] [bp-1C70h]
  int *v61; // [sp+2Ch] [bp-1C70h]
  int v62; // [sp+34h] [bp-1C68h]
  int v63; // [sp+3Ch] [bp-1C60h]
  char v64[4]; // [sp+44h] [bp-1C58h] BYREF
  int v65; // [sp+48h] [bp-1C54h]
  int v66; // [sp+4Ch] [bp-1C50h]
  int v67; // [sp+50h] [bp-1C4Ch] BYREF
  int v68; // [sp+54h] [bp-1C48h]
  _DWORD s[16]; // [sp+58h] [bp-1C44h] BYREF
  _DWORD v70[16]; // [sp+98h] [bp-1C04h] BYREF
  int base[16]; // [sp+D8h] [bp-1BC4h] BYREF
  char v72[2040]; // [sp+118h] [bp-1B84h] BYREF
  int v73; // [sp+914h] [bp-1388h] BYREF
  _BYTE v74[4996]; // [sp+918h] [bp-1384h] BYREF

  memset(v74, 0, 0x1380u);
  memset(s, 255, sizeof(s));
  memset(v70, 0, sizeof(v70));
  memset(base, 0, sizeof(base));
  v6 = dword_A0D68;
  v58 = dword_A0D68 + 12979;
  v60 = a2;
  v50 = dword_9C294;
  v7 = dword_A0D68 + 64;
  v8 = 0;
  v9 = 0;
  v56 = a1 + 312;
  v10 = -4;
  v11 = 0;
  v66 = 0;
  v65 = 0;
  do
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v6 + 4);
      v6 += 4;
      if ( v12 == 1 )
        break;
      ++v9;
      v10 += 312;
      if ( v6 == v7 )
        goto LABEL_20;
    }
    v13 = 0;
    v14 = 0;
    v15 = 0xFFFFFF;
    v16 = v10 + a1;
    v17 = v10 + a1;
    do
    {
      v19 = *(_DWORD *)(v17 + 4);
      v17 += 4;
      v18 = v19;
      v13 += v19;
      if ( v14 < v19 )
        v14 = v18;
      if ( v15 >= v18 )
        v15 = v18;
    }
    while ( v17 != v56 + v10 );
    s[v9] = v15;
    if ( v11 < v14 )
      v11 = v14;
    v70[v9] = v14;
    v20 = &v74[4 * v8 + 896];
    v21 = &v74[v10];
    ++v8;
    *((_DWORD *)v20 - 752) = v15;
    do
    {
      v22 = *(_DWORD *)(v16 + 4);
      v16 += 4;
      *((_DWORD *)v21 + 1) = v22 - v15;
      v21 += 4;
    }
    while ( v16 != v17 );
    v23 = (unsigned __int16 *)v50;
    v10 += 312;
    if ( v50 == 2 )
      v23 = (unsigned __int16 *)v58;
    else
      v17 = 4 * v9;
    if ( v50 == 2 )
    {
      v17 = 4 * v9;
      dword_242DB4[v9] = *v23;
    }
    ++v9;
    *(_DWORD *)((char *)&unk_242D74 + v17) = v13 / 0x4E;
  }
  while ( v6 != v7 );
LABEL_20:
  v24 = v11;
  v63 = v11;
  v25 = v60;
  qsort(base, v8, 4u, (__compar_fn_t)sub_3013C);
  sub_30770(255, v60, base[0], a4);
  if ( base[0] != v24 )
  {
    if ( v8 > 1 )
    {
      v26 = base;
      for ( i = 1; i != v8; ++i )
      {
        for ( j = 0; j != 16; ++j )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(dword_A0D68 + 4 * j + 4) == 1 )
            {
              v29 = v26[1];
              if ( s[j] >= v29 )
                break;
            }
            if ( ++j == 16 )
              goto LABEL_28;
          }
          v30 = j;
          sub_30B64(v30, v60, *v26, v29, a3, a4);
        }
LABEL_28:
        ++v26;
      }
    }
    v31 = 0;
    v51 = &v73;
    sub_306F0(v63, a4);
    do
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * v31 + 4) != 1 || (v55 = s[v31], v55 == v70[v31]) )
      {
        v61 = v51 + 78;
      }
      else
      {
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(v72, 0x800u, "chain = %d, start = %d, freq_step = %d\n", v31, v55, a3);
          sub_47AB4(3, v72, 0);
        }
        v32 = v72;
        v67 = 0;
        v68 = 0;
        v33 = 0;
        memset(v72, 0, 0x270u);
        v34 = 0;
        v35 = v51 + 1;
        do
        {
          v36 = v34 + 6;
          v37 = v32;
          v38 = v35;
          do
          {
            v39 = *v38++;
            v37 += 8;
            *((_DWORD *)v37 - 1) = v39;
            *(_DWORD *)&v32[8 * v34 + v33] = v34;
            ++v34;
          }
          while ( v34 != v36 );
          v33 -= 48;
          v35 += 6;
          qsort(v32, 6u, 8u, (__compar_fn_t)sub_3011C);
          v32 += 48;
        }
        while ( v33 != -624 );
        v40 = v51;
        v41 = 0;
        v61 = v51 + 78;
        do
        {
          v43 = v40[1];
          ++v40;
          v42 = v43;
          if ( v41 < v43 )
            v41 = v42;
        }
        while ( v51 + 78 != v40 );
        v62 = sub_77070(a3 - 1 + v41, a3, v40);
        if ( v62 )
        {
          v59 = 0;
          v44 = v55 + a3;
          do
          {
            ++v59;
            v45 = v44 - v55;
            v57 = v72;
            do
            {
              v46 = v57;
              do
              {
                v47 = *((_DWORD *)v46 + 1);
                v48 = *(_DWORD *)v46;
                if ( v47 >= v45 || a3 > v45 - v47 )
                {
                  sub_74E08(&v67, v64, 0);
                  BYTE2(v68) = v64[0];
                  sub_1B1F4(v31, 0, (unsigned __int8)(3 * v48), v25, v67, v68);
                }
                v46 += 48;
              }
              while ( v57 + 624 != v46 );
              v57 += 8;
              usleep((__useconds_t)&loc_186A0);
            }
            while ( v57 != &v72[48] );
            v44 += a3;
          }
          while ( v62 != v59 );
        }
      }
      ++v31;
      v51 = v61;
    }
    while ( v31 != 16 );
  }
  return v63;
}
