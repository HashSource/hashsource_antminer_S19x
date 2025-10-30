int __fastcall sub_1E7014(int a1, int a2, void *a3, size_t a4, unsigned __int64 a5, int *a6)
{
  signed int v6; // r11
  int v9; // r0
  unsigned __int64 v10; // r0
  int v11; // r4
  int v12; // r6
  int v13; // r1
  size_t v14; // r1
  void *v15; // r0
  void *v16; // r0
  int v17; // r3
  int v18; // r8
  int v19; // r9
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // r11
  int v23; // r11
  int v24; // r2
  int v25; // r3
  int v27; // r8
  char *v28; // r0
  int v29; // r3
  unsigned __int64 v30; // r8
  int v31; // r1
  int v32; // r4
  char *v33; // r0
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r0
  __int64 v36; // [sp+8h] [bp-2Ch]
  int v37; // [sp+8h] [bp-2Ch]
  int v38; // [sp+14h] [bp-20h]
  size_t n; // [sp+1Ch] [bp-18h]
  void *v41; // [sp+20h] [bp-14h] BYREF
  char *v42; // [sp+24h] [bp-10h] BYREF
  int v43; // [sp+28h] [bp-Ch] BYREF
  int v44; // [sp+2Ch] [bp-8h] BYREF

  n = a4;
  v9 = sub_16F654(a1);
  LODWORD(v10) = ((int (__fastcall *)(int))loc_1E2770)(v9);
  v11 = dword_488C94;
  v12 = dword_488C94 + 432;
  if ( a2 == *(_DWORD *)(dword_488C94 + 432) )
  {
    v10 = *(_QWORD *)(dword_488C94 + 440);
    v29 = HIDWORD(a5);
    v37 = v10;
    if ( a5 >= v10 )
    {
      v10 += *(unsigned int *)(dword_488C94 + 452);
      if ( a5 < v10 )
      {
        v30 = a5 + a4;
        if ( v10 >= v30 )
          v6 = a4;
        else
          v29 = a5;
        if ( v10 < v30 )
          v6 = v10 - v29;
        LODWORD(v10) = memcpy(a3, (const void *)(*(_DWORD *)(dword_488C94 + 448) + a5 - v37), v6);
        if ( v6 > 0 )
        {
          v31 = dword_48A590;
          ++*(_QWORD *)(v11 + 456);
          if ( v31 )
          {
            v32 = *(_DWORD *)sub_242FC8(v10);
            v33 = sub_98880(*(_DWORD *)(v12 + 24), *(_DWORD *)(v12 + 28));
            sub_2594B0(v32, "readahead cache hit %s\n", v33);
          }
          return v6;
        }
      }
    }
  }
  v13 = dword_48A590;
  ++*(_QWORD *)(v11 + 464);
  if ( v13 )
  {
    v27 = *(_DWORD *)sub_242FC8(v10);
    v28 = sub_98880(*(_DWORD *)(v11 + 464), *(_DWORD *)(v11 + 468));
    LODWORD(v10) = sub_2594B0(v27, "readahead cache miss %s\n", v28);
  }
  *(_DWORD *)(v11 + 432) = a2;
  *(_QWORD *)(v11 + 440) = a5;
  v14 = sub_1E2890(v10);
  v15 = *(void **)(v11 + 448);
  *(_DWORD *)(v11 + 452) = v14;
  v16 = sub_93050(v15, v14);
  v17 = *(_DWORD *)(v11 + 432);
  v18 = (int)v16;
  *(_DWORD *)(v11 + 448) = v16;
  v19 = *(_DWORD *)(v11 + 452);
  v38 = v17;
  v36 = *(_QWORD *)(v11 + 440);
  v20 = sub_16F654((int)v16);
  v21 = ((int (__fastcall *)(int))loc_1E2770)(v20);
  v22 = (_DWORD *)dword_488C94;
  v41 = *(void **)dword_488C94;
  v43 = sub_1E2890(v21);
  sub_1E1694(&v41, &v43, "vFile:pread:");
  sub_1E1304((int *)&v41, &v43, v38);
  sub_1E1694(&v41, &v43, (char *)&word_3D7D40);
  sub_1E1304((int *)&v41, &v43, v19);
  sub_1E1694(&v41, &v43, (char *)&word_3D7D40);
  sub_1E1304((int *)&v41, &v43, v36);
  v23 = sub_1E6030((int)v41 - *v22, 12, a6, &v42, &v44);
  if ( v23 >= 0 )
  {
    v24 = sub_996E8((unsigned __int8 *)v42, v44, v18, v19);
    if ( v23 != v24 )
      sub_946E0("Read returned %d, but %d bytes.", v23, v24);
    if ( v23 > 0 )
    {
      v25 = *(_DWORD *)(v11 + 432);
      *(_DWORD *)(v11 + 452) = v23;
      if ( a2 != v25 )
        return 0;
      v34 = *(_QWORD *)(v11 + 440);
      if ( a5 < v34 )
        return 0;
      v35 = v34 + v23;
      if ( a5 >= v35 )
        return 0;
      if ( v35 < a5 + a4 )
        n = v35 - a5;
      v6 = n;
      memcpy(a3, (const void *)(*(_DWORD *)(v11 + 448) + a5 - v34), n);
      return v6;
    }
  }
  sub_1E27BC(a2);
  return v23;
}
