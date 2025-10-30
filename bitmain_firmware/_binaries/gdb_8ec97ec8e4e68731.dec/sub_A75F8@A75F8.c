int __fastcall sub_A75F8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v9; // r9
  int v10; // r0
  int v11; // r8
  int v12; // r4
  int v13; // r4
  __int64 v14; // r6
  __int64 v15; // r0
  int v16; // r1
  __int64 v17; // r0
  void *v18; // r0
  int v19; // r12
  char *v20; // r2
  int v21; // r1
  int v22; // r2
  __int64 v23; // r0
  int v24; // r6
  int v25; // r0
  int v26; // r0
  int v28; // r7
  void *v29; // r3
  unsigned int v30; // r7
  unsigned int v31; // r1
  char *v32; // r2
  int v33; // r0
  int v34; // r2
  int v35; // r0
  unsigned int v36; // r3
  int v37; // [sp+10h] [bp-44h] BYREF
  int v38; // [sp+14h] [bp-40h]
  int v39; // [sp+18h] [bp-3Ch]
  int v40; // [sp+1Ch] [bp-38h]
  void *src; // [sp+24h] [bp-30h] BYREF
  char *v42; // [sp+28h] [bp-2Ch]
  int v43; // [sp+2Ch] [bp-28h]

  v40 = a4;
  v9 = a5;
  v39 = sub_17374C(a6);
  v10 = sub_170040(a6);
  v38 = ((int (__fastcall *)(int))loc_165D78)(v10);
  src = 0;
  v42 = 0;
  v43 = 0;
  v11 = sub_A0870(a6);
  if ( a1 )
    v12 = sub_26E978(a1) + a3;
  else
    v12 = a2 + a3;
  if ( sub_172880(v11) )
  {
    v28 = a5 + 7;
    v29 = src;
    if ( a5 + 7 < 0 )
      v28 = a5 + 14;
    v30 = v28 >> 3;
    v31 = v42 - (_BYTE *)src;
    if ( v30 > v42 - (_BYTE *)src )
    {
      sub_AF660(&src, v30 - v31);
      v29 = src;
      v31 = v42 - (_BYTE *)src;
    }
    else if ( v30 < v31 )
    {
      v31 = v30;
      v42 = (char *)src + v30;
    }
    v32 = *(char **)(v11 + 24);
    v33 = *v32;
    if ( v33 == 8 )
    {
      v34 = (v32[1] & 1) == 0;
    }
    else if ( v33 == 12 )
    {
      v34 = *(_DWORD *)(*((_DWORD *)v32 + 6) + 12) >> 31;
    }
    else
    {
      v34 = 0;
    }
    sub_9A4A0(v12, v40, a5, (int)v29, v31, v38, v34, v39);
    v35 = sub_176ED4(v11, src);
    v36 = *(_DWORD *)(v35 + 20);
    v11 = v35;
    if ( v30 > v36 )
      v9 = 8 * v36;
    if ( a1 )
      goto LABEL_6;
LABEL_37:
    v13 = sub_26BB80(v11);
    v37 = a2 + a3;
    sub_26BCA8(v13, a2 + a3, v9, v9 >> 31);
    goto LABEL_11;
  }
  if ( !a1 )
    goto LABEL_37;
LABEL_6:
  if ( *(_DWORD *)nullsub_31(a1) == 1 && sub_26BF4C(a1) )
  {
    if ( v9 + v40 + 7 >= 0 )
      v24 = v9 + v40 + 7;
    else
      v24 = v9 + v40 + 14;
    v25 = ((int (__fastcall *)(int))loc_26C09C)(a1);
    v13 = sub_260F7C(v11, a3 + v25);
    v37 = (int)&v37;
    v26 = ((int (*)(void))loc_26C09C)();
    sub_FA844(v26, &v37, v24 >> 3);
  }
  else
  {
    v13 = sub_26BB80(v11);
    v37 = sub_26E978(a1) + a3;
  }
  ((void (__fastcall *)(int, int))loc_26C744)(v13, a1);
  v14 = v40;
  v15 = sub_26BC90(a1);
  sub_26BC98(v13, HIDWORD(v15), v14 + v15, (unsigned __int64)(v14 + v15) >> 32);
  sub_26BCA8(v13, v16, v9, v9 >> 31);
  v17 = sub_26BC90(v13);
  if ( v17 >= 8 )
  {
    ++a3;
    v23 = sub_26BC90(v13);
    sub_26BC98(v13, HIDWORD(v23), v23 - 8, (unsigned __int64)(v23 - 8) >> 32);
  }
  sub_26BC88(v13, HIDWORD(v17), a3, a3 >> 31);
  sub_26C2E0(v13, a1);
LABEL_11:
  v18 = (void *)sub_26E954(v13);
  v19 = *(_DWORD *)(v11 + 20);
  if ( v9 )
  {
    if ( v42 - (_BYTE *)src == v19 )
    {
      memcpy(v18, src, v42 - (_BYTE *)src);
    }
    else
    {
      v20 = *(char **)(v11 + 24);
      v21 = *v20;
      if ( v21 == 8 )
      {
        v22 = (v20[1] & 1) == 0;
      }
      else if ( v21 == 12 )
      {
        v22 = *(_DWORD *)(*((_DWORD *)v20 + 6) + 12) >> 31;
      }
      else
      {
        v22 = 0;
      }
      sub_9A4A0(v37, v40, v9, (int)v18, v19, v38, v22, v39);
    }
  }
  else
  {
    memset(v18, 0, *(_DWORD *)(v11 + 20));
  }
  if ( src )
    sub_339E64(src);
  return v13;
}
