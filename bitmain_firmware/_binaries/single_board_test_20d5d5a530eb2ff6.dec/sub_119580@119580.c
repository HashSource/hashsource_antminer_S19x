bool __fastcall sub_119580(_DWORD *a1)
{
  signed int i; // r9
  _DWORD *v3; // r0
  int *v4; // r3
  int v5; // r4
  int *v6; // r7
  _DWORD *v7; // r0
  size_t v8; // r6
  signed int v9; // r8
  int v10; // r9
  int *v11; // r10
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r0
  int *v28; // r0
  int v30; // r2
  int v32; // [sp+0h] [bp-68h]
  int *v33; // [sp+Ch] [bp-5Ch]
  int v34; // [sp+10h] [bp-58h]
  int v35; // [sp+14h] [bp-54h]
  int v36; // [sp+18h] [bp-50h]
  int v37; // [sp+1Ch] [bp-4Ch]
  int v38; // [sp+20h] [bp-48h]
  int v39; // [sp+24h] [bp-44h]
  int v40; // [sp+28h] [bp-40h]
  int v41; // [sp+2Ch] [bp-3Ch]
  int v42; // [sp+30h] [bp-38h]
  int v43; // [sp+34h] [bp-34h]
  int v44; // [sp+38h] [bp-30h]
  int v45; // [sp+3Ch] [bp-2Ch]
  int v46; // [sp+40h] [bp-28h]
  int v47; // [sp+44h] [bp-24h]
  signed int v48; // [sp+48h] [bp-20h]
  _DWORD *v49; // [sp+4Ch] [bp-1Ch]
  int v50; // [sp+54h] [bp-14h] BYREF
  unsigned __int8 v51[16]; // [sp+58h] [bp-10h] BYREF
  char v52[16]; // [sp+68h] [bp+0h] BYREF
  char dest[16]; // [sp+78h] [bp+10h] BYREF
  unsigned __int8 v54[16]; // [sp+88h] [bp+20h] BYREF

  for ( i = 0; i < sub_10C010((int)a1); ++i )
  {
    v3 = (_DWORD *)sub_10C01C(a1, i);
    v4 = (int *)v3[1];
    v5 = *v4;
    if ( *v4 == 1 )
    {
      v6 = (int *)v4[1];
      v7 = sub_1188F8(v3);
      if ( v7 == (_DWORD *)1 )
      {
        v8 = 4;
        v45 = -10;
        v44 = -9;
        v43 = -8;
        v42 = -7;
        v41 = -6;
        v40 = -5;
        v39 = -4;
        v38 = -3;
        v37 = -2;
        v36 = -1;
        v34 = 0;
        v46 = 2;
        v35 = 1;
        v5 = -11;
        v32 = 4;
        v47 = 3;
      }
      else if ( v7 == (_DWORD *)2 )
      {
        v8 = 16;
        v44 = 3;
        v43 = 4;
        v42 = 5;
        v41 = 6;
        v40 = 7;
        v39 = 8;
        v38 = 9;
        v37 = 10;
        v36 = 11;
        v34 = 12;
        v35 = 13;
        v46 = 14;
        v45 = 2;
        v32 = 16;
        v47 = 15;
      }
      else
      {
        v8 = 0;
        v45 = -14;
        v44 = -13;
        v43 = -12;
        v42 = -11;
        v41 = -10;
        v40 = -9;
        v39 = -8;
        v38 = -7;
        v37 = -6;
        v36 = -5;
        v34 = -4;
        v35 = -3;
        v46 = -2;
        v5 = -15;
        v32 = 0;
        v47 = -1;
      }
      v9 = 0;
      sub_10C070((int)v6);
      v48 = i;
      v49 = a1;
LABEL_9:
      if ( v9 < sub_10C010((int)v6) - 1 )
      {
        do
        {
          v10 = v9 + 1;
          v11 = (int *)sub_10C01C(v6, v9);
          v33 = (int *)sub_10C01C(v6, v9 + 1);
          if ( !sub_118368(v11, (char *)v51, v52, v32)
            || !sub_118368(v33, dest, (char *)v54, v32)
            || memcmp(v51, v52, v8) > 0
            || memcmp(dest, v54, v8) > 0
            || memcmp(v52, dest, v8) >= 0 )
          {
            return 0;
          }
          if ( v47 != -1 )
          {
            v12 = (unsigned __int8)dest[v47];
            dest[v47] = v12 - 1;
            if ( v12 )
              goto LABEL_67;
            if ( v46 < 0 )
              goto LABEL_67;
            v13 = (unsigned __int8)dest[v46];
            dest[v46] = v13 - 1;
            if ( v13 )
              goto LABEL_67;
            if ( v35 < 0 )
              goto LABEL_67;
            v14 = (unsigned __int8)dest[v35];
            dest[v35] = v14 - 1;
            if ( v14 )
              goto LABEL_67;
            if ( v34 < 0 )
              goto LABEL_67;
            v15 = (unsigned __int8)dest[v34];
            dest[v34] = v15 - 1;
            if ( v15 )
              goto LABEL_67;
            if ( v36 < 0 )
              goto LABEL_67;
            v16 = (unsigned __int8)dest[v36];
            dest[v36] = v16 - 1;
            if ( v16 )
              goto LABEL_67;
            if ( v37 < 0 )
              goto LABEL_67;
            v17 = (unsigned __int8)dest[v37];
            dest[v37] = v17 - 1;
            if ( v17 )
              goto LABEL_67;
            if ( v38 < 0 )
              goto LABEL_67;
            v18 = (unsigned __int8)dest[v38];
            dest[v38] = v18 - 1;
            if ( v18 )
              goto LABEL_67;
            if ( v39 < 0 )
              goto LABEL_67;
            v19 = (unsigned __int8)dest[v39];
            dest[v39] = v19 - 1;
            if ( v19 )
              goto LABEL_67;
            if ( v40 < 0 )
              goto LABEL_67;
            v20 = (unsigned __int8)dest[v40];
            dest[v40] = v20 - 1;
            if ( v20 )
              goto LABEL_67;
            if ( v41 < 0 )
              goto LABEL_67;
            v21 = (unsigned __int8)dest[v41];
            dest[v41] = v21 - 1;
            if ( v21 )
              goto LABEL_67;
            if ( v42 < 0 )
              goto LABEL_67;
            v22 = (unsigned __int8)dest[v42];
            dest[v42] = v22 - 1;
            if ( v22 )
              goto LABEL_67;
            if ( v43 < 0 )
              goto LABEL_67;
            v23 = (unsigned __int8)dest[v43];
            dest[v43] = v23 - 1;
            if ( v23
              || v44 < 0
              || (v24 = (unsigned __int8)dest[v44], dest[v44] = v24 - 1, v24)
              || v45 < 0
              || (v25 = (unsigned __int8)dest[v45], dest[v45] = v25 - 1, v25)
              || v5 < 0
              || (v26 = (unsigned __int8)dest[v5], dest[v5] = v26 - 1, v26)
              || v32 != 16 )
            {
LABEL_67:
              if ( !memcmp(v52, dest, v8) )
              {
LABEL_53:
                if ( memcmp(v51, v54, v8) <= 0 )
                {
                  v30 = sub_117988(v51, v54, v32);
                  if ( v30 < 0
                     ? sub_118618(&v50, (char *)v51, (char *)v54, v32)
                     : sub_118584(&v50, (char *)v51, v30, v32) )
                  {
                    sub_10C040(v6, v9, v50);
                    sub_10BC04(v6, v9 + 1);
                    sub_118570((int)v11);
                    sub_118570((int)v33);
                    goto LABEL_9;
                  }
                }
                return 0;
              }
            }
            else
            {
              --dest[0];
              if ( !memcmp(v52, dest, v8) )
                goto LABEL_53;
            }
          }
          ++v9;
        }
        while ( v10 < sub_10C010((int)v6) - 1 );
      }
      i = v48;
      a1 = v49;
      v27 = sub_10C010((int)v6);
      v28 = (int *)sub_10C01C(v6, v27 - 1);
      if ( v28 && *v28 == 1 && (!sub_118368(v28, dest, (char *)v54, v32) || memcmp(dest, v54, v8) > 0) )
        return 0;
    }
  }
  sub_10B9F0((int)a1, (int)sub_117A54);
  sub_10C070((int)a1);
  return sub_118E0C(a1) != 0;
}
