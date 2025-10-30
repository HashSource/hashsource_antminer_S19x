// positive sp value has been detected, the output may be wrong!
void __fastcall sub_20020(
        int a1,
        int a2,
        int a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v13; // r4
  _DWORD *v14; // r5
  char *v15; // r7
  int v16; // r9
  int v17; // r12
  int v18; // lr
  int v19; // r1
  int *v21; // lr
  int v22; // lr
  unsigned int v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r5
  int v26; // r7
  int v27; // r6
  int v28; // r3
  _BYTE *v29; // r4
  const char *v30; // r0
  int v31; // r8
  size_t v32; // r0
  int v33; // r5
  int v34; // r0
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // [sp-C4h] [bp-C4h]
  const char *v42; // [sp-B8h] [bp-B8h]
  _BYTE *v43; // [sp-B0h] [bp-B0h]
  const char *v44; // [sp-ACh] [bp-ACh]
  int v45; // [sp-A0h] [bp-A0h]
  void *v46; // [sp-98h] [bp-98h]
  int *v47; // [sp-94h] [bp-94h]
  int v48; // [sp-90h] [bp-90h]
  int v49; // [sp-88h] [bp-88h] BYREF
  unsigned int v50; // [sp-84h] [bp-84h]
  int v51; // [sp-80h] [bp-80h]
  int v52; // [sp-7Ch] [bp-7Ch]
  int v53; // [sp-78h] [bp-78h]
  int v54; // [sp-74h] [bp-74h]
  int v55; // [sp-70h] [bp-70h]
  int v56; // [sp-6Ch] [bp-6Ch] BYREF
  unsigned int v57; // [sp-68h] [bp-68h]
  int v58; // [sp-64h] [bp-64h]
  int v59; // [sp-60h] [bp-60h]
  int v60; // [sp-5Ch] [bp-5Ch]
  int v61; // [sp-58h] [bp-58h]
  int v62; // [sp-54h] [bp-54h]
  _DWORD v63[3]; // [sp-50h] [bp-50h]
  char v64[16]; // [sp-44h] [bp-44h] BYREF
  char v65[12]; // [sp-34h] [bp-34h] BYREF
  char v66[32]; // [sp-28h] [bp-28h] BYREF
  int v67; // [sp-8h] [bp-8h]
  _BYTE v68[4]; // [sp-4h] [bp-4h] BYREF

  v19 = a4[1];
  v44 = v15;
  v21 = *(int **)(v13 + v18);
  *v14 = *a4;
  v14[1] = v19;
  strcpy(v64, "mask.%u");
  v22 = *v21;
  v49 = 0;
  strcpy(v15, "hits.%u");
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v67 = v22;
  strcpy(v65, "flags.%u");
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  if ( v17 )
  {
    v34 = *(_DWORD *)(v16 + 20);
    LOWORD(v49) = 10;
    v35 = *(_DWORD *)(v16 + 24);
    v36 = *(_DWORD *)(v16 + 28);
    v37 = *(_DWORD *)(v16 + 32);
    LOWORD(v56) = 10;
    v51 = v34;
    v52 = v35;
    v53 = v36;
    v54 = v37;
    v38 = *(_DWORD *)(v16 + 40);
    v39 = *(_DWORD *)(v16 + 44);
    v40 = *(_DWORD *)(v16 + 48);
    v58 = *(_DWORD *)(v16 + 36);
    v59 = v38;
    v60 = v39;
    v61 = v40;
  }
  else
  {
    v23 = *(_DWORD *)(v16 + 24);
    v24 = bswap32(*(_DWORD *)(v16 + 20));
    LOWORD(v49) = 2;
    v50 = v24;
    LOWORD(v56) = 2;
    v57 = bswap32(v23);
  }
  v25 = 0;
  v26 = 0;
  v27 = 4;
  v63[0] = 0;
  while ( 1 )
  {
    if ( v26 <= 1 )
    {
      v26 = 29;
      v33 = rand();
      v25 = v33 ^ (rand() << 16);
    }
    else
    {
      v26 -= 2;
    }
    v28 = v25 & 3;
    v25 >>= 2;
    while ( 1 )
    {
      v29 = &v68[v28];
      if ( !*((_BYTE *)v63 + v28) )
        break;
      v28 = ((_BYTE)v28 + 1) & 3;
    }
    if ( v28 == 2 )
    {
      sub_6D00C(v66, 32, v44, a3);
      sub_1FDB0(v66, *(_DWORD *)(v16 + 4));
    }
    else
    {
      if ( v28 == 3 )
      {
        sub_6D00C(v66, 32, v65, a3);
        v43 = (_BYTE *)((int (__fastcall *)(_DWORD))sub_6DFF8)(*(unsigned __int16 *)(v16 + 10));
        v31 = ((int (__fastcall *)(_DWORD))sub_6E060)(*(unsigned __int16 *)(v16 + 8));
        if ( *v43 )
        {
          v47 = *(int **)((char *)&elf_hash_bucket[333] + v45);
          v48 = *v47;
          v46 = (void *)(*(int *)((char *)&elf_hash_bucket[389] + v45) + (*v47 << 7));
          memset(v46, 0, 0x80u);
          v41 = v31;
          v31 = (int)v46;
          *v47 = ((_BYTE)v48 + 1) & 0xF;
          sub_6D00C(v46, 128, "%s %s", v43, v41);
        }
        v30 = (const char *)v31;
      }
      else
      {
        if ( v28 == 1 )
        {
          sub_6D00C(v66, 32, v64, a3);
          v30 = (const char *)sub_6D2C0(&v56);
        }
        else
        {
          sub_6D00C(v66, 32, v42, a3);
          v30 = (const char *)sub_6D2C0(&v49);
        }
        v31 = (int)v30;
      }
      v32 = strlen(v30);
      sub_1F350(v66, v31, v32);
    }
    --v27;
    *(v29 - 76) = 1;
    if ( !v27 )
    {
      sub_1FE54(a3);
      __asm { POP             {R4-R11,PC} }
    }
  }
}
