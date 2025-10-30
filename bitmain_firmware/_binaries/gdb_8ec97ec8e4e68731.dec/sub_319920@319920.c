int __fastcall sub_319920(unsigned int a1, int a2, int a3, int *a4)
{
  _BYTE *v4; // r2
  int v6; // r3
  int v7; // r9
  unsigned int *v10; // r8
  _DWORD *v11; // r10
  unsigned int v12; // r3
  int v13; // r3
  int v14; // r2
  void (__fastcall *v15)(unsigned int, int, int); // r3
  int v16; // r2
  char *v17; // r6
  int v18; // r3
  int v19; // r1
  char v20; // r7
  char v21; // t1
  void (__fastcall *v22)(unsigned int, int, int); // r3
  int v23; // r2
  unsigned int *v24; // r2
  int v25; // r1
  int v26; // r2
  void (__fastcall *v27)(unsigned int, int, int); // r3
  int v28; // r2
  int v29; // r1
  int v30; // r2
  void (__fastcall *v31)(unsigned int, int, int); // r3
  int v32; // r2
  char *v33; // r6
  int v34; // r3
  int v35; // r1
  char v36; // r8
  char v37; // t1
  void (__fastcall *v38)(unsigned int, int, int); // r3
  int v39; // r2
  char *v40; // r6
  int v41; // r3
  int v42; // r1
  char v43; // r7
  char v44; // t1
  int v45; // r2
  unsigned int *v46; // [sp+4h] [bp-2Ch]

  v4 = **(_BYTE ***)(a3 + 8);
  if ( *v4 != 102 )
    return 0;
  v6 = *a4;
  v7 = *(_DWORD *)(a1 + 292);
  v10 = *(unsigned int **)(v6 + 12);
  v11 = *(_DWORD **)(v6 + 8);
  if ( *v10 == 59 )
  {
    v12 = v10[3];
  }
  else
  {
    v12 = 0;
    v46 = 0;
  }
  if ( *v10 == 59 )
  {
    v10 = (unsigned int *)v10[2];
    v46 = (unsigned int *)v12;
  }
  *(_DWORD *)(a1 + 292) = -1;
  switch ( v4[1] )
  {
    case 'L':
    case 'R':
      v13 = *(_DWORD *)(a1 + 256);
      if ( v13 == 255 )
      {
        v14 = *(_DWORD *)(a1 + 268);
        v15 = *(void (__fastcall **)(unsigned int, int, int))(a1 + 264);
        *(_BYTE *)(a1 + 255) = 0;
        v15(a1, 255, v14);
        v16 = *(_DWORD *)(a1 + 296);
        v13 = 0;
        *(_DWORD *)(a1 + 256) = 0;
        *(_DWORD *)(a1 + 296) = v16 + 1;
      }
      *(_DWORD *)(a1 + 256) = v13 + 1;
      *(_BYTE *)(a1 + v13) = 40;
      *(_BYTE *)(a1 + 260) = 40;
      sub_31983C(a1, a2, v10);
      v17 = "...";
      sub_3197AC(a1, a2, v11);
      v18 = *(_DWORD *)(a1 + 256);
      do
      {
        v19 = v18;
        v21 = *v17++;
        v20 = v21;
        if ( v18 == 255 )
        {
          v22 = *(void (__fastcall **)(unsigned int, int, int))(a1 + 264);
          v23 = *(_DWORD *)(a1 + 268);
          *(_BYTE *)(a1 + 255) = 0;
          v22(a1, 255, v23);
          v18 = 1;
          v19 = 0;
          ++*(_DWORD *)(a1 + 296);
        }
        else
        {
          ++v18;
        }
        *(_DWORD *)(a1 + 256) = v18;
        *(_BYTE *)(a1 + v19) = v20;
        *(_BYTE *)(a1 + 260) = v20;
      }
      while ( v17 != "" );
      sub_3197AC(a1, a2, v11);
      v24 = v46;
      goto LABEL_17;
    case 'l':
      v40 = "(...";
      v41 = *(_DWORD *)(a1 + 256);
      do
      {
        v42 = v41;
        v44 = *v40++;
        v43 = v44;
        if ( v41 == 255 )
        {
          v45 = *(_DWORD *)(a1 + 268);
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(unsigned int, int, int))(a1 + 264))(a1, 255, v45);
          v41 = 1;
          v42 = 0;
          ++*(_DWORD *)(a1 + 296);
        }
        else
        {
          ++v41;
        }
        *(_DWORD *)(a1 + 256) = v41;
        *(_BYTE *)(a1 + v42) = v43;
        *(_BYTE *)(a1 + 260) = v43;
      }
      while ( "" != v40 );
      sub_3197AC(a1, a2, v11);
      v24 = v10;
LABEL_17:
      sub_31983C(a1, a2, v24);
      v25 = *(_DWORD *)(a1 + 256);
      if ( v25 == 255 )
      {
        v27 = *(void (__fastcall **)(unsigned int, int, int))(a1 + 264);
        v28 = *(_DWORD *)(a1 + 268);
        *(_BYTE *)(a1 + 255) = 0;
        v27(a1, 255, v28);
        v26 = 1;
        v25 = 0;
        ++*(_DWORD *)(a1 + 296);
      }
      else
      {
        v26 = v25 + 1;
      }
      *(_DWORD *)(a1 + 256) = v26;
      *(_BYTE *)(a1 + v25) = 41;
      *(_BYTE *)(a1 + 260) = 41;
      break;
    case 'r':
      v29 = *(_DWORD *)(a1 + 256);
      if ( v29 == 255 )
      {
        v31 = *(void (__fastcall **)(unsigned int, int, int))(a1 + 264);
        v32 = *(_DWORD *)(a1 + 268);
        *(_BYTE *)(a1 + 255) = 0;
        v31(a1, 255, v32);
        v30 = 1;
        v29 = 0;
        ++*(_DWORD *)(a1 + 296);
      }
      else
      {
        v30 = v29 + 1;
      }
      *(_DWORD *)(a1 + 256) = v30;
      *(_BYTE *)(a1 + v29) = 40;
      *(_BYTE *)(a1 + 260) = 40;
      v33 = "...)";
      sub_31983C(a1, a2, v10);
      sub_3197AC(a1, a2, v11);
      v34 = *(_DWORD *)(a1 + 256);
      do
      {
        v35 = v34;
        v37 = *v33++;
        v36 = v37;
        if ( v34 == 255 )
        {
          v38 = *(void (__fastcall **)(unsigned int, int, int))(a1 + 264);
          v39 = *(_DWORD *)(a1 + 268);
          *(_BYTE *)(a1 + 255) = 0;
          v38(a1, 255, v39);
          v34 = 1;
          v35 = 0;
          ++*(_DWORD *)(a1 + 296);
        }
        else
        {
          ++v34;
        }
        *(_DWORD *)(a1 + 256) = v34;
        *(_BYTE *)(a1 + v35) = v36;
        *(_BYTE *)(a1 + 260) = v36;
      }
      while ( "" != v33 );
      break;
    default:
      break;
  }
  *(_DWORD *)(a1 + 292) = v7;
  return 1;
}
