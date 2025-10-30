int __fastcall sub_2DCFE4(int a1, int *a2, unsigned int a3, int a4)
{
  _DWORD *v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r9
  unsigned int v7; // t1
  int v8; // r3
  int v10; // r0
  unsigned int v11; // r6
  unsigned int v12; // r10
  int v13; // r4
  int v14; // r9
  char *v17; // r0
  void *v18; // r11
  int *v19; // r8
  char *v20; // r7
  void *v21; // r10
  int v22; // r11
  int v23; // r9
  int *v24; // r4
  int v25; // t1
  __int64 v26; // r0
  char *v27; // r0
  __int64 v28; // r4
  int v29; // t1
  int v30; // r0
  int v31; // r0
  unsigned __int64 v32; // r0
  unsigned int v34; // [sp+4h] [bp-20h]
  unsigned __int64 v35; // [sp+8h] [bp-1Ch]
  int v37; // [sp+14h] [bp-10h]
  int v39; // [sp+1Ch] [bp-8h]
  int v40; // [sp+1Ch] [bp-8h]

  if ( *(char *)(a1 + 5) >= 0 )
  {
    v4 = &unk_41AE64;
    v5 = 3;
    v6 = 1;
    while ( a3 >= v5 && v5 )
    {
      v6 = v5;
      v7 = v4[1];
      ++v4;
      v5 = v7;
    }
    if ( v6 <= 1 )
      v8 = a4 & 1;
    else
      v8 = 0;
    if ( v8 )
      return 2;
    return v6;
  }
  v10 = *(_DWORD *)(a1 + 28);
  v11 = a3 >> 2;
  v12 = 2 * a3;
  v13 = *(_DWORD *)(v10 + 76);
  v39 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 56) + 4) + 444);
  if ( a3 >> 2 )
  {
    if ( !a4 )
    {
LABEL_18:
      v14 = 2 * a3;
      goto LABEL_19;
    }
    if ( v11 == 1 )
      v11 = 2;
LABEL_16:
    if ( (v12 & 0x1E) == 0 )
    {
      v14 = v12 + 1;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( a4 )
  {
    v11 = 2;
    goto LABEL_16;
  }
  v14 = 2 * a3;
  v11 = 1;
LABEL_19:
  v17 = (char *)sub_2AB368(8 * a3);
  v18 = v17;
  if ( !v17 )
    return 0;
  if ( v11 < v12 )
  {
    v19 = &a2[a3];
    v20 = &v17[4 * v11];
    v34 = v12;
    v21 = v17;
    v22 = v39;
    v40 = v14;
    v23 = 0;
    v37 = v13 + 2;
    v35 = -1;
    do
    {
      if ( !a4 || (v11 & 0x1F) != 0 )
      {
        memset(v21, 0, v20 - (_BYTE *)v21);
        if ( a3 )
        {
          v24 = a2;
          do
          {
            v25 = *v24++;
            v26 = sub_347674(v25, v11);
            ++*((_DWORD *)v21 + HIDWORD(v26));
          }
          while ( v19 != v24 );
        }
        v27 = (char *)v21;
        v28 = (unsigned int)*(unsigned __int8 *)(*(_DWORD *)(v22 + 392) + 8) * v37;
        do
        {
          v29 = *(_DWORD *)v27;
          v27 += 4;
          v28 += (unsigned int)(v29 * v29);
        }
        while ( v20 != v27 );
        v30 = sub_347690(4096);
        v31 = sub_347418(v11, v30);
        v32 = v28 * (unsigned int)((v31 + 1) * (v31 + 1));
        if ( v32 >= v35 )
        {
          if ( ++v23 == 100 )
            break;
        }
        else
        {
          v35 = v32;
          v23 = 0;
          v40 = v11;
        }
      }
      ++v11;
      v20 += 4;
    }
    while ( v11 < v34 );
    v14 = v40;
    v18 = v21;
  }
  free(v18);
  return v14;
}
