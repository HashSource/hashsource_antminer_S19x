char *__fastcall sub_9AF2C(const char *a1, char *a2, char *a3, char *a4)
{
  char *result; // r0
  char *v8; // r4
  unsigned int v9; // r0
  int v10; // r7
  int v11; // r5
  char v12; // r3
  unsigned int v13; // r6
  char **v14; // r11
  char **v15; // r5
  int v16; // r2
  char *v17; // r6
  bool v18; // zf
  int v19; // r5
  bool v20; // cc
  unsigned int v21; // r0
  size_t v22; // r0
  char v23; // r12
  size_t v24; // r6
  int v25; // r2
  int v26; // r1
  int v27; // r3
  char *v28; // r0
  char *v29; // r5
  int v30; // r1
  unsigned int v31; // r3
  unsigned int v33; // [sp+4h] [bp-18h]
  int v34; // [sp+8h] [bp-14h]
  int v35; // [sp+Ch] [bp-10h]
  int v36; // [sp+10h] [bp-Ch]
  unsigned int v37; // [sp+14h] [bp-8h]

  result = (char *)sub_9AE14(dword_487D2C);
  v8 = result;
  if ( !a3
    || (a3[33] & 1) != 0
    && (*(char **)(*(_DWORD *)(*(_DWORD *)(sub_2209DC(a3) + 4) + 32) + 8) == a4
     || (result = (char *)sub_2209DC(a3), *(char **)(*(_DWORD *)(*((_DWORD *)result + 1) + 32) + 12) == a4)) )
  {
    v9 = sub_1B134C(a1);
    v10 = *((_DWORD *)v8 + 4);
    v11 = *((_DWORD *)v8 + 3);
    v12 = 63 * (v9 / 0x3F1);
    v13 = v9 % 0x3F1;
    if ( (unsigned int)(v10 - v11) <= 0x13 )
    {
      obstack_newchunk((struct obstack *)v8, 20);
      v11 = *((_DWORD *)v8 + 3);
      v10 = *((_DWORD *)v8 + 4);
    }
    v14 = (char **)*((_DWORD *)v8 + 2);
    v15 = (char **)(v11 + 20);
    v16 = *((_DWORD *)v8 + 6);
    v17 = &v8[4 * v13];
    *((_DWORD *)v8 + 3) = v15;
    v18 = v15 == v14;
    if ( v15 == v14 )
      v12 = v8[40];
    v35 = ~v16;
    v19 = ((unsigned int)v15 + v16) & ~v16;
    v34 = v16;
    if ( v18 )
      v12 |= 2u;
    *((_DWORD *)v8 + 3) = v19;
    if ( v18 )
      v8[40] = v12;
    v36 = *((_DWORD *)v8 + 1);
    v33 = v10 - v36;
    v20 = v19 - v36 > (unsigned int)(v10 - v36);
    if ( v19 - v36 > (unsigned int)(v10 - v36) )
    {
      v19 = v10;
      *((_DWORD *)v8 + 3) = v10;
    }
    *((_DWORD *)v8 + 2) = v19;
    if ( v20 )
    {
      v21 = 0;
    }
    else
    {
      v21 = v10 - v19;
      v37 = v10 - v19;
    }
    if ( v20 )
      v37 = v21;
    v14[4] = (char *)*((_DWORD *)v17 + 11);
    *((_DWORD *)v17 + 11) = v14;
    v22 = strlen(a1);
    v24 = v22 + 1;
    v25 = v34;
    v26 = v35;
    v27 = v36;
    if ( v22 + 1 > v37 )
    {
      obstack_newchunk((struct obstack *)v8, v22 + 1);
      v27 = *((_DWORD *)v8 + 1);
      v10 = *((_DWORD *)v8 + 4);
      v25 = *((_DWORD *)v8 + 6);
      v19 = *((_DWORD *)v8 + 3);
      v23 = v10 - v27;
      v28 = (char *)*((_DWORD *)v8 + 2);
      v26 = ~v25;
      v33 = v10 - v27;
    }
    else
    {
      v28 = (char *)v19;
    }
    v29 = (char *)(v19 + v24);
    *((_DWORD *)v8 + 3) = v29;
    if ( v29 == v28 )
      v23 = v8[40];
    v30 = v26 & (unsigned int)&v29[v25];
    v31 = v30 - v27;
    if ( v29 == v28 )
      v8[40] = v23 | 2;
    if ( v31 <= v33 )
      v10 = v30;
    *((_DWORD *)v8 + 3) = v10;
    *((_DWORD *)v8 + 2) = v10;
    *v14 = v28;
    result = strcpy(v28, a1);
    v14[2] = a3;
    v14[3] = a4;
    v14[1] = a2;
  }
  return result;
}
