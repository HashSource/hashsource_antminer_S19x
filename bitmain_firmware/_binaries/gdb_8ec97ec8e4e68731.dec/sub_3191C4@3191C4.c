int __fastcall sub_3191C4(int result, int a2, int **a3, int a4)
{
  int **v4; // r4
  unsigned int v6; // r5
  int *v8; // r1
  int v9; // r9
  int *v10; // r2
  unsigned int v11; // r3
  int v12; // r10
  int v13; // r2
  int v14; // r1
  int v15; // r2
  void (__fastcall *v16)(unsigned int, int, int); // r3
  int v17; // r2
  unsigned int *v18; // r4
  unsigned int v19; // r3
  bool v20; // cc
  unsigned int v21; // r2
  unsigned int v22; // r3
  char *v23; // r6
  int v24; // r3
  int v25; // r1
  char v26; // r11
  char v27; // t1
  void (__fastcall *v28)(unsigned int, int, int); // r3
  int v29; // r2
  char *v30; // r6
  int v31; // r3
  int v32; // r1
  char v33; // r11
  char v34; // t1
  void (__fastcall *v35)(unsigned int, int, int); // r3
  int v36; // r2
  size_t v37; // r0
  int v38; // r3
  char *v39; // r6
  char *v40; // r8
  int v41; // r1
  char v42; // r11
  char v43; // t1
  void (__fastcall *v44)(unsigned int, int, int); // r3
  int v45; // r2
  char *v46; // r6
  int v47; // r1
  char v48; // r11
  char v49; // t1
  void (__fastcall *v50)(unsigned int, int, int); // r3
  int v51; // r2
  char s[32]; // [sp+4h] [bp-20h] BYREF

  v4 = a3;
  if ( !a3 )
    return result;
  v6 = result;
  if ( *(_DWORD *)(result + 280) )
    return result;
  while ( 1 )
  {
    if ( v4[2] )
      goto LABEL_9;
    v10 = v4[1];
    v11 = *v10;
    if ( a4 )
      goto LABEL_5;
    if ( v11 == 76 )
      goto LABEL_9;
    if ( v11 <= 0x4C )
      break;
    if ( v11 - 78 > 1 )
      goto LABEL_5;
LABEL_9:
    v4 = (int **)*v4;
    if ( !v4 || *(_DWORD *)(v6 + 280) )
      return result;
  }
  if ( v11 - 28 <= 4 )
    goto LABEL_9;
LABEL_5:
  v8 = v4[3];
  v4[2] = (int *)1;
  v9 = *(_DWORD *)(v6 + 272);
  *(_DWORD *)(v6 + 272) = v8;
  if ( v11 == 41 )
  {
    result = sub_318ED8(v6, a2, v10 + 3, (int **)*v4);
    *(_DWORD *)(v6 + 272) = v9;
    return result;
  }
  if ( v11 == 42 )
  {
    result = sub_31954C(v6, a2, v10 + 2, *v4);
    *(_DWORD *)(v6 + 272) = v9;
    return result;
  }
  if ( v11 != 2 )
  {
    result = sub_31861C(v6, a2, v10);
    *(_DWORD *)(v6 + 272) = v9;
    goto LABEL_9;
  }
  v12 = *(_DWORD *)(v6 + 276);
  v13 = v10[2];
  *(_DWORD *)(v6 + 276) = 0;
  sub_314740(v6, a2, v13);
  *(_DWORD *)(v6 + 276) = v12;
  if ( (a2 & 4) != 0 )
  {
    v14 = *(_DWORD *)(v6 + 256);
    if ( v14 == 255 )
    {
      v16 = *(void (__fastcall **)(unsigned int, int, int))(v6 + 264);
      v17 = *(_DWORD *)(v6 + 268);
      *(_BYTE *)(v6 + 255) = 0;
      v16(v6, 255, v17);
      v15 = 1;
      v14 = 0;
      ++*(_DWORD *)(v6 + 296);
    }
    else
    {
      v15 = v14 + 1;
    }
    *(_DWORD *)(v6 + 256) = v15;
    *(_BYTE *)(v6 + v14) = 46;
    *(_BYTE *)(v6 + 260) = 46;
  }
  else
  {
    v23 = "::";
    v24 = *(_DWORD *)(v6 + 256);
    do
    {
      v25 = v24;
      v27 = *v23++;
      v26 = v27;
      if ( v24 == 255 )
      {
        v28 = *(void (__fastcall **)(unsigned int, int, int))(v6 + 264);
        v29 = *(_DWORD *)(v6 + 268);
        *(_BYTE *)(v6 + 255) = 0;
        v28(v6, 255, v29);
        v24 = 1;
        v25 = 0;
        ++*(_DWORD *)(v6 + 296);
      }
      else
      {
        ++v24;
      }
      *(_DWORD *)(v6 + 256) = v24;
      *(_BYTE *)(v6 + v25) = v26;
      *(_BYTE *)(v6 + 260) = v26;
    }
    while ( v23 != "" );
  }
  v18 = (unsigned int *)v4[1][3];
  v19 = *v18;
  if ( *v18 != 70 )
    goto LABEL_26;
  v30 = "{default arg#";
  v31 = *(_DWORD *)(v6 + 256);
  do
  {
    v32 = v31;
    v34 = *v30++;
    v33 = v34;
    if ( v31 == 255 )
    {
      v35 = *(void (__fastcall **)(unsigned int, int, int))(v6 + 264);
      v36 = *(_DWORD *)(v6 + 268);
      *(_BYTE *)(v6 + 255) = 0;
      v35(v6, 255, v36);
      v31 = 1;
      v32 = 0;
      ++*(_DWORD *)(v6 + 296);
    }
    else
    {
      ++v31;
    }
    *(_DWORD *)(v6 + 256) = v31;
    *(_BYTE *)(v6 + v32) = v33;
    *(_BYTE *)(v6 + 260) = v33;
  }
  while ( v30 != "" );
  sprintf(s, "%d", v18[3] + 1);
  v37 = strlen(s);
  v38 = *(_DWORD *)(v6 + 256);
  if ( v37 )
  {
    v39 = s;
    v40 = &s[v37];
    do
    {
      v41 = v38;
      v43 = *v39++;
      v42 = v43;
      if ( v38 == 255 )
      {
        v44 = *(void (__fastcall **)(unsigned int, int, int))(v6 + 264);
        v45 = *(_DWORD *)(v6 + 268);
        *(_BYTE *)(v6 + 255) = 0;
        v44(v6, 255, v45);
        v38 = 1;
        v41 = 0;
        ++*(_DWORD *)(v6 + 296);
      }
      else
      {
        ++v38;
      }
      *(_DWORD *)(v6 + 256) = v38;
      *(_BYTE *)(v6 + v41) = v42;
      *(_BYTE *)(v6 + 260) = v42;
    }
    while ( v40 != v39 );
  }
  v46 = "}::";
  do
  {
    v47 = v38;
    v49 = *v46++;
    v48 = v49;
    if ( v38 == 255 )
    {
      v50 = *(void (__fastcall **)(unsigned int, int, int))(v6 + 264);
      v51 = *(_DWORD *)(v6 + 268);
      *(_BYTE *)(v6 + 255) = 0;
      v50(v6, 255, v51);
      v38 = 1;
      v47 = 0;
      ++*(_DWORD *)(v6 + 296);
    }
    else
    {
      ++v38;
    }
    *(_DWORD *)(v6 + 256) = v38;
    *(_BYTE *)(v6 + v47) = v48;
    *(_BYTE *)(v6 + 260) = v48;
  }
  while ( v46 != "" );
  do
  {
    while ( 1 )
    {
      do
      {
        v18 = (unsigned int *)v18[2];
        v19 = *v18;
LABEL_26:
        v20 = v19 > 0x4C;
      }
      while ( v19 == 76 );
      v21 = v19 - 28;
      v22 = v19 - 78;
      if ( v20 )
        break;
      if ( v21 > 4 )
        goto LABEL_30;
    }
  }
  while ( v22 <= 1 );
LABEL_30:
  result = sub_314740(v6, a2, (int)v18);
  *(_DWORD *)(v6 + 272) = v9;
  return result;
}
