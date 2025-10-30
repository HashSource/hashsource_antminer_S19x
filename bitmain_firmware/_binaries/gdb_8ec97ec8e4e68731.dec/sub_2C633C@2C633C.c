int __fastcall sub_2C633C(_DWORD *a1, int a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r4
  int v6; // r3
  int v8; // r7
  int v9; // r10
  int v10; // r9
  unsigned int v11; // r11
  size_t v12; // r1
  unsigned int v13; // r2
  char *v14; // r0
  int v16; // lr
  int v17; // r12
  int v18; // r3
  int v19; // r3
  unsigned int v20; // r8
  int v21; // r10
  char *v22; // r2
  int v23; // r1
  int v24; // r0
  int v25; // r12
  int v26; // r3
  int v27; // r2
  int v28; // r4
  int v29; // r4
  unsigned int v30; // r4
  _DWORD *v31; // r5
  _DWORD *v32; // r4
  int v33; // r1
  int v34; // r0
  const char **v35; // r9
  char *v36; // r6
  int v37; // r1
  int v38; // r3
  char v39; // r2
  _DWORD *v40; // r0
  int v41; // r1
  int v42; // r12
  int v43; // r3
  char v44; // r2
  int v45; // r6
  int v46; // r1
  int v47; // r3
  char v48; // r0
  int v49; // r3
  int v50; // r1
  int v51; // [sp+4h] [bp-78h]
  unsigned int v52; // [sp+1Ch] [bp-60h]
  const char *v53; // [sp+20h] [bp-5Ch]
  int v55; // [sp+28h] [bp-54h]
  _DWORD *v56; // [sp+2Ch] [bp-50h]
  int v57; // [sp+30h] [bp-4Ch]
  unsigned int v58; // [sp+34h] [bp-48h]
  unsigned int v59; // [sp+38h] [bp-44h]
  int v60; // [sp+48h] [bp-34h]
  void *ptr; // [sp+50h] [bp-2Ch] BYREF
  int v62; // [sp+54h] [bp-28h] BYREF
  int v63; // [sp+58h] [bp-24h] BYREF
  int v64; // [sp+5Ch] [bp-20h] BYREF
  _DWORD v65[3]; // [sp+60h] [bp-1Ch] BYREF
  _DWORD v66[4]; // [sp+6Ch] [bp-10h] BYREF

  v2 = *(_DWORD *)(a2 + 28);
  ptr = 0;
  v3 = *(_DWORD *)(v2 + 44);
  v62 = 0;
  if ( v3 != 4 )
    __und(0);
  if ( (*(_BYTE *)a2 & 3) == 2 )
    return 1;
  if ( *(_DWORD *)(a1[1] + 4) != 5 )
    return 1;
  v6 = a1[40];
  if ( !v6 || (*(_BYTE *)(v6 + 2340) & 0x3F) != 4 )
    return 1;
  v60 = *(_DWORD *)(v2 + 392);
  if ( !v60 )
    sub_2A6BBC("elf32-arm.c", 8092);
  if ( *(_DWORD *)(v2 + 392) == 1 )
    return 1;
  v8 = (a1[10] >> 5) & 0x42;
  if ( v8 )
    return 1;
  v9 = a1[25];
  if ( !v9 )
    return 1;
  v10 = (int)a1;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v9 + 140);
    if ( *(_DWORD *)(v11 + 4) != 1 )
      goto LABEL_59;
    if ( (*(_DWORD *)(v11 + 8) & 4) == 0 )
      goto LABEL_59;
    if ( (*(_DWORD *)(v9 + 20) & 0x8000) != 0 )
      goto LABEL_59;
    if ( (*(_WORD *)(v9 + 24) & 0x380) == 0x200 )
      goto LABEL_59;
    if ( *(char ***)(v9 + 60) == &off_470950 )
      goto LABEL_59;
    if ( !strcmp(*(const char **)v9, ".vfp11_veneer") )
      goto LABEL_59;
    v12 = *(_DWORD *)(v11 + 144);
    if ( !v12 )
      goto LABEL_59;
    if ( !*(_DWORD *)(v11 + 48) )
      break;
    ptr = *(void **)(v11 + 48);
LABEL_25:
    qsort(*(void **)(v11 + 152), v12, 8u, (__compar_fn_t)sub_2B5F00);
    v13 = *(_DWORD *)(v11 + 144);
    v14 = (char *)ptr;
    if ( v13 )
    {
      v59 = 0;
      v58 = 0;
      v55 = 0;
      v56 = (_DWORD *)v11;
      v57 = v9;
      while ( 1 )
      {
        v16 = v55;
        v17 = v56[38];
        v18 = v17 + 8 * v55;
        if ( v13 - 1 == v55 )
          v16 = v57;
        else
          v11 = *(_DWORD *)(v18 + 8);
        v19 = *(unsigned __int8 *)(v18 + 4);
        if ( v13 - 1 == v55 )
          v11 = *(_DWORD *)(v16 + 36);
        if ( v19 == 97 )
        {
          v20 = *(_DWORD *)(v17 + 8 * v55);
          if ( v11 > v20 )
            break;
        }
LABEL_27:
        if ( v13 <= ++v55 )
        {
          v9 = v57;
          goto LABEL_55;
        }
      }
      v52 = v11;
      v21 = v10;
      while ( 1 )
      {
        v22 = &v14[v20];
        v23 = (unsigned __int8)v14[v20];
        v24 = (unsigned __int8)v14[v20 + 3];
        v11 = v20 + 4;
        v25 = *(_DWORD *)(*(_DWORD *)(v21 + 4) + 8);
        v26 = (unsigned __int8)v22[2];
        v27 = (unsigned __int8)v22[1];
        v63 = 0;
        v28 = v25 ? v26 << 16 : v24 | (v23 << 24);
        v29 = v25 ? v28 | (v24 << 24) : v28 | (v27 << 16);
        v30 = v25 ? v29 | v23 | (v27 << 8) : v29 | (v26 << 8);
        if ( v8 == 1 )
          break;
        if ( v8 == 2 )
        {
          if ( sub_2B580C(v30, &v63, v66, &v64) != 3 && sub_2B2714(v63, (int)v65, v62) )
            goto LABEL_65;
          v8 = 0;
          v14 = (char *)ptr;
          v20 = v58 + 4;
LABEL_40:
          if ( v52 <= v20 )
            goto LABEL_54;
        }
        else
        {
          if ( (sub_2B580C(v30, &v63, v65, &v62) & 0xFFFFFFFD) == 0 )
          {
            v58 = v20;
            v20 += 4;
            v14 = (char *)ptr;
            v59 = v30;
            if ( v60 == 3 )
            {
              v8 = 1;
              goto LABEL_40;
            }
            goto LABEL_64;
          }
          v20 += 4;
          v8 = 0;
          v14 = (char *)ptr;
          if ( v52 <= v11 )
          {
LABEL_54:
            v10 = v21;
            v13 = v56[36];
            goto LABEL_27;
          }
        }
      }
      if ( sub_2B580C(v30, &v63, v66, &v64) != 3 && sub_2B2714(v63, (int)v65, v62) )
      {
LABEL_65:
        v31 = sub_2AB4EC(0x14u);
        v32 = *(_DWORD **)(a2 + 28);
        v33 = v32[11];
        ++*(_DWORD *)(*(_DWORD *)(v57 + 140) + 156);
        v31[4] = 0;
        v31[3] = v59;
        if ( v33 != 4 )
        {
          sub_2A6BBC("elf32-arm.c", 7120);
          __und(0);
        }
        v34 = v32[90];
        if ( !v34 )
        {
          sub_2A6BBC("elf32-arm.c", 7121);
          v34 = v32[90];
        }
        v35 = sub_2AD864(v34, ".vfp11_veneer");
        v53 = v35[35];
        v36 = (char *)sub_2AB368(27);
        if ( !v36 )
          sub_2A6BBC("elf32-arm.c", 7133);
        sprintf(v36, "__vfp11_veneer_%x", v32[99]);
        if ( sub_2FC920(v32, v36, 0) )
          sub_2A6BBC("elf32-arm.c", 7141);
        v37 = v32[90];
        v51 = v32[86];
        v66[0] = 0;
        sub_2FD6C4(a2, v37, (int)v36, 9, (int)v35, v51, 0, 1, 0, (int)v66);
        v38 = v66[0];
        v39 = *(_BYTE *)(v66[0] + 52);
        *(_BYTE *)(v66[0] + 48) = 2;
        *(_BYTE *)(v38 + 52) = v39 | 8;
        ++*((_DWORD *)v53 + 39);
        v40 = sub_2AB4EC(0x14u);
        v41 = v32[99];
        v42 = *((_DWORD *)v53 + 40);
        v40[4] = 2;
        v40[1] = -1;
        v40[3] = v41;
        v40[2] = v31;
        v31[2] = v40;
        *v40 = v42;
        *((_DWORD *)v53 + 40) = v40;
        sprintf(v36, "__vfp11_veneer_%x_r", v41);
        if ( sub_2FC920(v32, v36, 0) )
          sub_2A6BF0((int)"elf32-arm.c", 7175, (int)"record_vfp11_erratum_veneer");
        v66[0] = 0;
        sub_2FD6C4(a2, v21, (int)v36, 1, v57, v58 + 4, 0, 1, 0, (int)v66);
        v43 = v66[0];
        v44 = *(_BYTE *)(v66[0] + 52);
        *(_BYTE *)(v66[0] + 48) = 2;
        *(_BYTE *)(v43 + 52) = v44 | 8;
        free(v36);
        v45 = v32[86];
        if ( !v45 )
        {
          v46 = v32[90];
          v66[0] = 0;
          sub_2FD6C4(a2, v46, (int)"$a", 1, (int)v35, 0, 0, 1, 0, (int)v66);
          v47 = v66[0];
          v48 = *(_BYTE *)(v66[0] + 52);
          *(_BYTE *)(v66[0] + 48) = 0;
          *(_BYTE *)(v47 + 52) = v48 | 8;
          sub_2B9E04(v35[35], 97, 0);
          v45 = v32[86];
        }
        v20 += 4;
        v49 = v32[99];
        v8 = 0;
        v50 = v56[40];
        v14 = (char *)ptr;
        v35[9] += 8;
        v32[86] = v45 + 8;
        v32[99] = v49 + 1;
        *v31 = v50;
        v31[1] = -1;
        v56[40] = v31;
        goto LABEL_40;
      }
      v14 = (char *)ptr;
      v20 += 4;
LABEL_64:
      v8 = 2;
      goto LABEL_40;
    }
LABEL_55:
    if ( v14 && *(char **)(*(_DWORD *)(v9 + 140) + 48) != v14 )
      free(v14);
    ptr = 0;
LABEL_59:
    v9 = *(_DWORD *)(v9 + 12);
    if ( !v9 )
      return 1;
  }
  if ( sub_2ADFDC(v10, v9, (int *)&ptr) )
  {
    v12 = *(_DWORD *)(v11 + 144);
    goto LABEL_25;
  }
  v4 = 0;
  if ( ptr && ptr != *(void **)(*(_DWORD *)(v9 + 140) + 48) )
    free(ptr);
  return v4;
}
