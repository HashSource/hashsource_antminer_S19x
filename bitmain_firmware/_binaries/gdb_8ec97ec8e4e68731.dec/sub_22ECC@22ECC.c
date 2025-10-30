unsigned int __fastcall sub_22ECC(int a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  int v4; // r4
  int v8; // r1
  _BYTE *v9; // r0
  int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r5
  unsigned int v13; // r3
  bool v14; // zf
  int v15; // r3
  int v16; // r2
  unsigned int v17; // r4
  int v18; // r9
  int v19; // r12
  unsigned int *v20; // r4
  unsigned int v21; // r1
  unsigned int v22; // r2
  int v23; // r9
  unsigned int v24; // r3
  int v25; // r0
  int v26; // r2
  int v27; // r4
  unsigned int v28; // r3
  _DWORD *v29; // r2
  int v30; // r4
  const char *v31; // r0
  bool v33; // zf
  bool v34; // zf
  int v35; // r5
  int v37; // r1
  int v38; // r2
  int *v39; // r3
  unsigned int v40; // r0
  unsigned int v41; // r1
  unsigned int v42; // r2
  _BYTE *v43; // r3
  int v44; // r3
  int v45; // r9
  unsigned int v46; // r4
  unsigned int v47; // r9
  int v48; // r1
  int v49; // r2
  int *v50; // r3
  int v51; // [sp+0h] [bp-17Ch]
  int v52; // [sp+0h] [bp-17Ch]
  int v53; // [sp+4h] [bp-178h] BYREF
  int v54; // [sp+8h] [bp-174h]
  int v55; // [sp+Ch] [bp-170h]
  unsigned int v56; // [sp+14h] [bp-168h]
  int v57; // [sp+18h] [bp-164h]
  int v58; // [sp+1Ch] [bp-160h]
  unsigned int v59; // [sp+20h] [bp-15Ch]
  int v60; // [sp+24h] [bp-158h]
  int v61; // [sp+28h] [bp-154h]
  int *v62; // [sp+2Ch] [bp-150h]
  int v63; // [sp+30h] [bp-14Ch]
  int v64; // [sp+34h] [bp-148h]
  unsigned int v65; // [sp+38h] [bp-144h] BYREF
  unsigned int v66; // [sp+3Ch] [bp-140h]
  unsigned int v67; // [sp+40h] [bp-13Ch]
  int v68; // [sp+48h] [bp-134h] BYREF
  _BYTE v69[144]; // [sp+4Ch] [bp-130h] BYREF
  unsigned int v70; // [sp+DCh] [bp-A0h]
  unsigned int v71; // [sp+E0h] [bp-9Ch]
  unsigned int v72; // [sp+E4h] [bp-98h]
  unsigned int v73; // [sp+E8h] [bp-94h]
  unsigned int v74; // [sp+ECh] [bp-90h]
  unsigned int v75; // [sp+F0h] [bp-8Ch]
  unsigned int v76; // [sp+F4h] [bp-88h]
  unsigned int v77; // [sp+F8h] [bp-84h]
  unsigned int v78; // [sp+FCh] [bp-80h]
  _BYTE v79[4]; // [sp+178h] [bp-4h] BYREF

  v4 = 0;
  v56 = a3;
  v57 = ((int (*)(void))loc_165C28)();
  do
  {
    v8 = v4;
    v9 = &v79[12 * v4++];
    sub_1CD71C(v9 - 288, v8, 0);
  }
  while ( v4 != 24 );
  v10 = ((int (__fastcall *)(int))loc_16666C)(a1);
  v11 = sub_1CDC44(v69, 13, v10);
  if ( a2 < v56 )
  {
    v58 = -450035708;
    v60 = -515178320;
    v61 = -506658640;
    v63 = -498290688;
    v64 = -311623421;
    v59 = 0;
    while ( 1 )
    {
      v11 = sub_FA9D4(a2, 4, v57);
      v17 = v11;
      if ( v11 == -509558771 )
      {
        v11 = v76;
        v73 = v76;
        v74 = v77;
        v75 = v78;
      }
      else
      {
        v12 = v11 >> 20 << 20;
        if ( v12 == -494927872 )
        {
          v18 = HIWORD(v11) & 0xF;
          v11 = sub_1CDB38(
                  *(_DWORD *)&v69[12 * v18 + 12],
                  *(_DWORD *)&v69[12 * v18 + 16],
                  *(_DWORD *)&v69[12 * v18 + 20],
                  13);
          if ( v11 )
          {
            v19 = __ROR4__((unsigned __int8)v17, (v17 >> 7) & 0x1E);
            v20 = (unsigned int *)&v69[12 * ((unsigned __int16)v17 >> 12) + 12];
            sub_1CD7FC(
              &v65,
              *(_DWORD *)&v69[12 * v18 + 12],
              *(_DWORD *)&v69[12 * v18 + 16],
              *(_DWORD *)&v69[12 * v18 + 20],
              v19);
LABEL_26:
            v11 = v65;
            v21 = v66;
            v22 = v67;
            *v20 = v65;
            v20[1] = v21;
            v20[2] = v22;
            goto LABEL_21;
          }
        }
        else if ( v12 == -499122176 )
        {
          v23 = HIWORD(v11) & 0xF;
          v11 = sub_1CDB38(
                  *(_DWORD *)&v69[12 * v23 + 12],
                  *(_DWORD *)&v69[12 * v23 + 16],
                  *(_DWORD *)&v69[12 * v23 + 20],
                  13);
          if ( v11 )
          {
            v51 = -__ROR4__((unsigned __int8)v17, (v17 >> 7) & 0x1E);
            v20 = (unsigned int *)&v69[12 * ((unsigned __int16)v17 >> 12) + 12];
            sub_1CD7FC(
              &v65,
              *(_DWORD *)&v69[12 * v23 + 12],
              *(_DWORD *)&v69[12 * v23 + 16],
              *(_DWORD *)&v69[12 * v23 + 20],
              v51);
            goto LABEL_26;
          }
        }
        if ( (v17 & 0xFFFF0FFF) == v58 )
        {
          v11 = sub_1CDCD8(v69, v76, v77, v78);
          if ( v11 )
            goto LABEL_30;
          sub_1CD7FC(&v65, v76, v77, v78, -4);
          v40 = v65;
          v41 = v66;
          v42 = v67;
          v52 = 4;
          v43 = &v79[12 * ((unsigned __int16)v17 >> 12)];
LABEL_76:
          v76 = v40;
          v77 = v41;
          v78 = v42;
          v11 = sub_1CDDD0(v69, v40, v41, v42, v52, *((_DWORD *)v43 - 72), *((_DWORD *)v43 - 71), *((_DWORD *)v43 - 70));
          goto LABEL_21;
        }
        v13 = HIWORD(v17) << 16;
        if ( v13 == -382926848 )
        {
          v11 = sub_1CDCD8(v69, v76, v77, v78);
          if ( v11 )
            goto LABEL_30;
          v35 = 15;
          v62 = &v53;
          do
          {
            if ( (((int)(unsigned __int16)v17 >> v35) & 1) != 0 )
            {
              sub_1CD7FC(&v65, v76, v77, v78, -4);
              v76 = v65;
              v77 = v66;
              v78 = v67;
              v37 = *(_DWORD *)&v69[12 * v35 + 16];
              v38 = *(_DWORD *)&v69[12 * v35 + 20];
              v39 = v62;
              *v62 = *(_DWORD *)&v69[12 * v35 + 12];
              v39[1] = v37;
              v39[2] = v38;
              v11 = sub_1CDDD0(v69, v76, v77, v78, 4, v53, v54, v55);
            }
          }
          while ( v35-- != 0 );
        }
        else
        {
          if ( v13 == -448069632 || (v17 & 0xFFFF00F0) == v60 )
            goto LABEL_21;
          v11 = v17 & 0xFFFFC000;
          v14 = v13 == -439549952;
          if ( v13 != -439549952 )
            v14 = v11 == -452263936;
          v15 = v14;
          LOWORD(v16) = 0;
          if ( (v17 & 0xFFFF00F0) == v61 )
            v15 |= 1u;
          HIWORD(v16) = -6771;
          if ( v11 == v16 )
            v15 |= 1u;
          if ( v15 )
            goto LABEL_21;
          if ( v12 == -394264576 )
          {
            v11 = sub_1CDB38(
                    *(_DWORD *)&v69[12 * (HIWORD(v17) & 0xF) + 12],
                    *(_DWORD *)&v69[12 * (HIWORD(v17) & 0xF) + 16],
                    *(_DWORD *)&v69[12 * (HIWORD(v17) & 0xF) + 20],
                    13);
            if ( v11 )
              goto LABEL_21;
          }
          if ( (v17 & 0xFFFFF000) == v63 )
          {
            sub_1CD7FC(&v65, v73, v74, v75, -__ROR4__((unsigned __int8)v17, (v17 >> 7) & 0x1E));
            v11 = v65;
            v70 = v65;
            v71 = v66;
            v72 = v67;
            goto LABEL_21;
          }
          if ( (v17 & 0xFFFFF000) == 0xE24DD000 )
          {
            sub_1CD7FC(&v65, v76, v77, v78, -__ROR4__((unsigned __int8)v17, (v17 >> 7) & 0x1E));
            v11 = v65;
            v76 = v65;
            v77 = v66;
            v78 = v67;
          }
          else
          {
            if ( (v17 & 0xFFFF7FFF) == v64 )
            {
              v11 = sub_163E78(a1);
              if ( *(_DWORD *)(v11 + 8) )
              {
                v11 = sub_1CDCD8(v69, v76, v77, v78);
                if ( v11 )
                  goto LABEL_30;
                sub_1CD7FC(&v65, v76, v77, v78, -12);
                v40 = v65;
                v41 = v66;
                v42 = v67;
                v52 = 12;
                v43 = &v79[12 * ((v17 >> 12) & 7) + 192];
                goto LABEL_76;
              }
            }
            if ( (v17 & 0xFFBF0FFF) == 0xEC2D0200 && (v11 = sub_163E78(a1), *(_DWORD *)(v11 + 8)) )
            {
              v11 = sub_1CDCD8(v69, v76, v77, v78);
              if ( v11 )
                goto LABEL_30;
              v44 = v17 & 0x40000;
              if ( (v17 & 0x800) != 0 )
              {
                if ( v44 )
                  v45 = 3;
                else
                  v45 = 1;
              }
              else if ( v44 )
              {
                v45 = 2;
              }
              else
              {
                v45 = 4;
              }
              v46 = ((v17 >> 12) & 7) + 16;
              v47 = v46 + v45;
              if ( v46 < v47 )
              {
                v62 = &v53;
                do
                {
                  sub_1CD7FC(&v65, v76, v77, v78, -12);
                  v76 = v65;
                  v77 = v66;
                  v78 = v67;
                  v48 = *(_DWORD *)&v69[12 * v46 + 16];
                  v49 = *(_DWORD *)&v69[12 * v46 + 20];
                  v50 = v62;
                  *v62 = *(_DWORD *)&v69[12 * v46 + 12];
                  v50[1] = v48;
                  v50[2] = v49;
                  v11 = sub_1CDDD0(v69, v76, v77, v78, 12, v53, v54, v55);
                  v46 += 2;
                }
                while ( v47 > v46 );
              }
            }
            else
            {
              v33 = (v17 & 0xFF000000) == -352321536;
              if ( (v17 & 0xFF000000) == 0xEB000000 )
                v33 = a4 == 0;
              if ( v33 )
              {
                v11 = sub_21C38(a1, a2 + 8 + 4 * ((-16777216 * ((v17 >> 23) & 1)) | v17 & 0xFFFFFF), 0);
                if ( !v11 )
                {
                  if ( v59 )
                    goto LABEL_33;
                  v59 = a2;
                  goto LABEL_45;
                }
              }
              else
              {
                if ( (v17 & 0xF0000000) != 0xE0000000 )
                  goto LABEL_30;
                v11 = sub_1841C(v17);
                if ( v11 || (((v17 & 0xDF0F000) - 4247552) & 0xFFBFFFFF) == 0 || (v17 & 0xFFFFFF0) == 0x1A0D000 )
                  goto LABEL_30;
                v34 = (v17 & 0xFFF0000) == 77398016;
                if ( (v17 & 0xFFF0000) != 0x49D0000 )
                  v34 = (v17 & 0xFFF0000) == 146604032;
                if ( v34 )
                {
LABEL_30:
                  v24 = v59;
                  if ( !v59 )
                    v24 = a2;
                  v59 = v24;
                  goto LABEL_33;
                }
                if ( ((v17 & 0xFE500000) != 0xE8100000
                   || (v11 = sub_1CDB38(
                               *(_DWORD *)&v69[12 * (HIWORD(v17) & 0xF) + 12],
                               *(_DWORD *)&v69[12 * (HIWORD(v17) & 0xF) + 16],
                               *(_DWORD *)&v69[12 * (HIWORD(v17) & 0xF) + 20],
                               13)) == 0)
                  && ((v17 & 0xFC500000) != 0xE4100000
                   || (v11 = sub_1CDB38(
                               *(_DWORD *)&v69[12 * (HIWORD(v17) & 0xF) + 12],
                               *(_DWORD *)&v69[12 * (HIWORD(v17) & 0xF) + 16],
                               *(_DWORD *)&v69[12 * (HIWORD(v17) & 0xF) + 20],
                               13)) == 0)
                  && (v17 & 0xFFFF0FF0) != 0xE1A00000 )
                {
                  v59 = a2;
                  if ( !a4 )
                    goto LABEL_45;
                }
              }
            }
          }
        }
      }
LABEL_21:
      a2 += 4;
      if ( a2 >= v56 )
        goto LABEL_30;
    }
  }
  v59 = a2;
LABEL_33:
  if ( a4 )
  {
    v25 = sub_1CDB38(v70, v71, v72, 13);
    v27 = 0;
    if ( v25 )
    {
      v28 = v72;
      v26 = 11;
    }
    else
    {
      v28 = v78;
    }
    if ( !v25 )
      v26 = 13;
    a4[2] = v26;
    a4[1] = -v28;
    do
    {
      v11 = sub_1CDFC4(v69, a1, v27, &v68);
      if ( v11 )
      {
        v29 = (_DWORD *)(a4[3] + 16 * v27);
        *v29 = v68;
      }
      ++v27;
      if ( v11 )
        v29[1] = 0;
    }
    while ( v27 != 24 );
  }
LABEL_45:
  if ( dword_471514 )
  {
    v30 = *(_DWORD *)sub_242FC8(v11);
    v31 = (const char *)sub_25AC8C(a1, v59);
    sub_2594B0(v30, "Prologue scan stopped at %s\n", v31);
  }
  sub_1CDCA4(v69);
  return v59;
}
