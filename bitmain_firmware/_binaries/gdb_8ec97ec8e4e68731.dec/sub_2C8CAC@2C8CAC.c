int __fastcall sub_2C8CAC(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7)
{
  int v11; // r8
  void *v12; // r4
  int v14; // r11
  unsigned int v15; // r2
  int v16; // r9
  int v17; // r2
  int v18; // r7
  int v20; // r3
  void (__fastcall *v21)(_DWORD *, _DWORD *, int *); // r3
  int v22; // r0
  int v23; // r3
  unsigned int v24; // r0
  int v25; // r2
  int v26; // r3
  unsigned int v27; // r0
  int v28; // [sp+Ch] [bp-28h]
  unsigned int v29; // [sp+10h] [bp-24h]
  void *v30; // [sp+1Ch] [bp-18h]
  int v31; // [sp+24h] [bp-10h] BYREF
  unsigned int v32; // [sp+28h] [bp-Ch]
  int v33; // [sp+2Ch] [bp-8h]

  v11 = *(_DWORD *)(a1[1] + 444);
  v12 = sub_2AB368(*(_DWORD *)(a3 + 24));
  if ( !v12 )
    return 0;
  if ( sub_2A8A04((int)a1, *(_QWORD *)(a3 + 16), 0)
    || sub_2A87D8((int)v12, *(_DWORD *)(a3 + 24), (int)a1) != *(_DWORD *)(a3 + 24) )
  {
    free(v12);
    return 0;
  }
  v14 = *(_DWORD *)(a3 + 40);
  if ( (v14 & 0xFFFFFFFB) != 8 )
    sub_2A6BBC("elfcode.h", 1421);
  v15 = a1[32];
  if ( !a7 )
    v15 = a1[31];
  v29 = v15;
  if ( a4 )
  {
    v16 = 0;
    v17 = a7;
    if ( a7 )
      v17 = 1;
    v18 = (int)v12;
    v30 = v12;
    v28 = v17;
    while ( 1 )
    {
      if ( v14 == 12 )
      {
        sub_2C84D8((int)a1, v18, &v31);
        v24 = v32;
      }
      else
      {
        v22 = (*(int (__fastcall **)(int))(a1[1] + 76))(v18);
        v23 = a1[1];
        v31 = v22;
        v24 = (*(int (__fastcall **)(int))(v23 + 76))(v18 + 4);
        v32 = v24;
        v33 = 0;
      }
      v25 = v31;
      v26 = v28;
      if ( ((a1[10] >> 5) & 0x42) == 0 )
        v26 = 1;
      if ( !v26 )
        v25 = v31 - *(_DWORD *)(a2 + 28);
      v27 = v24 >> 8;
      a5[1] = v25;
      if ( v27 )
      {
        if ( v27 <= v29 )
        {
          v20 = v33;
          *a5 = a6 + 4 * (v27 + 0x3FFFFFFF);
          a5[2] = v20;
          if ( v14 != 12 )
            goto LABEL_16;
          goto LABEL_27;
        }
        sub_2A6A5C("%B(%A): relocation %d has invalid symbol index %ld", a1, a2, v16, v27);
      }
      *a5 = off_4709EC;
      a5[2] = v33;
      if ( v14 != 12 )
        goto LABEL_16;
LABEL_27:
      v21 = *(void (__fastcall **)(_DWORD *, _DWORD *, int *))(v11 + 36);
      if ( !v21 )
      {
LABEL_16:
        v21 = *(void (__fastcall **)(_DWORD *, _DWORD *, int *))(v11 + 40);
        if ( !v21 )
          v21 = *(void (__fastcall **)(_DWORD *, _DWORD *, int *))(v11 + 36);
      }
      ++v16;
      v21(a1, a5, &v31);
      a5 += 4;
      v18 += v14;
      if ( a4 == v16 )
      {
        v12 = v30;
        break;
      }
    }
  }
  free(v12);
  return 1;
}
