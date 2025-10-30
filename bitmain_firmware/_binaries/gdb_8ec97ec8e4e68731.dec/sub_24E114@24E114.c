int __fastcall sub_24E114(int a1, int a2)
{
  int v3; // r3
  int v4; // r1
  int v5; // r3
  int v6; // r4
  unsigned __int8 *v8; // r4
  char *v9; // r6
  int v10; // r2
  int v11; // t1
  _DWORD *v12; // r4
  size_t v13; // r0
  __int64 v14; // r2
  int v15; // r6
  unsigned int v16; // r8
  char *v17; // r4
  int v18; // r3
  int v19; // r0
  int v20; // r3
  int v21; // r9
  int v22; // r3
  int v23; // r0
  int v24; // r7
  char *v25; // r0
  int v26; // r7
  int v27; // r0
  int v28; // r0
  unsigned int v29; // r7
  int v30; // r8
  int v31; // r2
  int v32; // r3
  int v33; // r12
  char *v34; // r9
  unsigned __int8 **v35; // r3
  int v36; // r0
  unsigned __int8 *v37; // r1
  int v38; // lr
  char *v39; // r4
  unsigned __int8 *v40; // r10
  unsigned int v41; // t1
  char v42; // r3
  int v43; // r3
  int v45; // [sp+8h] [bp-81Ch]
  int v46; // [sp+1Ch] [bp-808h] BYREF
  char v47; // [sp+20h] [bp-804h] BYREF
  _BYTE v48[2047]; // [sp+21h] [bp-803h] BYREF

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = *(unsigned __int8 *)(a2 + 56);
  v45 = a1;
  v4 = dword_48A514;
  if ( v3 )
  {
    if ( dword_48A514 )
    {
      sub_259F10("\nCollecting static trace data\n", dword_48A514);
      v47 = 76;
      v46 = 1;
      a1 = *(_DWORD *)(v45 + 4);
      if ( a1 != *(_DWORD *)(v45 + 8) )
      {
        if ( a1 )
        {
          *(_DWORD *)a1 = a1 + 8;
          sub_248B24((_DWORD *)a1, &v47, (int)v48);
          a1 = *(_DWORD *)(v45 + 4);
        }
        *(_DWORD *)(v45 + 4) = a1 + 24;
        v4 = dword_48A514;
        goto LABEL_7;
      }
    }
    else
    {
      a1 = 0;
      v47 = 76;
      v46 = 1;
    }
    a1 = sub_24FDDC(v45, a1, &v47, &v46);
    v4 = dword_48A514;
  }
LABEL_7:
  v5 = a2 + 32;
  v6 = 31;
  while ( !*(unsigned __int8 *)--v5 )
  {
    if ( !--v6 )
    {
      if ( !*(_BYTE *)a2 )
        goto LABEL_20;
      break;
    }
  }
  if ( v4 )
    a1 = sub_259F10("\nCollecting registers (mask): 0x");
  v47 = 82;
  v8 = (unsigned __int8 *)(a2 + v6 + 1);
  v9 = v48;
  do
  {
    sub_258BD4(a1);
    v11 = *--v8;
    v10 = v11;
    if ( dword_48A514 )
    {
      sub_259F10("%02X", v10);
      v10 = *v8;
    }
    a1 = sprintf(v9, "%02X", v10);
    v9 += 2;
  }
  while ( (unsigned __int8 *)a2 != v8 );
  v12 = *(_DWORD **)(v45 + 4);
  if ( v12 == *(_DWORD **)(v45 + 8) )
  {
    a1 = sub_250124(v45, *(_DWORD *)(v45 + 4), &v47);
    v4 = dword_48A514;
  }
  else
  {
    if ( v12 )
    {
      *v12 = v12 + 2;
      v13 = strlen(&v47);
      a1 = (int)sub_248B24(v12, &v47, (int)&v48[v13 - 1]);
      v12 = *(_DWORD **)(v45 + 4);
    }
    v4 = dword_48A514;
    *(_DWORD *)(v45 + 4) = v12 + 6;
  }
LABEL_20:
  if ( !v4 )
    goto LABEL_21;
  a1 = sub_259F10((const char *)&word_356638);
  v14 = *(_QWORD *)(a2 + 32);
  if ( HIDWORD(v14) != (_DWORD)v14 && dword_48A514 )
  {
    a1 = sub_259F10("Collecting memranges: \n");
LABEL_21:
    v14 = *(_QWORD *)(a2 + 32);
  }
  v15 = 0;
  v46 = 0;
  if ( (_DWORD)v14 == HIDWORD(v14) )
  {
    v17 = &v47;
  }
  else
  {
    v16 = 0;
    v17 = &v47;
    do
    {
      v19 = sub_258BD4(a1);
      if ( dword_48A514 )
      {
        v26 = *(_DWORD *)(*(_DWORD *)(a2 + 32) + v15);
        v27 = sub_16F654(v19);
        v28 = sub_25AC8C(v27, *(_DWORD *)(*(_DWORD *)(a2 + 32) + v15 + 4));
        sub_259F10(
          "(%d, %s, %ld)\n",
          v26,
          v28,
          *(_DWORD *)(*(_DWORD *)(a2 + 32) + v15 + 8) - *(_DWORD *)(*(_DWORD *)(a2 + 32) + v15 + 4));
      }
      if ( v46 > 157 )
      {
        sub_2500C4(v45, &v47, &v46);
        v17 = &v47;
        v46 = 0;
      }
      v20 = *(_DWORD *)(a2 + 32);
      v21 = *(_DWORD *)(v20 + v15);
      v22 = v20 + v15;
      v23 = *(_DWORD *)(v22 + 4);
      v24 = *(_DWORD *)(v22 + 8) - v23;
      v25 = sub_989F0(v23, v23 >> 31, 0, v22);
      if ( v21 == -1 )
        sprintf(v17, "M-1,%s,%lX", v25, v24);
      else
        sprintf(v17, "M%X,%s,%lX", v21, v25, v24);
      ++v16;
      a1 = strlen(v17);
      v15 += 12;
      v18 = (*(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 32)) >> 2;
      v46 += a1;
      v17 = &v48[v46 - 1];
    }
    while ( v16 < -1431655765 * v18 );
  }
  if ( *(_DWORD *)(a2 + 44) == *(_DWORD *)(a2 + 48) )
  {
    a1 = v46;
  }
  else
  {
    v29 = 0;
    do
    {
      sub_258BD4(a1);
      v30 = 4 * v29;
      v31 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 44) + 4 * v29) + 4);
      if ( v46 + 10 + 2 * v31 > 184 )
      {
        sub_2500C4(v45, &v47, &v46);
        v32 = *(_DWORD *)(a2 + 44);
        v46 = 0;
        v17 = &v47;
        v31 = *(_DWORD *)(*(_DWORD *)(v32 + 4 * v29) + 4);
      }
      sprintf(v17, "X%08X,", v31);
      v33 = *(_DWORD *)(a2 + 44);
      v34 = v17 + 10;
      v35 = *(unsigned __int8 ***)(v33 + 4 * v29);
      v36 = v46 + 10;
      v46 += 10;
      v37 = *v35;
      v38 = (int)v35[1];
      if ( v38 > 0 )
      {
        v39 = v17 + 12;
        v40 = &v37[v38];
        do
        {
          v41 = *v37++;
          v39 += 2;
          v42 = aVoidInfoScopeC[(v41 >> 4) + 524];
          *(v39 - 3) = aVoidInfoScopeC[(v41 & 0xF) + 524];
          *(v39 - 4) = v42;
        }
        while ( v37 != v40 );
        v17 = &v34[2 * v38];
      }
      else
      {
        v17 += 10;
      }
      v43 = *(_DWORD *)(a2 + 48);
      *v17 = 0;
      ++v29;
      a1 = v36 + 2 * *(_DWORD *)(*(_DWORD *)(v33 + v30) + 4);
      v46 = a1;
    }
    while ( v29 < (v43 - v33) >> 2 );
  }
  if ( a1 )
    sub_2500C4(v45, &v47, &v46);
  return v45;
}
