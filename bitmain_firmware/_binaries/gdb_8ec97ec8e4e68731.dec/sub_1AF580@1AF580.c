void __fastcall sub_1AF580(const char *a1, int a2)
{
  unsigned int v3; // r9
  _BYTE *v4; // r3
  int v5; // r2
  unsigned int v6; // r10
  int v7; // r7
  _BYTE *v8; // r3
  int v9; // r1
  int v10; // r4
  _BOOL4 v11; // r3
  int v12; // r12
  int v13; // r2
  int v14; // r0
  unsigned int *v15; // r3
  int v16; // r2
  int v17; // r6
  int v18; // r3
  _BOOL4 v19; // r4
  __int64 v20; // r0
  bool v21; // cc
  _BOOL4 v22; // r1
  int v23; // r1
  int v24; // [sp+4h] [bp-98h]
  int v25; // [sp+8h] [bp-94h]
  const char *v26; // [sp+Ch] [bp-90h] BYREF
  void *v27; // [sp+10h] [bp-8Ch] BYREF
  int v28; // [sp+14h] [bp-88h]
  _DWORD v29[4]; // [sp+18h] [bp-84h] BYREF
  void *ptr; // [sp+28h] [bp-74h] BYREF
  int v31; // [sp+2Ch] [bp-70h]
  _DWORD v32[4]; // [sp+30h] [bp-6Ch] BYREF
  int v33; // [sp+40h] [bp-5Ch]
  int v34; // [sp+44h] [bp-58h]
  int v35; // [sp+48h] [bp-54h]
  int v36; // [sp+4Ch] [bp-50h]
  int v37; // [sp+50h] [bp-4Ch]
  int v38; // [sp+54h] [bp-48h]
  void *v39; // [sp+58h] [bp-44h] BYREF
  int v40; // [sp+5Ch] [bp-40h]
  _DWORD v41[4]; // [sp+60h] [bp-3Ch] BYREF
  _DWORD v42[2]; // [sp+70h] [bp-2Ch] BYREF
  int v43; // [sp+78h] [bp-24h]
  char v44; // [sp+7Ch] [bp-20h]
  int v45; // [sp+80h] [bp-1Ch]
  int v46; // [sp+84h] [bp-18h]
  int v47; // [sp+88h] [bp-14h]
  int v48; // [sp+8Ch] [bp-10h]
  int v49; // [sp+90h] [bp-Ch]
  int v50; // [sp+94h] [bp-8h]

  v26 = a1;
  if ( !a1 )
    sub_51E9C("No mem");
  if ( !strcmp(a1, "auto") )
  {
    if ( off_46D9C4 != &dword_487AF4 )
    {
      off_46D9C4 = &dword_487AF4;
      dword_487B38 = dword_487B34;
    }
    return;
  }
  sub_1AF0D0(a2);
  sub_5B05C((int *)&v27, (int *)&v26);
  if ( !sub_33CAA0((int)&v27, "") )
    sub_946E0("no lo address");
  v3 = sub_14CB9C((int)v27);
  sub_5B05C((int *)&ptr, (int *)&v26);
  v4 = v27;
  if ( ptr == v32 )
  {
    sub_33B48C(&v27, &ptr);
    v4 = ptr;
    goto LABEL_11;
  }
  if ( v27 == v29 )
  {
    v27 = ptr;
    v28 = v31;
    v29[0] = v32[0];
    goto LABEL_35;
  }
  v27 = ptr;
  v28 = v31;
  v5 = v29[0];
  v29[0] = v32[0];
  if ( !v4 )
  {
LABEL_35:
    ptr = v32;
    v4 = v32;
    goto LABEL_11;
  }
  ptr = v4;
  v32[0] = v5;
LABEL_11:
  v31 = 0;
  *v4 = 0;
  if ( ptr != v32 )
    sub_339E64(ptr);
  if ( !sub_33CAA0((int)&v27, "") )
    sub_946E0("no hi address");
  v6 = sub_14CB9C((int)v27);
  v7 = 1;
  v33 = 1;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v25 = 0;
  v24 = 0;
  v37 = 0;
  v38 = -1;
  while ( 1 )
  {
    sub_5B05C((int *)&v39, (int *)&v26);
    v8 = v27;
    if ( v39 == v41 )
    {
      sub_33B48C(&v27, &v39);
      v8 = v39;
    }
    else
    {
      if ( v27 == v29 )
      {
        v27 = v39;
        v29[0] = v41[0];
        v28 = v40;
      }
      else
      {
        v27 = v39;
        v28 = v40;
        v9 = v29[0];
        v29[0] = v41[0];
        if ( v8 )
        {
          v39 = v8;
          v41[0] = v9;
          goto LABEL_20;
        }
      }
      v39 = v41;
      v8 = v41;
    }
LABEL_20:
    v40 = 0;
    *v8 = 0;
    v10 = sub_33CAA0((int)&v27, "");
    if ( v39 != v41 )
      sub_339E64(v39);
    if ( !v10 )
      break;
    if ( sub_33CAA0((int)&v27, "rw") )
    {
      if ( sub_33CAA0((int)&v27, "ro") )
      {
        if ( sub_33CAA0((int)&v27, "wo") )
        {
          if ( sub_33CAA0((int)&v27, "8") )
          {
            if ( sub_33CAA0((int)&v27, "16") )
            {
              if ( sub_33CAA0((int)&v27, "32") )
              {
                if ( sub_33CAA0((int)&v27, "64") )
                {
                  if ( sub_33CAA0((int)&v27, "cache") )
                  {
                    v25 = sub_33CAA0((int)&v27, "nocache");
                    if ( v25 )
                      sub_946E0("unknown attribute: %s", (const char *)v27);
                  }
                  else
                  {
                    v25 = 1;
                  }
                }
                else
                {
                  if ( ((v3 | v6) & 7) != 0 )
                    sub_946E0("region bounds not 64 bit aligned");
                  v24 = 4;
                }
              }
              else
              {
                if ( ((v3 | v6) & 3) != 0 )
                  sub_946E0("region bounds not 32 bit aligned");
                v24 = 3;
              }
            }
            else
            {
              if ( ((v3 | v6) & 1) != 0 )
                sub_946E0("region bounds not 16 bit aligned");
              v24 = 2;
            }
          }
          else
          {
            v24 = 1;
          }
        }
        else
        {
          v7 = 3;
        }
      }
      else
      {
        v7 = 2;
      }
    }
    else
    {
      v7 = 1;
    }
  }
  v11 = v3 >= v6;
  if ( !v6 )
    v11 = 0;
  if ( !v11 )
  {
    v33 = v7;
    v12 = dword_487B34;
    v34 = v24;
    v42[0] = v3;
    v42[1] = v6;
    v43 = 0;
    v36 = v25;
    v45 = v7;
    v46 = v24;
    v47 = v35;
    v48 = v25;
    v13 = -858993459 * ((dword_487B38 - dword_487B34) >> 3);
    v44 = 1;
    v49 = v37;
    v50 = v38;
    while ( 1 )
    {
      if ( v13 <= 0 )
        goto LABEL_48;
      v14 = v13 >> 1;
      v15 = (unsigned int *)(v12 + 40 * (v13 >> 1));
      if ( v3 <= *v15 )
        break;
      v23 = v13 >> 1;
      v14 = v13;
LABEL_72:
      v12 = (int)(v15 + 10);
      v13 = v14 - v23 - 1;
    }
    while ( v14 )
    {
      v23 = v14 >> 1;
      v15 = (unsigned int *)(v12 + 40 * (v14 >> 1));
      if ( v3 > *v15 )
        goto LABEL_72;
      v14 >>= 1;
    }
LABEL_48:
    v16 = v12;
    v17 = -858993459 * ((v12 - dword_487B34) >> 3);
    v18 = v17 - 1;
    while ( 2 )
    {
      if ( v18 >= 0 && -858993459 * ((dword_487B38 - dword_487B34) >> 3) > (unsigned int)v18 )
      {
        v20 = *(_QWORD *)(v16 - 40);
        if ( v3 < (unsigned int)v20 )
        {
          if ( v6 > (unsigned int)v20 )
          {
            v21 = HIDWORD(v20) != 0;
            if ( HIDWORD(v20) )
              v21 = v6 > HIDWORD(v20);
            if ( !v21 )
              goto LABEL_69;
          }
          goto LABEL_64;
        }
        v19 = HIDWORD(v20) == 0;
        if ( v3 < HIDWORD(v20) )
          v19 = 1;
        if ( v19 || v6 > (unsigned int)v20 && v6 <= HIDWORD(v20) )
        {
LABEL_69:
          sub_259858("overlapping memory region\n");
          goto LABEL_70;
        }
        if ( v3 <= (unsigned int)v20 )
        {
LABEL_64:
          if ( HIDWORD(v20) )
            v22 = v6 >= HIDWORD(v20);
          else
            v22 = 0;
          if ( v22 || !v6 )
            goto LABEL_69;
        }
      }
      ++v18;
      v16 += 40;
      if ( v17 < v18 )
      {
        v43 = ++dword_487B40;
        sub_1AFFA4(&dword_487B34, v12, v42);
        goto LABEL_70;
      }
      continue;
    }
  }
  sub_259858("invalid memory region: low >= high\n");
LABEL_70:
  if ( v27 != v29 )
    sub_339E64(v27);
}
